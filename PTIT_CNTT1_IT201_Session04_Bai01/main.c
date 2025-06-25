#include <stdio.h>

int findPosition(int arr[], int n, int value) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int value;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);

    int pos = findPosition(arr, n, value);
    if (pos != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri %d\n", value, pos);
    } else {
        printf("Khong tim thay gia tri %d trong mang\n", value);
    }


    return 0;
}