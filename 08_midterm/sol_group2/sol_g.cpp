#include<iostream>

using namespace std;

int main(){
    int n;
    string s;
    cin>>s>>n;
    n %= 26; // we need remainder of 26 because we have got only 26 letters
    for (int i=0; i<s.size(); i++)
        if ( s[i] + n <= 'z') { // if we shift by n and it still in range (a to z) simply add this number 
            s[i] += n;
            cout << s[i];
        } else { // if it is not
            s[i] += (n - 'z' + 'a' - 1); // substract char 'z',-1 and add 'a' by ASCII 
            cout<<s[i]; // sample: if char is 'z' and n = 2 answer should be 'b' --> 'z'(122)+= ( 2 - 'z'(122) + 'a'(97) -1 )  == 98 by ASCII it is 'b'
        }
    return 0;
}