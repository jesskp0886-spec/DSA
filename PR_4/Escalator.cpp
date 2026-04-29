#include<iostream>
using namespace std;

class Stack{
    private:
        int arr[100];
        int top, cap;

    public:
        Stack(int size) {
            cap = size;
            top = -1;
        }

        void push(int value){
            if (top == cap -1){
                cout << "Stack is FULL..." << endl;
            }
            else{
                top++;
                arr[top] = value;
                cout << "Value pushed is successfully..."<< value << endl;
            }
        }

        void pop(){
            if(top == -1){
                cout << "Stack is Empty...."<< endl;
            }
            else{
                cout << "Element poped successfully..." << endl;
                top--;
            }
        }

        void display(){
            if (top == -1){
                cout << "Stack is empty.." << endl;
            }
            else{
                cout << "Display Stack : ";
                for (int i = top; i >= 0; i--){
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }

        void isEmpty(){
            if(top == -1){
                cout << "Stack is EMPTY..."<<endl;
            }
            else{
                cout << "Stack is NOT empty.." << endl;
            }
        }

        void isFull(){
            if(top == cap -1){
                cout << "Stack is FULL..."<<endl;
            }
            else{
                cout << "Stack is NOT Full.." << endl;
            }  
        }

        void topElement(){
            if(top == -1){
                cout << "Stack is EMPTY..."<<endl;
            }
            else{
                cout << "Top Element : " << arr[top] <<  endl;
            }
        }
};

int main(){
    int cap;
    int choice, value;

    cout << "~~~~~~  WELCOME  ~~~~~~"<< endl;
    cout << "~~~~~ Stack Operation ~~~~~" << endl;
    cout << endl;
    cout <<"Enter The Size of Stack : " ;
    cin >> cap;

    Stack s(cap);

    do{
        cout <<"1.Push an Element..." << endl;
        cout <<"2.Pop an Element..." << endl;
        cout <<"3.Display an Element..." << endl;
        cout <<"4.Check if stack is empty..." << endl;
        cout <<"5.Check if stack is full..." << endl;
        cout <<"6.Display top element..." << endl;
        cout <<"0. Exit..." << endl;
        cout << endl;
        cout <<"Enter Your Choice : " ;
        cin >> choice;

        switch (choice){
            case 1:
                cout << "Enter value to push :";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                s.isEmpty();
                break;
            case 5:
                s.isFull();
                break;
            case 6:
                s.topElement();
                break;
            case 0:
                cout << "Thank You For Visiting Stack Operation..!" << endl;
                break;
            default:
                cout <<"Invalid Choice.." << endl ;
        }

    }while (choice != 0);


    return 0;
}