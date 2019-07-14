//#include <iostream>
//#include <queue>
//
//struct point
//{
//    int x;
//    int y;
//};
//
//using namespace std;
//
//int N;
//
//char map[25][25];
//bool visited[25][25];
//
//void apartment();
//
//queue<point> q;
//int a_cnt = 0;
//vector<int> home_cnt;
//int dx[] = {-1, 1, 0, 0};
//int dy[] = {0, 0, -1, 1};
//
//int main(int argc, char *argv[])
//{
//    cin>>N;
//    for (int i=0; i<N; i++) {
////        for (int j=0; j<N; j++) {
////            cin>>map[i][j];
////            if(map[i][j] == 0)
////                visited[i][j] = true;
////        }
//        cin>>map[i];
//        for (int j=0; j<N; j++) {
//            if(map[i][j] == '0')
//                visited[i][j] = true;
//        }
//    }
//    
////    q.push({0, 1});
////    visited[0][1] = true;
////    apartment();
//    
//    
//    for (int i=0; i<N; i++) {
//        for (int j=0; j<N; j++) {
//            if(!visited[i][j])
//            {
//                q.push({i, j});
//                visited[i][j] = true;
//                home_cnt.push_back(1);
//                apartment();
//                a_cnt++;
//            }
//        }
//    }
//    cout<<a_cnt<<'\n';
//    sort(home_cnt.begin(), home_cnt.end());
//    for (int i=0; i<home_cnt.size(); i++) {
//        cout<<home_cnt[i]<<'\n';
//    }
//    return 0;
//}
//
//void apartment()
//{
//    if(q.empty())
//        return;
//    
//    point p = q.front();
//    q.pop();
//    
//    for (int i=0; i<4; i++) {
//        if(!visited[p.x+dx[i]][p.y+dy[i]] && !(p.x+dx[i]<0 || p.y+dy[i]<0 || p.x+dx[i]>=N || p.y+dy[i]>=N))
//        {
//            home_cnt[a_cnt]++;
//            q.push({p.x+dx[i], p.y+dy[i]});
//            visited[p.x+dx[i]][p.y+dy[i]] = true;
//        }
//    }
//    apartment();
//}
//
