// alunos: 
//Weslley Novelino Cavallaro
//João Lucas Altafini Batista


#include <stdio.h>
int main (void)
{
  int operacao, result, p, q; 
  printf ("MENU\n");
  printf ("1. ~p\n");
  printf ("2. p ^ q\n");
  printf ("3. p v q\n");
  printf ("4. p _v q\n");
  printf ("5. p -> q\n");
  printf ("6. p <-> q\n\n");
  scanf("%d", &operacao);
  
  switch (operacao)
  {
    case 1 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d",&p);
    result = !p;
    printf("%d",result);
    break;

    case 2 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d",&p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d",&q);
    result = p && q;
    printf("%d", result);
    break;

    case 3 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d",&p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d",&q);
    result = p || q;
    printf("%d", result);
    break;

    case 4 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d",&p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d",&q);
    result = !((!p || q) && (!q || p));
    printf("%d", result);
    break;

    case 5 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d",&p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d",&q);
    result = (!p) || q;
    printf("%d", result);
    break;

    case 6 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d",&p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso:\n");
    scanf("%d",&q);
    result = (!p || q) && (!q || p);
    printf("%d", result);
    break;
    default :
    printf ("Invalido!\n");
  } getch();
  return 0;
}