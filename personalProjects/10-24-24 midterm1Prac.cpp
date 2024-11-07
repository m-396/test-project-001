#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  // Q1
  cout << endl;
  for(int i = 0; i < 5; i++)
    cout << i << " ";
  
  cout << endl;

  // Q2
  cout << endl;
  for(int i = 1; i <= 5; i++)
    cout << i * 2 << endl;

  // Q3
  int score;
  int total = 0;
  int scoreAmnt = 0;

  cout << endl;
  for(int i = 1; i <= 5; i++)
    {
      cout << "Enter a score: ";
      cin >> score;
      total += score;
    }
  cout << "\nAverage: " << (double)total/5 << endl;

  // Q4
  cout << endl;
  int num = 3;
  for(int i = 1; i <= 10; i++)
    {
      cout << num << " ";
      num += 3;
    }
  cout << endl;

  /* Q4 - Shorter
  cout << endl;
  for (int num = 3; num <= 30; num += 3)
    cout << num << " ";
  cout << endl; */
  
  // Q5
  cout << endl;
  num = 3;
  int counter = 0;
  for(int i = 1; i <= 10; i++)
    {
      cout << num << " ";
      num += 3;
      counter += 1;
      if (counter == 4)
	{
	  cout << endl;
	  counter = 0;
	}
    }
  cout << endl;

  /* Q5 - Shorter
  cout << endl;
  for (int num = 3; num <= 30; num += 3)
    {
      cout << num << " ";
      counter += 1;
      if (counter % 4 == 0)
        cout << endl;
    }
  cout << endl; */

  // Q6
  cout << endl;
  num = 3;
  counter = 0;
  for(int i = 1; i <= 10; i++)
    {
      cout << right << setw(3) << num << " ";
      num += 3;
      counter += 1;
      if (counter == 4)
        {
          cout << endl;
          counter = 0;
        }
    }
  cout << endl;

  /* Q6 - Shorter
  cout << endl;
  for (int num = 3; num <= 30; num += 3)
    {
      cout << right << setw(3) << num << " ";
      counter += 1;
      if (counter == 4)
        {
          cout << endl;
          counter = 0;
        }
    }
  cout << endl; */
  
  cout << endl;
  return 0;
}
