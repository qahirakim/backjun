//#include <iostream>
//#include <cstring>
//
//using namespace std;
//long long int fibonacci(int n);
//
//long long int memo[91];
//
//int N;
//
//int main(int argc, const char * argv[]) {
//
//    cin>>N;
//    memset(memo, -1, 91*sizeof(long long int));
//    memo[0] = 0;
//    memo[1] = 1;
////        zeros = ones = 0;
//
//    cout<<fibonacci(N)<<endl;
//
//    return 0;
//}
//
//long long int fibonacci(int n)
//{
//    if (n == 0)
//    {
//        return 0;
//    }
//    else if (n == 1)
//    {
//        return 1;
//    }
//    if (memo[n] == -1) {
//        memo[n] = fibonacci(n-1) + fibonacci(n-2);
//        return memo[n];
//    }
//    else
//        return memo[n];
//}
