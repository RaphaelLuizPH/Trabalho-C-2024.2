//A biblioteca limits.h na linguagem C define constantes que delimitam os valores m?ximos e m?nimos que vari?veis de um determinado tipo podem assumir. 

#include <stdio.h>
#include <limits.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("-----------------------------------------------------\n");
		printf("/////INTEIROS COM SINAL/////\n");
	printf("-----------------------------------------------------\n");
	printf("     Mostre o limite m�ximo da var CHAR: %d\n", CHAR_MAX);//Mostra a quantidade m�xima de caracteres que a vari�vel char pode guardar 127
	printf("     Mostre o limite m�nimo da var CHAR: %d\n", CHAR_MIN);//Mostra a quantidade m�nima de caracteres que a vari�vel char pode guardar -128
	printf(" \n");
	printf("     Mostre o limite m�ximo da var INT: %d\n", INT_MAX);//Mostra o maior valor que a vari�vel int pode guardar 2147483647 
	printf("     Mostre o limite m�nimo da var INT: %d\n", INT_MIN);//Mostra o menor valor que a vari�vel int pode guardar -2147483648
	printf(" \n");
	printf("     Mostre o limite m�ximo da var SHORT INT: %d\n", SHRT_MAX);//Mostra o maior valor que a vari�vel short int pode guardar	32767
	printf("     Mostre o limite m�nimo da var SHORT INT:%d\n", SHRT_MIN);//Mostra o menor valor que a vari�vel short int pode guardar -32768
	printf(" \n");
	printf("     Mostre o limite m�ximo da var LONG INT: %ld\n", LONG_MAX);//Mostra o maior valor que a vari�vel long int pode guardar 2147483647	
	printf("     Mostre o limite m�nimo da var LONG INT: %ld\n", LONG_MIN);//Mostra o menor valor que a vari�vel long int pode guardar -2147483648
	printf(" \n");
	printf("     Mostre o limite m�ximo da var LONG LONG INT: %lld\n", LLONG_MAX);//Mostra o maior valor que a vari�vel long long int pode guardar 9223372036854775807	
	printf("     Mostre o limite m�nimo da var LONG LONG INT: %lld\n", LLONG_MIN);//Mostra o menor valor que a vari�vel long long int pode guardar -9223372036854775808
	printf("-----------------------------------------------------\n");
		printf("/////DADOS SEM SINAL/////\n");//As vari�veis unsignes, n�o possuem valor negativo, portanto o menor valor n�o s�o aplicados. O menor valor ser� sempre o zero.
	printf("-----------------------------------------------------\n");
	printf("     Mostre o limite m�ximo da var UNSIGNED LONG INT: %lu\n", ULONG_MAX);//Mostra o maior valor que a vari�vel unsigned long int pode guardar 4294967295		
	printf(" \n");
	printf("     Mostre o limite m�ximo da var UNSIGNED INT: %u\n", UINT_MAX);//Mostra o maior valor que a vari�vel unsigned int pode guardar 4294967295	
	printf(" \n");
	printf("     Mostre o limite m�ximo da var UNSIGNED LONG LONG INT: %llu\n", ULLONG_MAX);//Mostra o maior valor que a vari�vel unsigned long long int pode guardar 18446744073709551615	
	printf("-----------------------------------------------------\n");
	
	
	//Agora ser� mostrado o que acontece quando acrescentamos +1 valor nas vari�vis m�ximas.
	char max_char = CHAR_MAX;
 	max_char += 1;
 	printf("Valor M�ximo da var CHAR +1: %d\n", max_char);
	
 	short int a = SHRT_MAX;
 	a += 1;
 	printf("Valor M�ximo da var SHORT INT +1: %d\n", a);
 	
 	int max_int = INT_MAX;
 	max_int += 1;
 	printf("Valor M�ximo da var INT +1: %d\n", max_int);
 	
 	long int max_longint = LONG_MAX;
 	max_longint += 1;
 	printf("Valor M�ximo da var LONG INT +1: %ld\n", max_longint);
 	
 	unsigned int max_Uint = UINT_MAX;
 	max_Uint =+ 1;
 	printf("Valor M�ximo da var UNSIGNED INT +1: %u\n", max_Uint);
 	
 	unsigned long int max_ULongint = ULONG_MAX;
 	max_ULongint =+ 1;
 	printf("Valor M�ximo da var UNSIGNED LONG INT +1: %lu\n", max_ULongint);
 	
 	long long int max_llongint = LLONG_MAX;
 	max_llongint +=1;
 	printf("Valor M�ximo da var LONG LONG INT +1: %lld\n", max_llongint);
 	
 	unsigned long long int max_ULLint = ULLONG_MAX;
 	max_ULLint =+ 1;
 	printf("Valor m�ximo da var UNSIGNED LONG LONG INT +1: %llu\n", max_ULLint);
 	
 	
 	
//Como pode ser observado, ao acrescentar +1, o valor m�ximo reseta para o valor m�nimo
//Caso acrescente mais valores, o valor m�nimo vai somando EX: CHAR_MAX + 1 = -128; CHAR_MAX + 2 = -127; CHAR_MAX + 3 = -126; 
 	
		
	return 0;
}

