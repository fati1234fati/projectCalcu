#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B ;
    char ope;
    printf("Entrez la valeur de A:\n");
    scanf("%d",&A);
    printf(" entrez la valeur de B:\n");
    scanf("%d",&B);
    printf("entrez la valeur de ope:\n");
    scanf(" %c",&ope);
    switch (ope){
           case '+': printf("A+B=%d",A+B);
               break;
           case '-':printf("A-B=%d",A-B);
                break;
           case '*':printf("A*B=%d",A*B);
               break;
           case '/' :if(B!=0)
              printf("A/B=%d",A/B);
                else
              printf("la divisions par 0 est impossible\n ");
                break;
            case'q':printf("le programme est quitter");
              }
  return 0;

}
