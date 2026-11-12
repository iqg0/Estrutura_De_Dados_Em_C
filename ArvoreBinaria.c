#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"
struct NO{
    int info;
    struct NO *esq;
    struct NO *dir; 
};

ArvBin* cria_ArvBin(){
    ArvBin* raiz = (ArvBin*) malloc(sizeof(ArvBin));
    if(raiz != NULL)
        *raiz = NULL;
    return raiz;
}

void libera_NO(struct NO* no){
    if(no == NULL)
        return;
    libera_NO(no->esq);
    libera_NO(no->dir);
    free(no);
    no = NULL;
}

void libera_ArvBin(ArvBin* raiz){
    if(raiz == NULL)
        return;
    libera_NO(raiz);
    free(raiz);
}
int main(){
    ArvBin* raiz;
    ArvBin* raiz = cria_ArvBin();
    libera_ArvBin(raiz);
}