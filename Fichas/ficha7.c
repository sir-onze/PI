#include <stdio.h>
#include <stdlib.h>
#include "ficha7.h"

// 1

LInt cons (LInt l, int x){
  LInt new;
  if (l!=NULL){
    new=malloc(sizeof(struct slist));
    new->valor = x;
    new->prox = l;
  }
}

LInt tail (LInt l){
  LInt prox;
  prox=l->prox;
  free(l);
  l=prox;
  return l;
}

LInt init (LInt l){

  
}
