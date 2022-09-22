#include<stdio.h>
main(){

float juca=1.10,chico=1.50,jucaCentimetro=0.03,chicoCentimetro=0.02,ano;

for(ano=0;juca<=chico;ano++){
juca+=jucaCentimetro;
chico+=chicoCentimetro;



}
printf("com %.0f anos Juca seja maior que Chico",ano);
}
