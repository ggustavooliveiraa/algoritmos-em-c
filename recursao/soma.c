#include <stdio.h>

int soma(int n){
    if(n == 0 || n ==1){
    printf("soma(%d) = 1\n", n);
    return 1;
    }
    
    printf("soma(%d) = %d + soma(%d)\n", n,n,n-1);
    
    int resultado = n + soma(n - 1);
    
    printf("retornando:%d + soma(%d) = %d\n",n, n- 1, resultado);
    
    return resultado;
 
}
int main(){
    int num ;
    int res;
    
    printf("Digite o numero para descobrir a soma: ");
    scanf("%d", &num);
    
    printf("Calculando Soma de %d\n\n", num);
    
    res = soma(num);
    
    printf("Resposta = %d\n", res);
    
    return 0;
}
