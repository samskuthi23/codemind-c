#include<stdio.h>
int digits(int);
int main()
{
    int year;
    scanf("%d",&year);
    int yr=digits(year);
    printf("%0.2d",yr);
}
int digits(int year)
{
      int d;
    d=year%100;
    return d;


}