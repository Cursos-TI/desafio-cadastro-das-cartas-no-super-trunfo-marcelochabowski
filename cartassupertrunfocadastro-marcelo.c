#include <stdio.h>
typedef struct {
    char nome[50];
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontosturistico;
} cidade;

int main () {
    cidade cidade1, cidade2;
    // cadastro da cidade jogador 1
    printf("jogador 1 digite sua cidade: ");
    scanf("%s",cidade1.nome);
    printf("codigo (ex: A01): ");
    scanf("%s", cidade1.codigo);
    printf("populacao: ");
    scanf("%d", &cidade1.populacao);
    printf("area: ");
    scanf("%f", &cidade1.area);
    printf("PiB: ");
    scanf("%f", &cidade1.pib);
    printf("numeros de ponto turistico: ");
    scanf("%d", &cidade1.pontosturistico);
    // cadastro jogador 2
    printf("jogador 2 digite sua cidade: ");
    scanf("%s",cidade2.nome);
    printf("codigo (ex: A01): ");
    scanf("%s", cidade2.codigo);
    printf("populacao: ");
    scanf("%d", &cidade2.populacao);
    printf("area: ");
    scanf("%f", &cidade2.area);
    printf("PiB: ");
    scanf("%f", &cidade2.pib);
    printf("numeros de ponto turistico: ");
    scanf("%d", &cidade2.pontosturistico);
// exebir dados do jagador 1
printf("\n dados da cidade do jagador 1:\n");
printf("codigo: %s\n", cidade1.codigo);
printf("populacao: %d\n",cidade1.populacao);
printf("area: %f\n", cidade1.area);
printf("pib: %f\n", cidade1.pib);
printf("ponto turistico: %d\n", cidade1.pontosturistico);
// exebir dados do jagador 2
printf("\n dados da cidade do jagador 2:\n");
printf("codigo: %s\n", cidade2.codigo);
printf("populacao: %d\n", cidade2.populacao);
printf("area: %f\n", cidade2.area);
printf("pib: %f\n", cidade2.pib);
printf("ponto turistico: %d\n", cidade2.pontosturistico);
//comparacao de pontos
int resultado[4];
resultado[0] = (cidade1.populacao > cidade2.populacao);
resultado[1] = (cidade1.area > cidade2.area);
resultado[2] = (cidade1.pib > cidade2.pib);
resultado[3] = (cidade1.pontosturistico > cidade2.pontosturistico);
// exibir ponto
const char *nomes[] = {
    "populacao", "area", "pib", "pontosturistico"
};
printf("\n comparacao entre as cidades:\n");
printf("1 = cidade 1 venceu | 0 = cidade 2 venceu\n\n");
 printf("%s: %d\n", nomes[0], resultado[0]);
    printf("%s: %d\n", nomes[1], resultado[1]);
    printf("%s: %d\n", nomes[2], resultado[2]);
    printf("%s: %d\n", nomes[3], resultado[3]);
    return 0;
}