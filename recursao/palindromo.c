#include <string.h>
#include <stdio.h>

int palindromo(char str[], int inicio, int fim ){
    if(inicio >= fim){
        return 1;
    }
    
    if(str[inicio] != str[fim]){
        return 0;
    }
    
    return palindromo(str, inicio + 1, fim - 1);
}
int main(){
    char palavra[50];
    printf("Digite a palavra: ");
    scanf("%s", palavra);
    
    if(palindromo(palavra, 0, strlen(palavra) - 1)){
        printf("earara palindromo");
    
    }else{
        printf("Nao e palindromo");
    }
    
    return 0;
}