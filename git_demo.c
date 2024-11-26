#include <stdio.h>

int main()
{
    int diem = 10;
    char xep_loai = 'A';
    char hanh_kiem[] = "tot"; // Mảng hành kiểm
    char ten_sv[30];

    // Nhập tên sinh viên
    printf("Nhap ten sinh vien: ");
    fgets(ten_sv, sizeof(ten_sv), stdin); // Dùng fgets thay vì scanf

    // In kết quả
    printf("%s duoc: %d\n", ten_sv, diem);

    return 0;
}
