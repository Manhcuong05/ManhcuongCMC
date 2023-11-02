#include <stdio.h>

int main()
{
	//input:
	#define PI 3.14 //khai bao hang so PI, co gia tri 3.14
	float R=2.303;
	float area;
	//process
	area = PI*R*R;
	//output
	printf("dien tich cau hinh tron co ban kinh R=%.3f la %.3f", R, area);
	
	return 0;
}
