//TC: O(n)
//SC: O(n)
#include<iostream>
using namespace std;

void reverseArray(int arr[],int n)
{
    int temp[n];
    for(int i=0;i<n;i++)
        temp[i]=arr[n-1-i];
    
    for(int i=0;i<n;i++)
        arr[i]=temp[i];
}

int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original array: "<<endl;
    for(int i=0;i<n;i++)
        cout<<" "<<arr[i];
    cout<<endl;
    cout<<"Reversed array: "<<endl;
    reverseArray(arr,n);
    for(int i=0;i<n;i++)
        cout<<" "<<arr[i];
    
    return 0;
}

//Using vectors
// #include<iostream>
// #include<vector>
// using namespace std;

// void reverseArray(vector <int> &arr)
// {
//     int n=arr.size();
//     vector <int> temp(n);
//     for(int i=0;i<n;i++)
//         temp[i]=arr[n-1-i];
    
//     for(int i=0;i<n;i++)
//         arr[i]=temp[i];
// }

// int main()
// {
//     vector <int> arr={1,2,3,4};
//     cout<<"Original array: "<<endl;
//     for(int i=0;i<arr.size();i++)
//         cout<<" "<<arr[i];
//     cout<<endl;
//     cout<<"Reversed array: "<<endl;
//     reverseArray(arr);
//     for(int i=0;i<arr.size();i++)
//         cout<<" "<<arr[i];
//     return 0;
// }
