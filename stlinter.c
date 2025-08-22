#include <stdio.h>

int main() {
	// "Você pode usar as cartas que já foram cadastradas no desafio anterior. Não é necessário implementar o cadastro novamente neste nível." Mandando cidades ao invés de país como versões anteriores
	char carta1[] = "1", carta2[] = "2", estado1[] = "SP", estado2[] = "RJ", codigo1[] = "A01", codigo2[] = "B02", cid1[] = "São Paulo", cid2[] = "Rio de Janeiro";
	int pop1 = 12325000, pop2 = 6748000, ptur1 = 50, ptur2 = 30, opt = 0;
  float area1 = 1521.11, area2 = 1200.25, pib1 = 699.28, pib2 = 300.50;
 	// Calcula densidade populacional
	float dens1 = pop1 / area1;
  float dens2 = pop2 / area2;
	// Usando switch
	printf("Digite o numero referente ao atributo que deseja comparar\n?");
	printf("1 - População\n");
	printf("2 - Área\n");
	printf("3 - PIB\n");
	printf("4 - Numero de pontos turisticos\n");
	printf("5 - Densidade demografica\n");
	scanf("%d", &opt);
	/* Forçando a escolher uma opção valida, retirado porque o enunciado não pede
	while (opt < 1 || opt > 5) {
		printf("Opção incorreta, tente novamente:\n");
		scanf("%d", &opt);
	}
	*/
	switch (opt) {
		case 1:
			printf("Comparando atributo População\n");
			printf("Carta %s - %s (%s): %d\n", carta1, cid1, estado1, pop1);
			printf("Carta %s - %s (%s): %d\n", carta2, cid2, estado2, pop2);
			if (pop1 > pop2) {
				printf("Carta %s (%s) venceu\n", carta1, cid1);
			} else {
				printf("Carta %s (%s) venceu\n", carta2, cid2);
			}
			break;
		case 2:
			printf("Comparando atributo Área\n");
			printf("Carta %s - %s (%s): %.2f\n", carta1, cid1, estado1, area1);
			printf("Carta %s - %s (%s): %.2f\n", carta2, cid2, estado2, area2);
			if (area1 > area2) {
				printf("Carta %s (%s) venceu\n", carta1, cid1);
			} else {
				printf("Carta %s (%s) venceu\n", carta2, cid2);
			}  
			break;
		case 3:
			printf("Comparando atributo PIB\n");
			printf("Carta %s - %s (%s): %.2f\n", carta1, cid1, estado1, pib1);
			printf("Carta %s - %s (%s): %.2f\n", carta2, cid2, estado2, pib2);
			if (pib1 > pib2) {
				printf("Carta %s (%s) venceu\n", carta1, cid1);
			} else {
				printf("Carta %s (%s) venceu\n", carta2, cid2);
			}
			break;
		case 4:
			printf("Comparando atributo Pontos Turisticos\n");
			printf("Carta %s - %s (%s): %d\n", carta1, cid1, estado1, ptur1);
			printf("Carta %s - %s (%s): %d\n", carta2, cid2, estado2, ptur2);
			if (ptur1 > ptur2) {
				printf("Carta %s (%s) venceu\n", carta1, cid1);
			} else {
				printf("Carta %s (%s) venceu\n", carta2, cid2);
			}
			break;	
		case 5:
			printf("Comparando atributo Densidade demográfica\n");
			printf("Carta %s - %s (%s): %.2f\n", carta1, cid1, estado1, dens1);
			printf("Carta %s - %s (%s): %.2f\n", carta2, cid2, estado2, dens2);
			if (dens1 < dens2) {
				printf("Carta %s (%s) venceu\n", carta1, cid1);
			} else {
				printf("Carta %s (%s) venceu\n", carta2, cid2);
			}
			break;
    default:
		printf("Opção inválida. Tente novamente.\n");
	}
    return 0;
}
