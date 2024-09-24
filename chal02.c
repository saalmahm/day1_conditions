#include <stdio.h>

int main() {
char v;
printf("entrer le caracter:\n");
scanf("%c",&v);
switch (v) {
  case 'a':
    printf("c'est voyelle");
    break;
  case 'o':
    printf("c'est voyelle");
    break;
      case 'i':
    printf("c'est voyelle");
    break;
      case 'e':
    printf("c'est voyelle");
    break;
      case 'y':
    printf("c'est voyelle");
    break;
      case 'u':
    printf("c'est voyelle");
    break;
  default:
    printf("pas voyelle");
}
    return 0;
}
