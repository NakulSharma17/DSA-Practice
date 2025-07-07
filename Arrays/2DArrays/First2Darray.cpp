#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
#include <iostream>
#include <iomanip> // for setw
using namespace std;


void print2DArray(int arr[][100], int rows, int cols) {
    if (rows == 0 || cols == 0) {
        cout << "(Empty array)" << endl;
        return;
    }

    auto printRowDivider = [&]() {
        cout << "+";
        for (int c = 0; c < cols; ++c) {
            cout << "------+"; // 6 dashes to match setw(5)
        }
        cout << "\n";
    };

    for (int i = 0; i < rows; ++i) {
        printRowDivider();
        cout << "|";
        for (int j = 0; j < cols; ++j) {
            cout << setw(5) << arr[i][j] << " |";
        }
        cout << "\n";
    }
    printRowDivider(); // bottom border
}

int main() {
    int rows,cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[rows][100];
    for(int i = 0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
            
        }
    }
    for(int i =0;i<rows;i++){
        cout<<endl;
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
            
        }
    }

    cout<<"Your fr array"<<endl;
    print2DArray(arr,rows,cols);
    return 0;
}


