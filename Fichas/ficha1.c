#include <stdio.h>
#include <stdlib.h>

// Exercicios

void ex_1 (int* x, int* y){
  int aux;
  aux=*x;
  *x=*y;
  *y=aux;
  printf("x: %d y:%d\n",*x,*y);
}


void ex_2 (int v[], int i, int j){
  int aux=v[i];
  printf("v[%d] é %d e v[%d] é %d \n",i,v[i],j,v[j] );
  v[i]=v[j];
  v[j]=aux;
  printf("Agora v[%d] é %d e v[%d] é %d \n",i,v[i],j,v[j] );
}


int ex_3 (int v[], int N){
  int soma=0;

  while(N>0){
    soma+=v[--N];
  }

  printf("A soma marota é %d\n",soma );
  return soma;
}

int ex_4 (int v[], int N, int *m){

    if(N<0) return 1;
    int i;
    int maior=0;
    for(i=0;i<N;i++){
        if(v[i]>maior)maior=v[i];
    }
    *m=maior;
    printf("Sou o m que tem %d\n",*m );
    return 0;
}

void ex_5 (int q[], int N){
  int i=0;

  for(i=0;i<N;i++){
    q[i]=(i+1)*(i+1);
    printf("%d,",q[i]);
  }
  printf("\n");
}

int main() {

  //variaveis para execucao dos programas

  int x=3;
  int y=5;
  int v[5] = {1,3,11,3,69};
  int* m = malloc(sizeof(int));
  int* t = malloc(sizeof(int)*5);
  // chamada das funcoes

  ex_1(&x,&y);
  ex_2(v,2,4);
  ex_3(v,5);
  ex_4(v,5,m);
  ex_5(t,5);
  //Pascal é merda


  return 0;
}
