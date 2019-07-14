//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    int N;
//    int k[2] = {0,0};
//    int t, cnt = 0;
//    
//    cin>>N;
//
////    if(N < 10)
////        k[0] = N_%10;
////    else
////    {
////        k[0] = N_%10;
////        N_ /= 10.0;
////        k[1] = N_%10;
////    }
//
//    k[0] = N/10;
//    k[1] = N%10;
//    
//    while(true)
//    {
//        t = k[1];
//        k[1] += k[0];
//        k[1] %= 10;
//        k[0] = t;
//        cnt++;
//
//        if((k[0]*10 + k[1]) == N)
//            break;
//    }
//    
//    cout<<cnt<<endl;
//
//    return 0;
//}
