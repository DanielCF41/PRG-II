#include <stdio.h>

int seq_fibo_it(int n){
    int sequencia[n];
    sequencia[0] = 0;
    sequencia[1] = 1;
    printf("IT - Sequência de fibonacci: ");
    for (int i = 1; i < n; ++i) {
        sequencia[i + 1] = sequencia[i] + sequencia[i - 1];
        printf("%d ", sequencia[i - 1]);
    }
}