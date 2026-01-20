/******************************************************************************
 * Họ và tên: [Nguyễn Ngọc Quang]
 * MSSV:      [Ps47259]
 * Lớp:       [com108 cs21301]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
// 2.2 BẬC 2 
// Phương trình có dạng: ax2 + bx + c = 0 
// Input: Nhập vào từ bàn phím: a, b, c 
// Output: Nghiệm của phương trình 
// Biết rằng: 
// Nếu a == 0, phương trình thành bx + c = 0  
// Ngược lại nếu a != 0 
//  Tính delta 
//  Nếu delta < 0: Phương trình vô nghiệm 
//  Nếu delta == 0: Phương trình có nghiệm kép x = -b/(2*a) 
//  Nếu delta > 0: Phương trình có 2 nghiệm riêng biệt  
// o X1 = (-b + căn(delta))/(2*a) 
// o X2 = (-b – căn(delta))/(2*a)

#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c;
    double delta, x1, x2;

    // Nhập dữ liệu
    printf("Nhap a: ");
    scanf("%lf", &a);
    printf("Nhap b: ");
    scanf("%lf", &b);
    printf("Nhap c: ");
    scanf("%lf", &c);

    // Xét điều kiện
    //a=0 giải phương trình bậc 1
    if (a==0)
    {
        if (b==0)
        {
            if (c==0)
            {
                printf("phương trình vô số nghiệm");
            }else
            {
                printf("phương trình vô nghiệm1");
            } 
        }else
        {
            printf("giá trị phương trình = :%.2f",-c/b);
        }
    //a!= 0 giải phương trình bậc 2    
    }else
    {
        delta=b*b-4*a*c;
        if (delta<0)
        {
            printf("phương trình vô nghiệm2");
        }else if (delta==0)
        {
            printf("phương trình có nghiệm kép :%.2f",-b/(2*a));
        }else
        {
            printf("phương trình có 2 nghiệm\n nghiệm X1 = :%.2f",(-b + sqrt(delta)) / (2*a));
            printf(" nghiệm X2 = :%.2f",(-b - sqrt(delta)) / (2*a));
        }
        
        
    }
    
return 0;
}
