//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void seq(int);
//
//int n[4] = {0, };
//int N;
//int cnt;
//
//int main(int argc, char *argv[])
//{
//    cin>>N;
//    
//    if(N<=10)
//        cout<<N<<endl;
//    else
//    {
//        seq(0);
//        cout<<cnt<<"\n";
//    }
//    return 0;
//}
//
//void seq(int k)
//{
//    if(k == 3)
//    {
//        if ((100*n[0]+10*n[1]+n[2]) > N) {
//            return;
//        }
//        else
//        {
////            cout<<n[0]<<n[1]<<n[2]<<endl;
//            if (n[0]) {
//                if(n[0]-n[1] == n[1]-n[2])
//                    cnt++;
//            }
//            else
//            {
//                if(!(n[0] == 0 && n[1] == 0 && n[2] == 0))
//                    cnt++;
//            }
//            return;
//        }
//    }
//    for (int i=0; i<=9; i++) {
//        n[k] = i;
//        seq(k+1);
//    }
//}
