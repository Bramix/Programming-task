#include <iostream>
#include <vector>
using namespace std;

struct coordinates{
    int x;
    int y;
};

int main(){
    string str;
    cin >> str;
    vector<coordinates> elements;

    int status = 0, x = 0, y = 0, n = str.size(), remainder, res = 1;
    char c;
    coordinates buf = {x, y};

    for(int i = 0; i < n; i++){
        c = str[i];

        switch(c){
            case 'L': status++; break;
            case 'R': status--; break;
            default: {
                remainder = status % 4;
                switch(remainder){
                    case 0: y++; break;
                    case 1: x++; break;
                    case 2: x--; break;
                    case 3: y--; break;
                }

                buf = {x, y};
                res++;

                for(int j = 0; j < elements.size(); j++){
                    if(buf.x == elements[j].x && buf.y == elements[j].y){
                        cout << res;
                        return 0;
                    }
                }

                elements.push_back(buf);
                break;
            }
        }
    }

    cout << -1;

    return 0;
}
