#include <stdio.h>
#include "minunit.h"

int soma( int v1, int v2 );
int subtracao(int v1, int v2);
float divisao(float v1, float v2);

MU_TEST(teste_subtracao){
	mu_assert(
		subtracao(7, 2)==5,
		"Erro na subtracao 7-2"	
	);
}

MU_TEST(teste_soma){
	mu_assert(
		soma(5, 5)==10,
		"Sum ting wong"	
	);
	mu_assert(
		soma(2, 5)==7,
		"Sum ting wong 2"	
	);
}

MU_TEST(teste_divisao_normal){
	mu_assert(
	divisao(10, 5)==2,
	"Erro na divisao"
	);
	
	mu_check(
	divisao(10,2)==5
	);
}


MU_TEST(teste_divisao_zero){
	mu_assert(
		isnan(divisao(10,0)),
		"Divisao por zero deveria retornar NaN"
	);
}

MU_TEST(	teste_divisao_aprox){
	mu_check(
		fabs(divisao(10,2))-5 <0.0001
	);
}
MU_TEST_SUITE(teste_suite){
	MU_RUN_TEST(teste_soma);
	MU_RUN_TEST(teste_subtracao);
	MU_RUN_TEST(teste_divisao_normal);
	MU_RUN_TEST(teste_divisao_zero);
	MU_RUN_TEST(teste_divisao_aprox);
}
int main(){
	MU_RUN_SUITE(teste_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}