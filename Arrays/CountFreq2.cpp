/*
Your task:
----------
Complete the function `printMoreThanN` below.

Example:
---------
Input:
    arr = [1, 2, 3, 1, 2, 1, 4], n = 7, threshold_N = 2

Output:
    1

(because only 1 occurs 3 times > 2)
*/

#include <iostream>
using namespace std;

// STUDENT to complete this
void printMoreThanN(int arr[], int size, int thresholdN) {
    int freq[1001]={0};
    for(int i =0;i<size;i++){
        int temp=arr[i];
        freq[temp]+=1;
    }
    // make another loop, for the freq
    bool FLAG=false; 
    for(int i =0;i<1001;i++){
        if(freq[i]>thresholdN){
            cout<<"This is it: "<<i<<endl;
            FLAG=true;
        }   
    }
    if(FLAG==false){
        cout<<"No such found"<<endl;
    }
}

void runTest(int arr[], int size, int thresholdN, const string& testName, const string& expected) {
    cout << "=== " << testName << " ===" << endl;
    cout << "Expected: " << expected << endl;
    cout << "Your output:" << endl;
    printMoreThanN(arr, size, thresholdN);
    cout << "====================" << endl;
}

int main() {
    int choice;
    cout << "Choose mode:\n1. Manual input\n2. Automatic tests\n";
    cin >> choice;

    if (choice == 1) {
        int n, thresholdN;
        cout << "Enter size of array: ";
        cin >> n;
        int arr[n];
        cout << "Enter array elements (1 to 100): ";
        for(int i=0;i<n;i++) cin >> arr[i];
        cout << "Enter N (threshold count): ";
        cin >> thresholdN;
        printMoreThanN(arr, n, thresholdN);
    } else {
        // automatic tests
        int test1[] = {1, 2, 3, 1, 2, 1, 4};
        int test2[] = {5,5,5,5,5,5};
        int test3[] = {1,2,3,4,5};
        int test4[] = {10,10,10,10,20,20,20};
        int test5[] = {99,100,99,100,99,100,99,100};

        runTest(test1, 7, 2, "Test 1", "1");
        runTest(test2, 6, 3, "Test 2", "5");
        runTest(test3, 5, 1, "Test 3", "No such elements");
        runTest(test4, 7, 3, "Test 4", "10");
        runTest(test5, 8, 4, "Test 5", "99 100");
    }
    return 0;
}