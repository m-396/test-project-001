/***********************************************************
XXXXX - September 14th, 2024
Personal Projects
firstName.cpp

This program will ask the user for their name and output it!
************************************************************/

#include<iostream>
using namespace std;

int main()
{
  string name; // container for user's name

  cout << "" << endl;
  cout << "welcome! please type your name: ";
  cin >> name;

  cout << "hello, " << name << "! i have learned some c++! how about you?" << endl;
  cout << "" << endl;
  
  return 0;
}
