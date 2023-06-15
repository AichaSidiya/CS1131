#include <iostream>

using namespace std;

//functions prototype
int choices();
int hours();
int minutes();
string times();
int toTweleve(int hour);
int to24(int hour, string timeZone);
void result(int convert, int h, int m, string timeZone);

int main(){
  //Declaring variables
  int hour, minute, choice, inTewleve, in24;
  string timeZone;

  //assigning variables
  choice = choices();
  hour = hours();
  minute = minutes();
  timeZone = times();

  // if statement to decide if the user wnats to convert to 24 or 12 hours time
   if (choice == 1){
     in24 = to24(hour, timeZone);
     result(choice, in24, minute, timeZone);
   }
   else if (choice == 2){
     inTewleve = toTweleve(hour);
     result(choice, inTewleve, minute, timeZone);
   }

  return 0;
}

//function convert to 12
int toTweleve(int hour){
  int hour24;
  if (hour > 12){
    hour24 = hour - 12;
    return hour24;
  }
  else{
    return hour;
  }
}

//function convert to 24 hours
int to24(int hour, string timeZone){
  int hour12;
  if (timeZone == "PM"){
    hour12 = hour + 12;
    return hour12;
  }
  else{
    return hour;
  }
}

//choice function
int choices(){
  int choice;

  cout << "What time conversion you want? Enter 1 or 2\n";
  cout << "1. 12 to 24\n";
  cout << "2. 24 to 12\n";
  cin >> choice;
  cout << endl;

  return choice;
}
//input hour function
int hours(){
  int hour;

  cout << "Enter the hours you want to convert: ";
  cin >> hour;
  cout << endl;

  return hour;
}
//input minute function
int minutes(){
  int minute;

  cout << "Enter the minutes you want to convert: ";
  cin >> minute;
  cout << endl;

  return minute;
}
//input timeZone function
string times(){
  string timeZone;

    cout << "Is the time AM or PM? ";
    cin >> timeZone;
    cout << endl;

  return timeZone;
}
//output result function 
void result(int choice, int h, int m, string timeZone){
  if (choice == 1){
    cout << "The time is; " << h << " : " << m << endl;
  }
  else {
    cout << "The time is; " << h << " : " << m << " " << timeZone << endl;
  }
}
