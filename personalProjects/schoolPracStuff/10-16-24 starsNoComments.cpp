#include<iostream>
using namespace std;

int main()
{
  int numRow = 0;
  int ogNum = 0;

  cout << "Enter the number of rows: ";
  cin >> numRow;
  ogNum = numRow;
  
  if (numRow < 1)
    cout << "This program works for n >= 1 only." << endl;
  else
    {
      for (numRow; numRow >= 1; numRow--)
	{
	  for (int space = numRow; space >= 2; space--)
	    cout << " ";
	  for (int star = ogNum; star >= numRow; star--)
	    cout << "*"; 

	  cout << endl;
	}
    }

  cout << endl;
  return 0;
}
