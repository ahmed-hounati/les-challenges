#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int A , B ;
   printf("veullez entrer A : ");
   scanf("%d",&A);
   printf("veullez entrer B : ");
   scanf("%d",&B);
   if (A * B > 0)
      printf("A et B ont le meme signe");
   else
      printf("A et B ont seux signes differents");
   float A, B;
   printf("veullez entrer la valour de A : ");
   scanf("%f", &A);
   printf("veullez entrez la valeur de B : ");
   scanf("%f", &B);
   printf(" \n\t\t\t\t\tA + B = %.2f", A + B);
   printf(" \n\t\t\t\t\tA - B = %.2f", A - B);
   printf(" \n\t\t\t\t\tA x B = %.2f", A * B);
   printf(" \n\t\t\t\t\tA / B = %.2f", A / B);
   printf(" \n\t\t\t\t\tA */* B = %f", fmod(A, B));

   return 0;
}
