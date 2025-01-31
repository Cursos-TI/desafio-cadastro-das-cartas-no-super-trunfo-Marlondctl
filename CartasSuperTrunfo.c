#include <stdio.h>
#include <stdlib.h>>


int main() {
	
    int populacao, area, pontos, codcidade, pib;
    char estado;
	char cidade[50];
	
    
    printf ("Bem Vindo ao Super Trunfo Cidade!!\n");

printf ("Digite o Codigo do estado:\n");
scanf ("%c", &estado);

printf (" Digite o Codigo da cidade:\n");
scanf ("%d", &codcidade);

    printf (" Digite o nome da cidade:\n");
    scanf ("%s", &cidade);
    

    printf (" Digite a população da cidade:\n");
     scanf ("%d", &populacao);

    printf (" Digite a área da cidade:\n");
     scanf ("%d", &area);

    printf (" Digite o PIB da cidade\n");
     scanf ("%d", &pib);

    printf (" Digite o numero de pontos turísticos\n");
     scanf ("%d", &pontos);
     
     system ("pause");
     system ("cls");

     printf (" Carta cadastrada com sucesso!!\n\n\n");
     
     printf ("%s\n", cidade);
    
     printf ("Codigo da carta :%c %d\n", estado, codcidade);
     printf ("População : %d\n", populacao);
     printf ("Área: %d\n", area);
     printf ("Pib : R$ %d\n", pib);
     printf ("Pontos Turísticos: %d\n", pontos);
     
     
     
     
 }
