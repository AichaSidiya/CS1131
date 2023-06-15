#include <iostream> //including library
using namespace std; //necessary in every code

int main() //main function
{

//declairng the variables 
int t;
int a, b;

cin >> t;
    for (int i = 0; i < t; i++) {
        long n, x, s;
cin >> n >> x >> s;
    for (int j = 0; j < s; j++) {
        
//user input 
cin >> a >> b;
    if (a == x) x = b;
            
    else if (b == x) x = a; 
        }
        cout << x << endl;;
    }

    return 0; 
}