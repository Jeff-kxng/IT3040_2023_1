/* Bài 1.1. Viết một chương trình C nhập vào 3 số nguyên. Thiết lập một con trỏ để lần lượt trỏ tới từng số nguyên và hiển thị kết quả giá trị tham chiếu ngược của con trỏ.

Lưu ý: Phép toán & trả về địa chỉ của biến.*/
# include <stdio.h>
/* Sok Sokong 20211005 */
int main(){
    int x, y, z;
    int* ptr;
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("\nThe three integers are:\n");
    ptr = &x;
    printf("x = %d\n", *ptr);
    ptr = &y; // Thiết lập con trỏ ptr trỏ tới y
    printf("y = %d\n", *ptr); // Hiển thị giá trị tham chiếu ngược của y
    ptr = &z; // Thiết lập con trỏ ptr trỏ tới z
    printf("z = %d\n", *ptr); // Hiển thị giá trị tham chiếu ngược của z
    return 0;
}
