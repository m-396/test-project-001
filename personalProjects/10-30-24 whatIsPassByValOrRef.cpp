#include <iostream>
using namespace std;

void modifyVal(int num);
void modifyRef(int& num);

int main()
{
  // PASS BY VALUE
  int num = 5;
  modifyVal(num);
  cout << "Pass by Value: " << num << endl; //outputs 5 because no &

  // PASS BY REFERENCE
  modifyRef(num);
  cout << "Pass by Ref: " << num << endl; //outputs 10 because &
  
  return 0;
}

void modifyVal(int num) // num stays at 10 here, but it isnt sent back
{
  num = 10;
}

void modifyRef(int& num) // with the ampersand, it's sent back
{
  num = 10;
}
