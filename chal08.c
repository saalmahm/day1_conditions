#include <stdio.h>

int main() {
int j,m,a;
printf("Entrer la date format (jj/mm/aa) : \n");
scanf("%d %d %d",&j,&m,&a);
printf("%d-",j);
switch(m){
    case 1:
    printf("janvier"); break;
    case 2:
    printf("février");break;
    case 3:
    printf("mars");break;
    case 4:
    printf("avril");break;
    case 5:
    printf("mai");break;
    case 6:
    printf("Juin"); break;
    case 7:
    printf("Juillet"); break;
    case 8:
    printf("Août"); break;
    case 9:
    printf("Septembre"); break;
    case 10:
    printf("Octobre"); break;
    case 11:
    printf("Novembre"); break;
    case 12:
    printf("Décembre"); break;
    default: printf("Mois invalide");
}
printf("-%d",a);
    return 0;
}
