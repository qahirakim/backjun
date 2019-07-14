////#include <iostream>
////#include <cstring>
////
////using namespace std;
////
////long long int memo[101];
////
////long long int padovan(int);
////
////int main(int argc, char *argv[])
////{
////    int T, N;
////    cin>>T;
////    for (int i=0; i<T; i++)
////    {
////        cin>>N;
////        memset(memo, -1, sizeof(long long  int)*(N+1));
////        memo[1] = memo[2] = memo[3] = 1;
////        
////        cout<<padovan(N)<<"\n";
////    }
////   
////    return 0;
////}
////
////long long int padovan(int n)
////{
////    if((n == 1) || (n == 2) || (n == 3))
////        return 1;
////    if (memo[n] == -1) {
////        memo[n] = padovan(n-2) + padovan(n-3);
////    }
////    return memo[n];
////}
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//long long int memo[101];
//
////long long int padovan(int);
//
//int main(int argc, char *argv[])
//{
//    int T, N;
//    cin>>T;
//    memset(memo, -1, sizeof(long long  int)*(101));
//    memo[1] = memo[2] = memo[3] = 1;
//
//    for (int j=4; j<=101; j++) {
//        memo[j] = memo[j-2]+memo[j-3];
//    }
//    
//    for (int i=0; i<T; i++)
//    {
//        cin>>N;
//        cout<<memo[N]<<"\n";
//    }
//    
//    return 0;
//}
//
////long long int padovan(int n)
////{
////    if((n == 1) || (n == 2) || (n == 3))
////        return 1;
////    if (memo[n] == -1) {
////        memo[n] = padovan(n-2) + padovan(n-3);
////    }
////    return memo[n];
////}
