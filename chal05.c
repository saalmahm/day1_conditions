#include <stdio.h>

int main() {
int a,v,r;
printf("entrer l\'anné : \n");
scanf("%d",&a);
printf("si tu veut transformer en mois entrer \"1\" ,et si en jours entrer \"2\", et si en heures entrer \"3\" , et si en minutes entrer \"4\" , et si en secondes entrer \"5\" :\n");
scanf("%d",&v);
switch(v){
    case 1 :
    r=a*12;
    printf("%d mois",r);
    break;
    case 2:
    r=a*365;
    printf("%d jours",r);
    break;
    case 3:
    r=a*365*24;
    printf("%d heures",r);
    break;
    case 4:
    r=a*356*1440;
    printf("%d minutes",r);
    break;
    case 5:
    r=a*365*86400;
    printf("%d secondes",r);
}
    return 0;
}
