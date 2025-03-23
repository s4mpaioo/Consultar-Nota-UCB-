#include <stdio.h>

int main() {
    float n1, n2, n3, ppd, nf;
    printf("Digite a nota da (N1): ");
    scanf("%f", &n1);
    printf("Digite a nota da (N2): ");
    scanf("%f", &n2);
    printf("Digite a nota da (PPD): ");
    scanf("%f", &ppd);
    nf = n1 + n2;
    if (nf >= 7)
    { 
      printf("Aprovado com NF = %.2f\n", nf);
    } else {
        printf("Estudante esta de recuperacao, tera que fazer a N3!", nf);
        printf("\n Digite a nota da (N3): ");
        scanf("%f", &n3);
        if (n1 < n2)
        {
            nf = n2 + n3 + ppd;
        } else {
            (n1 > n2);
            nf = n1 + n3 + ppd;
        } if (nf >= 7)
        {
            printf("Aprovado com NF = %.2f\n", nf);
        } else {
            printf("Reprovado com NF = %.2f\n", nf);
        }
        
        return 0;

    }    

}