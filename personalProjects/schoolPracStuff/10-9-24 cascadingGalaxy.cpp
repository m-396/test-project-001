#include<iostream>
using namespace std;

int main()
{
  int magic;

  cout << "\nhow big of a galaxy would you like? ";
  cin >> magic;
  cout << endl;
  
  for (int mid = 0; mid <= magic; mid += 1) // loop starts with mid-sized star
    {
      cout << "o";
      for (int big = 0; big <= mid; big += 1)
	{
	  cout << "0";
	  for (int tiny = 0; tiny <= big; tiny += 1)
	    {
	      cout << "*";
	      for (int tiny2 = 0; tiny2<= tiny; tiny2 += 1)
		{
		  cout << ".";
		  for (int empty = 0; empty <= tiny2; empty += 1)
		    cout << " ";
		}
	    }
	}
    }
  cout << endl;
}
