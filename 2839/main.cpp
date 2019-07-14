//#include <iostream>
//#include <climits>
//
//using namespace std;
//
//int sugar(int n);
//int main(int argc, char *argv[])
//{
//    int N;
//    cin>>N;
//    
//    cout<<sugar(N)<<endl;
//    
//    return 0;
//}
//
//int sugar(int n)
//{
//    if(!(n%5)) return n/5;
//    int X = 0;
//    int Y = 0;
//    int min = INT_MAX;
//    while(5*X <= n)
//    {
//        int t = (n - 5*X);
//        
//        if(!(t % 3))
//        {
//            Y = t/3;
//            min = min > X+Y ? X+Y : min;
//        }
//        
//        X++;
//    }
//    if(min == INT_MAX)
//        return -1;
//    return min;
//}
