#include<stdio.h>
main(){
	float a=2.90,g=3.30,ad,gd,p,pf,l;
	int op;
	printf("alcool   (1)\ngasolina (2)\n");
	scanf("%d",&op);
	switch (op){
		case 1:
			printf("\ndigite a litragem :");
			scanf("%f",&l);
			if(l<=20){
				p=a*l;
				ad=p*0.03;
				pf=p-ad;
				printf("valor a pagar: %.2f",pf);
			}else{
				p=a*l;
				ad=p*0.05;
				pf=p-ad;
				printf("valor a pagar: %.2f",pf);
			}break;
			
		case 2:
			printf("\ndigite a litragem :");
			scanf("%f",&l);
			if(l<=20){
				p=g*l;
				gd=p*0.04;
				pf=p-gd;
				printf("valor a pagar: %.2f",pf);
			}else{
				p=g*l;
				ad=p*0.06;
				pf=p-gd;
				printf("valor a pagar: %.2f",pf);
			}
	}
}
