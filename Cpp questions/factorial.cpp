// C++ program to compute factorial of big numbers
#include<iostream>
#include <stdlib.h>
#include<conio.h>
using namespace std;

// Maximum number of digits in output
#define MAX 5000

int multiply(int x, int res[], int res_size);

// This function finds factorial of large numbers
// and prints them
void factorial(int n)
{
    int res[MAX];
    int x,i;

    // Initialize result
    res[0] = 1;
    int res_size = 1;

    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
    for ( x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);

    cout << "Factorial of given number is \n";
    for ( i=res_size-1; i>=0; i--)
        cout << res[i];
}

// This function multiplies x with the number
// represented by res[].
// res_size is size of res[] or number of digits in the
// number represented by res[]. This function uses simple
// school mathematics for multiplication.
// This function may value of res_size and returns the
// new value of res_size
int multiply(int x, int res[], int res_size)
{
    int carry = 0,i,prod;  // Initialize carry

    // One by one multiply n with individual digits of res[]
    for (i=0; i<res_size; i++)
    {
        prod = res[i] * x + carry;

        // Store last digit of 'prod' in res[]
        res[i] = prod % 10;

        // Put rest in carry
        carry  = prod/10;
    }

    // Put carry in res and increase result size
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

// Driver program
int main()
{int n,f;
  char ans;
  cout<<"enter any number of your choice : ";
  cin>>n;
  factorial(n);
  for(f=0;f<1;)
  {cout<<"\nDo you want to continue? press 'y' to continue or any other key to exit...";
   cin>>ans;
   if(ans=='y')
   { system("cls");
     cout<<"enter any number of your choice : ";
     cin>>n;
     factorial(n);
     }
     else
      f++;
  }
  return 0;
}
