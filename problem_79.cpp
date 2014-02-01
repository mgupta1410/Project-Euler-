#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *file=NULL;
    file = fopen("keylog.txt","r");
    if(file==NULL)
    {printf("null file."); exit(0);}
    
    int arr[50];
    int i=0; char a;
    
    while(i<49)
    {
     fscanf(file,"%d%c",&arr[i],&a);
     printf("%d",arr[i]);
     i++;            
    }
    printf("%d",arr[4]);
    getch();
    return 0;
        
}
