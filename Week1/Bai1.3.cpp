/*
 Bài 1.3. Viết chương trình yêu cầu nhập giá trị cho 3 biến số nguyên x, y, z kiểu int. Sau đó sử dụng duy nhất một con trỏ để cộng giá trị của mỗi biến thêm 100.
 */
#include <stdio.h>
/* Sok Sokong 20211005 */
int main() {

    int x, y, z;

    int *ptr;

    scanf("%d %d %d", &x, &y, &z);

    printf("Here are the values of x, y, and z:\n");

    printf("%d %d %d\n", x, y, z);

    // Sử dụng con trỏ ptr để trỏ đến địa chỉ của x, y, và z lần lượt

    ptr = &x; // Trỏ đến địa chỉ của x

    *ptr += 100; // Cộng giá trị của x thêm 100

    ptr = &y; // Trỏ đến địa chỉ của y

    *ptr += 100; // Cộng giá trị của y thêm 100

    ptr = &z; // Trỏ đến địa chỉ của z

    *ptr += 100; // Cộng giá trị của z thêm 100

    printf("Once again, here are the values of x, y, and z:\n");

    printf("%d %d %d\n", x, y, z);

    return 0;

}