#include <stdio.h>
int main(){
float a,b,x;
scanf("%f%f",&a, &b);
if (a==0 && b==0) printf("VO SO NGHIEM");
else if(a==0 && b!=0) printf("VO NGHIEM");
else if (a!=0 && b!=0) {
x = -b/a;
printf("x = %.1f", x); 
}
return 0;
}
