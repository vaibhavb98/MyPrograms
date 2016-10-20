#include<iostream>

using std::cout;
using std::cin;
using std::endl;

struct Node {
    int data;

    Node* next;

};

Node* start = NULL;

Node* temp = NULL;

Node* next = NULL;

int size = 0;

void initializeList() {

    int i;

    next = new Node;

    cout << "Enter " << 1 << " element : ";

    cin >> next->data;

    temp = next;

    start = next;

    for (i = 2; i < size; i++) {

        next = new Node;

        cout << "Enter " << i << " element : ";

        cin >> next->data;

        temp->next = next;

        temp = temp->next;

    }

    next = new Node;

    int item;

    cout << "Enter " << i << " element : ";

    cin >> item;

    next->data = item;

    temp->next = next;

    next->next = NULL;

}

void printList() {

    Node* element = start;

    while (element != NULL) {

        cout << element->data << "\n";

        element = element->next;

    }

    cout << "NULL";

    cout << endl;

}

void insertInList() {

    int position, item, count = 0;

    cout << "Enter Position : ";

    cin >> position;

    if (position < 1 || position > size + 1) {

        cout << "Position out of bounds.";

        return;

    }

    cout << "Enter Item : ";

    cin >> item;

    Node* newNode = new Node;

    newNode->data = item;

    newNode->next = NULL;

    if (position == 1) {

        newNode->next = start;

        start = newNode;

        ++size;

    } else {

        Node* current = start;

        for (int i = 1; i < position - 1; i++) {

            current = current->next;

        }

        newNode->next = current->next;

        current->next = newNode;

        ++size;

    }

}

void deleteFromList(int n) {

    temp = new Node;
    
    temp = start;
    
    if(n == 1){
        
        start = temp->next;
        
        delete temp;
        
        --size;
        
    }else{
        
        for(int i = 0 ; i < n-2 ; i++ ){
            
            temp = temp->next;
            
        }
        
        Node* temp2 = new Node;
        
        temp2 = temp->next;
        
        temp->next = temp2->next;
        
        delete temp2;
        
        --size;
        
    }

}

void menu() {

    cout << "Choose from following operations : \n" <<
            "1-->Print List.\n" <<
            "2-->Insert element on given position.\n" <<
            "3-->Get size of list.\n" <<
            "4-->Delete nth element from List.\n" <<
            "0-->Exit program.\n" <<
            "Submit your choice (0 - 4) : ";

    int choice;

    cin >> choice;

    switch (choice) {

        case 0: exit(0);
            break;

        case 1: printList();
            menu();
            break;

        case 2: insertInList();
            printList();
            menu();
            break;

        case 3: cout << "Size of List is : " << size << endl;
            menu();
            break;

        case 4: int n;
            printList();
            cout << "Enter position of the item to delete : ";
            cin >> n;
            deleteFromList(n);
            printList();
            menu();
            break;

        default: cout << "Invalid Choice." << endl;
            menu();
            break;

    }

}

int main() {

    int item;

    cout << "Enter Initial size : " << endl;

    cin >> size;

    initializeList();

    menu();

    return 0;

}
