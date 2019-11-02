#include <iostream>
using namespace std;
// Essa funcao encontra o alfabeto de uma expressao

void alfabeto(char *texto,int tamanhoVetor){

    int repetidos;

    int i,j,tamanho;

    int vazio = 123;

    char *word,*palavra;

    repetidos = 0;

    palavra = new char[tamanhoVetor];

    // Aqui e vereficado as letras repetidas na expressao

    for(i=0; i<tamanho; i++){
        palavra[i] = texto[i];
    }


    for(i=0; i<tamanhoVetor; i++){
        for(j=i+1; j<=tamanhoVetor; j++){
            if(texto[i] == palavra[j]){
                repetidos++;
                palavra[j] = vazio;
            }
        }
    }

    tamanho = tamanhoVetor - repetidos;

    word = new char[tamanho];

    j = 0;

    // Aqui e colocado o alfabeto ja tratado em um vetor

    for(i=0; i<tamanho; i++){
        if(palavra[i] != vazio){
            word[i] = palavra[i];
            j++;
        }
    }

     for(j=0; j<tamanho; j++){
        cout << word[j];
     }

}
