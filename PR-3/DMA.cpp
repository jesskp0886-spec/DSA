#include <iostream>
using namespace std;

class Linkedlist{
    public:
        struct Node{
            int data;
            Node* next;

            Node(int val){
                this->data = val;
                this->next = NULL;
            }
        };

        Node* Head;
        int count;

        Linkedlist(){
            this->Head = NULL;
            this->count = 0;
        }

        void insert_at_beginning(int data){
            Node* newNode = new Node(data);
            if (Head == NULL) {
                Head = newNode;
            }else{
                newNode->next = Head;
                Head = newNode;
            }
            count++;
            cout << "Element " << data << " inserted at beginning successfully..!" << endl;
        }

        void Search(int key) {
            if(Head == NULL) {
                cout << "List is Empty..!" << endl;
                return;
            }
            Node* ptr = Head;
            int position = 1;
            while (ptr != NULL){
                if (ptr->data == key) {
                    cout << "Element " << key << "found at position " << position << "!" << endl;
                    return;
                }
                ptr = ptr->next;
                position++;
            }
            cout << "Element " << key << "not found in the list " << endl;
        }

        void Delete_node(int key) {
            if(Head == NULL){
                cout << "List is Empty...!" << endl;
                return;
            }
            if(Head->data == key){
                Node* temp = Head;
                Head = Head->next;
                delete temp;
                temp = NULL;
                count--;
                cout << "Element " << key << " deleted successfully..!" << endl;
                return;
            }
            Node* ptr = Head;
            Node* prev = NULL;
            while(ptr != NULL && ptr->data != key){
                prev = ptr;
                ptr = ptr->next;
            }
            if(ptr == NULL){
                cout << "Element " << key << " not found in the list..!" << endl;
                return;
            }
            prev->next = ptr->next;
            delete ptr;
            ptr = NULL;
            count--;
            cout << "Element " << key << " deleted successfully..!" << endl;
        }

        void reverse(){
            if(Head == NULL || Head->next == NULL){
                cout << "Nothing to reverse..!" << endl;
                return;
            }
            Node* prev = NULL;
            Node* current = Head;
            Node* nextNode = NULL;
            while(current != NULL){
                nextNode = current->next;
                current->next = prev;
                prev = current;
                current = nextNode;
            }
            Head = prev;
            cout << "List reversed successfully..!" << endl;
        }

        void display(){
            if(Head == NULL){
                cout << "List is Empty.." << endl;
            }else {
                Node* ptr = Head;
                while(ptr != NULL) {
                    cout << ptr->data << " ";
                    ptr = ptr->next;
                }
                cout << endl;
            }
        }

        ~Linkedlist(){
            Node* current = Head;
            while(current != NULL){
                Node* next = current->next;
                delete current;
                current = next;
            }
            cout << "Memory Cleaned..!!!" << endl;
        }
    };


    int main(){
        Linkedlist list;
        int choice, data, key;

        do{
            cout << "=>=>=>=> Linked List Operations <=<=<=<=" << endl;
            cout << "1. Insert at Beginning.." << endl;
            cout << "2. Search Element.." << endl;
            cout << "3. Delete Node by Key.." << endl;
            cout << "4. Reverse List.." << endl;
            cout << "5. Display List.." << endl;
            cout << "0. Exit.." << endl;
            cout << "Enter Your Choice : ";
            cin >> choice;

            switch (choice){
                case 1:
                    cout << "Enter Element to Insert :";
                    cin >> data;
                    list.insert_at_beginning(data);
                    break;
                case 2:
                    cout << "Enter Element to Search :";
                    cin >> key;
                    list.Search(key);
                    break;
                case 3:
                    cout << "Enter Element to Delete :";
                    cin >> key;
                    list.Delete_node(key);
                    break;
                case 4:
                    list.reverse();
                    break;
                case 5:
                    list.display();
                    break;
                case 0:
                    cout << "Thnk you for visiting Linked List Operation..!!" << endl;
                    break;
                default:
                    cout << "Invalid Choice..!!!!" << endl;
            }
        }while (choice != 0);
    
    return 0;
}

