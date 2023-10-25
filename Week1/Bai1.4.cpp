/*
Bài 1.4. Viết hàm countEven(int*, int) nhận một mảng số nguyên và kích thước của mảng, trả về số lượng số chẵn trong mảng???
 */
/* Sok Sokong 20211005*/

int counteven(int* arr, int size){
    // Khởi tạo biến đếm
    int count = 0;
    // Duyệt qua các phần tử của mảng
    for (int i = 0; i < size; i++) {
        // Kiểm tra nếu phần tử là số chẵn
        if (arr[i] % 2 == 0) {
            // Tăng biến đếm lên 1
            count++;

        }
    }
    return count;
}