#include <stdio.h>
#include <stdlib.h>
    int main()
{

	int A,B ;
	char op;
	printf("entrer le valeur de A:\n");
	scanf("%d",&A);
	printf(" entrer la valeur de B:\n");
	scanf("%d",&B);
	printf("entrer un operateur:\n");
	scanf(" %c",&op);
switch (op)	{
   case'+':printf("A+B=%d",A+B);
         break;
    case'-': printf("A-B=%d",A-B);
	     break;
	case'*': printf("A*B=%d",A*B);
	     break;
	case '/' :if (B!=0)     
	  printf("A/B=%d",A/B);
	  else 
	  printf("la division par 0 est impossible\n ");
	       break;
	case'q':printf("l'utiljisateur a quitter le programme");
	
	     }       
		   return 0 ;
		   
 }
	
