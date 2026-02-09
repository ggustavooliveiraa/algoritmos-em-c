#include <stdio.h>

int fatorial(int n){
    if(n == 0 || n ==1){
    printf("soma(%d) = 1\n", n);
    return 1;
    }
    
    printf("Fataorial(%d) = %d * Fataorial(%d)\n", n,n,n-1);
    
    int resultado = n * fatorial(n - 1);
    
    printf("retornando:%d * Fataorial(%d) = %d\n",n, n- 1, resultado);
    
    return resultado;
 
}
int main(){
    int num ;
    int res;
    
    printf("Digite o número para descobrir o fatorial: ");
    scanf("%d", &num);
    
    printf("Calculando Fatorial de %d\n\n", num);
    
    res = fatorial(num);
    
    printf("Resposta = %d\n", res);
    
    return 0;
}
