/*
** Função: TAD Vetor de Inteiros
** Autor: João Victor Barbosa Perazzo
** Data: 25/05/2024
** Observações:
*/

#include <locale.h>
#include "vetor/vetor.h"

int main() {
  setlocale(LC_ALL, "Portugese");

  Vetor *vetor = criarVetor(5);
  adicionarElemento(vetor, 10);
  exibirVetor(vetor);
  adicionarElemento(vetor, 20);
  exibirVetor(vetor);
  adicionarElemento(vetor, 30);
  exibirVetor(vetor);
  adicionarElemento(vetor, 40);
  exibirVetor(vetor);
  adicionarElemento(vetor, 50);
  exibirVetor(vetor);

  removerElemento(vetor, 2);
  exibirVetor(vetor);
  removerElemento(vetor, 0);
  exibirVetor(vetor);

  exibirElemento(vetor, 2);

  destruirVetor(vetor);

  return 0;
}