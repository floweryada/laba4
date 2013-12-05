//Вариант 8.
//В каждой строке массива A(N,M) поменять местами минимальный и маскимальный элементы.

#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

const int m = 3;
void InpMatrix( int Matrix[][m], int n );
void OutMatrix( int Matrix[][m], int n );
int MinMax( int Matrix[][m], int n );


int main()
{
    const int  n = 3;
    int Matrix[n][m];

    cout << "\nArray: \n";

    InpMatrix( Matrix, n );

    MinMax( Matrix, n );

    cout << "New Array: ";

    OutMatrix( Matrix, n  );

    cout << endl;
    system("pause");
    return 0;
}

void InpMatrix( int Matrix[][m], int n )
{
    for( int i = 0; i < n; ++i )
    {
        for( int j = 0; j < m; ++j )
        {
            cin>>Matrix[i][j];
        }
    }
}

void OutMatrix( int Matrix[][m], int n )
{
    cout << endl;
    for( int i = 0; i < n; ++i )
    {
        for( int j = 0; j < m; ++j )
        {
            cout<<" "<<Matrix[i][j];
        }
    }
}

int MinMax( int Matrix[][m], int n )
{
    for(int i = 0; i < n; i++)
    {
        int MAX = Matrix[i][0];
        int MIN = Matrix[i][0];
        int l = 0;
        int k = 0;

        for(int j = 0; j < m; j++)
        {
            if(MIN > Matrix[i][j])
            {
                MIN = Matrix[i][j];
                k = j;
            }

            if(MAX < Matrix[i][j])
            {
                MAX = Matrix[i][j];
                l = j;
            }
        }

        cout << MIN << " " << k << "   ";
        cout << MAX << " " << l << "\n";
        Matrix[i][l] = MIN;
        Matrix[i][k] = MAX;

    }
}
