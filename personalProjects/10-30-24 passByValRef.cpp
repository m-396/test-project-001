#include<iostream>
using namespace std;

void findLowHigh(int num1, int num2, int num3, int& low, int& high);

int main()
{
  int n1, n2, n3, lo, hi;
  cin >> n1;
  cin >> n2;
  cin >> n3;

  // <Question> Which of the following function call(s) from A through E will compile?
  findLowHigh(n1, n2, n3, lo, hi); //A. all variables
  findLowHigh(5, 10, 3, lo, hi); //B. hardcoded values for pass by value and variables for pass by reference
  findLowHigh(5, 10, 3, 3, 10); //C. all hardcoded values
  findLowHigh(n1, n2, n3, 3, 10); //D. variables for pass by value and hardcoded values for pass by reference
  //E. none of the above will compile

  // C and D don't compile because when pass by value is used, you need variables in the last two numbers when it is called.
  // "int&" (pass by reference) doesn't store values!
  
  return 0;
}

void findLowHigh(int num1, int num2, int num3, int& low, int& high)
{
}
