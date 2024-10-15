/************************************************************
XXXXX - September 14th, 2024
Personal Projects
mathQuiz.cpp

a math quiz!
************************************************************/

#include<iostream>
#include<cmath>
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

  bool correctAnswer   = (mathAnswer == 21); // initialization for correct
  bool incorrectAnswer = (mathAnswer != 21); // initialization for incorrect
  
  if (correctAnswer)
    {
      cout << "you smart!" << endl;
    }

  if (incorrectAnswer)
    {
      cout << "you not smart! :(" << endl;
    }

  cout << endl;
  
  return 0;
}
