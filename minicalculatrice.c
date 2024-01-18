#include <stdio.h>
#include <stdlib.h>

int main()
{
 float n1,n2,p;
 int choix;
 printf("**********   ma mini calculatrice  ***************\n");
 printf("1. somme\n");
 printf("2. difference\n");
 printf("3. produit\n");
 printf("4. division\n");
 printf("5. plus grand\n");
 printf("6. plus petit\n");
 printf("7. quitter\n");
 printf("entrer un numero de traitement:");
 scanf("%d",&choix);
 printf("entrer le 1er nombre:");
 scanf("%f",&n1);
 printf("entrer le 2eme nombre:");
 scanf("%f",&n2);
 if(choix==1)
 {
 p=n1+n2;
 printf("%f + %f = %f\n",n1,n2,p);
 }
 else if(choix==2)
 {
   p=n1-n2;
   printf("%f - %f = %f\n",n1,n2,p);
 }
 else if(choix==3)
 {
     p=n1*n2;
     printf("%f * %f = %f\n",n1,n2,p);
 }
  else if(choix==4)
  {
      p=n1/n2;
      printf("%f / %f = %f\n",n1,n2,p);
  }
  else if(choix==5 && n1>n2)
  printf("le plus grand est %f\n",n1);
  else if(choix==5 && n2>n1)
    printf("le plus grand est %f\n",n2);
    else if(choix==5 && n1==n2)
        printf("le plus grand est %f\n",n1);
  else if(choix==6 && n1<n2)
    printf("le plus petit est %f\n",n1);
  else if(choix==6 && n2<n1)
    printf("le plus petit est %f\n",n2);
    else if(choix==6 && n1==n2)
        printf("le plus petit est %f\n",n1);
  else if(choix==0)
    printf("            ");
    else
    printf("choisir un traitement entre 0 et 6");
    return 0;


} 
