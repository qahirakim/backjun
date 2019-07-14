//#include <iostream>
//
//using namespace std;
//
//int map[128][128];
//
//int divide(int,int,int,int);
//int eval(int,int,int,int);
//int blue = 0;
//int white = 0;
//int b_cnt;
//int w_cnt;
//int N;
//int main(int argc, char *argv[])
//{
//    cin>>N;
//
//    for (int i=0; i<N; i++)
//    {
//        for (int j=0; j<N; j++)
//        {
//            cin>>map[i][j];
//        }
//    }
//
////    cout<<divide(0, N-1, 0, N-1) <<endl;
//    divide(0, N-1, 0, N-1);
//    cout<<white<<"\n"<<blue<<"\n";
//    return 0;
//}
//
//int divide(int x1, int x2, int y1, int y2)
//{
//    if(x1 == x2 || y1 == y2)
//    {
//        if(map[x1][y1]) blue++;
//        else white++;
//        return 1;
//    }
//    w_cnt = 0;
//    b_cnt = 0;
//    int size = eval(x1, x2, y1, y2);
//    if(size)
//    {
//        if(b_cnt == size)
//            blue++;
//        else
//            white++;
//        return size;
//    }
//    else
//    {
//
//        return divide(x1, (x2+x1)/2, y1, (y1+y2)/2) + divide(x1, (x2+x1)/2, (y1+y2)/2+1, y2) + \
//        divide((x2+x1)/2+1, x2, y1, (y1+y2)/2) + divide((x2+x1)/2+1, x2, (y1+y2)/2+1, y2);
//    }
//}
//int eval(int x1, int x2, int y1, int y2)
//{
//    int size = (x2-x1+1)*(y2-y1+1);
//    for (int i=x1; i<=x2; i++) {
//        for (int j=y1; j<=y2; j++) {
//            if(map[i][j]) b_cnt++;
//            else w_cnt++;
//        }
//    }
//    if(size == b_cnt)
//    {
//        return b_cnt;
//    }
//    else if(size == w_cnt)
//        return w_cnt;
//    else
//        return 0;
//}
