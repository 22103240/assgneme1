#include<iostream>
#include<vector>
using namespace std;
double avg (vector<int> arr){
    double ans=0;
    for(int i=0;i<arr.size();i++){
        ans+=arr[i];
    }
    return ans/arr.size();
}

int main(){
    vector<int> arr;
    int a;
    cout<<" press s to stop //"
    while(a !=s){
        int i;
        cin>>i;
        arr.push_back(i);
    }
    cout<<" avg of given number is :" << avg(arr);
}
