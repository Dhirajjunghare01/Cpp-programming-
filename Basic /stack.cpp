#include <iostream>
using namespace std;

#define MAX  5
int stack[MAX];
int top = -1;

void push(int Element){
    if(top == MAX-1){
        cout << "Stack overflow\n";
        return;
    }
    top = top + 1;
    stack[top] = Element;
    cout <<"Element" << Element <<"has been inserted.\n";

}

void display(){
    if(top == -1){
        cout << "Stack underflow\n";
        return;
    }
    cout << "Element are: \n";
    for(int i=top;i>=0;i--){
        cout << stack[i] << " ";
    }
}


void pop(){
    if(top == -1){
        cout << "Stack underflow\n";
        return;
    }
    int pop_value = stack[top];
    top--;
    cout << "Element" << pop_value <<" has been deleted.\n";
}

void peek(){
    if(top == -1){
        cout << "Stack underflow.\n";
        return;
    }
    cout << "Element at top is: " << stack[top] << "\n";
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    pop();
    pop();
    peek();

    display();
    return 0;
}
