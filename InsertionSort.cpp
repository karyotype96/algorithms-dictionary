    void InsertionSortLtoR(int *a, int size){ // left to right
        int i, key;
        for (int j = 1; j < size; j++){
            key = a[j];
            i = j - 1;
            while (i >= 0 && a[i] > key){
                a[i+1] = a[i];
                i--;
            }
            a[i+1] = key;
        }
    }

    void InsertionSortRtoL(int *a, int size){ // right to left
        int i, key;
        for (int j = size - 2; j >= 0; j--){
            key = a[j];
            i = j + 1;
            while (i < size && a[i] < key){
                cout << "a[i-1] = " << a[i-1] << ", a[i] = " << a[i] << endl;
                a[i-1] = a[i];
                i++;
            }
            a[i-1] = key;
        }
    }
