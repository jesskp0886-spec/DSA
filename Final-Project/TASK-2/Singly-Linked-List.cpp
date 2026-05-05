#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList(){
        head = NULL;
    }

    void insertNode(){
        int position;
        cout << "1. Beginning.." << endl;
        cout << "2. End.." << endl;
        cout << "Enter choice : ";
        cin >> position;

        if(position != 1 && position != 2){
            cout << "Invalid choice..!!!" << endl;
        }

        int val;
        cout << "Enter value : ";
        cin >> val;

        Node* newNode = new Node(val);

        if(position == 1){
            newNode->next = head;
            head = newNode;
            cout << "Inserted" << val << " at Beginning..!" << endl;
        } else {
            if(head == NULL){
                head == newNode;
            } else {
                Node* temp = head;
                while(temp->next != NULL){
                    temp = temp->next;
                }
                temp->next = newNode;
            }
            cout << "Inserted " << val << " at End..!" << endl;
        }
    }
    void deleteFromBeginning(){
        if(head == NULL){
            cout << "List is Empty..!!!!" << endl;
        }
        Node* temp = head;
        cout << "Deleted Element : " << temp->data << endl;
        head = head->next;
        delete temp;
    }

    void display() {
        if(head == NULL){
            cout << "List is Empty..!!!" << endl;
        }
        Node* temp = head;
        cout << "Linked List : ";
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    ~LinkedList(){
        Node* current = head;
        while(current != NULL){
            Node* next = current->next;
            delete current;
            current = next;
        }
        cout << "Memory Cleaned Successfully..!!" << endl;
    }
};

int main(){

    LinkedList list;
    int choice;

    do{
        cout << "--- Singly Linked List Menu ---" << endl;
        cout << "1. Insert Node.." << endl;
        cout << "2. Delete from Beginning.." << endl;
        cout << "3. Display List.." << endl;
        cout << "0. Exit.." << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch(choice) {
            case 1:
                list.insertNode();
                break;
            case 2:
                list.deleteFromBeginning();
                break;
            case 3:
                list.display();
                break;
            case 0:
                cout << "Program Ended..!!!!" << endl;
                break;
            default:
                cout << "Invalid choice.!!!!" << endl;
        }
    }while(choice != 0);
    
    return 0;
}