//addition of matrix array
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int r,c;
    cout<<"Enter number of rows: ";
    cin>>r;
    cout<<"Enter number of columns: ";
    cin>>c;

    int arr1[r][c];
    int arr2[r][c];
    int sum[r][c];

    //initializing 1st array
    cout<<"Enter numbers: ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>arr1[i][j];
        }
    }
    
    //displaying 1st array
    cout<<"Array 1 = "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //initializing 2nd array
    cout<<"Enter numbers: ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>arr2[i][j];
        }
    }
    
    //displaying 2nd array
    cout<<"Array 2 = "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //addition
    cout<<"Sum of arrays = "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<arr1[i][j] + arr2[i][j]<<" ";
        }
        
        cout<<endl;
    }
}


/*
Enter number of rows: 2
Enter number of columns: 3
Enter numbers: 12 45 33 21 1 8
Array 1 = 
12 45 33 
21 1 8 
Enter numbers: 32 20 15 3 6 12
Array 2 = 
32 20 15 
3 6 12 
Sum of arrays = 
44 65 48 
24 7 20
*/
