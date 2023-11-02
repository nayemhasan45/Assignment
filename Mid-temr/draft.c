#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        // Calculate the new number of workers
        int total_workers = M1 + M2;

        // Calculate the reduced time to complete the work
        int reduced_days = D * M1 / total_workers;

        printf("%d\n", D - reduced_days);
    }

    return 0;
}
