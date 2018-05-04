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
  Lint ant=NULL;
  LInt h=l;
  while(l->prox!=NULL){
    ant=l;
    l=l->prox;
  }
  ant->prox=NULL;
  free(l);
  return h;
}

LInt snoc (LInt l, int x){
  LInt h=l;
  while(l!=NULL){
    l=l->prox;
  }
  l=cons(l,int x);
  return h;
}

LInt concat (LInt a, LInt b){
  LInt h=a;
  while (a!=NULL) {
    a=a->prox;
  }
  while(b!=NULL){
    a=cons(a,b->valor);
    b=b->prox;
  }
  return h;
}



}
