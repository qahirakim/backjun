#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char *argv[])
{
    int N;
    int x;
    priority_queue<int, vector<int>, greater<int>> pq;
    
//    cin>>N;
    scanf("%d", &N);
    for (int i=0; i<N; i++)
    {
        scanf("%d", &x);
//        cin>>x;
        if(x)
            pq.push(x);
        else
        {
            if(pq.empty())
//                cout<<"0\n";
                printf("0\n");
            else
            {
                printf("%d\n",pq.top());
//                cout<<pq.top()<<"\n";
                pq.pop();
            }
        }
    }

    
    return 0;
}
