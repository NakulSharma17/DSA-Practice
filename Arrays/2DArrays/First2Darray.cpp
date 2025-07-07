#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[10][10];  // assuming max size 10x10 for safety

    // input
    cout << "Enter elements row-wise:\n";
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            cin >> arr[i][j];

    // output
    cout << "The matrix is:\n";
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}


