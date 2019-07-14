//#include <iostream>
//#include <cmath>
//#include <climits>
//using namespace std;
//
//int picked[3];
//int cards[100];
//bool used[100];
//
//int N, M;
//int nearest = INT_MAX;
//int blackjack = -1;
//void pick(int);
//
//
//int main(int argc, char *argv[])
//{
//    cin>>N>>M;
//    
//    for (int i=0; i<N; i++)
//    {
//        cin>>cards[i];
//    }
//    pick(0);
//    cout<<blackjack<<endl;
//    return 0;
//}
//
//void pick(int depth)
//{
//    if(depth == 3)
//    {
//        int sum = 0;
//        for (int i=0; i<3; i++) {
//            sum += picked[i];
////            cout<<picked[i]<<" ";
//        }
//        
//        int rst = abs(sum - M);
////        cout<<sum<<" "<<rst<<endl;
//
//        if(rst < nearest && M >= sum)
//        {
//            nearest = rst;
//            blackjack = sum;
//        }
//        return;
//    }
//    for (int i=0; i<N; i++)
//    {
//        if(used[i] != true)
//        {
//            used[i] = true;
//            picked[depth] = cards[i];
//            pick(depth+1);
//            used[i] = false;
//        }
//    }
//}
