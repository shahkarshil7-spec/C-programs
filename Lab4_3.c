#include <stdio.h>

int main(void) {
#define N 5
    int a[N];
    printf("enter %d elements: ", N);
    for (int i = 0; i < N; ++i) {
        if (scanf("%d", &a[i]) != 1) 
        return 1;
    }

    for (int i = 0; i < N - 1; ++i) {
        int min = i;
        for (int j = i + 1; j < N; ++j)
            if (a[j] < a[min]) min = j;
        if (min != i) {
            int t = a[i];
            a[i] = a[min];
            a[min] = t;
        }
    }
    printf("The elements after sorting are: ");
    for (int i = 0; i < N; ++i) {
        printf("%d ", a[i]);
    }
    return 0;
}