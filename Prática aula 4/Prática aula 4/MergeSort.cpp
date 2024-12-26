#include <math.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;


void merge(int vetor[], int p, int q, int r) {
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = vetor[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = vetor[q + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      vetor[k] = L[i];
      i++;
    } else {
      vetor[k] = M[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    vetor[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    vetor[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int vetor[], int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;

    mergeSort(vetor, l, m);
    mergeSort(vetor, m + 1, r);
    merge(vetor, l, m, r);
  }
}

void imprime(int vetor[], int size) {
  for (int i = 0; i < size; i++)
    cout << vetor[i] << " ";
  cout << endl;
}

int main() {
  int vetor[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(vetor) / sizeof(vetor[0]);

  mergeSort(vetor, 0, size - 1);

  cout << "Vetor arrumado: \n";
  imprime(vetor, size);
  return 0;
}
