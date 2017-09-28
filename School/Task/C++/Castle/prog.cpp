#include <iostream>
#include <queue>
#include <set>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef vector<int> vi;

const int di[4] = {-1, 0, 1, 0};
const int dj[4] = {0, 1, 0, -1};

vector<vi> data;
vector<int> room_sizes(2, -1); // 0-s and 1-s are special values, not rooms' numbers

int look_room_from(int start_i, int start_j, int mark_with){
	queue<int> qqq;
	qqq.push(start_i);
	qqq.push(start_j);
	data[start_i][start_j] = mark_with;
	int res = 1;
	while(!qqq.empty()){
		int curr_i = qqq.front(); qqq.pop();
		int curr_j = qqq.front(); qqq.pop();
		for(int dir = 0; dir < 4; dir++){
			int next_i = curr_i + di[dir];
			int next_j = curr_j + dj[dir];

			if(data[next_i][next_j]==0){
				data[next_i][next_j] = mark_with;
				res++;
				qqq.push(next_i);
				qqq.push(next_j);
			}
		}
	}
	return res;
}

int main(){
	
	freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    
	int N, M;
	cin >> N >> M;
	data.assign(N, vi(M));
	for(int i=0; i<N; i++){
		string s;
		cin >> s;
		for(int j=0; j<M; j++)
			data[i][j] = s[j] - '0';
	}
	for(int i=0; i<N; i++)
		for(int j=0; j<M; j++)
			if(data[i][j] == 0)
				room_sizes.push_back(look_room_from(i, j, room_sizes.size()));

	int res1 = (int)room_sizes.size() - 2;

	int res2 = *max_element(room_sizes.begin()+2, room_sizes.end());
	
	int res3 = res2 + 1;
	for(int i=1; i<N-1; i++)
		for(int j=1; j<M-1; j++)
			if(data[i][j] == 1){
				set<int> all_nabours;
				for(int dir = 0; dir < 4; dir++)
					all_nabours.insert(data[i+di[dir]][j+dj[dir]]);
				all_nabours.erase(1); 
				int curr = 1;
				for(set<int>::iterator nab = all_nabours.begin(); nab != all_nabours.end(); nab++)
					curr += room_sizes[*nab];
				res3 = max(res3, curr);
			};

	cout << res3 << endl;
	return 0;
}

