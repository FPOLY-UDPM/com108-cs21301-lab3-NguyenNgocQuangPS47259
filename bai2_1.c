/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
//  2.1 BẬC 1 
//  Phương trình có dạng ax + b = 0 
//  Input: nhập vào từ bàn phím giá trị của a, b 
//  Output: Hiển thị nghiệm của phương trình 
//  Biết rằng: 
//  Nếu a == 0,  
//   b == 0: Phương trình có vô số nghiệm 
//   b != 0: Phương trình vô nghiệm 
//  Ngược lại: Phương trình có nghiệm x = -b/a 
 
#include <stdio.h>

int main(){
 //khai báo biến
    float a=0,b=0;
    //nhập giá trị
    printf("xin nhập giá trị a :");
    scanf("%f",&a);
    printf("xin nhập giá trị b :");
    scanf("%f",&b);
    //Xác nhận điều kiện
    if (a==0)
    {
        if (b==0)
        {
           printf("phương trình vô số nghiệm");
        }else
        {
            printf("phương trình vô nghiệm");
        }
    }else
    {
        printf("giá trị của x = :%.2f",-b/a);
    }
    
    return 0;
}