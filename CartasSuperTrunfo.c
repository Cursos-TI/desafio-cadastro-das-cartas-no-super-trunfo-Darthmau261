#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char ESTADO[1];
    char codigo[3];         
    char nomecidade[50];
    int população;
    float área;
    float PIB;
    int númerodepontosturísticos;
    float PIBpercapita = PIB / população;
    float densidade = população / área;

    char ESTADO2[1];
    char codigo2[3];   
    char nomecidade2[50];
    int população2;
    float área2;
    float PIB2;
    int númerodepontosturísticos2;
    float PIBpercapita2 = PIB2 / população2;
    float densidade2 = população2 / área2 ;



    printf("Carta numero 1 \n");

    printf("Digite o estado: \n");
    scanf(" %s", &ESTADO);
    
    printf("Digite o código da cidade: \n");
    scanf(" %s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nomecidade);  

    printf("Digite a população: \n");
    scanf(" %d", &população);

    printf("Digite a área: \n");
    scanf(" %f", &área);    

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB); 

    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &númerodepontosturísticos);    
    
    

    printf("Carta numero 2 \n");

    printf("Digite o estado: \n");
    scanf(" %s", &ESTADO2);

    printf("Digite o código da cidade: \n");
    scanf(" %s", &codigo2); 

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nomecidade2); 
    
    printf("Digite a população: \n");
    scanf(" %d", &população2);  

    printf("Digite a área: \n");
    scanf(" %f", &área2);   

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB2);    

    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &númerodepontosturísticos2);    
    

    printf("Carta 1 \n");
    printf("Estado: %s \n", ESTADO);        
    printf("Código da cidade: %s \n", codigo);
    printf("Nome da cidade: %s \n", nomecidade);
    printf("População: %d \n", população);
    printf("Área: %f \n", área);
    printf("PIB: %f \n", PIB);
    printf("Número de pontos turísticos: %d \n", númerodepontosturísticos);
    printf("pib per capita: %f \n , PIBpercapita");
    printf("densidade populacional: %f \n , densidade");


    printf("Carta 2 \n");
    printf("Estado: %s \n", ESTADO2);   
    printf("Código da cidade: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nomecidade2);
    printf("População: %d \n", população2);
    printf("Área: %f \n", área2);
    printf("PIB: %f \n", PIB2);
    printf("Número de pontos turísticos: %d \n", númerodepontosturísticos2);
    printf("pib per capita: %f \n , PIBpercapita2");
    printf("densidade populacional: %f \n, densidade2");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
