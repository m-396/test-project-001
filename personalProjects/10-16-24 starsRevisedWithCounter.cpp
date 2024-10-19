#include <iostream>
using namespace std;

int main()
{
  int numRow = 0;
  int spaceCounter = 0;
  int starCounter = 0;

  cout << "Enter the number of rows: ";
  cin >> numRow;
  
  if (numRow < 1)
    cout << "This program works for n >= 1 only." << endl;
  else
    {
      for (int row = numRow; row >= 1; row--)
	{
	  for (int space = 1; space < row; space++)
	    {
	      cout << " ";
	      spaceCounter += 1;
	      cout << spaceCounter << "space";
	    }
	  for (int star = numRow; star >= row; star--)
	    {
	      cout << "*";
	      starCounter += 1;
	      cout << starCounter << "star";
	    }
	  spaceCounter = 0;
	  starCounter = 0;
	  cout << endl;
	}
    }

  cout << endl;
  return 0;
}
