//#include <iostream>
//#include <climits>
//
//using namespace  std;
//
//char map_b[8][8] = {
//    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
//    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
//    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
//    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
//    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
//    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
//    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
//    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
//};
//char map_w[8][8] = {
//    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
//    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
//    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
//    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
//    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
//    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
//    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
//    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
//};
//
//char map[51][51];
//
//int w_cnt;
//int b_cnt;
//
//void check(int, int);
//int main(int argc, char *argv[])
//{
//    int N, M;
//    cin>>N>>M;
//    
//    for (int i=0; i<N; i++)
//    {
//        cin>>map[i];
//    }
//
//    int min = INT_MAX;
//    
//    for (int y=0; y<M-7; y++) {
//        for (int x=0; x<N-7; x++) {
////            cout<<"("<<x<<","<<y<<")"<<endl;
//            w_cnt = b_cnt = 0;
//
//            check(x, y);
//            if(w_cnt < min)
//                min = w_cnt;
//            if(b_cnt < min)
//                min = b_cnt;
//        }
//    }
//    cout<<min<<endl;
//
//
//    return 0;
//}
//
//void check(int x_, int y_)
//{
//    for (int y=0; y<8; y++)
//    {
//         for (int x=0; x<8; x++)
//         {
////             cout<<"("<<map[x_+x][y_+y]<<","<<map_b[x][y]<<","<<map_w[x][y]<<","<<")"<<endl;
//
//             if(map_b[x][y] != map[x_+x][y_+y])
//             {
//                 b_cnt++;
//             }
//             if(map_w[x][y] != map[x_+x][y_+y])
//             {
//                 w_cnt++;
//             }
//         }
//    }
////    cout<<"("<<b_cnt<<","<<w_cnt<<")"<<endl;
//
//}
