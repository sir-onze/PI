#include <stdio.h>
#include <stdlib.h>

typedef struct slist *LInt;

typedef struct slist {
int valor;
LInt prox;
} Nodo;

typedef struct aluno{
  char nome [60];
  int numero;
  int nota;
} *aluno;

typedef struct turma *Turma;

typedef struct turma Turma{
  Aluno aluno;
  Aluno prox;
}
