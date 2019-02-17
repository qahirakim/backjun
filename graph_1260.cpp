
#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>

void dfs(std::vector<int> graph[], int V, int N);
void bfs(std::vector<int> graph[], int V, int N);

int main(int argc, const char * argv[]) {
    int N,M,V;
//    std::cout<<"start"<<std::endl;
    std::cin>>N>>M>>V;
    
    std::vector<int> graph[N+1];
    
    // Initialize graph
    int x,y;
    for (int i=0; i<M; i++) {
        std::cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    
    for (int i=1; i<N+1; i++) {
        std::sort(graph[i].begin(), graph[i].end());
    }
    
    // Run graph search
    dfs(graph, V, N);
    bfs(graph, V, N);
    
    return 0;
}

void dfs(std::vector<int> graph[], int V, int N)
{
    std::stack<int> s;
    bool visited[N+1];
    memset(visited, 0, sizeof(bool) * N+1);
    
    s.push(V);
    visited[V]=true;
    std::cout<<V;
    int now;
    
    while(!s.empty())
    {
        now=s.top();
        s.pop();
        for(int i=0;i<graph[now].size();i++)
        {
            if(!visited[graph[now][i]])
            {
                s.push(now);
                s.push(graph[now][i]);
                visited[graph[now][i]]=true;
                std::cout<<" "<<graph[now][i];
                break;
            }
        }
    }
    std::cout<<std::endl;
}

void bfs(std::vector<int> graph[], int V, int N)
{
    std::queue<int> q;
    bool visited[N+1];
    memset(visited, 0, sizeof(bool) * N+1);
    
    // Start vertex
    q.push(V);
    visited[V]=true;
    std::cout<<V;
    int now;
    while(!q.empty())
    {
        now=q.front();
        q.pop();
        for(int i=0;i<graph[now].size();i++)
        {
            if(!visited[graph[now][i]])
            {
                q.push(graph[now][i]);
                visited[graph[now][i]]=true;
                std::cout<<" "<<graph[now][i];
            }
        }
    }
    std::cout<<std::endl;
}

