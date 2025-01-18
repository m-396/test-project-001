#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int quantity = 0;
  int discount = 0;
  double ogCost = 0;
  double discAmnt = 0;
  double total = 0;
  
  cout << "\nhow many buy: ";
  cin >> quantity;
  
  if (quantity <= 9)
    discount = 0;
  else if (quantity <= 19)
    discount = 20;
  else if (quantity <= 49)
    discount = 30;
  else if (quantity <= 99)
    discount = 40;
  else
    discount = 50;
  
  ogCost = 10.00 * quantity;
  discAmnt = ogCost * (double)discount/100;
  total = ogCost - discAmnt;

  cout << fixed << setprecision(2);
  cout << "\nOriginal Cost: $" << ogCost << endl;
  cout << "Discount Amount: $" << discAmnt << endl;
  cout << "Total: $" << total << endl;
  cout << endl;
  
  return 0;
}
