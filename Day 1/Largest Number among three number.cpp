#include <iostream>
using namespace std;
int
main ()
{
  int a, b, c;
  std::cout << "Enter any three numbers";
  std::cin >> a >> b >> c ;
  if (a > b && a > c)
    {
      std::cout << a << "is the largest" << std::endl;
    }
  else if (b > a && b > c)
    {
      std::cout << b << "is the largest" << std::endl;
    }
  else
    {
      std::cout << c << " the largest" << std::endl;
    }

}

