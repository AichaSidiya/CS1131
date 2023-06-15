#include<iostream>
using namespace std;

int main()
{
  int test,mnmx;
  //number of test cases
  cout<<"Enter the number of test cases: ";
  cin>>test;
  for(int i=0;i<test;i++)
 {
  int size;
  //the size of the array
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];

  for(int i=0;i<size;i++)
  {
    //read the elements of the array
    cout<<"Enter the element ["<<i+1<<"] ";
    cin>>arr[i];
  }
  //setting the mnmx to the first elemnt of the array
  mnmx=arr[0];
  for(int i=1;i<size;i++)
  {
    if(arr[i]<mnmx)
    {
      mnmx=arr[i];
    }
  }
  cout<<mnmx*(size-1)<<endl;
}
  return 0;
}

