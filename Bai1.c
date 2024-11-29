#include <stdio.h>

int main() {
    int arr[100];  
    int currentLength, addIndex, addValue;

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

    printf("Nhap vi tri muon them (0 den %d): ", currentLength);
    scanf("%d", &addIndex);

    if (addIndex < 0 || addIndex > currentLength) {
        printf("Vi tri them khong hop le.\n");
        return 1;
    }

    printf("Nhap gia tri muon them: ");
    scanf("%d", &addValue);

    if (addIndex >= currentLength) {
        arr[addIndex] = addValue;
        currentLength = addIndex + 1;
    } else {
        for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = addValue;
        currentLength++;
    }

    printf("Mảng sau khi thêm phần tử:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
