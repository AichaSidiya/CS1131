#include <iostream>
using namespace std;
int main() { //drive the main fctn
	int num; //declare the variables
	cin>>num; //read data from user
	while(num--){
	    int n;
	    int fact=1;
	    cin>>n; //read data from user
	    for(int i=1; i<n+1; i++){
	        fact *=i;
	    }
	      if(n=0)
	    fact = 1;
	    cout<<fact<<"\n"; //give output to user
	}
	return 0;
}
