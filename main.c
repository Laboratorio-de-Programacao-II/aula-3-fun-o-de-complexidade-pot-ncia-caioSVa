#include <stdio.h>
#include <math.h>

long long pot(long long base, int exp) {
    long long resultado = 1;
    for (int i = 0; i < exp; i++)
        resultado *= base;
    return resultado;
}

long long pot_eficiente(long long base, int exp) {
    long valor;
    if(exp == 0){   
        return 1;
    } else if (exp % 2 == 0){
        valor = pot(base,exp/2);
        valor = pot(valor,2);
        return valor;
    } else {
        valor = pot(base,exp-1);
        valor = valor * base;
        return valor;
    }
}

int main() {
    long long base;
    int exp;
    scanf("%lld %d", &base, &exp);

    long long r1 = pot(base, exp);
    long long r2 = pot_eficiente(base, exp);

    printf("%lld\n%lld\n", r1, r2);
    return 0;
}
