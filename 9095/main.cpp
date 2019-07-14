//#include <iostream>
//
//using namespace std;
//
//void pick(int);
//
//int nums[3] = {1, 2, 3};
//int N;
//int cnt;
//
//int main(int argc, char *argv[])
//{
//    int T;
//    cin>>T;
//    
//    for (int i=0; i<T; i++) {
//        cin>>N;
//        cnt = 0;
//        pick(0);
//        cout<<cnt<<endl;
//    }
//    
//    return 0;
//}
//
//void pick(int sum)
//{
//    if(sum == N)
//        cnt++;
//    if(sum >= N)
//        return;
//    for (int i=0; i<3; i++) {
//        pick(sum + nums[i]);
//    }
//}
