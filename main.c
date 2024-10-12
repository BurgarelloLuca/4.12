#include <stdio.h>

int main(void) {
int n,a,b,numeroCrescente;
    printf("inserire il numero di cui si vogliono i multipli");
    scanf("%d",&n);
    printf("inserire a");
    scanf("%d",&a);
    printf("inserire b");
    scanf("%d",&b);
    printf("i multipli di %d sono:\n",n);
    numeroCrescente = a;
    while (numeroCrescente <= b) {
        if (numeroCrescente % n == 0) {
            printf("%d\n", numeroCrescente);
        }
        numeroCrescente++;
    }
    return 0;
}
