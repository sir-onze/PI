#include <stdio.h>
#include <stdlib.h>
#include "ficha6.h"

// 1
// stack vamos empilhando, o ultimo a entrar é o primeiro a sair (LIFO)

void initStack (STACK *s){
  s->sp=0;
}

int isEmptyS (STACK *s){
    if (s->sp==0) return 0;
    else return 1;
}

int push (STACK *s, int x){
  if(s->sp==MAX) return 1;
  else{
    valore[sp]=x;
    sp++;
  }
  return 0;
}

int pop (STACK *s, int *x){
  if(s->sp==0) return 1;
  else{
    sp--;
    *x=s->valores[sp];
  }
  return 0;
}

int top (STACK *s, int *x){
  if(s->sp==0) return 1;
  else{
    sp--;
    *x=s->valores[sp];
    sp++;
  }
  return 0;
}

// 2
// queue sai pela ordem de entrada, inserir no fim retirar no inico, como uma fila de supemercado

void initQueue (QUEUE *q){
    q->inicio = 0;
    q->tamnho = 0;
}

int isEmptyQ (QUEUE *q){
  if (tamanho==0) return 0;
  else return 1;
}

int enqueue (QUEUE *q, int x){
  int p;
  if(q->tamanho<MAX){
  p=q->tamanho+q->inicio;
  if(p>MAX) p=p-MAX;
  q->valores[p]=x;
  q->tamanho++;
  }
  else return 1;
  return 0;

}

int dequeue (QUEUE *q, int *x){
if(isEmptyQ(q)) return 1;
*x=q->valores[q->inicio];
q->inicio++;
q->tamanho++;
if(q->inicio==MAX) q->inicio = 0;
return 0;
}
