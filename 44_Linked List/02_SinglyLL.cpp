#include<iostream>
using namespace std;

class Node{

    public:

    int data;
    Node * next;

    Node(int data)
        {
            this -> data = data;
            this -> next = NULL;
        }

    // destructor
    ~Node()
        {
            int value = this -> data;

            if(this -> next != NULL)
                {
                    delete next;
                    this -> next = NULL;
                }
            cout << "Memroy freed with data : " << value << endl;
        }


};


//Insertion

/* Insert At Head */
void insertAtHead(Node *  &head , int d , Node* &tail)
    {

        Node * temp = new Node(d);

    // insertion while list is empty
    if(head == NULL)   // 🔥 empty list
    {
        head = temp;
        tail = temp;
        return;
    }
        
        temp -> next = head;
        head = temp;
        
    }


/* Insert At Tail */

void insertAtTail( Node * &head , int d , Node* &tail)
    {
        Node * temp = new Node(d);

    // 🔥 empty list case
    if(tail == NULL)
    {
        tail = temp;
        head = temp;
        return;
    }

        tail -> next = temp;
        tail = temp;
        
    }

// insert at middle position

void insertAtPosition( Node * & head , int d , int position ,  Node * &tail)
    {
        Node * node_to_insert = new Node(d);
        Node * temp = head;

        int cnt = 1;

        if(position == 1)
            {
                insertAtHead(head , d,tail);
                return;
            }

        while(cnt < position-1 && temp != NULL)
            {
                temp = temp -> next;
                cnt++;
            }
        
        // invalid position insertion
        if(temp == NULL)
        {
            cout << "Invalid position" << endl;
            return;
        }


        if(temp -> next == NULL)
            {
              insertAtTail(head , d , tail);  
              return;
            }

        node_to_insert -> next = temp -> next;
        temp -> next = node_to_insert;
        
    }



//Traverse

void print(Node * &head)
    {
        if(head == NULL)
            {
                cout << "List is empty ";
                return;
            }
        Node * temp = head;

        while(temp  != NULL)
            {
                cout << temp -> data << " ";
                temp = temp -> next;
            }

    }


// deletion


void deleteNode(Node * &head , int position , Node *&tail)
    {

        if(head == NULL)
        {
            cout << "List is empty, nothing to delete" << endl;
            return;
        }

    if(position == 1)
        {
            Node * temp = head;
            head = head -> next;

            // important fix
            if(head == NULL)   // list became empty
            {
                tail = NULL;
            }

            temp -> next = NULL;
            delete temp;
        }

    else
        {

        Node * prev = NULL;
        Node * temp = head;

        int cnt = 1;

        while(cnt < position && temp != NULL)
            {
                prev = temp;
                temp = temp -> next; 
                cnt++;
            }
        
        // handle invalid position deletion
        if(temp == NULL) 
        {
            cout << "Invalid position" << endl;
            return;
        }

        prev -> next = temp -> next;
        
        if(temp -> next == NULL)
            {
              tail = prev;  
            }

        temp->next = NULL;
        delete temp;


        }
        
    }



int main()
    {
        Node * head = NULL;
        Node * tail = NULL;

        insertAtHead(head, 10, tail);
        print(head);
        cout << endl;

        insertAtTail(head, 20, tail);
        insertAtTail(head, 30, tail);
        print(head);
        cout << endl;

        insertAtPosition(head, 25, 3, tail);
        print(head);
        cout << endl;

        insertAtPosition(head, 5, 1, tail);
        print(head);
        cout << endl;

        insertAtPosition(head, 40, 6, tail);
        print(head);
        cout << endl;

        cout << "Head : " << head -> data << "      ";
        cout << "Tail : " << tail -> data ;

    }