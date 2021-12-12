// check whether a string is palindrome or not
#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int n=str.length();
    int i=0,j=n-1;
    while(i<j){
        if(str[i]!=str[j]){
            cout<<str<<" is not palindrome";
            return 0;
        }
        i++;
        j--;
    }
    cout<<str<<" is palindrome";
    return 0;
}