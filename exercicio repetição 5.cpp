#include<stdio.h>
main(){
	
	float produto, preco,preco2,maiorPreco=0,precoFinal=0,aritimetica=0;
	int codigo;
	for(produto=15;produto>=1;produto--){
		
		printf("digite o codigo do produto: ");
		scanf("%d",&codigo);
		printf("digite o preco do produto: ");
		scanf("%f",&preco);
		precoFinal+=preco;
		
		aritimetica++;
		if(preco>=maiorPreco){
			maiorPreco=preco;
			
		}else;
		
		
		
	}
	precoFinal=precoFinal/aritimetica;
	printf("maior preco entre os produtos : %.2f",maiorPreco);
	printf("\nmedia dos precos : %.2f",precoFinal);
}
