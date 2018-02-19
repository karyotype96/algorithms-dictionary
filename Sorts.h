#ifndef SORTS_H
#define SORTS_H

#include <iostream>
#include <cmath>

class Sorts
{
    public:
        template <class T>
        static void swap(T &x, T &y){
            T tmp = x;
            x = y;
            y = tmp;
        }

        // a simple, inefficient sort.
        // for every element in the array, find the smallest element ahead of it,
        // and swap the two elements. rinse, repeat.
        static void SelectionSort(int *a, int size){
            int i, minimum;
            for (int j = 0; j < size; j++){
                minimum = j;
                for (i = j + 1; i < size; i++){
                    if (a[i] < a[minimum]){
                        minimum = i;
                    }
                }
                swap(a[minimum], a[j]);
                print_array(a, size);
            }
        }

        // another inefficient sort.
        // for every element in the array, slide it left until it's in the correct
        // position.
        static void InsertionSort(int *a, int size){ // left to right
            int i, key;
            for (int j = 1; j < size; j++){
                key = a[j];
                i = j - 1;
                while (i >= 0 && a[i] > key){
                    a[i+1] = a[i];
                    i--;
                }
                a[i+1] = key;
                print_array(a, size);
            }
        }

        // same as above, except in the other direction.
        static void InsertionSortR(int *a, int size){
            int i, key;
            for (int j = size - 2; j >= 0; j--){
                key = a[j];
                i = j + 1;
                while (i < size && a[i] < key){
                    a[i-1] = a[i];
                    i++;
                }
                a[i-1] = key;
                print_array(a, size);
            }
        }

        // an inefficient sort that runs through the list several times,
        // and each time it checks the two adjacent elements. if the first
        // element is larger than the second, they are swapped.
        static void BubbleSort(int *a, int size){
            for (int j = 0; j < size - 1; j++){
                for (int i = 0; i < size - 1; i++){
                    if (a[i] > a[i+1]){
                        swap(a[i], a[i+1]);
                    }
                }
                print_array(a, size);
            }
        }

        // an inefficient sort.
        // basically the same as bubble sort, except it moves back and forth
        // through the list.
        static void CocktailShakerSort(int *a, int size){
            for (int i = 0; i < size / 2; i++){
                for (int j = 0; j < size - 2; j++){
                    if (a[j] > a[j+1])
                        swap(a[j], a[j+1]);
                }
                for (int j = size - 2; j >= 0; j--){
                    if (a[j] > a[j+1])
                        swap(a[j], a[j+1]);
                }
                print_array(a, size);
            }
        }

        // an efficient sort.
        // recursively splits up the array, and then sets the elements
        // of each part in the correct order.
        static void MergeSort(int *a, int left, int right, int size){
            if (left < right){
                int middle = left + (right - left) / 2;
                MergeSort(a, left, middle, size);
                MergeSort(a, middle+1, right, size);
                merge_arr(a, left, middle, right);
            }
            print_array(a, size);
        }

    protected:

    private:
        static void merge_arr(int *a, int left, int middle, int right){
            int i, j, k = left;
            int n1 = middle - left + 1;
            int n2 = right - middle;

            int A1[n1], A2[n2];

            for (i = 0; i < n1; i++)
                A1[i] = a[left + i];
            for (j = 0; j < n2; j++)
                A2[j] = a[middle + 1 + j];

            i = j = 0;
            while (i < n1 && j < n2){
                if (A1[i] < A2[j])
                    a[k] = A1[i++];
                else
                    a[k] = A2[j++];
                k++;
            }

            while (i < n1)
                a[k++] = A1[i++];

            while (j < n2)
                a[k++] = A2[j++];
        }

        static int part(int *a, int low, int high){
            int pivot = a[high];

            int i = (low - 1);
            for (int j = low; j <= high-1; j++){
                if (a[j] <= pivot){
                    i++;
                    swap(a[i], a[j]);
                }
            }
            swap(a[i+1], a[high]);
            return (i + 1);
        }

        static void print_array(int *a, int size){
            std::cout << "Array: ";
            for (int i = 0; i < size; i++){
                std::cout << a[i] << " ";
            }
            std::cout << std::endl;
        }

};

#endif // SORTS_H
