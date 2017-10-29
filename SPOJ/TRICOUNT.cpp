//29/10/17
#include<stdio.h>
using namespace std;
int main()
{
  int i,T;
  	long long  uptri,downtri,N;
  	scanf("%d",&T);
  	for (i=0; i<T; i++)
{
  		N=0;
  		scanf("%lld",&N);
  	  uptri=N*(N+1)*(N+2)/6;
  		downtri=(2*N*N*N+3*N*N-2*N-(N%2?3:0))/24;
  		printf("%lld\n",uptri+downtri);
}
return 0;
}
