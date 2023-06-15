#include<iostream>
using namespace std;
int main()
{
    //declaring variables
    int test, fingers;
    
    cin>>test; //inputing the number of test
    
    for(int i=0; i < test; i++)
    {
        cin>>fingers; //inputing the number of fingers
        
        int length[fingers],sheet[fingers];//declaring the arrays
        
        int back=0, front=0; //declaring variables
            for(int i=0; i < fingers;i++)
            {
                cin>>length[i];//inputing the length of fingers array
            }
            for(int i=0; i < fingers; i++)
            {
            cin>>sheet[i];//inputing the length of sheets array
            }
            for(int i=0; i < fingers; i++)
            {
                //condition that will change the value of back and front depending on the length of the sheet and finger
                if(length[i]<=sheet[fingers-i-1])
                {
                    back++;
                }
                if(length[i]<=sheet[i])
                {
                    front++;
                }
        }
        //condition to output the result both, back, front, none depending on the value of back and front
        if(back==fingers && front==fingers)
        {
            cout<<"both"<<endl;
        }
        else if(back==fingers)
        {
            cout<<"back"<<endl;
        }
        else if(front==fingers)
        {
            cout<<"front"<<endl;
        }
        else
        {
            cout<<"none"<<endl;
        }
    }
}
