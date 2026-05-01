#include<iostream>
#include<map>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void insertAtHead(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtPosition(Node* &tail, Node* & head, int position, int d) {


    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}

bool isCircularList(Node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;
}

//Appeoach one to detect loop and find first node
bool detectLoop(Node * head)
    {
        Node * temp = head;

        map<Node * , bool > visited;

        while(temp != NULL)
            {
                // loop is present
                if(visited[temp] == true)
                    {
                        cout << "Loop present at : " << temp -> data << endl;
                        return true;
                    }
                visited[temp] = true;
                temp = temp -> next;
            }

        return false;
    }

//approach 2 to detect the loop 
Node * floydLoopDetection(Node * head)
    {

        if(head == NULL)
            return NULL;

        Node * slow = head;
        Node * fast = head;

        while(fast != NULL && slow != NULL)
            {
                fast = fast -> next;
                if(fast != NULL)
                    fast = fast -> next;

                slow = slow -> next;

                if(fast == slow)
                {
                    cout << "Loop meets at : " << slow -> data << endl;
                    return slow;
                }

            }

        return NULL;

    }

// find starting node o fthe linked list

Node * getStartingofLoop(Node * head)
    {
        if (head == NULL) return NULL;

        Node * slow = head;
        Node * intersection = floydLoopDetection(head);
        if(intersection == NULL) 
            return NULL;

        while(slow != intersection)
            {
                slow = slow -> next;
                intersection = intersection -> next;
            }
        return slow;

    }

void removeLoop(Node * head)
{
    if(head == NULL) 
        return ;

    Node * startingLoop = getStartingofLoop(head);
    if(startingLoop == NULL)
        return;
    Node * temp = startingLoop;

    while(temp -> next != startingLoop)
        {
            temp =  temp -> next;
        }

    temp -> next = NULL;
}


int main() {
    
    //created a new node
    Node* node1 = new Node(10);
    //cout << node1 -> data << endl;
   // cout << node1 -> next << endl;
    
    //head pointed to node1
    Node* head = node1; 
    Node* tail = node1;
    //print(head);

    insertAtTail(tail, 12);

    //print(head);
    
    insertAtTail(tail, 15);
    //print(head);

    insertAtPosition(tail,head, 4, 22);
    //print(head);    

    //cout << "head " << head -> data << endl;
    //cout << "tail " << tail -> data << endl;

    //deleteNode(4, head);






    /* LOOP Detection Approach 1*/
    /* SC : o(n) and tc o(n)*/
    // print(head);
    // tail -> next = head ->next;
 
    // cout << "head " << head -> data << endl;
    // cout << "tail " << tail -> data << endl;

    // if(detectLoop(head))
    //     cout << "Loop is present";
    // else
    //     cout <<"Loop is not present";



    /*Loop detection approach 2*/
    /* sc : o(n)  tc : o(n)*/

    print(head);
    tail -> next = head ->next;
 
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;


    if (floydLoopDetection(head) != NULL)
        cout <<"Loop is present " << endl;
    else 
    cout << "Loop is not present" << endl;


    Node * startingPoint = getStartingofLoop(head);
    if(startingPoint != NULL)
    cout << "Loop starts at : " << startingPoint -> data << endl;
    else
    cout << "No loop present" << endl;

    removeLoop(head);
    print(head);


    return 0;
}