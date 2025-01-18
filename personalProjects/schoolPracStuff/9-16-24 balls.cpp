/**********************************************************
XXXXX - September 16th, 2024
Personal Projects
balls.cpp

This program will output "balls" with the correct input. ;)
**********************************************************/

#include<iostream>
using namespace std;

int main()
{
  char balls; // b

  cout << endl;
  cout << "enter 'b' to say a word." << endl;
  cin >> balls;
  
  if (balls != 98)
  {
    cout << "what the freak bro... enter 'b' next time..." << endl;
  }

  if (balls == 98)
  {
    cout << "balls" << endl;
  }
  cout << endl;
  
  return 0;
}
