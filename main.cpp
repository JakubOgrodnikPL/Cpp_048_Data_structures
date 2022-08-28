#include <iostream>
#include <windows.h>
using namespace std;
int data[6]; // Data sored in the stack
int s_size; // Size of the stack

void show_stack() // Function that shows the stack
{
    system("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    cout<<endl;
    cout<<"----------------"<<endl;
    cout<<"STACK CONTENT:"<<endl;
    cout<<"----------------"<<endl;
    for (int i=s_size; i>=1; i--)
    {
        cout<<data[i]<<endl;
    }
    if (s_size==0)
    {
        cout<<"Stack is empty"<<endl;
    }
    cout << "----------------"<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
}

void push() // Function that adds a number on the top of the stack
{
    if (s_size>=5)
    {
        cout << "The stack is full";
        Sleep(1000);
    }
    else
    {
        cout<<endl<< "PUSH (what number add on top of the stack): ";

        s_size=s_size+1;
        cin>>data[s_size];
    }
}

void pop() // Function that substracts a number from the top of the stack
{
    if (s_size>=1)
    {
        cout<<endl<<"POP - ejecting from the top of the stack: number: "<<data[s_size];
        Sleep(2000);

        s_size=s_size-1;
    }
    else
    {
        cout << "The stack is empty!";
        Sleep(1000);
    }
}

void size() // Function that shows the size of the stack
{
    cout<<endl<<"Number of elements within the stack: "<<s_size;
    Sleep(2000);
}

void empty() // Function that shows if the stack is empty or not
{

    if (s_size==0) cout<<endl<<"EMPTY? ->  TRUE";
    else cout<<endl<<"EMPTY? ->  FALSE";
    Sleep(2000);
}

int main()
{
    int choice;
    s_size=0;

    do
    {
        show_stack();

        cout << "MAIN MENU:"<<endl;
        cout << "------------------------------------------"<<endl;
        cout << "1. PUSH (add a number to the top of the stack) "<<endl;
        cout << "2. POP (eject a number from the top of the stack) "<<endl;
        cout << "3. SIZE (show how many elements are in the stack) "<<endl;
        cout << "4. EMPTY (show if the stack is empty) "<<endl;
        cout << "5. End programm "<<endl;
        cout << "------------------------------------------"<<endl;
        cout << "Choose: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            size();
            break;

        case 4:
            empty();
            break;

        }

    }
    while (choice != 5);

    return 0;
}
