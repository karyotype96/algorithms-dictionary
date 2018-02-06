    void SelectionSort(int *a, int size){ // least to greatest
        int i, minimum;
        for (int j = 0; j < size; j++){
            minimum = j;
            for (i = j + 1; i < size; i++){
                if (a[i] < a[minimum]){
                    minimum = i;
                }
            }
            swap(a[minimum], a[j]);
        }
    }
