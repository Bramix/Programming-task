#include <iostream>
#include <vector>
#include <cstdio>
#include <queue>
#include <string>
 
using namespace std;
 
const char knight   = '@';
const char check    = 'X';
struct point
{
    int x,y;
    point(){}
    point(int X, int Y)
    {
        x = X;
        y = Y;
    }
};
bool operator == (const point &a, const point &b)
{
    return a.x == b.x && a.y == b.y;
}
int moveX[8] = {-2,-2,-1,-1, 1,1, 2,2};
int moveY[8] = {-1, 1,-2, 2,-2,2,-1,1};
int n;
vector<string> field;
vector<vector<int> > mas;
point begin, end;
 
void input()
{
    cin>>n;
    field.resize(n);
    mas = vector<vector<int> >(n,vector<int>(n,0));
    for (int i=0;i<n;i++)
        cin>>field[i];
    bool isFirst = true;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
            if (field[i][j]==knight)
            {
                if (isFirst)
                {
                    begin = point(i,j);
                    isFirst = false;
                }
                else
                    end = point(i,j);
            }
    }
}
bool correct(int x, int y)
{
    if (x<0 || y<0)
        return false;
    if (x>=n || y>=n)
        return false;
    return true;
}
void BFS()
{
    mas[begin.x][begin.y] = 1;
    queue<point> q;
    q.push(begin);
    while (!q.empty())
    {
        point cur = q.front(); q.pop();
        for (int i=0;i<8;i++)
        {
            int x = cur.x + moveX[i];
            int y = cur.y + moveY[i];
            if (correct(x,y) && field[x][y] != '#' && mas[x][y] == 0)
            {
                mas[x][y] = mas[cur.x][cur.y] + 1;
                point next(x,y);
                q.push(next);
                if (next == end)
                    return;
            }
        }
    }
}
void findAnswer()
{
    point cur = end;
    while (!(cur==begin))
    {
        for (int i=0;i<8;i++)
        {
            int x = cur.x + moveX[i];
            int y = cur.y + moveY[i];
            if (correct(x,y) && mas[x][y] + 1 == mas[cur.x][cur.y])
            {
                cur = point(x,y);
                field[x][y] = knight;
                break;
            }           
        }
    }
}
void output()
{
    for (int i=0;i<n;i++)
        cout<<field[i]<<endl;
}
void solve()
{
    BFS();
    if (mas[end.x][end.y] != 0)
    {
        findAnswer();
        output();
    }
    else
        cout<<"Impossible";
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("on.txt","w",stdout);
    input();
    solve();
    return 0;
}
