//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    int q[1001];
//    int josephus[1001] = {0, };
//    int sp = 0;
//    int seq = 0;
//    int N, K;
//    
//    cin>>N>>K;
//    
//    for (int i=1; i<=N; i++)
//    {
//        q[i] = i;
//    }
//    
//    while(true)
//    {
//        sp += K;
//        if(sp % N != 0)
//        {
//            josephus[seq++] = q[sp % N];
//            q[sp % N] = 0;
//        }
//    }
//    
//    return 0;
//}
