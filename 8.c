#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,r,s=0;
    clrscr();
     
    printf("\n Enter The Number:");
    scanf("%d",&n);
    for(i=n;i>0;i++)
    {
        r=i%10;
        s=s*10+r;
        i=i/10;
    }
    if(s==n)
    {
        printf("\n %d is a Palindrome Number",n);
    }
    else
    {
        printf("\n %d is not a Palindrome Number",n);
    }
    getch();
}
