#include<stdio.h>
void main () 
{

    int a[10];
    float b[10];

    printf ("Mr. Int Details :\n");
    for (int i = 0; i < 6; i++)
    scanf ("%d", &a[i]);

    printf ("Mr. float Details :\n");
    for (int i = 0; i < 6; i++)
    scanf ("%f", &b[i]);
    
    int sum,avg;
    for(int i=0;i<6;i++)
    sum=sum+a[i];
    printf("The Weekly salary of Mr. Int is %d\nThe Average salary of Mr. Int is %f",sum,(sum/6.0));
    
    sum=0;
    
    for(int i=0;i<6;i++)
    sum=sum+b[i];
    printf("The Weekly salary of Mr. Float is %d\nThe Average salary of Mr. Int is %f",sum,(sum/6.0));
}

