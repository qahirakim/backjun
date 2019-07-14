//#include <iostream>
//
//using namespace std;
//unsigned long long int memo[10001];
//
//unsigned long long int factorial(int);
//int main(int argc, char *argv[])
//{
//    int N;
//    cin>>N;
//    
//    memo[0]= memo[1] = 1;
//    cout<<factorial(N)<<"\n";
//    
//    return 0;
//}
//
//unsigned long long int factorial(int n)
//{
//    if(n == 1 || n == 0)
//        return 1;
//    else
//    {
//        if(!memo[n])
//        {
//            memo[n] = n*factorial(n-1);
//        }
//        return memo[n];
//    }
//}
