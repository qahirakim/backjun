//#include <iostream>
//#include <climits>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    
//    
//    //0,0  _  0,h
//    //|   x,y  |
//    //h 0  _  w h
//    
//    // y : 윗쪽 변과의 거리
//    // h-y :  아랫쪽 변과의 거리
//    // x : 왼쪽 변과의 거리
//    // w-x : 오른쪽 변과의 거리
//    
//    int min = INT_MAX;
//    
//    int x[4] = {0, 0, 0, -1};
//    int y[4] = {0, 0, 0, -1};
//    
//    int x_min = INT_MAX;
//    int y_min = INT_MAX;
//    int x_max = INT_MIN;
//    int y_max = INT_MIN;
////    30 20
////    10 10
////    10 20
////    10 10       10 20
////     ? ?          30 20
//    for (int i=0; i<3; i++)
//    {
//        cin>>x[i]>>y[i];
//        if(x_min > x[i])
//            x_min = x[i];
//        if(y_min > y[i])
//            y_min = y[i];
//        if(x_max < x[i])
//            x_max = x[i];
//        if(y_max < y[i])
//            y_max = y[i];
//    }
//    
//    // 각 구석에 값이 있는 지 여부
//    bool p[4] = {false, };
//    //0  _  1
//    //|     |
//    //2  _  3
//    for (int i=0; i<3; i++)
//    {
//        if(x[i] == x_min && y[i] == y_min)
//            p[0] = true;
//        else if(x[i] == x_max && y[i] == y_max)
//            p[3] = true;
//        else if (x[i] == x_min && y[i] == y_max)
//            p[2] = true;
//        else
//            p[1] = true;
//    }
//    
////    cout<<p[0]<<p[1]<<p[2]<<p[3]<<endl;
//    for (int i=0; i<4; i++) {
//        if(!p[i])
//        {
//            if(i == 0)
//                cout<<x_min<<" "<<y_min<<"\n";
//            if(i == 1)
//                cout<<x_max<<" "<<y_min<<"\n";
//            if(i == 2)
//                cout<<x_min<<" "<<y_max<<"\n";
//            if(i == 3)
//                cout<<x_max<<" "<<y_max<<"\n";
//            break;
//        }
//    }
//
//}


