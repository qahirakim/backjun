//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//struct call
//{
//    int z;
//    int o;
//};
//
//int memo[41];
//call cnt[41];
//
//int fibonacci(int);
//
//int main(int argc, char *argv[])
//{
//    int T, N;
//    cin>>T;
//    
//    memset(memo, -1, sizeof(int)*41);
//    memo[0] = 0;
//    memo[1] = 1;
//    
//    cnt[0] = {1, 0};
//    cnt[1] = {0, 1};
//    for (int i=0; i<T; i++)
//    {
//        cin>>N;
//        fibonacci(N);
//        cout<<cnt[N].z<<" "<<cnt[N].o<<endl;
//    }
//    return 0;
//}
//
//int fibonacci(int n) {
//    if (n == 0) {
//        return 0;
//    } else if (n == 1)
//    {
//        return 1;
//    }
//    else
//    {
//        if(memo[n] == -1)
//        {
//            int f = fibonacci(n-1) + fibonacci(n-2);
//            cnt[n].z = cnt[n-1].z + cnt[n-2].z;
//            cnt[n].o = cnt[n-1].o + cnt[n-2].o;
//            memo[n] = f;
//        }
//        return memo[n];
//    }
//}
