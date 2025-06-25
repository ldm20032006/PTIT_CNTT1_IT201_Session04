#include <stdio.h>
int findMinIndex(int arr[], int n) {
    int minIndex = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0 ; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int minIndex = findMinIndex(arr, n);
    printf("Chi so cua phan tu nho nhat dau tien la: %d\n", minIndex);

    return 0;
}
