#include<iostream>
using namespace std;

int main()
{
  int magic;

  cout << "\ninput magic: ";
  cin >> magic;
  cout << endl;

  while (magic != 0)
    {
      for (int pixie = 0; pixie <= magic; pixie += 1)
	{
	  cout << " ■";
	  for (int foofoo = 0; foofoo <= pixie; foofoo += 1)
	    cout << "■ ";
	}
      magic -= 1;
    }
  cout << endl;
  cout << endl;
  return 0;
}
