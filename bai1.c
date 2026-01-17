/******************************************************************************
 * Họ và tên: [Nguyễn Ngọc Quang]
 * MSSV:      [PS47259]
 * Lớp:       [com108-cs21301]
 *****************************************************************************/

// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC  
// Input: Nhập vào điểm của sinh viên (0-10) 
// Output: Hiển thị ra màn hình học lực của sinh viên 
// Biết rằng: 
// Học lực xuất sắc: Điểm >= 9 
// Học lực giỏi: 9 > điểm >= 8 
// Học lực khá: 8 > điểm >= 6.5 
// Học lực trung bình: 6.5 > điểm >= 5 
// Học lực yếu: 5 > điểm >= 3.5 
// Học lực kém: 3.5 > điểm

#include <stdio.h>

int main(){
    // Khai báo biến
float diemToan=0,diemLy=0,diemHoa=0,diemTrungBinh=0;
    // Nhập dữ liệu
printf("hãy nhập điểm toán :");
scanf("%f",&diemToan);
printf("hãy nhập điểm lý :");
scanf("%f",&diemLy);
printf("hãy nhập điểm hóa :");
scanf("%f",&diemHoa);
    // Xử lý, tính toán
diemTrungBinh= (diemHoa+ diemLy*2+diemToan*3)/6;
    
    //xét điều kiệm
    while (diemHoa>10||diemLy>10||diemToan>10)
    {
        printf("hãy nhập điểm nhỏ hơn 10\n");
        printf("hãy nhập điểm toán :");
        scanf("%f",&diemToan);
        printf("hãy nhập điểm lý :");
        scanf("%f",&diemLy);
        printf("hãy nhập điểm hóa :");
        scanf("%f",&diemHoa);
        diemTrungBinh= (diemHoa+ diemLy*2+diemToan*3)/6;
        printf("Điểm trung bình :%.2f\n",diemTrungBinh);
    }
    //xét học lực
    if (diemTrungBinh>=9)
    {
        printf("Học lực xuất sắc");
    }else if (diemTrungBinh>=8)
    {
        printf("học lực giỏi");
    }else if (diemTrungBinh>=6.5)
    {
        printf("học lực Khá");
    }else if (diemTrungBinh>=5)
    {
        printf("học lực trung bình");
    }else if (diemTrungBinh>=3.5)
    {
        printf("học lực yếu");
    }else 
    {
        printf("học lực Kém");
    }
    
return 0;
}