#include<iostream>
using namespace std;

void insertElement(int arr[], int s){
    cout << "Enter Array Element.." << endl;
    for(int i = 0; i < s; i++){
        cout << "Index of ["<< i <<"] is : ";
        cin >> arr[i];
    }
}

void InsertionSort(int s,int arr[]){
    for(int i = 1; i < s; i++){
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void printArray(int s,int arr[]){
    for(int j = 0; j < s; j++){
        cout << arr[j] << " ";
    }    
}

int main(){

    int size;
    cout << "Enter the size of Array :";
    cin >> size;

    int arr[size];
    insertElement(arr, size);
    cout << "Array Elemnt :";
    printArray(size,arr);
    cout << endl;
    InsertionSort(size,arr);
    cout << "Sorted Array :";
    printArray(size, arr);

    return 0;
}