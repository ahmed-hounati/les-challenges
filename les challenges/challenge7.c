#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int N, inverse;
    printf("Entrez un nombre entier a trois chiffres : ");
    scanf("%d", &N);

    inverse = (N % 10) * 100 + ((N / 10) % 10) * 10 + (N / 100);

    printf("L inverse est : %d\n", inverse);

    return 0;
}