#include <stdio.h>
 
 
void head(); // 2 - prot�tipo do procedimento
float soma(float n1, float num2); // 2 - prot�tipo da fun��o
char le_valida_operador();
 
int main() {
 
	float n1,n2,result;
	char op;
 
	head(); // 3 - chamada do procedimento
 
	printf("N1: ");
	scanf("%f",&n1);
 
	printf("OP:");
	op = le_valida_operador();
 
	printf("N2: ");
	scanf("%f",&n2);
 
	printf("---------------\n");
 
	switch(op){
		case '+':
			result = soma(n1,n2);
			printf("RESULTADO:   %.1f\n",result); // 3 - chamada da fun��o soma()
		break;
		case '-':
			printf("RESULTADO:   %.1f\n",n1-n2);
		break;
		case '*':
			printf("RESULTADO:   %.1f\n",n1*n2);
		break;
		case '/':
			printf("RESULTADO:   %.1f\n",n1/n2);
		break;						
 
		default:
			printf("OPERADOR INVALIDO");
 
	}
 
	return 0;
}
 
// 1 - declara��o do procedimento
void head(){
	printf("---------------\n");
	printf("CALC\n");
	printf("---------------\n");	
}
 
// 1 - declara��o da fun��o
float soma(float n1, float num2){
	float resultado;
	resultado = n1 + num2;
	return resultado;
}
 
 
char le_valida_operador(){
	char operador;
	int cont=0;
	do{
		if(cont!=0){
			printf("-------\nERRO\n-------\n");
		}
		scanf(" %c",&operador);	
		cont++;
	}while(operador!='+' && operador!='-' && operador!='*' && operador!='/');	
 
	return operador;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
// https://pastebin.com/akbWN6si
/*
#include <stdio.h>
 
int main() {
 
	float n1,n2;
	char op;
 
	printf("---------------\n");
	printf("CALC\n");
	printf("---------------\n");
 
	printf("N1: ");
	scanf("%f",&n1);
 
	printf("OP:");
	scanf(" %c",&op); 
 
	printf("N2: ");
	scanf("%f",&n2);
 
 
	printf("---------------\n");
 
 
 
	switch(op){
		case '+':
			printf("RESULTADO:   %.1f\n",n1+n2);
		break;
		case '-':
			printf("RESULTADO:   %.1f\n",n1-n2);
		break;
		case '*':
			printf("RESULTADO:   %.1f\n",n1*n2);
		break;
		case '/':
			printf("RESULTADO:   %.1f\n",n1/n2);
		break;						
 
		default:
			printf("OPERADOR INVALIDO");
 
	}
 
	return 0;
}
*/
