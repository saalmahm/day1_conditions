#include <stdio.h>

int main() {
float v1,v2,s;
printf("entrer la premier valeur:\n");
scanf("%f",&v1);
printf("entrer la deusieme valeur:\n");
scanf("%f",&v2);
s=v1+v2;
if (v1!=v2){
printf("%f",s);
} else{
    s=s*3;
    printf("%f",s);
}


    return 0;
}
