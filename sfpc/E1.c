#include <stdio.h>

int main() {
    unsigned int i, j, k, n, x1, x2, h, y1, y2, w, a, b;
    scanf("%d %d", &h, &w);

    int data[h][w];

    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            data[i][j] = 0;
        }
    }

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for (j = y1 - 1; j < y2; j++) {
            for (k = x1 - 1; k < x2; k++) {
                data[k][j] ^= 1;
            }
        }
    }

    for (a = 0; a < h; a++) {
        for (b = 0; b < w; b++) {
            printf("%d ", data[a][b]);
        }
        printf("\n");
    }

    return 0;
}
