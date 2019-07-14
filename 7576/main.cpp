//#include <iostream>
//#include <queue>
//#include <cstring>
//
//using namespace std;
//
//struct point
//{
//    int y;
//    int x;
//};
//
//int N, M;
//int dx[4] = {-1, 1, 0, 0};
//int dy[4] = {0, 0, -1, 1};
//
//int visited[1000][1000];
//queue<point> q;
//point last;
//
//void tomato();
//
//int cnt = 0;
//int main(int argc, char *argv[])
//{
//    cin>>M>>N;
//
//    int t;
//    for (int i=0; i<N; i++)
//    {
//        for (int j=0; j<M; j++)
//        {
//            cin>>t;
//            if(t == 1)
//            {
//                visited[i][j] = 1;
//                q.push({i, j});
//            }
//            if(t == -1)
//                visited[i][j] = -1;
////            map[i][j] = t;
//        }
//    }
//    
//    if (q.empty())
//        cout<<"-1\n";
//    else
//    {
//        tomato();
//        
//        bool ismatured = true;
//        for (int i=0; i<N; i++)
//        {
//            for (int j=0; j<M; j++)
//            {
//                if(visited[i][j] == 0)
//                {
//                    ismatured = false;
//                    break;
//                }
//            }
//            if(!ismatured)
//                break;
//        }
//
//        if(ismatured)
//            cout<<visited[last.y][last.x]-1<<"\n";
//        else
//            cout<<"-1\n";
//    }
//
//    return 0;
//}
//
//void tomato()
//{
//    if (q.empty())
//        return;
//    point p = q.front();
//    q.pop();
//    last = p;
//
//    for (int i=0; i<4; i++)
//    {
//        if((visited[p.y+dy[i]][p.x+dx[i]] == 0) && \
//           !(p.x+dx[i] < 0 || p.x+dx[i]>=M || p.y+dy[i] < 0 || p.y+dy[i]>=N))
//        {
//            q.push({p.y+dy[i], p.x+dx[i]});
//            visited[p.y+dy[i]][p.x+dx[i]] = visited[p.y][p.x] + 1;
//        }
//    }
//    
//    tomato();
//}
