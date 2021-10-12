#include<stdio.h>
void main () 
{
  
    int a[10];
    float b[10];
    char c[10];
  
    printf ("Mr. Int Details :\n");
    for (int i = 0; i < 6; i++)
    scanf ("%d", &a[i]);

    printf ("Mr. float Details :\n");
    for (int i = 0; i < 6; i++)
    scanf ("%f", &b[i]);
  
    printf ("Mr. Char Details :\n");
    for (int i = 0; i < 6; i++)
    scanf ("%c", &c[i]);
  
    printf ("\nMr. Int Details :\n");
    for (int i = 0; i < 6; i++)
    printf ("%d ", a[i]);
  
    printf ("\nMr. floatt Details :\n");
    for (int i = 0; i < 6; i++)
    printf ("%f ", b[i]);
  
    printf ("\nMr. Char Details :\n");
    for (int i = 0; i < 6; i++)
    printf ("%c ", c[i]);
  
    printf ("\nMr. Int reversed Details:\n");
    for (int i = 5; i >= 0; i--)
    printf ("%d ", a[i]);
  
    printf ("\nMr. float reversed Details:\n");
    for (int i = 5; i >= 0; i--)
    printf ("%f ", b[i]);
  
    printf ("\nMr. Char reversed Details:\n");
    for (int i = 5; i >= 0; i--)
    printf ("%c ", c[i]);

}

