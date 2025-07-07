#include <iostream>
using namespace std;

// TODO: Implement this function
void countFrequency(int arr[], int n, int freq[10]) {
    // student implementation
    for(int i = 0;i<n;i++){
        int temp;
        temp=arr[i];
        freq[temp]+=1;
    }
}

bool check(int freq[], int expected[]) {
    for(int i=0;i<10;i++)
        if(freq[i] != expected[i])
            return false;
    return true;
}

int main() {
    int mode;
    cout << "Enter 1 for manual input, 2 for test cases: ";
    cin >> mode;

    if (mode == 1) {
        int n;
        cout << "Enter array size: ";
        cin >> n;
        int arr[100];
        cout << "Enter elements (0-9): ";
        for(int i=0;i<n;i++)
            cin >> arr[i];
        int freq[10] = {0};
        countFrequency(arr,n,freq);
        cout << "Frequencies:\n";
        for(int i=0;i<10;i++)
            if(freq[i])
                cout << i << ": " << freq[i] << endl;
    } else {
        struct TestCase {
            int arr[10];
            int n;
            int expected[10];
        } tests[] = {
            {{1,2,3,2,1,2},6,{0,2,3,1,0,0,0,0,0,0}},
            {{0,0,0,0},4,{4,0,0,0,0,0,0,0,0,0}},
            {{9,9,9,9,9},5,{0,0,0,0,0,0,0,0,0,5}},
            {{1,4,4,5,5,5},6,{0,1,0,0,2,3,0,0,0,0}},
            {{},0,{0,0,0,0,0,0,0,0,0,0}}
        };
        for(int i=0;i<5;i++) {
            int freq[10] = {0};
            countFrequency(tests[i].arr, tests[i].n, freq);
            if(check(freq, tests[i].expected))
                cout << "Test " << i+1 << " passed ✅" << endl;
            else {
                cout << "Test " << i+1 << " failed ❌" << endl;
                for(int j=0;j<10;j++)
                    if(freq[j]>0 || tests[i].expected[j]>0)
                        cout << j << ": got " << freq[j]
                             << ", expected " << tests[i].expected[j] << endl;
            }
        }
    }
    return 0;
}
