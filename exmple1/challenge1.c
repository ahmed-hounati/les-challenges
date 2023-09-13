#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int T ;
   printf("veullez entrer la tempairatteur : ");
   scanf("%d",&T);
   if (T < 0)
      printf("l etat d eau est glasse");
   else if (T < 100)
      printf("l etat d eau est lequede");
   else if (T > 100)
      printf("l etat d eau est vapeur");

   return 0;
}
