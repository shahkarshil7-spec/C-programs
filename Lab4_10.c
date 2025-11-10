#include <stdio.h>

int main() {
    int a[10], freq[10] = {0};

    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < 10; i++) {
        int count = 1;
        if (freq[i] == -1) continue;
        for (int j = i + 1; j < 10; j++) {
            if (a[i] == a[j]) {
                count++;
                freq[j] = -1; 
            }
        }
        freq[i] = count;
    }

    printf("Frequencies:\n");
    for (int i = 0; i < 10; i++)
        if (freq[i] != -1)
            printf("%d occurs %d times\n", a[i], freq[i]);

    return 0;
}