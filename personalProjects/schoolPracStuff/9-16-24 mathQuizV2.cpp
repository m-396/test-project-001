/************************************************************
XXXXX - September 14th, 2024
Personal Projects
mathQuizV2.cpp

a math quiz! optimized and shortened!
************************************************************/

#include<iostream>
using namespace std;

int main()
{
  int    mathAnswer; // answer input
  string firstName;  // user's first name
  cout << endl;
  
  // get name from user
  cout << "hello! what is your name?" << endl;
  cin >> firstName;
  cout << endl;
  
  // greetings for user
  cout << "hello " << firstName << "! good luck on your quiz!" << endl;
  cout << endl;

  // question!!!
  cout << "what is 9 + 10?" << endl;
  cin >> mathAnswer;
  cout << endl;
  
  if (mathAnswer == 21)
    {
      cout << "you smart!" << endl;
    }

  if (mathAnswer != 21)
    {
      cout << "you stupid! :(" << endl;
    }

  cout << endl;
  
  return 0;
}
