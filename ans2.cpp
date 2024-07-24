#include<iostream>
#include<string>
using namespace std;
string reverse_string(string s){
    string rs;
    rs=s;
    int i=0;
    int j= rs.size();
     while(i<=j){
        swap(rs[i],rs[j])
        i++;
        j--;
     }
     return rs;
} 
 int main (){
    string s;
     cin>> string ;
     cout<<"reveser string " << revser_string(s);
 }