#include <stdio.h>

int main(void) {
  int metros, decimetros, centimetros, milimetros, t = 0;
  printf("Digite um valo em metros: \n\n\t\t\t\t\t\t>>> ");
  scanf("%d", &metros);
  setbuf(stdin,NULL);
  printf("\n\n");
  printf("Para transformar em decimetros, centrimetros, e milimetros digite as opções abaixo: \n");
  printf("Digite [0] se for Decimetro!\n");
  printf("Digite [1] se for Centimetro!\n");
  printf("Digite [2] se for Milimetro!\n\n\t\t\t\t\t\t >>> ");
  scanf("%d", &t);
  setbuf(stdin,NULL);
  printf("\n\n");
  /*if(metros == 0)
    {
    t = metros * 10;
    printf("O valor de %d metros é %d Decimetros", metros, t);
    }else(metros == 1){
      t = metros * 100;
        printf(" Ovalor de %d metros é %d Centrimetros!", metros, t);
      }if{
        t = metros * 1000;
          printf("O valor de %d metros é %d Milimetros!", metros, t);
      }*/

      switch(t){

        case 0:
          decimetros = metros * 10;
            printf("O valor de %d metros é %d Decimetros!!", metros, decimetros);
            break;
        case 1:
         centimetros = metros * 100;
            printf("O Valor de %d metros é %d Centimetros!!", metros, centimetros);
            break;
        case 2:
          milimetros = metros * 1000;
            printf("O valor de %d metros é %d Milimetros!!\n\n", metros, milimetros);
            break;

      }
      printf("\n\n");
      printf("Digite qualquer tecla para continuar!");
    
  return 0;
  // conseguimos estruturar o problema de uas formas usando a instrução if e a instrução switch.
}