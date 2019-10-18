#include <iostream>

using namespace std;

struct Node {

    int data;
    Node* next;

    Node(int x): data(x){}

};



class LList {
Node* first;
Node* last;
size_t size;

public:

    LList(): first(nullptr), last(nullptr), size(0){}

    LList(Node& x){
        first = &x;
        last = &x;
        size = 1;
    }

    void push_back(int data = 0){

        Node* new_node = new Node(data);
        if(first == nullptr){
            first = new_node;
            last =  new_node;
        } else {
            last -> next = new_node;
            last = new_node;
            new_node->next =  nullptr;
        }
        size++;
    }

    void push_at(size_t pos, int data = 0){
        if(pos >= size){
            Node* new_node = new Node(data);
            if(first == nullptr){
                first = new_node;
                last =  new_node;
            } else {
                last -> next = new_node;
                last = new_node;
                new_node->next =  nullptr;
            }
            size++;
            return;
        }
        if(pos = 0){
            Node* new_node = new Node(data);
            new_node->next =  first;
            first = new_node;
            size++;
            return;
        }
        Node* current = first;
        pos--;
        while (pos != 1){
            current = first->next;
            pos--;
        }

        Node* new_node = new Node(data);
        new_node-> next = current->next;
        current->next = new_node;
        return;
    }


    int operator[] (size_t n)const {
        if(first == nullptr){
            cout << "list is empty" << endl;
            return 0;
        }
        if(n == 0 && first != nullptr){
            return first->data;
        }

        Node* current = first;
        while (current->next != nullptr && n > 0){
            n--;
            current = current->next;
        }

        return current->data;
    }

    void erase_at(){}

    
};









int main() {

    LList x;
    x.push_back(24);
        x.push_back(3);

    x.push_back(4);

    x.push_back(5);

    x.push_back(6);

    x.push_back(7);

    cout << x[10];
    return 0;
}