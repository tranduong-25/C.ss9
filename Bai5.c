#include <stdio.h>
#include <stdbool.h>

// Kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Hàm để hiển thị mảng
void printArray(int arr[], int currentLength) {
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100];
    int currentLength = 0;
    int choice, value, position;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu can nhap: ");
                scanf("%d", &currentLength);
                if (currentLength > 100 || currentLength < 0) {
                    printf("So phan tu khong hop le.\n");
                    currentLength = 0;
                } else {
                    for (int i = 0; i < currentLength; i++) {
                        printf("Nhap phan tu %d: ", i + 1);
                        scanf("%d", &arr[i]);
                    }
                }
                break;

            case 2:
                if (currentLength == 0) {
                    printf("Mang rong.\n");
                } else {
                    printf("Gia tri cac phan tu dang quan ly: ");
                    printArray(arr, currentLength);
                }
                break;

            case 3:
                {
                    int sumEven = 0;
                    printf("Gia tri cac phan tu chan: ");
                    for (int i = 0; i < currentLength; i++) {
                        if (arr[i] % 2 == 0) {
                            printf("%d ", arr[i]);
                            sumEven += arr[i];
                        }
                    }
                    printf("\nTong cac phan tu chan: %d\n", sumEven);
                }
                break;

            case 4:
                if (currentLength == 0) {
                    printf("Mang rong.\n");
                } else {
                    int max = arr[0], min = arr[0];
                    for (int i = 1; i < currentLength; i++) {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    printf("Gia tri lon nhat: %d\n", max);
                    printf("Gia tri nho nhat: %d\n", min);
                }
                break;

            case 5:
                {
                    int sumPrime = 0;
                    printf("Cac phan tu la so nguyen to: ");
                    for (int i = 0; i < currentLength; i++) {
                        if (isPrime(arr[i])) {
                            printf("%d ", arr[i]);
                            sumPrime += arr[i];
                        }
                    }
                    printf("\nTong cac so nguyen to: %d\n", sumPrime);
                }
                break;

            case 6:
                {
                    printf("Nhap vao mot so: ");
                    scanf("%d", &value);
                    int count = 0;
                    for (int i = 0; i < currentLength; i++) {
                        if (arr[i] == value) {
                            count++;
                        }
                    }
                    printf("So %d xuat hien %d lan trong mang.\n", value, count);
                }
                break;

            case 7:
                printf("Nhap vi tri muon them (0 den %d): ", currentLength);
                scanf("%d", &position);
                if (position < 0 || position > currentLength) {
                    printf("Vi tri khong hop le.\n");
                } else {
                    printf("Nhap gia tri muon them: ");
                    scanf("%d", &value);
                    for (int i = currentLength; i > position; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[position] = value;
                    currentLength++;
                }
                break;

            case 8:
                printf("Thoat chuong trinh.\n");
                return 0;

            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }

    return 0;
}
