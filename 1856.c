/**************************************************************
    Problem: 1856
    User: qudwns0524
    Language: C
    Result: Success
    Time:1 ms
    Memory:1092 kb
****************************************************************/
 
 
#include <stdio.h>
int main(void) {
    int h, w;
    scanf("%d %d", &h, &w);
    for (int i = 0; i < h; i++) {
        if (i % 2 == 0) {
            for (int j = 1; j <= w; j++) {
                printf("%d ", i * w + j);
            }
            printf("\n");
        }
        else {
            for (int j = w; j > 0; j--) {
                printf("%d ", i * w + j);
            }
            printf("\n");
        }
    }
    return 0;
}
