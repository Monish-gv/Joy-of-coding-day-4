#include<stdio.h>
void main () 
{

    int a[10],maxi;
    float b[10],maxf;

    printf ("Mr. Int Details :\n");
    for (int i = 0; i < 6; i++)
    scanf ("%d", &a[i]);

    printf ("Mr. float Details :\n");
    for (int i = 0; i < 6; i++)
    scanf ("%f", &b[i]);

    maxi=a[0];
    maxf=b[0];

    for(int i=0;i<6;i++)
    {
        if(a[i]>maxi)
        maxi=a[i];
        if(a[i]>maxf)
        maxf=b[i];
    }
    printf("Max int = %d\nMax float = %f",maxi,maxf);
}

