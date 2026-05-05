#include<iostream>
using namespace std;

class Stack{ //~~~~~ Stack Class ~~~~~
    int* arr;
    int top;
    int cap;

    public:
        Stack(int size) { // Constructor
            cap = size;
            arr = new int[cap];
            top = -1;
        }

        void isFull(){
            if(top == cap - 1)
            cout << "Stack is Full..!!" << endl;
        }

        void isEmpty(){
            if(top == -1)
            cout << "Stack is Empty..!!" << endl;
        }

        void push(int val){
            if(top == cap - 1){
                cout << "Stack is Overflow..!!!  Can't insert" << val << endl;
            }else{
                top = top + 1;
                arr[top] = val;
                cout << val << "pushed into stack.. " << endl;
            }
        }

        void pop(){
            if(top == -1){
            cout << "Stack is Underflow..!!!"<< endl;
            } else {
                cout << "Popped from stack.." << endl;
                top = top - 1;
            }
        }
        void display(){
            if(top == -1) {
                cout << "Stack is Empty..!!!!"<< endl;
            } else {
                cout << "Stack elements : ";
                for(int i = top; i >= 0; i--){
                    cout << arr[i] << " ";
                }
            }
            cout << endl;
        }
        ~Stack(){
            delete[] arr;
        }
};


int main(){
    int size, choice, value;
    cout << "~~~ STACK IMPLEMENTATION USING ARRAY ~~~" << endl;
    cout << endl;

    cout << "Enter stack size : ";
    cin >> size;

    Stack s(size);

    do{
        cout <<"======= MENU ======="<< endl;
        cout << "1. Push element.."<< endl;
        cout << "2. Pop element.."<< endl;
        cout << "3. Display elements.."<< endl;
        cout << "0. Exit.."<< endl;
        cout << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter vslue to push : ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 0:
                cout << "Exiting the Program..." << endl;
                break;
            default:
                cout << "Invalid Choice..!!!!" << endl;
        }
    }while(choice != 0);
    return 0;
}