#include<iostream>
using namespace std;

void InputArray(int arr[], int n){
    cout << "Enter element of Array :" << endl;
    for(int i = 0; i < n; i++){
        cout << "Index of["<< i <<"] :";
        cin >> arr[i];
    }
}

void bubbleSort(int arr[], int n, int order){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n - i -1; j++){
            if(order == 1 && arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            if(order == 2 && arr[j] < arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n, int order){
    for(int i = 0; i < n-1; i++){
        int selected = i;
        for(int j = i + 1; j < n; j++){
            if(order == 1 && arr[j] < arr[selected])
                selected = j;
            if(order == 2 && arr[j] > arr[selected])
                selected = j;
        }
        int temp = arr[i];
        arr[i] = arr[selected];
        arr[selected] = temp;
    }
}

void printArray(int arr[], int n, int order){
    if(order == 1)
        cout << "Sorted in Ascending Order :";
    else
        cout << "Sorted in descending Order :";

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main(){

    int n, method, order;
    cout << "Enter the size of Array :";
    cin >> n;

    int arr[n];

    InputArray(arr, n);

    cout << "Choose Sorting Order :" << endl;
    cout << "1. Ascending Order" << endl;
    cout << "2. Descending Order" << endl;
    cout << "Enter your choice :" ;
    cin >> order;


    cout << "Choose Sorting Method :" << endl;
    cout << "1. Bubble Sorting" << endl;
    cout << "2. Selection Sorting" << endl;
    cout << "Enter your choice :" ;
    cin >> method;

    if(method == 1)
        bubbleSort(arr,n,order);
    else
        selectionSort(arr,n,order);

    printArray(arr,n,order);

    return 0;
}