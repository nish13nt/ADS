// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n,i,s,b;
    int op;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[100];
    for(i=0;i<n;i++){
    cout<<"Enter the "<<i+1<<" element: ";    
    cin>>a[i];
    }
    do{
    cout<<"\nEnter the operation :\n1.Insertion\n2.Deletion\n3.Display\nYour Choice: ";
    cin>>s;
    
    switch(s){
        case 1:{
            cout<<"Enter the element: ";
            cin>>b;
            n++;
            a[n-1]=b;
            break;
        }
        case 2:{
            n--;break;
        }
        case 3:{
            for(i=0;i<n;i++)
            cout<<a[i]<<",";
            break;
        }
    }
    cout<<"\nDo you want to continue: ";
    cin>>op;
    }while(op==1);
    
    return 0;
}
