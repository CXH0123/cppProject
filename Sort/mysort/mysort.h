#pragma once
#include <iostream>
#include <bits/stdc++.h>
namespace mysort {
void quick_sort(int arr[], int l, int r);
void shell_sort(int arr[], int n);
}
void mysort::quick_sort(int arr[], int l, int r) {
    if (l >= r) {
        return;
    }
    int i = l, j = r;
    int p = arr[l];

    while (i < j) {
        while (i < j && arr[j] >= p) {
            j--;
        }
        if (i < j) {
            arr[i++] = arr[j];
        }
        while (i < j && arr[i] < p) {
            i++;
        }
        if (i < j) {
            arr[j++] = arr[i];
        }
    }
    arr[i] = p;
    quick_sort(arr, l, i - 1);
    quick_sort(arr, i + 1, r);
}


void mysort::shell_sort(int arr[], int n) {
    int gap = n / 2;

    for (int i = gap; i < n; i++) {
        for (int j = i; j - gap >= 0; j -= gap) {
            if (arr[j] < arr[j - gap]) {
                std::swap(arr[j], arr[j - gap]);
            }
        }
    }
}
