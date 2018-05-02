#define MAX 100

typedef struct stack {
int sp; // aponta para a posicao a inserir na stack
int valores [MAX]; //conteudo da stack
} STACK;

typedef struct queue {
int inicio, tamanho;
int valores [MAX];
} QUEUE;
