//#include <iostream>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    int N;
//    cin>>N;
//    
//    int k = 1;
//    while(k*(k+1)/2 < N)
//    {
//        k++;
//    }
//    if(k*(k+1)/2 >= N) k--;
//    cout<<k<<endl;
//
//    int t = N-k*(k+1)/2;
//    
//    // 홀
//    if(k%2)
//        cout<<t<<"/"<<k+1-t+1<<endl;
//    else
//        cout<<k+1-t+1<<"/"<<t<<endl;
//    
//    return 0;
//}
