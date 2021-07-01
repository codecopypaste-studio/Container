#include <stdio.h>

int main()
{
    int cnt[42] = {}; // สร้างมา 42 ช่องทุกช่องเป็น 0
    for (int i = 0; i < 10; i++) {
        int num;
        scanf("%d", &num);
        int index = num % 42; 
        cnt[index] = 1;
    }

    int ans = 0;
    for (int i = 0; i < 42; i++) {
        if (cnt[i] == 1) {
            ans += 1;
        }
    }

    printf("%d", ans);
    return 0;
}