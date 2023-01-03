#include<stdio.h>
char colour(char);
int main()
{
    char ch;
    scanf("%c",&ch);
    colour(ch);
    if(ch=='V')
    {
        printf("Violet");
    }
    else if(ch=='I')
    {
        printf("Indigo");
        
    }
    else if(ch=='B')
    {
        printf("Blue");
    }
    else if(ch=='G')
    {
        printf("Green");
    }
    else if(ch=='Y')
    {
        printf("Yellow");
    }
    else if(ch=='O')
    {
        printf("Orange");
    }
    else if(ch=='R')
    {
        printf("Red");
    }
    else
    {
        printf("-1");
    }
}
char colour (char ch)
{
    if(ch=='V')
    {
        return ch;
    }
    else if(ch=='I')
    {
       return ch; 
    }
    else if(ch=='B')
    {
        return ch;
    }
    else if(ch=='Y')
    {
        return ch;
    }
    else if(ch=='O')
    {
        return ch;
    }
    else if(ch=='R')
    {
        return ch;
    }
    else
    {
        return ch;
    }
}
    
 