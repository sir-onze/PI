#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Exercicios


void insere (int v[], int N, int x){
  int i=0;
  int j;
  for(i=0;i<N;i++){
    if(x<v[i]){
      for(j=N;j>i;j--){
        v[j]=v[j-1];
      }
      v[i]=x;
      break;
    }
  }
}


void iSort (int v[], int N) {
  int i;
  for (i=0; (i<N); i++)
  insere (v, i, v[i]);
}


int maxInd (int v[], int N){
  int r=0;
  int i;
  int m=0;
  for (i=0; i<N ;i++) {
    if (v[i]>m) {
      m=v[i];
      r=i;
    }
  }
  printf("EX3: %d\n",r );
  return r;
}


void ordena_jabarda(int v[],int N){
  int m;
  int aux;
  int z=N;
  for (z = N; z > 0; z--) {
    m=maxInd(v,z);
    aux=v[z-1];
    v[z-1]=v[m];
    v[m]=aux;
  }
}


void bubble (int v[], int N) {
int i;
int aux;
for (i=1;(i<  N); i++)
if (v[i-1] > v[i]){
  aux=v[i-1];
  v[i-1]=v[i];
  v[i]=aux;
}
}


void bubbleSort (int v[], int N){
  int i;
  for(i=N;i>0;i--){
    bubble(v,i);
  }

}

void merge (int r [], int a[], int na, int b[],int nb){
  int i;
  int j;
  for (i = 0; i < na; i++) {
    r[i]=a[i];
  }
  for(j=0;j<nb;j++){
    insere(r,na+j,b[j]);
  }
}




// falta a quicksort

// Chamada da main para testes


int main() {
  // Variaveis
  int v[6] = {1,3,11,109,13,69};
  int s[5] = {1,3,11,3,69};
  int z[6] = {1,3,11,109,13,69};
  int a[6] = {1,3,11,109,13,69};
  int q[3] = {1,5,6};
  int y[5] = {12,34,234,54,73};
  int r[8];

  // Execução dos Exercicios
  iSort(s,5);
  insere(v,5,12);
  /*for(int i=0;i<5;i++){
    printf(" %d, ",s[i] );
  }*/
  maxInd(z,6);
  ordena_jabarda(z,6);
  for(int i=0;i<6;i++){
    printf(" %d, ",z[i] );
  }
  bubbleSort(a,6);
  puts("\nBublleSort:\n");
  for(int i=0;i<6;i++){
    printf(" %d, ",a[i] );
  }
  merge(r,q,3,y,5);
  puts("\nmerge:\n");
  for(int i=0;i<8;i++){
    printf(" %d, ",r[i] );
  }
  return 0;
}
