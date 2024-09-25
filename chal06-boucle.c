#include <stdio.h>

int main() {
int n;
for ( int i=0;i<=2;i++){
	printf("entrer un nombre : \n");
scanf("%d",&n);
if(n>0){

    printf("ce nombre est positif \n");
} else if(n<0){
    printf("ce nombre est negatif \n");
}else{
    printf("ce nombre est null!");
}
}
    return 0;
}
