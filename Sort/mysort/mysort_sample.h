#include <iostream>

void insertion_sort(int arr[], int n);
void selection_sort(int arr[], int n);
void bubble_sort(int arr[], int n);
void shell_sort(int arr[], int n);
void quick_sort(int arr[], int l, int r);

void merge_sort(int arr[], int l, int r);
void merge(int arr[], int l, int m, int r);
void heap_sort(int arr[], int n);


void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        std::swap(arr[i], arr[min]);
    }
}


void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}


void quick_sort(int arr[], int l, int r) {
    if (l < r) {
        int i = l, j = r;
        int pivot = arr[l];
        while (i < j) {
            while (i < j && arr[j] >= pivot) {
                j--;
            }
            if (i < j) {
                arr[i++] = arr[j];
            }
            while (i < j && arr[i] <= pivot) {
                i++;
            }
            if (i < j) {
                arr[j--] = arr[i];
            }
        }
        arr[i] = pivot;
        quick_sort(arr, l, i - 1);
        quick_sort(arr, i + 1, r);
    }
}


void shell_sort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}


void merge_sort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}


void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1; // 左长度
    int n2 = r - m;     // 右长度
    int L[n1], R[n2];   // 临时数组

    // 复制临时数组
    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    while (i < n1) {
        arr[k++] = L[i++];
    }
    while (j < n2) {
        arr[k++] = R[j++];
    }
}


void heap_sort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        if ((l < n) && (arr[l] > arr[largest])) {
            largest = l;
        }
        if ((r < n) && (arr[r] > arr[largest])) {
            largest = r;
        }
        if (largest != i) {
            std::swap(arr[i], arr[largest]);
        }
    }
    for (int i = n - 1; i > 0; i--) {
        std::swap(arr[0], arr[i]);
        for (int j = i / 2 - 1; j >= 0; j--) {
            int largest = j;
            int l = 2 * j + 1;
            int r = 2 * j + 2;
            if ((l < i) && (arr[l] > arr[largest])) {
                largest = l;
            }
            if ((r < i) && (arr[r] > arr[largest])) {
                largest = r;
            }
            if (largest != j) {
                std::swap(arr[j], arr[largest]);
            }
        }
    }
}
