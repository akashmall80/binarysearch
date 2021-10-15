//Binary Search
//It is a searching algorithm.It is an algorithm that works on sorted array. It can be in increasing or decreasing order.
//You are in a restaurent and you have a menu and items are arranged in alphabetical order.
//1).Burger
//2).Coke
//3).Dosa
//4).Maggi
//5).Pizza
//6).Soup
//These item are arranged in alphabetical order you want pizza and you look at dosa. So you know pizza will be after dosa so you will look at element
//after dosa.
//{1,2,10,11,19,20,30}
//This is our array
//What binary search will do
//we will divide array into two parts every time by the middle element.
//{1,2,10,11,19,29,30}
//1 is starting and 30 is ending
//i want to search for 19
//we find out mid
//s=1
//e=7
//mid=(s+e)/2=(7+1)/2=8/2=4  arr element=11
//we are looking for 19
//we know 11<19
//so we don't see left side of mid,we will look at the right side of mid.
//19 29 30
//s=19
//e=30
//mid=1+3/2=2  29
//29>19
//so 19 will come to the left side
//19
//s=1
//e=1
//mid=s+e/2
//19
//19 equal to 19 so it matches its index will be given
#include<iostream>
using namespace std;
int binary(int arr[],int n,int key)
{
   int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]<key)
        {
            s=s+1;
        }
        else if(arr[mid]>key)
        {
            e=e-1;
        }
        else if(arr[mid]==key)
        {
            return mid;
        }

    }
}
int main()
{
    int arr[]={1,2,10,11,19,24,30};
    int n=sizeof(arr)/sizeof(int);
    int key=19;
    int store=binary(arr,n,key);
    cout<<store;
    return 0;
}










