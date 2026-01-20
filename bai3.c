/******************************************************************************
 * Họ và tên: [Nguyễn Ngọc Quang]
 * MSSV:      [Ps47259]
 * Lớp:       [com108 cs21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng

#include <stdio.h>

int main(){
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
return 0;
}