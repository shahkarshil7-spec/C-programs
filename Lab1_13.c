#include <stdio.h>

int main() 
{
    double bytes;
    printf("Enter size in bytes: ");
    scanf("%lf", &bytes);
    {
        printf("KB: %lf\n", bytes / 1024);
        printf("MB: %lf\n", bytes / (1024 * 1024));
        printf("GB: %lf\n", bytes / (1024 * 1024 * 1024));
    }
    return 0;
}
