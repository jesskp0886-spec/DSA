#include<iostream>
using namespace std;

void insertElement(int arr[],int s){
    cout << "Enter Array Element..." << endl;
    for(int i = 0; i < s; i++){
        cout << "Index of ["<< i <<"] is : ";
        cin >> arr[i];
    }
}

void merge(int arr[], int left, int mid, int right, int order){
    int n1 = mid - left + 1; // n1 = 3 - 0 + 1 // n1 = 4
    int n2 = right - mid;

    int temp1[n1], temp2[n2];

    for(int i = 0; i < n1; i++){
        temp1[i] = arr[left + i];
    }
    for(int j = 0; j < n2; j++){
        temp2[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;

    while(i < n1 && j < n2){
        if(order == 1){
            if(temp1[i] <= temp2[j]){
                arr[k] = temp1[i];
                i++;
            }
            else{
                arr[k] = temp2[j];
                j++;
            }
            k++;
        }
        else{
            if(temp1[i] >= temp2[j]){
                arr[k] = temp1[i];
                i++;
            }
            else{
                arr[k] = temp2[j];
                j++;
            }
            k++;
        }
    }
    while(i < n1){
        arr[k++] = temp1[i++];
    }
    while(j < n2){
        arr[k++] = temp2[j++];
    }
}

void mergeSort(int arr[],int low, int high, int order){
    if(low >= high){
        return;
    }
    int mid = (low + high) / 2;

    mergeSort(arr, low, mid, order);
    mergeSort(arr, mid + 1, high, order);
    merge(arr, low, mid, high, order);
}



int main(){

    int size;
    cout << "Enter the Size of Array : ";
    cin >> size;

    int arr[size];
    insertElement(arr, size);

    int even[size], odd[size];
    int e = 0, o = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    mergeSort(even, 0, e - 1, 1);
    mergeSort(odd, 0, o - 1, 2);


    cout << "Even Numbers (Asecnding) : ";
    for(int i = 0; i < e; i++)
        cout << even[i] << " ";
    cout << endl;

    cout << "Odd Numbers (Desecnding) : ";
    for(int i = 0; i < o; i++)
        cout << odd[i] << " ";
    cout << endl;

    cout << "Merge Array :" ;
    for(int i = 0; i < e; i++)
        cout << even[i] << " ";
    for(int i = 0; i < o; i++)
        cout << odd[i] << " ";
    cout << endl;

    return 0;
}