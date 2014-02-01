#include<stdio.h>
#include<conio.h>

int main()
{
    long int i,sum=0;
    for(i=3;i<=1001;i+=2)
    {
         sum += 4*i*i-6*i+6;          
    }
    printf(" hey - %d",sum+1);
    
    
getch();
return 0;    
}
