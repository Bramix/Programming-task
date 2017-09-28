#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    int n, bufx, bufy, res = 0;
    cin >> n;
    
    int x[n], y[n];
    
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];    
    }
    
    for(int i = 0; i < n; i ++){
        for(int j =0; j < n; j++){
                if(x[i] >= x[j]){
                     bufx = x[i];
                     bufy = y[i];   
                     y[i] = y[j];
                     x[i] = x[j];
                     y[j] = bufy;
                     x[j] = bufx; 
                }
                
        }  
    }
    
    for(int i = 0;i < n; i++){
        for(int j = 0; j < n; j++){
             if(i != j){
                  if(y[n - 1 - i] > y[n - 1 - j]){
                      x[n - i - 1] = -1;
                      res++;    
                      j = n;              
                  } 
             }
        }
    }
    
    cout << res;
 
    return 0;   
}
