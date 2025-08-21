#include <stdio.h>
#include <ctype.h>

int main(){
    // como vamos mexer com palavras e nao caracter vai ficar com uma vetor
    char palavra[100];
    // vamos contar quantas vogais e quantas consoantes temos
    int vogais = 0, conso = 0;
    printf("Digite uma palavra: ");
    scanf("%s", palavra); // %s quando é palavra
    for(int i = 0; palavra[i]; i++){
        char c = tolower(palavra[i]);
        
        if(c >= 'a' && c <= 'z'){
            if(c == 'a'|| c == 'e'|| c == 'i'||c == 'o'||c == 'u'){
                vogais++;
            } else{
                conso++;
            }
        }
        
    }
    printf("O numero de vogais é: %d\n", vogais);
    printf("O numero de consoantes é: %d\n", conso);
    return 0;

}
