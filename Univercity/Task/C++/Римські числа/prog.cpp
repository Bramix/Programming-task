#include <iostream>
#include <cstdio>
using namespace std;

int toInt(string s){
    int res = 0, k, buf;
    int b  = 0;
    char c;
    
    for(int i = 0; i < s.size(); i++){
         c = s[s.size() - i - 1];
         if(c == 'I'){
              buf = 1;
         }
         if(c == 'V'){
              buf = 5;
         }
         if(c == 'X'){
              buf = 10;
         }
         if(c == 'L'){
              buf = 50;
         }
         if(c == 'C'){
              buf = 100;
         }
         if(c == 'D'){
              buf = 500;
         }
         else if(('1' <= c && c <= '9') || c == '0'){
            return -1; 
         }
         if(buf < b){
               res = res - buf; 
         }
         else{
              res = res + buf;
         }
         b = buf;
    }
    
    return res;
}

string toRom(int n){
    string res = "";
    int ar[]={1000, 900, 500,400,100,90, 50,40,10, 9,5 ,4,1};
    string rom[]={"M", "CM", "D", "CD", "C","XC","L","XL", "X","IX","V","IV","I"};
    int i = 0;
    while(n != 0){
         if(n >= ar[i]){
              n = n  - ar[i];      
              res = res + rom[i];
         } 
         else{
            i++;  
         }
    }
    return res;      
}



int main(){
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    string s, c1 = "", c2 = "";
    cin >> s;
    int i = 0;
    
    while(s[i] != '/'){
         c1 = c1 + s[i];     
         i++;
    }
    
    for(i = i + 1; i < s.size(); i++){
          c2 = c2 + s[i];
    }
    
    int p1 = toInt(c1);
    int p2 = toInt(c2);
    
    if(p1 == -1 || p2 == -1){
          cout << "ERROR";
          return 0;    
    }
    
    i = 2;
    
   int kof = 1;
   
   int p = p2;
   if(p1 > p2){
        p = p1;
   }
   
    for(int i = 1; i <= p/2; i++){
           if(p1 % i == 0 && p2 % i == 0)
                 kof = i;             
    }
    
    p1 = p1 / kof;
    p2 = p2 / kof;

    if(p2 == 1)
        cout << toRom(p1); 
    
    else
        cout << toRom(p1) << "/" << toRom(p2);
    
    return 0;   
}