#include<iostream>
using namespace std;
int saddlePoint(){
  int n, mat[100][100];
  cout<<"Enter the order of matrix:";
  cin>>n;
  cout<<"Enter the elements of matrix:";
  for(int i = 0; i < n ; i++)
  {for(int j = 0; j < n; j++)
    cin>>mat[i][j];
  }
  for(int i = 0; i < n ; i++)
  {for(int j = 0; j < n; j++)
    cout<<mat[i][j]<<"  ";
    cout<<"\n";
  }
return 0;
}
int main(){
saddlePoint();
return 0;
}
