#include <stdlib.h>
#include <stdio.h>
#include "vetor.h"

Vetor *criarVetor(int tamanho) {
  Vetor *vetor = (Vetor *)malloc(sizeof(Vetor));
  vetor->vetor = (int *)malloc(tamanho * sizeof(int));
  vetor->tamanho = tamanho;
  vetor->elementos = 0;
  return vetor;
}

void destruirVetor(Vetor *vetor) {
  free(vetor->vetor);
  free(vetor);
}

void adicionarElemento(Vetor *vetor, int elemento) {
  if (vetor->elementos < vetor->tamanho) {
    vetor->vetor[vetor->elementos] = elemento;
    vetor->elementos++;
  }
}

void removerElemento(Vetor *vetor, int posicao) {
  if (posicao >= 0 && posicao < vetor->elementos) {
    for (int i = posicao; i < vetor->elementos - 1; i++) {
      vetor->vetor[i] = vetor->vetor[i + 1];
    }
    vetor->elementos--;
  }
}

void exibirVetor(Vetor *vetor) {
  printf("Vetor: [ ");
  for (int i = 0; i < vetor->elementos; i++) {
    printf("%d ", vetor->vetor[i]);
  }
  printf("]\n");
}

void exibirElemento(Vetor *vetor, int posicao) {
  if (posicao >= 0 && posicao < vetor->elementos) {
    printf("Elemento %d: %d\n", posicao, vetor->vetor[posicao]);
  }
}