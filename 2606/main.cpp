//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//bool visited[101];
//vector<int> graph[101];
//queue<int> q;
//void virus();
//
//int main(int argc, char *argv[])
//{
//    int N, P;
//    cin>>N>>P;
//    int x,y;
//    
//    for (int i=0; i<P; i++)
//    {
//        cin>>x>>y;
//        graph[x].push_back(y);
//        graph[y].push_back(x);
//    }
//    
//    for (int i=0; i<=N; i++) {
//        sort(graph[i].begin(), graph[i].end());
//    }
//    
//    visited[1] = true;
//    q.push(1);
//    virus();
//    
//    int cnt = 0;
//    for (int i=2; i<=N; i++) {
//        if(visited[i])
//            cnt++;
//    }
//    cout<<cnt<<"\n";
//    
//    return 0;
//}
//
//void virus()
//{
//    if(q.empty())
//        return;
//    int n = q.front();
//    q.pop();
//
//    for (int i=0; i<graph[n].size(); i++)
//    {
//        if(!visited[graph[n][i]])
//        {
//            q.push(graph[n][i]);
//            visited[graph[n][i]] = true;
//        }
//    }
//    virus();
//}
