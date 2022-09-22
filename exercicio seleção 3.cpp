#include <stdio.h>

main() {
	float c,df,dv,cf;
	char op;
	
	printf(" selecione o tipo de comprador \n (a)normal \n (b)vip \n (c)funcionario\n ");
	scanf ("%c",&op);
	
	switch (op){
		case 'a' :
			printf("\n digite o valor");
			scanf("%f",&c);
			cf=c;
			printf("\nvalor a pagar : %f",cf);
		case 'b' :
			printf("\n digite o valor");
			scanf("%f",&c);
			dv=c*0.05;
			cf=c-dv;
			printf("\nvalor a pagar : %f",cf);
		case 'c' :
		printf("\n digite o valor");
			scanf("%f",&c);
			df=c*0.10;
			cf=c-df; 
			printf("\nvalor a pagar : %f",cf);	
	}
}
