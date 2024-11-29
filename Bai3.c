#include <stdio.h>

int main() {
    int arr[100];
    int currentLength, deleteIndex;

    printf("Nhap so phan tu ban dau: ");
    scanf("%d", &currentLength);

    if (currentLength > 100 || currentLength < 0) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    for (int i = 0; i < currentLength; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap vi tri muon xoa (0 den %d): ", currentLength - 1);
    scanf("%d", &deleteIndex);

    if (deleteIndex < 0 || deleteIndex >= currentLength) {
        printf("Vi tri xoa khong hop le.\n");
        return 1;
    }

    for (int i = deleteIndex; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }

    currentLength--;

    printf("Mang sau khi xoa phan tu:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
