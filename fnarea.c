#include<stdio.h>
#define PI , 3.14;
float areacircle(float r);
float areasq(float a);
float arearec(float l ,float b);
int main(){
    float r,a;
    printf("calculating the area of the fig.'s  :\n");
    printf("enter the side of the triangle\n");
    scanf("%f",&a );
    float square=areasq(a);
    printf("area of the squaer is:%f \n",square);

    printf("enter the radius of the circle:\n");
    scanf("%f",&r);
    float circle=areacircle(r);
    printf("area of the circle is :%f \n",circle);
    

    float l=3,b=109;
    printf("arae of the reactangle is:%f \n",arearec(l,b));
    return 0;
}

float areasq(float a){
    return (a*a);
}
float areacircle( float r){
    return(3.14*r*r);
}
float arearec(float l, float b){
    return(l*b);

}