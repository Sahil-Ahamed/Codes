#include<iostream>
#include<vector>
using namespace std;

int vecsize;
vector<int> vec;
int front=0;
int rear=-1;

void enqueue(int val){
    if(rear!=(vecsize-1)){
        rear=rear+1;
        vec[rear]=val;
        cout<<"Added to the queue\n";
    }
    else{
        cout<<"Queue is full\n";
    }
}
void dequeue(){
    if(rear>=front){
        front=front+1;
        cout<<"Removed from queue\n";
    }
    else{
        cout<<"Queue empty. Can't pop\n";
    }
}
void search(int val){
    int flag=0;
    int pos=0;
    if(rear>=front){
        for(int i=front; i<=rear; i++){
            if(vec[i]==val){
                flag=1;
                pos=i;
                break;
            }
        }
        if(flag==1){
            cout<<"Element found at position "<< pos-front+1<<"\n";
        }
        if(flag!=1){
            cout<<"Value not found in queue.\n";
        }
    }
    else{
        cout<<"Can't search in empty queue.\n";
    }
}
void peek(){
    if(rear>=front){
        cout<<"Value in front is "<<vec[front]<<"\n";
    }
    else{
        cout<<"No value in queue\n";
    }
}
void isempty(){
    if(rear<front){
        cout<<"Yes Queue Empty\n";
    }
    else{
        cout<<"No Queue is not Empty\n";
    }
}
void isfull(){
    int count=0;
    for(int i=front;i<=rear;i++){
        count++;
    }
    if(count==vecsize){
        cout<<"Queue Full\n";
    }
    else{
        cout<<"Queue is not Full\n";
    }
}



int main(){
    cout<<"\nEnter queue size:";
    cin>>vecsize;
    vec.resize(vecsize);

    int choice;
    while(1){
        cout<<"\n1.Enqueue\n2.Dequeue\n3.Search\n4.Peek\n5.IsEmpty?\n6.IsFull?\n7.Exit :(\n";
        cout<<"Make your choice:";
        cin>>choice;

        switch(choice){
            case 1:
                int enval;
                cout<<"Enter value:";
                cin>>enval;
                enqueue(enval);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                int searchval;
                cout<<"Enter element to search:";
                cin>>searchval;
                search(searchval);
                break;
            case 4:
                peek();
                break;
            case 5:
                isempty();
                break;
            case 6:
                isfull();
                break;
            case 7:
                cout<<"Sorry to see you go. Visit SOON!! :(";
                exit(0);
            default:
                cout<<"Make correct choice\n";
        }
    }
            


    return 0;
}