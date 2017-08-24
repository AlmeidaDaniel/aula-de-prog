/*Autor: Daniel A. Bulhões;
Github: https://github.com/AlmeidaDaniel/aula-de-prog/blob/master/programacao-estruturada/exercicio-de-conversao.c

Programa de exercício da aula 03.
>> Conversão decimal -> base(2 a 16)
etapas:
1) o que o programa faz: conversão de um numero de base 10 para qualquer base de 2 a 16.
2) solicitar um numero decimal;
3) qual a base de destino:
4) Funçao: divisão sucessiva;
*/
#include<stdio.h>
#include<stdlib.h>
char resposta[16];
int indice = 0;
void Imprimir(int , int , int , int []);
void Converter(int , int );
int quociente;
char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int decimal, base;

int main(){

    printf("Informe um numero decimal: ");
    scanf("%d", &decimal);
    printf("\n\nInforme a base para a conversao: ");
    scanf("%d", &base);
    Converter(decimal,base);
}

void Converter(int num, int base){
    int resto[50];
    quociente = num;
    int inversor;
    int indice2 = 0;
    while (quociente > 0){
        resto[indice] = (quociente % base);
        quociente /= base;
        indice++;
    }
    Imprimir(decimal, base, quociente, resto);
return;
}

void Imprimir(int n1, int base, int quociente, int resto[50]){
    int inversor;
    int indice2 = 0;
        for( inversor= indice-1 ; inversor >= 0; inversor--){
        quociente = resto[inversor];
        resposta[(indice-1)-inversor] = hex[quociente];
    }
    printf("\n\nO numero %d convertido para a base %d eh: %s\n", n1, base, resposta);
return;
}
