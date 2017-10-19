// 19/10/2017

#include <bits/stdc++.h>

using namespace std;

int primes[3401];
bool prime[31608];

void seive()
{
  int k=0;
  prime[0] = false;
  prime[1] = false;
  for (size_t i = 2; i < 31607; i++) {
    prime[i] = true;
  }
  for (size_t i = 2;; i++) {
    while (i<31607&&(!prime[i])) {
      i++;
    }
    if(i>31607)
      break;
    primes[k++] = i;
    for (size_t j = 2*i; j <= 31607; j+=i) {
      prime[j] = false;
    }
  }
}

int main()
{
  int t,m,n,k,p,prime2[100001];
  seive();
  cin>>t;  //test cases
  for (size_t i = 0; i < t; i++) {
    cin>>m>>n; // input the two integers
    int limit = sqrt(n);
    for (size_t i = 0; i < 100000; i++) {
      prime2[i] = 1;
    }
    for (size_t i = 0; (i < 3401) && (primes[i]<=limit); i++) {
      p = primes[i];
      for (k = p*(m/p)-m+p; k <= n-m; k+=p) {
        prime2[k] = 0;
      }
      if(m%p==0)
        prime2[k] = 0;
    }
    for (int j=0; j<=n-m; j++)
		{
			if (j+m>31607)
				if (prime2[j])
					cout<<j+m<<"\n";
			if (j+m<=31607)
				if (prime[j+m])
					cout<<j+m<<"\n";
		}
  }
}
