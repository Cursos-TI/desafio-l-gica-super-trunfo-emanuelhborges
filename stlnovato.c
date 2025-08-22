#include <stdio.h>
#include <string.h>

    // Usei fgets(limpan, 3, stdin) pra limpar o \n que é gerado no scanf, caso contrario não seria possivel usar fgets após scanf
    // V2 - Versão final, acredito
int main() {
	char carta1[3], carta2[3], estado1[4], estado2[4], codigo1[5], codigo2[5], cid1[20], cid2[20], limpan[3];
    int pop1, pop2, ptur1, ptur2;
    float area1, area2, pib1, pib2;
	// Preenchimento de dados da primeira carta
    printf("Digite a primeira carta\n");
    printf("Digite o valor para Carta: ");
    scanf("%s", &carta1);
    printf("Digite o valor para Estado: ");
    scanf("%s", &estado1);
    printf("Digite o valor para Código: ");
    scanf("%s", &codigo1);
    fgets(limpan, 3, stdin);
    printf("Digite o valor para Nome da Cidade: ");
    fgets(cid1, 20, stdin);
    cid1[strcspn(cid1, "\n")] = 0;
    printf("Digite a População: ");
    scanf("%d", &pop1);
    printf("Digite o valor para Área: ");
    scanf("%f", &area1);
    printf("Digite o valor para PIB: ");
    scanf("%f", &pib1);
    printf("Digite o valor para Número de pontos turísticos: ");
    scanf("%d", &ptur1);
	// Prenchimendo de dados da segunda carta
    printf("\nDigite a segunda carta\n");
    printf("Digite o valor para Carta: ");
    scanf("%s", &carta2);
    printf("Digite o valor para Estado: ");
    scanf("%s", &estado2);
    printf("Digite o valor para Código: ");
    scanf("%s", &codigo2);
    fgets(limpan, 3, stdin);
    printf("Digite o valor para Nome da Cidade: ");
    fgets(cid2, 20, stdin);
    cid2[strcspn(cid2, "\n")] = 0;
    printf("Digite a População: ");
    scanf("%d", &pop2);
    printf("Digite o valor para Área: ");
    scanf("%f", &area2);
    printf("Digite o valor para PIB: ");
    scanf("%f", &pib2);
    printf("Digite o valor para Número de pontos turísticos: ");
    scanf("%d", &ptur2);
	
	/* Preguiça de ficar digitando toda hora pra testar uma linha
	char carta1[] = "1", carta2[] = "2", estado1[] = "SP", estado2[] = "RJ", codigo1[] = "A01", codigo2[] = "B02", cid1[] = "São Paulo", cid2[] = "Rio de Janeiro";
	int pop1 = 12325000, pop2 = 6748000, ptur1 = 50, ptur2 = 30;
    float area1 = 1521.11, area2 = 1200.25, pib1 = 699.28, pib2 = 300.50; */
	
    // Converte pib por extenso
    long int pibx1 = pib1 * 1000000000; 
    long int pibx2 = pib2 * 1000000000;
	// Calcula densidade populacional
	float dens1 = pop1 / area1;
    float dens2 = pop2 / area2;
    // Calcula PIB per Capita
	float ppc1 = pibx1 / pop1;
    float ppc2 = pibx2 / pop2;
    // Calcula Super Pode
    float spoder1 = pop1 + area1 + pib1 + ptur1 + ppc1 - dens1;
    float spoder2 = pop2 + area2 + pib2 + ptur2 + ppc2 - dens2;
	
    // Mostrando densidade populacional e pib per capita como pedido no enunciado 	
	printf("\nA densidade populacional de %s é: %0.2f habitantes por km²\nA densidade populacional de %s é: %0.2f habitantes por km²\n", cid1, dens1, cid2, dens2);
    printf("\nO PIB per Capita de %s é: R$%0.2f\nO PIB per Capita de %s é: R$%0.2f\n", cid1, ppc1, cid2, ppc2);	

	
	// Mostrando resultado e comparando duas cartas, como o código já estava feito, resolvi só comentar o restante ao invés de mostrar o resultado de cada um
	
    printf("\nComparação de Cartas:\n");
	printf("Comparando atributo População\n");
	printf("Carta %s - %s (%s): %d\n", carta1, cid1, estado1, pop1);
	printf("Carta %s - %s (%s): %d\n", carta2, cid2, estado2, pop2);
    if (pop1 > pop2) {
        printf("Carta %s (%d) venceu\n", carta1, pop1);
    } else {
        printf("Carta %s (%d) venceu\n", carta2, pop2);
    }
	printf("Comparando atributo Área\n");
	printf("Carta %s - %s (%s): %.2f\n", carta1, cid1, estado1, area1);
	printf("Carta %s - %s (%s): %.2f\n", carta2, cid2, estado2, area2);
    if (area1 > area2) {
        printf("Carta %s (%s) venceu\n", carta1, cid1);
    } else {
        printf("Carta %s (%s) venceu\n", carta2, cid2);
    }    

    return 0;
}
