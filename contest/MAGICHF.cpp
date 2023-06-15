#include <iostream>
using namespace std;
int main()
{

int test; //declairng the test cases 
int num1, num2; //two integers
//user input
cin >> test;
    for (int i = 0; i < test; i++) 
    {
        long n, x, s;
cin >> n >> x >> s;
    for (int j = 0; j < s; j++) {
        
//user input the 2 integers
cin >> num1 >> num2;
    if (num1 == x)
       x = num2;
            
    else if (num2 == x)
       x = num1;
        }
        
        cout << x << endl;;
    }
    return 0;
}
