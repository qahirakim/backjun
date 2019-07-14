//#include <iostream>
//#include <climits>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    int x, y, w, h;
//    
//    cin>>x>>y>>w>>h;
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
//    if(y < min) min = y;
//    if(x < min) min = x;
//    if(h-y < min) min = h-y;
//    if(w-x < min) min = w-x;
//    
//    cout<<min<<endl;
//}
