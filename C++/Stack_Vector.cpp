#include<iostream>
#include<vector>
using namespace std;

int ssize;
vector<int> vec;
int bottom=0;
int top=-1;

void push(int val){
    if(top!=ssize-1){
        top=top+1;
        vec[top]=val;
        cout<<"Pushed it hard onto stack\n";
    }
    else{
        cout<<"Stack Overflow\n";
    }
}
void pop(){
    if(top!=-1){
        top=top-1;
        cout<<"Popped off the stuff\n";
    }
    else if(top==-1){
        cout<<"Stack Underflow\n";
        cout<<"Nothing to delete\n";
    }
}
void peek(){
    if(top!=-1){
        cout<<"Top element is:"<<vec[top]<<"\n";
    }
    else if(top==-1){
        cout<<"No values in the stack\n";
    }
}
void search(int val){
    int flag=0;
    int stori=0;
    if(top!=-1){
        for(int i=bottom; i<=top; i++){
            if(vec[i]==val){
                flag=1;
                stori=i;
                break;
            }
            if(vec[i]!=val){
                flag=2;
            }
        }
        if(flag==1){
            cout<<"Flag found at level "<<stori+1<<"\n";
        }
        if(flag==2){
            cout<<"Value not found in stack\n";
        }
    }
    else if(top==-1){
        cout<<"Can't find value in empty stack\n";
    }
}
void isempty(){
    if(top<bottom || top==-1){
        cout<<"Yup seems like the stack is empty\n";
    }
    else if(top>=bottom || top!=-1){
        cout<<"Nah! the stack is still not empty\n";
    }
}
void isfull(){
    if(top==ssize-1){
        cout<<"Yup seems like the stack is full\n";
    }
    else if(top!=ssize-1){
        cout<<"Nah! the stack is not full\n";
    }
}




int main(){
    cout<<"Enter stack size:";
    cin>>ssize;
    vec.resize(ssize);
    while(1){
        int choice=0;
        cout<<"\n1.Push\n2.Pop\n3.Peek\n4.Search\n5.IsEmpty?\n6.IsFull?\n7.Exit :(\n";
        cout<<"Make your choice:";
        cin>>choice;

        switch(choice){
            case 1:
                int pushval;
                cout<<"Enter value:";
                cin>>pushval;
                push(pushval);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                int searchval;
                cout<<"Enter value:";
                cin>>searchval;
                search(searchval);
                break;
            case 5:
                isempty();
                break;
            case 6:
                isfull();
                break;
            case 7:
                cout<<"Sorry to see you go. Bye!\n";
                exit(0);
            default:
                cout<<"Please make a correct choice :)\n";
                break;
        }
    }

    return 0;
}