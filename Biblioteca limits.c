//A biblioteca limits.h na linguagem C define constantes que delimitam os valores m?ximos e m?nimos que vari?veis de um determinado tipo podem assumir. 

#include <stdio.h>
#include <limits.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("-----------------------------------------------------\n");
		printf("/////INTEIROS COM SINAL/////\n");
	printf("-----------------------------------------------------\n");
	printf("     Mostre o limite máximo da var CHAR: %d\n", CHAR_MAX);//Mostra a quantidade máxima de caracteres que a variável char pode guardar 127
	printf("     Mostre o limite mínimo da var CHAR: %d\n", CHAR_MIN);//Mostra a quantidade mínima de caracteres que a variável char pode guardar -128
	printf(" \n");
	printf("     Mostre o limite máximo da var INT: %d\n", INT_MAX);//Mostra o maior valor que a variável int pode guardar 2147483647 
	printf("     Mostre o limite mínimo da var INT: %d\n", INT_MIN);//Mostra o menor valor que a variável int pode guardar -2147483648
	printf(" \n");
	printf("     Mostre o limite máximo da var SHORT INT: %d\n", SHRT_MAX);//Mostra o maior valor que a variável short int pode guardar	32767
	printf("     Mostre o limite mínimo da var SHORT INT:%d\n", SHRT_MIN);//Mostra o menor valor que a variável short int pode guardar -32768
	printf(" \n");
	printf("     Mostre o limite máximo da var LONG INT: %ld\n", LONG_MAX);//Mostra o maior valor que a variável long int pode guardar 2147483647	
	printf("     Mostre o limite mínimo da var LONG INT: %ld\n", LONG_MIN);//Mostra o menor valor que a variável long int pode guardar -2147483648
	printf(" \n");
	printf("     Mostre o limite máximo da var LONG LONG INT: %lld\n", LLONG_MAX);//Mostra o maior valor que a variável long long int pode guardar 9223372036854775807	
	printf("     Mostre o limite mínimo da var LONG LONG INT: %lld\n", LLONG_MIN);//Mostra o menor valor que a variável long long int pode guardar -9223372036854775808
	printf("-----------------------------------------------------\n");
		printf("/////DADOS SEM SINAL/////\n");//As variáveis unsignes, não possuem valor negativo, portanto o menor valor não são aplicados. O menor valor será sempre o zero.
	printf("-----------------------------------------------------\n");
	printf("     Mostre o limite máximo da var UNSIGNED LONG INT: %lu\n", ULONG_MAX);//Mostra o maior valor que a variável unsigned long int pode guardar 4294967295		
	printf(" \n");
	printf("     Mostre o limite máximo da var UNSIGNED INT: %u\n", UINT_MAX);//Mostra o maior valor que a variável unsigned int pode guardar 4294967295	
	printf(" \n");
	printf("     Mostre o limite máximo da var UNSIGNED LONG LONG INT: %llu\n", ULLONG_MAX);//Mostra o maior valor que a variável unsigned long long int pode guardar 18446744073709551615	
	printf("-----------------------------------------------------\n");
	
	
	//Agora será mostrado o que acontece quando acrescentamos +1 valor nas variávis máximas.
	char max_char = CHAR_MAX;
 	max_char += 1;
 	printf("Valor Máximo da var CHAR +1: %d\n", max_char);
	
 	short int a = SHRT_MAX;
 	a += 1;
 	printf("Valor Máximo da var SHORT INT +1: %d\n", a);
 	
 	int max_int = INT_MAX;
 	max_int += 1;
 	printf("Valor Máximo da var INT +1: %d\n", max_int);
 	
 	long int max_longint = LONG_MAX;
 	max_longint += 1;
 	printf("Valor Máximo da var LONG INT +1: %ld\n", max_longint);
 	
 	unsigned int max_Uint = UINT_MAX;
 	max_Uint =+ 1;
 	printf("Valor Máximo da var UNSIGNED INT +1: %u\n", max_Uint);
 	
 	unsigned long int max_ULongint = ULONG_MAX;
 	max_ULongint =+ 1;
 	printf("Valor Máximo da var UNSIGNED LONG INT +1: %lu\n", max_ULongint);
 	
 	long long int max_llongint = LLONG_MAX;
 	max_llongint +=1;
 	printf("Valor Máximo da var LONG LONG INT +1: %lld\n", max_llongint);
 	
 	unsigned long long int max_ULLint = ULLONG_MAX;
 	max_ULLint =+ 1;
 	printf("Valor máximo da var UNSIGNED LONG LONG INT +1: %llu\n", max_ULLint);
 	
 	
 	
//Como pode ser observado, ao acrescentar +1, o valor máximo reseta para o valor mínimo
//Caso acrescente mais valores, o valor mínimo vai somando EX: CHAR_MAX + 1 = -128; CHAR_MAX + 2 = -127; CHAR_MAX + 3 = -126; 
 	
		
	return 0;
}

