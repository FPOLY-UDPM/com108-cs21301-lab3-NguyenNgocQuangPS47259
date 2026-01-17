/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>
#include <math.h>
int main(){
    //khai báo lựa chọn
    char luaChon;
    printf("ta có các chức năng :\na)giải phương trình bậc 1\nb)giải phương trình bậc 2\nc) tính tiền điện\n xin hãy chọn chức năng :");
    scanf("%c",&luaChon);
    switch (luaChon)
    {
    case 'a':
printf("giải phương trình bậc 1 ax + b = 0\nư");
        // tính phương trình bậc 1
       //khai báo biến
    float a1=0,b1=0;
    //nhập giá trị
    printf("xin nhập giá trị a :");
    scanf("%f",&a1);
    printf("xin nhập giá trị b :");
    scanf("%f",&b1);
    //Xác nhận điều kiện
    if (a1==0)
    {
        if (b1==0)
        {
           printf("phương trình vô số nghiệm");
        }else if (b1!=0)
        {
            printf("phương trình vô nghiệm");
        }
    }else
    printf("giá trị của x = :%.2f",-b1/a1);
        break;
    case 'b':

    double a2, b2, c2;
    double delta, x1, x2;

    printf("giải phương trình bậc 2 ax^2 + bx +c = 0\n");
    // Nhập dữ liệu
    printf("Nhap a: ");
    scanf("%lf", &a2);
    printf("Nhap b: ");
    scanf("%lf", &b2);
    printf("Nhap c: ");
    scanf("%lf", &c2);

    // Xét điều kiện
    //a=0 giải phương trình bậc 1
    if (a2==0)
    {
        if (b2==0)
        {
            if (c2==0)
            {
                printf("phương trình vô số nghiệm");
            }else
            {
                printf("phương trình vô nghiệm1");
            } 
        }else
        {
            printf("giá trị phương trình = :%.2f",-c2/b2);
        }
    //a!= 0 giải phương trình bậc 2    
    }else
    {
        delta=b2*b2-4*a2*c2;
        if (delta<0)
        {
            printf("phương trình vô nghiệm2");
        }else if (delta==0)
        {
            printf("phương trình có nghiệm kép :%.2f",-b2/(2*a2));
        }else
        {
            printf("phương trình có 2 nghiệm\n nghiệm X1 = :%.2f",(-b2 + sqrt(delta)) / (2*a2));
            printf(" nghiệm X2 = :%.2f",(-b2 - sqrt(delta)) / (2*a2));
        }
    }
    break;
    case 'c' :
    printf("Tính tiền điện\n");
     // khai báo biến
    int dienTieuThu =0,tien=0;
    printf("hãy nhập số điện tiêu thụ hằng tháng :");
    scanf("%d",&dienTieuThu);
    //điều kiện giá điện
    if (dienTieuThu<=50)//bậc 1
    {
      tien=dienTieuThu*1678;
    }else if (dienTieuThu<=100)//bậc 2
    {
       tien=50*1678+(dienTieuThu-50)*1734;
    }else if (dienTieuThu<=200)//bậc 3
    {
       tien=50*1678+50*1734+(dienTieuThu-100)*2014;
    }else if (dienTieuThu<=300)//bậc 4
    {
       tien=50*1678+50*1734+100*2014+(dienTieuThu-200)*2536;
    }else if (dienTieuThu<=400)//bậc 5
    {
       tien=50*1678+50*1734+100*2014+100*2536+(dienTieuThu-300)*2834;
    }else //hết bậc
    {
       tien=50*1678+50*1734+100*2014+100*2536+100*2834+(dienTieuThu-400)*2927;
    }
//hiển thị giá tiền
printf("tiền cần phải đóng là :%d đồng",tien);
    break;
    default:
    printf("hãy nhập chức năng a,b hoặc c");
        break;
    }
return 0;
}