//João Lucas Altafini Batista
//Weslley Novelino Cavallaro


#include <stdio.h>
#include <math.h>

int main()
{
    float n, k, s=0, erro=0;
    
    printf("digite um valor para n\n");
    scanf("%f", &n);
    
    for(k=0;k<=n;k++){
        
        s = 8.0/((4*k+1) * (4*k+3)) + s;
        
    }
    
    if(s > M_PI){
        
        erro = s - M_PI;
        printf("A soma foi : %f \nO erro foi : %f", s, erro);
        
    }else{
        
        erro = ((s - M_PI)*-1); 
        printf("A soma foi : %f \nO erro foi : %f", s, erro);
        
    }
    
}