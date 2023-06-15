#include <iostream>
#include <string>

using namespace std;

void vowelLowerCase(string str); //function vowelLowerCase prototype

int main(){

  string str; //Declaring variables

  //inpiting the string
  cout << "Enter a String: ";
  cin >> str;
  cout << endl;

  cout << "The number of vowel lower case letters is: " << endl;
  vowelLowerCase(str); //calling the function vowelLowerCase

  return 0;
}

void vowelLowerCase(string str){
  char currentChar; //variable for the current character in the string
  int a=0, e=0, i=0, o=0, u=0, y=0; //intialising the counter variables for each letter
  unsigned int j; //loop counter
  //for loop that loops through the string
  for(j=0; j < str.length(); j++){
    currentChar = str.at(j); //assigning the currentChar

    //switch statement that increments the vowels
    switch (currentChar) {
      case 'a':
        a++;
        break;

      case 'e':
        e++;
        break;

      case 'i':
        i++;
        break;

      case 'o':
        o++;
        break;

      case 'u':
        u++;
        break;

      case 'y':
        y++;
        break;
    }
  }

  //outputing the value of the counters
  cout << "The letter 'a' is repeated: " << a << " times." <<endl;
  cout << "The letter 'e' is repeated: " << e << " times." <<endl;
  cout << "The letter 'i' is repeated: " << i << " times." <<endl;
  cout << "The letter 'o' is repeated: " << o << " times." <<endl;
  cout << "The letter 'u' is repeated: " << u << " times." <<endl;
  cout << "The letter 'y' is repeated: " << y << " times." <<endl;
}
