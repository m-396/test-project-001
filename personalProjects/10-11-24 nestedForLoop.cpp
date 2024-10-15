#include<iostream>
using namespace std;

int main()
{
  int magic = 0;
  int foofoo = 0;
  
  cout << "enter magic: ";
  cin >>  magic;
  cout << "enter foofoo: ";
  cin >> foofoo;
  
  for(int rows = 1; rows <= magic; rows++)
    {
      for(int stars = 1; stars <= foofoo; stars++)
	cout << "*";

      cout << endl;
    }
}
