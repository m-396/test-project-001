#include<iostream>
using namespace std;

bool isEven(int num);

int main()
{
  // bool even;
  int num;

  cout << "Num: ";
  cin >> num;
  
  // longer way: even = isEven(num)
  // if (even) ...
  
  if (isEven(num) == true)
    cout << "Even" << endl;
  else
    cout << "Odd" << endl;

  return 0;
}

bool isEven(int num)
{
  bool even = false;
  if (num % 2 == 0)
    even = true;
  return even;
}
