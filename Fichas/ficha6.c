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
