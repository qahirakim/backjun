//#include <iostream>
//#include <string>
//#include <cstring>
//
//using namespace std;
//
//int N;
//void pick();
//
//char str[10000001];
//int len;
//
//int cnt;
//
//int main(int argc, char *argv[])
//{
//    cin>>N;
//    pick();
//    cout<<cnt<<endl;
//    return 0;
//}
//void pick()
//{
//    if(len == N)
//    {
//        cout<<str<<endl;
//        cnt++;
//        return;
//    }
//
//    // 00 pick
//    if(len + 2 <= N)
//    {
//        str[len] = str[len+1] = '0';
//        len += 2;
//        pick();
//        len -= 2;
//        str[len] = str[len+1] = NULL;
//    }
//    // 1 pick
//    str[len] = '1';
//    len++;
//    pick();
//    len--;
//}
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int N;
////void pick();
//
//int memo[1000001];
//
//int fibonacci(int N);
//int main(int argc, char *argv[])
//{
//    cin>>N;
//    memset(memo, -1, sizeof(int)*(N+1));
//    memo[1] = 1;
//    memo[2] = 2;
////    for (int i=1; i<100; i++) {
////        cout<<fibonacci(i)<<"\n";
////
////    }
//    cout<<fibonacci(N)<<"\n";
//    
//    return 0;
//}
//
//int fibonacci(int n)
//{
//    if(n == 1)
//        return 1;
//    if (n == 2) {
//        return 2;
//    }
//    if (memo[n] == -1) {
//        memo[n] = (fibonacci(n-1) + fibonacci(n-2))%15746;
//    }
//    return memo[n];
//}
