#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

  // Resoluçao dos Exercicios

int minusculas (char s[]){
  int i=0;
  int c=0;
    while(s[i]!='\0'){
      if(isupper(s[i])){
        s[i]+=32;
        c++;
        printf("EX1:  Novo elemento %c e ja subtitui %d caracteres \n",s[i],c );
    }
      i++;
  }
return c;
}


int contalinhas (char s[]){
  int i=0;
  int c=0;
  while(s[i]!='\0'){
      if(s[i]=='\n')c++;
      i++;
  }
  printf("EX2:  A nossa string tem %d linhas \n",c);
  return c;
}


int contaPal (char s[]){
  int c=1;
  int i=0;
    while(s[i]!='\0'){
      if(isspace(s[i]) && s[i+1]!=' ' && s[i+1]!='\0') c++;
      i++;
  }
  printf("EX3:  A String tem %d palavras \n",c );
  return c;
}


int ocorre(char x, char s[]){
  int i=0;
    while (s[i]!='\0') {
      if (s[i]==x) return 1;
      i++;
    }
  return 0;
}


int procura (char *p, char *ps[], int N){
    int i=0;
    int j=0;
      while(j<N){
        if(ocorre(p[i],ps[j])==1){
          i++;
        }
        if(p[i]=='\0'){
          printf("EX4:  Encontrei\n");
          return 1;
        }
        if(ocorre(p[i],ps[j])==0){
          i=0;
          j++;
        }
        }
        printf("EX4:  Nao Encontrei\n");
        return 0;
      }


int zeros (int N, int M, int m [N][M]){
  int l = 0;
  int c = 0;
  int r = 0;
  for(l=0;l<N;l++){
    for(c=0;c<M;c++){
      if(m[l][c]==0) r++;
    }
  }
  printf("EX7:  Tem %d zeros\n",r);
  return r;
}

void identidade(int N, int m [N][N]){
  int l=0;
  int c=0;
  printf("EX8: \n");
  for(l=0;l<N;l++){
    for(c=0;c<N;c++){
      if(l==c) m[l][c]=1;
      else m[l][c]=0;
      printf("%d\n",m[l][c]);
    }
    printf("\n");
  }

}

void multV (int N, float t[N][N], float v[N], float r[N]){
int l=0;
int c=0;
for(l=0;l<N;l++){
  for(c=0;c<N;c++){
    r[l]=v[l]*t[l][c];
    printf("%f\n",r[l]);
  }

}
}

    // Chamada da main para testes


int main() {

    // Variaveis para execucao

    char s [] = {'a','b','A','X','C','x','e'};
    char y [] = "Ola o que faz \n Passo os dias a guiar \n mota";
    char z [] = "Tenho algum espaço ";
    char p [] = "Tudo bem";
    char* ps [3] = {"Ola","Tudo bem","comigo tambem"};
    int matriz[3][2];
    matriz[0][0]=0;matriz[0][1]=0;matriz[1][0]=0;matriz[1][1]=2;matriz[2][0]=0;matriz[2][1]=3;
    int id[3][3];
    // Chamada das funçoes
    minusculas(s);
    contalinhas(y);
    contaPal(z);
    procura(p,ps,3);
    zeros(3,2,matriz);
    identidade(3,id);
  return 0;
}
