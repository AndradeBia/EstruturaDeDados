#include <math.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;



void imprime(int vetor[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << vetor[i] << " ";
  cout << endl;
}

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int vetor[], int low, int high) {
  int pivot = vetor[high];
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (vetor[j] <= pivot) {
      i++;
      swap(&vetor[i], &vetor[j]);
    }
  }
  swap(&vetor[i + 1], &vetor[high]);
  return (i + 1);
}

void quickSort(int vetor[], int low, int high) {
  if (low < high) {
    int pi = partition(vetor, low, high);
    quickSort(vetor, low, pi - 1);
    quickSort(vetor, pi + 1, high);
  }
}


int main() {
  int vetor[] = {8, 7, 6, 1, 0, 9, 2};
  int n = sizeof(vetor) / sizeof(vetor[0]);
  quickSort(vetor, 0, n - 1);
   cout << "Vetor ordenado: \n";
  imprime(vetor, n);
}
