#include <iostream>
#include "Sorts.h"

using namespace std;

int main()
{
    int *a;
    int size, option;

    cout << "Enter the size of your array: ";
    cin >> size;

    a = new int(size);

    for (int i = 0; i < size; i++){
        cout << "Array element #" << i+1 << ": ";
        cin >> a[i];
    }

    cout << "Enter the sort you would like to perform." << endl;
    cout << "Selection Sort:         1" << endl;
    cout << "Insertion Sort:         2" << endl;
    cout << "Reverse Insertion Sort: 3" << endl;
    cout << "Bubble Sort:            4" << endl;
    cout << "Cocktail Shaker Sort:   5" << endl;
    cout << "Merge Sort:             6" << endl;

    cout << endl << "Enter your option: ";
    cin >> option;

    switch (option){
    case 1:
        Sorts::SelectionSort(a, size);
        break;
    case 2:
        Sorts::InsertionSort(a, size);
        break;
    case 3:
        Sorts::InsertionSortR(a, size);
        break;
    case 4:
        Sorts::BubbleSort(a, size);
        break;
    case 5:
        Sorts::CocktailShakerSort(a, size);
        break;
    case 6:
        Sorts::MergeSort(a, 0, size-1, size);
        break;
    default:
        cout << "Sorry, that sort is not implemented." << endl;
    }

    cout << "Final array: ";
    for (int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    delete(a);

    return 0;
}
