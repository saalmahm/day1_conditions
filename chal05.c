#include <stdio.h>

int main() {
long long a, r;
 int v;
printf("entrer l\'anné : \n");
scanf("%lld",&a);
printf("si tu veut transformer en mois entrer \"1\" ,et si en jours entrer \"2\", et si en heures entrer \"3\" , et si en minutes entrer \"4\" , et si en secondes entrer \"5\" :\n");
scanf("%d",&v);
switch(v){
    case 1 :
    r=a*12;
    printf("%lld mois",r);
    break;
    case 2:
    r=a*365;
    printf("%lld jours",r);
    break;
    case 3:
    r=a*365*24;
    printf("%lld heures",r);
    break;
    case 4:
    r=a*356*1440;
    printf("%lld minutes",r);
    break;
    case 5:
    r=a*365*86400;
    printf("%lld secondes",r);
}
    return 0;
}
