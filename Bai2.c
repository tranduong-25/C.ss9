#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int position, newValue;

    printf("Nhap vi tri can sua (0 den 4): ");
    scanf("%d", &position);

    if (position < 0 || position > 4) {
        printf("Vi tri khong hop le.\n");
        return 1;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    arr[position] = newValue;

    printf("Mang sau khi sua:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
