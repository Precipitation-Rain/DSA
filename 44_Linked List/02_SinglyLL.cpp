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
void insertAtHead(Node *  &head , int d)
    {

        Node * temp = new Node(d);
        temp -> next = head;
        head = temp;
        
    }


/* Insert At Tail */

void insertAtTail( Node * &tail , int d)
    {
        Node * temp = new Node(d);
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
                insertAtHead(head , d);
                return;
            }

        while(cnt < position-1)
            {
                temp = temp -> next;
                cnt++;
            }

        if(temp -> next == NULL)
            {
              insertAtTail(tail , d);  
              return;
            }

        node_to_insert -> next = temp -> next;
        temp -> next = node_to_insert;
        
    }



//Traverse

void print(Node * &head)
    {
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

    if(position == 1)
        {
            Node * temp = head;
            head = head -> next;
            temp -> next = NULL;
            delete temp;
        }

    else
        {

        Node * prev = NULL;
        Node * temp = head;

        int cnt = 1;

        while(cnt < position)
            {
                prev = temp;
                temp = temp -> next; 
                cnt++;
            }

        prev -> next = temp -> next;
        tail = prev;
        temp->next = NULL;
        delete temp;


        }
        
    }



int main()
    {

        //create a node
        Node * node1 = new Node(14);
        Node * head = node1;
        Node * tail = node1;
        
        print(head);
        cout << endl;

        insertAtHead(head , 13);
        print(head);
        cout << endl;

        insertAtTail( tail , 15);
        print(head);
        cout << endl;

        insertAtTail( tail , 16);
        print(head);
        cout << endl;

        insertAtTail( tail , 17);
        print(head);
        cout << endl;

        insertAtTail( tail , 18);
        print(head);
        cout << endl;

        insertAtPosition(head,19 , 4 , tail);
        print(head);
        cout << endl;

        insertAtPosition(head,12 , 1 , tail);
        print(head);
        cout << endl;

        insertAtPosition(head,21 , 9 , tail);
        print(head);
        cout << endl;



        deleteNode(head , 9 , tail);
        print(head);
        cout << endl;

        cout << "Head : " << head -> data <<" ";
        cout << "Tail : " << tail -> data;



    }