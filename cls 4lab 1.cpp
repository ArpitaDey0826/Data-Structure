#include <iostream>
using namespace std;

int main() {
  int A[3][4];
  int B[4][3];

  cout<<"\nPlease enter the value of matrix A: ";
      for (int r = 0; r < 3; r++)
    {
        for(int c = 0; c< 4; c++)
        {
            cin>>A[r][c];
        }
    }
    cout<<"\n Matrix A \n";
        for ( int r = 0; r < 3; r++)
    {
        for(int c = 0; c< 4; c++)
        {
            cout<< A[r][c] <<" " ;
        }
        cout<<endl ;
    }
      for (int r = 0; r < 3; r++)
    {
        for(int c = 0; c< 4; c++)
        {
            B[c][r]=A[r][c];
        }
    }
        cout<<"\n  transpose of Matrix A \n";
        for ( int r = 0; r < 4; r++)
    {
        for(int c = 0; c< 3; c++)
        {
            cout<< B[r][c] <<" " ;
        }
        cout<<endl ;
    }

}

