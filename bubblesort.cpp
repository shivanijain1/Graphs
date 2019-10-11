#include<stdio.h>
#include<conio.h>
int main(){
int arr[10],a;
for(int i=0;i<5;++i){
    cin>>arr[i];
    }
for(int i=0;i<arr.size()-1;++i){
    for(int j=0;j<arr.size()-1;++j){
        if(arr[j]>arr[j+1]){
            a=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=a;
        }
    }
}
for(int i=0;i<5;++i){
        cout<<arr[i];
    }
return 0;
}
