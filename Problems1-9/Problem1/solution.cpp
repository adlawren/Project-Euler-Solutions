#include <iostream>

using namespace std;

// parameters
unsigned N = 1000;

int main()
{
  unsigned sum = 0;
  for (unsigned int i = 0; i < N; ++i)
  {
    if (i % 3 == 0)
    {
      sum += i;
    }
    else if (i % 5 == 0)
    {
      sum += i;
    }
  }

  cout << "sum is: " << sum << endl;

  return 0;
}
