#include <iostream>

using namespace std;

int main(){
    int N;
    cout<<"Enter number of elements " << endl;;
    cin>> N;
    int * arr = new int[N];
    for (int i =1; i<=N ; i++)
    {
        arr[i] = 2*i;
    }
     for (int i =1 ; i<=N ; i++)
    {
       cout<<arr[i]<<" ";
    }
    delete [] arr;
    return 0 ;

}
