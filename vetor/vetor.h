typedef struct Vetor {
  int *vetor;
  int tamanho;
  int elementos;
} Vetor;

Vetor *criarVetor(int tamanho);
void destruirVetor(Vetor *vetor);
void adicionarElemento(Vetor *vetor, int elemento);
void removerElemento(Vetor *vetor, int posicao);
void exibirVetor(Vetor *vetor);
void exibirElemento(Vetor *vetor, int posicao);