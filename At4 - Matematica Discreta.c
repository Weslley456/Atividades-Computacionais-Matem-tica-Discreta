#include <stdio.h>

void tamanho();

int main() {
    
    int l=0, c=0, operacao, linha, coluna, linicio, cinicio;
  
    printf("digite a quantidade de linhas da matriz de numero 1\n");
    scanf("%d",&l);
    printf("digite a quantidade de colunas da matriz de numero 1\n");
    scanf("%d",&c);
    int matriz1[l][c];
    
    linicio = l;
    cinicio = c;
  
    printf("digite a quantidade de linhas da matriz de numero 1\n");
    scanf("%d",&l);
    printf("digite a quantidade de colunas da matriz de numero 1\n");
    scanf("%d",&c);
    int matriz2[l][c];
  
    if((linicio == l) && (cinicio == c)){
  
    while(operacao !=4){
    printf("\nMenu\n");
    printf("\n 1. Preencher as matrizes\n 2. Adição\n 3. Subtração\n 4. Sair\n");
    printf ("\n");
    scanf("%d",&operacao);
    int matriz3[l][c];
    
    switch (operacao)
    {
        
    case 1 :
    
        printf ("\n");
        printf("Preenchendo a matriz 1\n");
        printf ("\n");
        
        for (linha=0; linha<l; linha++){
            for (coluna=0; coluna<c; coluna++) {
                scanf ("\n %d",&matriz1[linha][coluna]);
            }
        }
        
        printf ("\n");
        printf("A matriz 1 ficou: \n");
        printf ("\n");
        
        for (linha=0; linha<l; linha++){
            for (coluna=0; coluna<c; coluna++) {
                printf (" %d",matriz1[linha][coluna]);
            }
        printf ("\n"); 
        }
    
        printf ("\n");
        printf("Preenchendo a matriz 2\n");
        printf ("\n");
        
        for (linha=0; linha<l; linha++){
            for (coluna=0; coluna<c; coluna++) {
                scanf ("\n %d",&matriz2[linha][coluna]);
            }
        }
        
        printf ("\n");
        printf("A matriz 1 ficou: \n");
        printf ("\n");
        
        for (linha=0; linha<l; linha++){
            for (coluna=0; coluna<c; coluna++) {
                printf (" %d",matriz2[linha][coluna]);
            }
        printf ("\n"); 
        }
        
    break;
    
    case 2 :
    
        printf ("\n");
        printf("Você escolheu adição\n");
        printf ("\n");
    
        for (linha=0; linha<l; linha++){
            for (coluna=0; coluna<c; coluna++){
                
                matriz3[linha][coluna] = matriz1[linha][coluna] + matriz2[linha][coluna];
                
            }
        }
        
        printf("O resultado ficou: \n");
        printf ("\n");
        
        for (linha=0; linha<l; linha++){
            for (coluna=0; coluna<c; coluna++) {
                printf (" %d",matriz3[linha][coluna]);
            }
        printf ("\n"); 
        }
    
    break;
    
    case 3 :
         
        printf ("\n");
        printf("Você escolheu subtração\n");
        printf ("\n");
    
        for (linha=0; linha<l; linha++){
            for (coluna=0; coluna<c; coluna++){
                
                matriz3[linha][coluna] = matriz1[linha][coluna] - matriz2[linha][coluna];
                
            }
        }
        
        printf("O resultado ficou: \n");
        printf ("\n");
        
        for (linha=0; linha<l; linha++){
            for (coluna=0; coluna<c; coluna++) {
                printf (" %d",matriz3[linha][coluna]);
            }
        printf ("\n"); 
        }
    
    break;
    
    case 4 :
    
    printf("Você escolheu sair");
    
    break;
    
    
    }
    }
}else{
    
    printf("\n");
    printf("As ordens das matrizes não são correspondentes!\n");
    printf("Programa Encerrado...");
    
}
}