#include <iostream>
using namespace std;
int main()
{
  int n, a[10000], x, pos;
  cout << "Enter the size of array" << endl;
  cin >> n;
  cout << "Enter the elements of array" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout << "Enter the element to be inserted" << endl;
  cin >> x;
  cout << "Enter the position to be inserted" << endl;
  cin >> pos;
  cout << "The elemens before insertion" << endl;
  {
    for (int l = 0; l < n; l++)
    {
      cout << "a" << "[" << l << "]"<< "=" << a[l] << endl;
    }
  }
  cout << "The array elements after insertion are :" << endl;
  for (int j = n - 1; j >= pos - 1; j--)
  {
    a[j + 1] = a[j];
  }
  a[pos - 1] = x;
  n++;
  for (int k = 0; k < n; k++)
  {
    cout << "a"<< "[" << k << "]" << "=" << a[k] << endl;
  }

  return 0;
}
