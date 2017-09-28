#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    string s, res = "";
    cin >> s;
    int n = s.size();
    char status = '0', buf = '0';
    char c;
    for(int i = 0; i < n; i++){
            c = s[i];
            if(c == '_'){
                 if(status == 'j'){
                    res = "Error!";
                    break;     
                 }
                 status = 'c';
                 buf = '_';                 
            }
            else if(65 <= c && c <= 90){
                if(status == 'c'){
                    res = "Error!";
                    break;     
                 }
                 status = 'j';
                 buf = '0';
                 if(i == 0){
                    res = "Error!";
                    break;     
                 }
                 else{
                    res = res + '_' + (char)(c + 32);
                 } 
                         
            }
            
            else if(buf == '_'){
                  if(('1' <= c && c <= '9')||c == '0' ){
                    res = "Error!";
                    break;                            
                  }   
                  else{
                       c = c - 32;
                       res = res + c;
                       buf = '0';
                  }     
            }
            
            else {
                 res = res + c;
            }
    }
    
    cout << res;
 
    return 0;   
}