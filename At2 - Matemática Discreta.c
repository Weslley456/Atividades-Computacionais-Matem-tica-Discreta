//João Lucas Altafini Batista
//Weslley Novelino Cavallaro


#include <stdio.h>


int main() {
    long n, k,valorn, valork, operacao, resultado, op1, op2, op3;
    printf("Matemática\n");
    while(operacao !=4){
    printf("\nMenu\n");
    printf("\n 1. P(n) -Permutacao Simples\n 2. A(n,k) -Arranjo Simples\n 3. C(n,k) –Combinação Simples\n 4. Sair\n");
    scanf("%d",&operacao);
    
    switch (operacao)
    {
        
    case 1 :

    printf ("digitar um valor para n sendo inteiro e positivo\n");
    scanf ("%d",&n);

    for(op1=1;n>1;n=n-1){

        op1 = op1 * n;
        resultado = op1;
    
    }

    printf("\n%d",resultado);
    
    break;

    case 2 :

    printf ("digitar um valor para n sendo inteiro e positivo\n");
    scanf ("%d",&n);

    printf ("digitar um valor para k sendo inteiro , positivo e menor ou igual a n\n");
    scanf ("%d",&k);

    if(n>=k){


        valorn = n;
        for(op1=1;n>1;n=n-1){

        op1 = op1 * n;

    } 
    
        n = valorn;
        n = n-k;
        for(op2=1;n>1;n=n-1){

        op2 = op2 * n;

    }
        resultado = op1/op2;
        
        printf("resultado é: %d",resultado);
    }else{
        printf("k é maior que n, incorreto");
    }
    break;
    
    case 3 :
    printf ("digitar um valor para n sendo inteiro e positivo\n");
    scanf ("%d",&n);

    printf ("digitar um valor para k sendo inteiro , positivo e menor ou igual a n\n");
    scanf ("%d",&k);

    if(n>=k){
        
        valorn = n;
        for(op1=1;n>1;n=n-1){

        op1 = op1 * n;
    }
        valork = k;
        for(op2=1;k>1;k=k-1){

        op2 = op2 * k;
    }
        n = valorn;
        k = valork;
        n = n-k;
        for(op3=1;n>1;n=n-1){

        op3 = op3 * n;

    }
        resultado = op1 / (op2 * op3);
        printf("resultado é: %d",resultado);
        
    }else{
        printf("k é maior que n, incorreto");
    }
    
    break;
    }
    }
    printf("Você escolheu sair!");
}