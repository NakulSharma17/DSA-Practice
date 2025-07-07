#include <iostream>
using namespace std;

// TODO: Implement this function
int secondLargest(int arr[], int n) {
    int max=0;
    int second_max=0;
    for(int i =0;i<n;i++){
        if(arr[i]>max){
            second_max=max;
            max=arr[i];   
        }
    }
    return second_max;
}

int main() {
    int mode;
    cout << "Enter 1 for manual input, 2 for test cases: ";
    cin >> mode;

    if (mode == 1) {
        int n;
        cout << "Enter size of array: ";
        cin >> n;
        int arr[100];
        cout << "Enter elements: ";
        for(int i=0;i<n;i++)
            cin >> arr[i];
        int result = secondLargest(arr,n);
        cout << "Second largest: " << result << endl;
    } else {
        struct TestCase {
            int arr[10];
            int n;
            int expected;
        } tests[] = {
            {{5,17,3,9,12},5,12},
            {{1,2,3,4,5},5,4},
            {{9,7,5,3,1},5,7},
            {{42,42,41,40},4,41},
            {{100,99},2,99}
        };
        for(int i=0;i<5;i++) {
            int result = secondLargest(tests[i].arr, tests[i].n);
            if(result == tests[i].expected)
                cout << "Test " << i+1 << " passed ✅" << endl;
            else
                cout << "Test " << i+1 << " failed ❌. Got " << result
                     << ", expected " << tests[i].expected << endl;
        }
    }
    return 0;
}
