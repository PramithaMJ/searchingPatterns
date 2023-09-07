//prfix and suffix

#include <iostream>
#include <string>

using namespace std;

int main(){

    string s = "abcabc";
    int n = s.size();
    int prefix[n];
    int suffix[n];
    int i,j;

    while(i<n){
        if(s[i] == s[j]){
            prefix[i] = j+1;
            i++;
            j++;
        }
        else{
            if(j!=0){
                j = prefix[j-1];
            }
            else{
                prefix[i] = 0;
                i++;
            }
        }
    }


    return 0;
}