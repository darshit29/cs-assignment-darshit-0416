#include<bits/stdc++.h>
using namespace std;
int recbinsrc(int ar[],int l,int r,int item)
{
    if(l>r)
    return -1;
    if(item == ar[l])
    return l;
    if(item == ar[r])
    return r;
    else
    { 
        int mid=(l+r)/2;
        if(ar[mid]==item)
        return mid;
        if(item < ar[mid])
        {















































            
            recbinsrc(ar,l,mid-1,item);
        }
        if(item > ar[mid])
        {
            recbinsrc(ar,mid+1,r,item);
        }
    }
}
int main()
{  
int array[] = {1,12,45,78,99,125};
int left = 0;
int right = sizeof(array)/sizeof(array[0]);

int search =0;
cout<<"number to be searched => ";
cin>>search;

if(recbinsrc(array,left,right,search)+1){
    cout<<"element found at => "<<recbinsrc(array,left,right,search)+1;
}
else{
    cout<<"element not found";
}
return 0;
}