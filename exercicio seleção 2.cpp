#include <stdio.h>

main() {
	float maca1=1.30,maca2=1.00,compra,final;
	
	printf("quantas macas comprar? ");
	scanf("%f",&compra);
	
	if(compra<=11){
	
	final=compra*maca1;
	printf("\ndeve pagar %f $",final);
	}else{
	final=compra*maca2;	
	printf("\ndeve pagar %f $",final);
	}
}
