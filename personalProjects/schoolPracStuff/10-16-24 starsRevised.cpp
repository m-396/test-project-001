#include <iostream>
using namespace std;

int main()
{
  int numRow = 0; 

  cout << "Enter the number of rows: ";
  cin >> numRow;
  
  if (numRow < 1)
    cout << "This program works for n >= 1 only." << endl;
  else
    {
      for (int row = numRow; row >= 1; row--)
	{
	  for (int space = 1; space < row; space++)
	    cout << " ";
	  for (int star = numRow; star >= row; star--)
	    cout << "*";

	  cout << endl;
	}
    }

  cout << endl;
  return 0;
}
