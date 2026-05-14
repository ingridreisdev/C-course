#include <stdio.h>

int main() {
    int resposta;
    int pontos = 0;
 
    printf("===QUIZ: REINO ANIMAL===\n\n");
   printf("1) Qual destes animais e um mamifero?\n");
    printf("1. Tubarao\n");
    printf("2. Galinha\n");
    printf("3. Baleia\n");
    printf("Digite o numero da resposta correta: ");
    scanf("%d", &resposta);
     if (resposta == 3) {
    printf("Correto! Baleias sao mamiferos.\n\n");
    pontos++;
} else { 
 printf("Errado! A resposta correta e: Baleia.\n\n");
}
printf("2) Qual animal bota ovos?\n");
printf("1. Galinha\n");
printf("2. Gato\n");
printf("3. Cavalo\n");
printf("Digite o numero da resposta correta: ");
scanf("%d", &resposta);
if (resposta == 1) {
    printf("Correto! Galinhas botam ovos.\n\n");
    pontos++;
} else {
    printf("Errado! A resposta correta e: Galinhas.\n\n");
}
printf("3) Qual destes animais e um reptil?\n");
printf("1. Elefante\n");
printf("2. Crocodilo\n");
printf("3. Macaco\n");
printf("Digite o numero da resposta correta: ");
scanf("%d", &resposta);
if (resposta == 2) {
    printf("Correto! Crocodilos sao repteis.\n\n");
    pontos++;
} else {
    printf("Errado! A resposta correta e: Crocodilo.\n\n");
}
printf("4) Qual destes animais vive na agua?\n");
printf("1. Peixe\n");
printf("2. Leao\n");
printf("3. Urso\n");
printf("Digite o numero da resposta correta: ");
scanf("%d", &resposta);
if(resposta == 1) {
    printf("Correto! Peixes vivem na agua.\n\n");
    pontos++;
} else {
    printf("Errado! A resposta correta e: Peixe.\n\n");
}
printf("5) Qual destes animais podem dormir ate 22 horas por dia?\n");
printf("1. Avestruz\n");
printf("2. Papagaio\n");
printf("3. Coala\n");
printf("Digite o numero da resposta correta: ");
scanf("%d", &resposta);
if(resposta == 3) {
    printf("Correto! Coalas podem dormir ate 22 horas por dia.\n\n");
    pontos++;
} else {
    printf("Errado! A resposta correta e: Coala.\n\n");
}

printf("=== RESULTADO FINAL ===\n");
printf("Voce acertou %d de 5 perguntas.\n", pontos);
if (pontos == 5) {
    printf("Parabens! Voce e um expert em reino animal!\n");
} else if (pontos >= 3) {
    printf("Bom trabalho! Voce tem um bom conhecimento sobre o reino animal.\n");
} else {
    printf("Parece que voce precisa estudar mais sobre o reino animal. Tente novamente!\n");
}
 return 0;
}