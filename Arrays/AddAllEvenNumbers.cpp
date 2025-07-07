#include <iostream>
using namespace std;

// TODO: Implement this function
int sumEven(int arr[], int n) {
    // student implementation
    int sum =0;
    for(int i =0;i<n;i++){
        if(arr[i]%2==0){
            sum+=arr[i];
        }
    }
    return sum;
}

int main() {
    int mode;
    cout << "Enter 1 for manual input, 2 for test cases: ";
    cin >> mode;

    if (mode == 1) {
        int n;
        cout << "Enter array size: "<<endl;
        cin >> n;
        int arr[100];
        cout << "Enter elements: ";
        for(int i=0;i<n;i++)
            cin >> arr[i];
        int result = sumEven(arr, n);
        cout << "Sum of even numbers: " << result << endl;
    } else {
        struct TestCase {
            int arr[10];
            int n;
            int expected;
        } tests[] = {
            {{3,4,6,9,10},5,20},
            {{1,3,5,7,9},5,0},
            {{2,2,2,2},4,8},
            {{0,1,2,3,4},5,6},
            {{8},1,8}
        };
        for(int i=0;i<5;i++) {
            int result = sumEven(tests[i].arr, tests[i].n);
            if(result == tests[i].expected)
                cout << "Test " << i+1 << " passed " << endl;
            else
                cout << "Test " << i+1 << " failed. Got " << result
                     << ", expected " << tests[i].expected << endl;
        }
    }
    return 0;
}
