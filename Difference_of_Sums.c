#include<stdio.h>
#include<math.h>
int main()
{
    long long n,i,sq=0,sum=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
        sq+=i*i;
    }
    printf("%lld",abs(sum*sum-sq));
}