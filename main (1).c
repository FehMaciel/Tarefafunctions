#include <stdio.h>

char atribuirConceito(float media) {
    char conceito;
    
    switch ((int) media) {
        case 10:
        case 9:
            conceito = 'A';
            break;
        case 8:
        case 7:
            conceito = 'B';
            break;
        case 6:
        case 5:
            conceito = 'C';
            break;
        default:
            conceito = 'D';
            break;
    }
    return conceito;
}
float calcularMedia(float nota1, float nota2) {
    float media = (nota1 * 4 + nota2 * 6) / 10;
    return media;
}


int main() {
   float nota1, nota2, media;
   printf("Digite a primeira nota: ");
   scanf("%f", &nota1);
   printf("Digite a segunda nota: ");
   scanf("%f", &nota2);

   // Calcula a média ponderada
   media = calcularMedia(nota1, nota2);

   // Exibe a média e o conceito final
   printf("Média: %.1f\n", media);
   printf("Conceito: %c\n", atribuirConceito(media));
   return 0;
}

