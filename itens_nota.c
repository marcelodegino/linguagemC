#include "itens_nota.h"

struct nota nf;

void quant(){
	printf("Digite a quantidade de itens: ");
	scanf("%i", &nf.quant);
}

void disc(){
	printf("Digite a a discri��o do item: ");
	fflush(stdin);
	fgets(nf.discrimina, sizeof(nf.discrimina), stdin);	
}

void valor(){
	printf("Digite o pre�o do itens: ");
	scanf("%.2f\n", &nf.valor);
}

void saida(){
	printf("\t |Discrimina��o: %s\t |Quantidade: %i\t |Pre�o: %f\n",
	nf.discrimina, nf.quant, nf.valor);
}





