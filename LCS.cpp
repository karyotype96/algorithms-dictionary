#include <iostream>
#include <vector>

using namespace std;

typedef vector<char>    row;
typedef vector<row>     matrix;

void printlcs(matrix B, row X, int i, int j);

int main()
{
    row X(1, '0'); // each row contains the characters for the LCS operation
    row Y(1, '0');
    char next;

    cout << "Enter your first sequence. Type # when you are done." << endl;
    do {
        cin >> next;

        if (next != '#')
            X.push_back(next);

    } while (next != '#');

    cout << "Enter your second sequence. Type # when you are done." << endl;

    do {
        cin >> next;

        if (next != '#')
            Y.push_back(next);

    } while (next != '#');

    const int number_of_rows = Y.size();
    const int number_of_columns = X.size();

    matrix B, C;

    B.resize(number_of_rows);
    C.resize(number_of_rows);
    for (int i = 0; i < number_of_rows; i++){
        B[i].resize(number_of_columns);
        C[i].resize(number_of_columns);
    }
    
    // left column and top row are set to 0 by default
    for (int i = 0; i < number_of_columns; i++){
        B[0][i] = '0';
        C[0][i] = '0';
    }

    for (int i = 0; i < number_of_rows; i++){
        B[i][0] = '0';
        C[i][0] = '0';
    }
    
    // construct the matrix for the linked list cells
    for (int i = 1; i < number_of_rows; i++){
        for (int j = 1; j < number_of_columns; j++){
            if (X[j] == Y[i]){
                C[i][j] = C[i-1][j-1] + 1;
                B[i][j] = 'D';
            } else {
                if (C[i-1][j] >= C[i][j-1]){
                    C[i][j] = C[i-1][j];
                    B[i][j] = 'U';
                } else {
                    C[i][j] = C[i][j-1];
                    B[i][j] = 'L';
                }
            }
        }
    }

    cout << "Longest subsequence: ";
    printlcs(B, X, number_of_rows - 1, number_of_columns - 1);
    cout << endl;

    return 0;
}

void printlcs(matrix B, row X, int i, int j){
    if ((i == 0) || (j == 0))
        return;
    
    // recursively travel to where the cell points to
    if (B[i][j] == 'D'){            // note: only printed when the direction is diagonal
        printlcs(B, X, i-1, j-1);
        cout << X[j];
    }

    if (B[i][j] == 'U')
        printlcs(B, X, i-1, j);

    if (B[i][j] == 'L')
        printlcs(B, X, i, j-1);
}
