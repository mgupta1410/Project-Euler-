#include<stdio.h>
#include<conio.h>

int main()
{
    long int i,sum=0;
    int count=0;
    
    for(i=4;i<=100;i++)
    {
      int j;
      for(j=2;j<(i/2);j++)
      {
       if(i%j==0)
       {
         count++;          
       }                     
      }  
    } 
    printf("%d",count);   
    
    
getch();
return 0;    
}
