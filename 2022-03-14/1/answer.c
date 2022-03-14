#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    for (int z = 0; y != 0; z++){
        if (x + y > z) {
            if (x + z > y) {
                if (y + z > x) {
                    printf("YES");
                    return 1;
                } else {
                    y--;
                    continue;
                }
            } else {
                y--;
                continue;
            }
        } else {
            y--;
            continue;
        }
    }

    printf("NO");
    return 0;
}
