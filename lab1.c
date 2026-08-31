#include <stdio.h>
#include <string.h>


typedef struct lista NoLista;
typedef struct fila Fila;

struct lista{
	int val;
	NoLista* prox;
};

struct fila {
	int ini;
	int fim;
};

NoLista* fila_cria(void) {
	NoLista* lst = (NoLista*) malloc(sizeof(NoLista));
	lst = (float*)malloc(sizeof(float));
	return lst;
}

void armazena(NoLista* lst, Fila*f, char c) {
	
	NoLista* novo = (NoLista*) malloc(sizeof(NoLista));

	if (lst->prox == NULL) {

	}
}