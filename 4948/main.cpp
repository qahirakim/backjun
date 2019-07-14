//#include <iostream>
//#include <cmath>
//#include <cstring>
//
//using namespace std;
//
//bool seive[246913];
//int N, M;
//
//int main(int argc, char *argv[])
//{
//    memset(seive, true, sizeof(bool)*(246913));
//    seive[1] = false;
//    
//    int seed = sqrt(246913);
//    for (int i=2; i<=seed; i++)
//    {
//        for (int j=2; j*i<=246913; j++)
//        {
//            if(seive[i])
//                seive[i*j] = false;
//        }
//    }
//    int cnt = 0;
//    while (true)
//    {
//        cin>>N;
//        if(!N) break;
//        cnt = 0;
//        for (int i=N+1; i<=2*N; i++)
//        {
//            if (seive[i])
//                cnt++;
//        }cout<<cnt<<"\n";
//    }
//    return 0;
//}
