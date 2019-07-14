//#include <iostream>
//#include <cmath>
//#include <cstring>
//
//using namespace std;
//
//bool seive[1000001];
//int N, M;
//
//int main(int argc, char *argv[])
//{
//    cin>>M>>N;
//    
//    memset(seive, true, sizeof(bool)*(N+1));
//    seive[1] = false;
//    int seed = sqrt(N);
//    for (int i=2; i<=seed; i++)
//    {
//        for (int j=2; j*i<=N; j++)
//        {
//            if(seive[i])
//                seive[i*j] = false;
//        }
//    }
//    
//    for (int i=M; i<=N; i++)
//    {
//        if (seive[i])
//        {
//            cout<<i<<" ";
//        }
//    }cout<<"\n";
//    
//    return 0;
//}
