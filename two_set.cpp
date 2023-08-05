#include <bits/stdc++.h> 
using namespace std;
int print(int a){
    int count =0;
    int arr1[a/2] , arr2[(a+1)/2];
    for(int i=1;i<=a/2;i=2+i){
        for(int j=0;j<2*a;j=2+j){
            if(a%2==0){
                arr1[j]=i;
                arr1[j+1]=a+1-i;
                arr2[j]=i+1;
                arr2[j+1]=a-i;
            }
            else{
                arr1[j]=i;
                arr1[j+1]=a-i;
                arr2[j]=i+1;
                arr2[j+1]=a-i-1;
            }
        }
        
    } 
    for(int i=0;i<a;i++){
        cout << arr1[i];
        cout << arr2[i];
    }   
}

int main(){
    long long int a;
    cin >> a;
    int sum = a*(a+1)/2;
    if(sum%2==0){
        cout << "YES" <<"\n";
        print(a);
    }
    else
        cout << "NO" <<"\n";
    
    //cout << sum;
    return 0;
}