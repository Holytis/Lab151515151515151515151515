#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double m[][N])
{
	for(int i=0;i<N;i++)
	{
		cout << "Row " << i+1 << ": " ;
		for(int j=0;j<N;j++)
		{
			cin >> m[i][j];
		}
	}
}

void showMatrix(const bool m[][N])
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout << m[i][j] << " ";
		}
		cout << endl ;
	}
}

void findLocalMax(const double m[][N], bool n[][N])
{
	for(int i = 0 ; i < N ; i++)
	{
		for(int j = 0 ; j < N ; j++)
		{
			if ((m[i+1][j+1] >= m[i][j+1]) && (m[i+1][j+1] >= m[i+1][j]) && (m[i+1][j+1] >= m[i+1][j+2]) && (m[i+1][j+1] >= m[i+2][j+1]))
			{
				n[i+1][j+1] = 1 ;
			}
			else n[i][j] = 0 ;
		}
		
	}
}