#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}



int main() {
    // Exemplo de arrays para teste                            ----- mudar entradas para arquivos que o professor enviou
    int arr1[] = {64, 25, 12, 22, 11};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    
    int arr2[] = {64, 25, 12, 22, 11};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    clock_t start, end;
    double cpu_time_used;

    // Selection Sort
    start = clock();
    selectionSort(arr1, n1);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Selection Sort:\n");
    printArray(arr1, n1);
    printf("Time: %f seconds\n\n", cpu_time_used);

    // Insertion Sort
    start = clock();
    insertionSort(arr2, n2);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Insertion Sort:\n");
    printArray(arr2, n2);
    printf("Time: %f seconds\n", cpu_time_used);

    return 0;
}

