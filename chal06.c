#include <stdio.h>

int main() {
int n;
printf("entrer un nombre : \n");
scanf("%d",&n);
if(n>0){
    printf("ce nombre est positif");
} else if(n<0){
    printf("ce nombre est negatif");
}else{
    printf("ce nombre est null!");
}
    return 0;
}
