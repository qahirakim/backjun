//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    int N, K;
//    int A[10];
//    
//    cin>>N>>K;
//    for (int i=0; i<N; i++) {
//        cin>>A[i];
//    }
//    int cnt = 0;
//    while(K > 0)
//    {
//        int i = N-1;
//        for (i=N-1; i>=0; i--)
//        {
//            if(K/A[i])
//            {
////                cout<<A[i];
//                cnt += K/A[i];
//                K -= A[i]*(K/A[i]);
//                N = i;
//                break;
//            }
//        }
//    }
//    cout<<cnt<<endl;
//    
//}
