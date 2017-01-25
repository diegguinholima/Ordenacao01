#include "Sortings.hpp"
#include <utility>
#include <iostream>
 
using namespace std;
 
 
void merge(int vector[], int low, int mid, int high){
 
    int i, j ,k;
    int tmp[high+1]; // Criação de array temporarios
 
    // Copiando os dados para subarrays temporarios
    for (i = 0; i < high+1; ++i)
    {
        tmp[i] = vector[i];
    }

    i=low; j=mid+1; k=low;
 
    // Comparando e ordenando os elementos do subarrrays no array principal
    while (i <= mid && j <= high)
    {
        if (tmp[i] <= tmp[j])
        {
            vector[k] = tmp[i];
            i++;
        }
        else
        {
            vector[k] = tmp[j];
            j++;
        }
        k++;
    }
 
    // Copia dos elementos restantes do vetor L[]
    while (i <= mid)
    {
        vector[k] = tmp[i];
        i++;
        k++;
    }
 
    // Copia dos elementos restantes do vetor L[]
    while (j <= high)
    {
        vector[k] = tmp[j];
        j++;
        k++;
    }
}
 
void Sortings::MergeSort(int vector[], int low ,int high){
 
    if (low < high)
    {
        int mid = low + (high-low)/2;
        MergeSort(vector,low, mid);
        MergeSort(vector,(mid+1),high);
        merge(vector, low, mid, high);
    }
}