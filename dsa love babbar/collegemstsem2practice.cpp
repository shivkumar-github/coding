// // /*
// // practicing for college mst
// // */

// // /*singly linked list - it is the most simple form of linked list where each node contains some data and also the pointer to the next node. i.e. it allows traversal of data in only one way
// //     ->> following are some basic linked list operation
// //         ->> traversal - accessing the nodes of list
// //         ->> insertion - adds a new node to an existing linked list ]
// //         ->> deletion ->> removes a node from an existing linked list
// //         ->> serach ->> finds a particular element in the linked list
// // */
// // #include <iostream>
// // using namespace std;

// // class node
// // {
// // public:
// //     node *next;
// //     int data;
// //     node(int data)
// //     {
// //         next = NULL;
// //         this->data = data;
// //     }
// //     ~node()
// //     {
// //         int data = this->data;
// //         this->next = NULL;
// //         cout << "node with data " << data << " is deleted from memory." << endl;
// //     }
// // };

// // void traversal(node *&head, node *&tail)
// // {
// //     node *ptr = head;
// //     while (ptr != NULL)
// //     {
// //         cout << ptr->data << " ";
// //         ptr = ptr->next;
// //     }
// //     cout << endl;
// // }

// // void insertAtHead(int data, node *&head, node *&tail)
// // { // both the tails and head is neccessary
// //     if (head == NULL)
// //     { // LL is empty
// //         node *nti = new node(data);
// //         head = tail = nti;
// //     }
// //     else
// //     { // non empty list
// //         node *nti = new node(data);
// //         nti->next = head;
// //         head = nti;
// //     }
// // }

// // void insertAtTail(int data, node *&head, node *&tail)
// // {
// //     if (head == NULL)
// //     {
// //         node *nti = new node(data);
// //         head = tail = nti;
// //     }
// //     else
// //     { // non empty list
// //         node *nti = new node(data);
// //         tail->next = nti;
// //         tail = nti;
// //     }
// // }

// // void insertAfterNode(int data, int prevdata,node*&head,node*&tail)
// // {
// //     node *prevNode = head;
// //     while (prevNode->data != prevdata)
// //     {
// //         prevNode = prevNode->next;
// //         if (prevNode==NULL)
// //         {
// //             cout<< "Please enter a valid data!" << endl;
// //             return;
// //         }
// //     }
// //     node* nodeToInsert = new node(data);
// //     nodeToInsert ->next = prevNode->next;
// //     prevNode->next = nodeToInsert;
// // }

// // void deleteNodeAfter(node *&head, node *&tail, int data)
// // {
// //     if (head == NULL)
// //     {
// //         cout << "Underflow!" << endl;
// //         return;
// //     }
// //     else
// //     { // middle or ending node
// //         node *prevNode = head;
// //         while (prevNode->next->data == data)
// //         {
// //             prevNode = prevNode->next;
// //         }
// //         node*  nodeToDelete = prevNode->next;
// //         prevNode->next = nodeToDelete->next;
// //         delete nodeToDelete;
// //     }
// // }

// // int main()
// // {
// //     node *head = new node(12);
// //     node *tail = head;
// //     insertAtHead(23, head, tail);
// //     insertAtHead(45, head, tail);
// //     insertAtTail(76, head, tail);
// //     insertAfterNode(100,23,head,tail);
// //     deleteNodeAfter(head,tail,23);
// //     deleteNodeAfter(head,tail,45);
// //     deleteNodeAfter(head,tail,12);
// //     deleteNodeAfter(head,tail,45);
// //     deleteNodeAfter()
// //     traversal(head, tail);

// //     return 0;
// // }

// // /*
// // PRACTICING ALGOS
// //     step 1 : INITIAlise set ptr = head
// //     step 2 : repeaet steps 3 and 4 while ptr != null
// //     step 3 : apply process(like display) to ptr->data
// //     step 4: set ptr = ptr-> next  // moving to next node by setting ptr to addresss of next node
// //     [END OF LOOP]
// //     step 5 : exit

// // */

// /*
// stack implementation using array
// */

// // #include <iostream>
// // using namespace std;

// // class Stack
// // {
// //     public:
// //     int size;
// //     int top;
// //     int *array;
// //     Stack(int size)
// //     {
// //         this->size = size;
// //         array = new int[this->size];
// //         top = -1;
// //     }
// //     void push(int data)
// //     {
// //         if (top == size - 1)
// //         {
// //             cout << "Stack overflow!" << endl;
// //             return;
// //         }
// //         else
// //         {
// //             array[++top] = data;
// //         }
// //     }

// //     void pop()
// //     {
// //         if (top <= -1)
// //         {
// //             cout << "Stack underflow!" << endl;
// //             return;
// //         }
// //         else
// //         {
// //             top--;
// //             return;
// //         }
// //     }

// //     int peek(){
// //         if (top >= 0)
// //         {
// //             return array[top];
// //         }
// //         else{
// //             cout<< "Stack underflow!" << endl;
// //             return -1;
// //         }
// //     }

// //     bool empty(){
// //         if (top <= -1)
// //         {
// //             return true;
// //         }
// //         else{
// //             return false;
// //         }
// //     }
// // };

// // int main()
// // {
// //     Stack s(5);
// //     s.push(23);
// //     s.push(90);
// //     s.push(92);
// //     s.push(92);
// //     s.push(92);
// //     s.pop();
// //     s.push(89);
// //     cout << s.peek() << endl;
// //     return 0;
// // }

// // /*
// // implementing queue
// // */

// // #include<iostream>
// // using namespace std;

// // /*
// // queue is a lifo data structure
// // */
// // class queue{
// //     public:
// //     int front;
// //     int rear;
// //     int size;
// //     int* array;
// //     queue(int size){
// //         this->size = size;
// //         rear = front = 0;
// //     }

// //     void enqueue(int data){
// //         if (rear == size-1)
// //         {
// //             cout<< "Queue is full!" << endl;
// //             return;
// //         }
// //         else{
// //             array[rear++] = data;
// //         }
// //         return;
// //     }

// //     int deque(){
// //         if (front == rear)
// //         {
// //             cout<< "queue is empty!" << endl;
// //             return -1;
// //         }
// //         else{
// //             return array[front++];
// //         }
// //     }

// //     b
// // };

// // int main(){

// // return 0;
// // }

// /*
// queue implementation
// */

// // #include <iostream>
// // using namespace std;

// // class queue
// // {
// // public:
// //     int rear;
// //     int front;
// //     int size;
// //     int *array;
// //     queue(int size)
// //     {
// //         this->size = size;
// //         front = 0;
// //         rear = 0;
// //         array = new int[this->size];
// //     }
// //     void enqueue(int data)
// //     {
// //         if (rear >= size)
// //         {
// //             cout << " overflow!" << endl;
// //             return;
// //         }
// //         else
// //         {
// //             array[rear++] = data;
// //         }
// //     }

// //     int deque()
// //     {
// //         if (rear == front)
// //         {
// //             cout << "Underflow!" << endl;
// //             return -1;
// //         }
// //         else
// //         {
// //             int ans = array[front];
// //             for (int i = 0; i < rear - 1; i++)
// //             {
// //                 array[i] = array[i + 1];
// //             }
// //             rear--;
// //             return ans;
// //         }
// //     }

// //     void printqueue()
// //     {
// //         for (int i = front; i < rear; i++)
// //         {
// //             cout << array[i] << " ";
// //         }
// //         cout << endl;
// //     }
// // };

// // int main()
// // {
// //     queue q(7);
// //     q.enqueue(3);
// //     // q.printqueue();
// //     q.enqueue(34);
// //     q.enqueue(74);
// //     q.enqueue(4);
// //     // q.printqueue();
// //     cout << q.deque() << endl;
// //     cout << q.deque() << endl;
// //     cout << q.deque() << endl;
// //     cout << q.deque() << endl;
// //     cout << q.deque() << endl;
// //     // q.printqueue();

// //     return 0;
// // }

// /*
// stack implementation
// */

// #include<iostream>
// using namespace std;

// stack{
//     public:
//     int top;
//     int* array;
//     int size;
//     stack(int size){
//         this-> size = size;
//         array = new int[size];
//         top = -1;
//     }

//     void push(int data){
//         //first check availibility of space
//         if (top >= size -1)
//         {
//             cout << "stack overflow!" << endl;
//             return;
//         }
//         else{
//             array[++top] = data;
//         }
//     }

//     int pop(){
//         if (top <= -1)
//         {
//             cout << "stack underflow!" << endl;
//             return -1;
//         }
//         else{
//             return array[top--];
//         }
//     }

//     int peek(){
//         if (top <= -1)
//         {
//             cout << "stack underflow!" << endl;
//             return -1;
//         }
//         else{
//             return array[top];
//         }
//     }
// };

// int main(){

// return 0;
// }
// // balance paranthesis

// /*
// balanced paranthesis
// */

// #include <iostream>
// #include <stack>
// using namespace std;

// bool balanced(string exp)
// {
//     stack<char> st;
//     for (int i = 0; i < exp.size(); i++)
//     {
//         if (st.empty())
//         {
//             st.push(exp[i]);
//         }
//         else if (st.top() == '{' && exp[i] == '}' && st.top() == '(' && exp[i] == ')' && st.top() == '[' && exp[i] == ']')
//         {
//             st.pop();
//         }
//         else
//         {
//             st.push(exp[i]);
//         }
//     }
//     return st.empty();
// }

// int main()
// {
//     string exp = "[()]{}{[()()]()}";
//     cout << balanced(exp) << endl;

//     return 0;
// }

/*

*/

#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

bool Digit(char ch)
{
    if (ch >= '0' && ch <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

double performOperation(double a, double b, char op)
{
    if (op == '+')
        return a + b;
    else if (op == '-')
        return a - b;

    else if (op == '*')
        return a * b;

    else if (op == '/')
    {
        if (b == 0)
            cout << "Can not devide by 0!" << endl;

        else
            return a / b;
    }
    else if (op == '^')
        return pow(a, b);

    else
    {
        cout << "invalid operator!" << endl;
        return 0;
    }
}

double postfixEvalution(string exp)
{
    int len = exp.length();
    if (len == 0 || len == 2)
    {
        cout << "Enter a valid postfix expression." << endl;
        return -1;
    }

    if (len == 1 && Digit(exp[0]))
        return (exp[0] - '0');

    stack<double> st;
    for (int i = 0; i < exp.size(); i++)
    {
        char ch = exp[i];
        if (Digit(ch))
        {
            st.push(ch - '0');
        }
        else if (isOperator(ch))
        {
            double operator2 = st.top();
            st.pop();
            double operator1 = st.top();
            st.pop();
            ch = exp[i];
            st.push(performOperation(operator1, operator2, ch));
        }
        else
        {
            cout << "Enter a valid postfix expression!" << endl;
            return -1;
        }
    }
    return st.top();
}

double prefixEvalution(string exp)
{
    int len = exp.length();
    stack<double> operands;
    for (int i = len - 1; i >= 0; i++)
    {
        char ch = exp[i];
        if (Digit(ch))
        {
            operands.push(ch);
        }
        else if (isOperator(ch))
        {
            double operand1 = operands.top();
            operands.pop();
            double operand2 = operands.top();
            operands.pop();
            double ans = performOpr(oprnd1, oprnd2, exp[i]);
        }
        else{
            cout << "Invalid Input" << endl;
            return -1;
        }
    }
    return operands.top();
}

double infixEvaluation(string exp){
    
}

int main()
{
    string postfix = "23+74-*";
    cout << "In postfix " << postfix << ": " << postfixEvalution(postfix) << endl;

    return 0;
}