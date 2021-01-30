//https://www.youtube.com/watch?v=3RhGdmoF_ac&t=508s
//Subtract a particular number from every element of sorted array and return the element which on subtraction gives least value
//As it is a sorted array we will use binary search
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int arr[]={1,3,8,10,15};
    int n=5;
    int sub_no=12;
    int l=0;
    int h=n-1;
    int mid=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(sub_no==arr[mid])
        {
            cout<<sub_no;
            break;
        }
        else if(arr[mid]>sub_no)
        {
            h=mid-1;
        }    
        else
        {
            l=mid+1;
          
        }
        

    }
    cout<<l<<endl;
    cout<<h<<endl;

    if(abs(arr[l]-sub_no)>abs(arr[h]-sub_no))
    {
        cout<<arr[h]<<endl;
    }
    else
    {
        cout<<arr[l]<<endl;
    }
    
   
   

    //Now if the number(sub_no) is present it will return(because sub wiil be 0) if not it will find the greaterno(h) and smaller no(l) and return th min
  
   

    return 0;

    
}