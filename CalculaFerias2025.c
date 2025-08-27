#include <stdio.h>

int main() {
    float salario, bonus1, bonus2, bonus3, bonus4, bonus5;
    float trinta, bruto;
    float fgts, inss;

    printf("Vigente em 2025\n\nDigite o salário: ");
    scanf("%f", &salario);

    printf("Vai abrir 5 caixas de texto pra bonificações, digite os valores ou responda 0 cinco vezes\n");
    scanf("%f", &bonus1);
    scanf("%f", &bonus2);
    scanf("%f", &bonus3);
    scanf("%f", &bonus4);
    scanf("%f", &bonus5);

    trinta = salario + bonus1 + bonus2 + bonus3 + bonus4 + bonus5;
    trinta = trinta / 3;
    bruto = trinta + salario + bonus1 + bonus2 + bonus3 + bonus4 + bonus5;
    
    if (bruto <= 1518) {
        inss = bruto * 0.075;
    }
    else if (bruto > 1518 && bruto <= 2793.88) {
        inss = bruto * 0.09 - 22.77;
    }
    else if (bruto > 2793.88 && bruto <= 4190.83) {
        inss = bruto * 0.12 - 106.60;
    }
    else { // acima de 419084
        inss = bruto * 0.14 - 190.42;
    }
    
    fgts = bruto * 0.08;

    printf("\n\n\n\nValor das férias calculado\n");
    printf("Salário: %.2f\n", salario);
    printf("1/3 das férias: %.2f\n", trinta);
    printf("Bruto: %.2f\n", bruto);
    printf("FGTS: %.2f\n", fgts);
    printf("INSS: %.2f\n\n\n\n", inss);

    return 0;
}
