#include <stdio.h>
void miniMaxSum(int arr[5]) {
    long total = 0;
    long min = arr[0], max = arr[0];
    for (int i = 0; i < 5; i++) {
        total += arr[i];
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    printf("%ld %ld\n", total - max, total - min);
}
int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    miniMaxSum(arr);
    return 0;
}
