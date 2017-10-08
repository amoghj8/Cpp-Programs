#include "iostream"
#include "math.h"

int main()
{
  int n;
  std::cout << "Enter the no. till which prime numbers are displayed" << '\n';
  std::cin >> n;
  if (n==0)
    std::cout << "0 isn't prime" << '\n';
  else if(n==1)
    std::cout << "1 is neither prime nor composite" << '\n';
  else {
    int primes[n-1];

    for (int i = 2; i <=n; i++) {
      primes[i] = 1;
    }

    for (size_t i = 2; i <= sqrt(n); i++) {
      if (primes[i] == 1) {
        for (int j = i; (i*j) <= n; j++) {
          primes[i*j] = 0;
        }
      }
    }
    std::cout << "The prime numbers are" << '\n';
    for (int i = 2; i <= n; i++) {
      if(primes[i]==1)
      {
        std::cout << i << ' ';
      }
    }
  }
  return 0;
}
