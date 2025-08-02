#include <stdio.h>
#include <stdlib.h>

/*Thr length & breath of a rectangle and radius of acircle are input through the keyboard.write a program to calculate the area & perimeter of the
 rectangle,and the area &circumference of the circle*/
//(32°F − 32) × 5/9 = 0°C


int main()
{
    float l,b,r_area,r_peri,r,c_area,c_cir;
    printf("\n enter the length and breath:");
    scanf("%f%f",&l,&b);
    printf("\n enter the radius:");
    scanf("%f",&r);
    r_area=l*b;
    r_peri=(2*(l+b));
    c_area=3.14*r*r;
    c_cir=2*3.14*r;
    printf("\n Area of the rectangle:%0.2f",r_area);
    printf("\n perimeter of the rectangle:%0.2f",r_peri);
    printf("\n area of the circle:%0.2f",c_area);
    printf("\n circumference of the circle:%0.2f",c_cir);







        return 0;
}
