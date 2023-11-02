#include <stdio.h> 
int kiem_tra_hop_le(int ngay, int thang, int nam){
    if(ngay<1 || thang<1 || thang>12 ||nam<1){
    return 0;
    }
    int ngay_trong_thang;
    if(nam%4==0)
    ngay_trong_thang=29;
    else
    ngay_trong_thang=28;
    if(thang==4 || thang==6 || thang==9 || thang==11)
    ngay_trong_thang=30;
    else 
    ngay_trong_thang=31;
    if(ngay>ngay_trong_thang){
        return 0;
    }
    return 1;
}
int tinh_ngay_sau(int ngay, int thang, int nam){
    if(ngay<1 || thang<1 || thang>12 ||nam<1){
    return 0;
    }
    ngay++;
    if(thang==2){
       int ngay_trong_thang;
       if(nam%4==0)
       ngay_trong_thang=29;
       else
       ngay_trong_thang=28;
       if(ngay>ngay_trong_thang){
        ngay=1;
        thang++;
       }
    }
    if(thang==4 || thang==6 || thang==9 || thang==11){
      if(ngay>30){
        ngay=1;
        thang++;
      }
    }
    else {
        if(ngay>31){
            ngay=1;
            thang++;
        if(thang>12){
            thang=1;
            nam++;
           }
        }
    }
    printf("ngay sau do la:%d/%d/%d", ngay, thang, nam);
}
int main(){
    int ngay, thang, nam;
    printf("nhap ngay:");
    scanf("%d", &ngay);
    printf("nhap thang:");
    scanf("%d", &thang);
    printf("nhap nam:");
    scanf("%d", &nam);
     if (kiem_tra_hop_le(ngay, thang, nam)) {
        tinh_ngay_sau(ngay, thang, nam);
    } else {
        printf("Ngay khong hop le.\n");
    }
    return 0;          
}
