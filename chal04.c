#include <stdio.h>
#include <math.h>

int main() {
int a,b,c,d;
float x1,x2;
printf("on a l\'eauqtion suivant:ax2+bx+c=0 \n");
printf("entrer la valeur de a :\n");
scanf("%d",&a);
printf("entrer la valeur de b :\n");
scanf("%d",&b);
printf("entrer la valeur de c :\n");
scanf("%d",&c);
d=pow(b,2)-4*a*c;
if (d>0){
    x1=(-b+sqrt(d))/2*a;
    x1=(-b-sqrt(d))/2*a;
printf("cette équation a 2 solutions:x1 et x2: %f %f \n",x1,x2);

} else if(d=0){
    x1=-b/2*a;
    printf("cette équation a une seule solution: %f",x1);
}else{
    printf("cette équation n\'a pas de solution \n");
}


    return 0;
}
