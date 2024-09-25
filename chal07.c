#include <stdio.h>

int main() {
int a;
printf("entrer un alphabet : \n");
scanf("%c",&a);
if(a<=90 && a>=65){
    printf("L\'alphabet est majuscule \n");
}else{
    printf("L\'alphabet est minuscule \n");
}
    return 0;
}
