//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//struct point
//{
//    int x;
//    int y;
//};
//
//int N, M, K;
//int dx[4] = {-1, 1, 0, 0};
//int dy[4] = {0, 0, -1, 1};
//
//
//int map[5000][5000];
//bool visited[5000][5000];
//void warm();
//
//queue<point> q;
//vector<point> lettuce;
//int main(int argc, char *argv[])
//{
//    int T;
//    cin>>T;
//    for (int i=0; i<T; i++) {
//        cin>>M>>N>>K;
//        lettuce.clear();
//        for (int j=0; j<M;j++)
//        {
//            for (int k=0; k<N; k++) {
//                visited[j][k] = true;
//                map[j][k] = 0;
//            }
//        }
//        for (int j=0; j<K; j++)
//        {
//            int x, y;
//            cin>>x>>y;
//            map[x][y] = 1;
//            visited[x][y] = false;
//            lettuce.push_back({x, y});
//        }
//        int cnt = 0;
//        for (int j=0; j<lettuce.size(); j++) {
//            if (!visited[lettuce[j].x][lettuce[j].y])
//            {
//                q.push({lettuce[j].x, lettuce[j].y});
//                visited[lettuce[j].x][lettuce[j].y] = true;
//                cnt++;
//                warm();
//            }
//        }
//        cout<<cnt<<"\n";
//       
//    }
//    return 0;
//}
//
//void warm()
//{
//    if(q.empty())
//        return;
//
//    point p = q.front();
//    q.pop();
//
//    for (int i=0; i<4; i++) {
//        if(!visited[p.x+dx[i]][p.y+dy[i]] && !(p.x+dx[i]<0 || p.y+dy[i]<0 || p.x+dx[i]>=M || p.y+dy[i]>=N))
//        {
//            q.push({p.x+dx[i], p.y+dy[i]});
//            visited[p.x+dx[i]][p.y+dy[i]] = true;
//        }
//    }
//    warm();
//}
//
