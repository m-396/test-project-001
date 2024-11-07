#include<iostream>
using namespace std;

void getNum(int num1, int& num2);
void printNum(int num1, int num2);

int main()
{
  int n1, n2;

  printNum(n1, n2);

  getNum(n1, n2);

  printNum(n1, n2);

  return 0;
}

void getNum(int num1, int& num2) // use pass by when changing values before the last function
{
  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;
}

void printNum(int num1, int num2) // without pass by value for num1, the number stays its original number (junk/zero) while num2 changes
{
  cout << "The first number: " << num1 << "\tThe second number: " << num2 << endl;
}
