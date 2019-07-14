

#include <iostream>
#include <queue>

using namespace std;

struct point
{
    int y;
    int x;
};

int N, M;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int map[1001][1001];
int visited[1001][1001];

queue<point> q;
void maze();

int cnt;
int main(int argc, char *argv[])
{
    // N : height, M : width
    cin>>N>>M;
    for (int i=0; i<N; i++)
    {
        
        for (int j=0; j<M; j++)
        {
            cin>>map[i][j];
            if(map[i][j] == 1)
                visited[i][j] = -1;
        }
    }
    visited[N-1][0] = 1;
    q.push({N-1, 0});
    maze();
    cout<<visited[0][M-1]-1<<"\n";
    return 0;
}

void maze()
{
    if (q.empty())
        return;

    point p = q.front();
    q.pop();

    for (int i=0; i<4; i++)
    {
        if((visited[p.y+dy[i]][p.x+dx[i]] == 0) && \
           (p.y+dy[i]>=0 && p.x+dx[i]>=0 && p.y+dy[i]<N && p.x+dx[i]<M))
        {
            q.push({p.y+dy[i], p.x+dx[i]});
            visited[p.y+dy[i]][p.x+dx[i]] = visited[p.y][p.x]+1;
        }
    }
    maze();
}

