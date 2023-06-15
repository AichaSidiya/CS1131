#include <iostream>

using namespace std;

int main(){
  //Declaring variables
  int choice;
  int operationChoice;
  int num1 , num2 , result;

  //inputting the user choice
  cout << "Do you want to calculate some numbers? If you don't want input 6 ";
  cin >> choice;
  cout << endl;

  while(choice != 6){

    //inputing num1
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << endl;

    //inputing num2
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << endl;

    //verifiying the range of the numbers
    if(num1 > 0 && num1 < 100 && num2 > 0 && num2 < 100){
      //outputing the menu
      cout << "What operation do you want to preform? Enter the number of the operation you want\n";
      cout << "1.Addition\n"
          << "2.Multiplication\n"
          << "3.Substraction\n"
          << "4.Division\n"
          << "5.Modolu\n";
      //inputing the operator
      cin >> operationChoice;
      cout << endl;

      //switch statement to calculate
      switch(operationChoice){
        case 1:
          result = num1 + num2;
          cout << "The result of the addition is: " << result << endl;
          break;

        case 2:
          result = num1 * num2;
          cout << "The result of the multiplication is: " << result << endl;
          break;

        case 3:
          result = num1 - num2;
          cout << "The result of the operation substraction is: " << result << endl;
          break;

        case 4:
          result = num1 / num2;
          cout << "The result of the division is: " << result << endl;
          break;

        case 5:
          result = num1 % num2;
          cout << "The result of the modulo is: " << result << endl;
          break;
      }
    }
    //inputing the choice of the user
    cout << "Do you want to calculate some numbers? If you don't want input 6 ";
    cin >> choice;
    cout << endl;
  }

  cout << "Thank You" << endl;//Quitting and thanking the user

  return 0;
}
