//#include <iostream>
//
//using namespace std;
//
//int a[15][15];
//
//int main(int arg, char *argv[])
//{
//    int T, h, r;
//
//    cin>>T;
//    
//    for (int i=1; i<=14; i++) {
//        a[i][0] = i;
//        
//    }
//    for (int i=1; i<=14; i++) {
//        a[1][i] = 1;
//    }
//   
//    for (int i=0; i<T; i++)
//    {
//        
//        cin>>h>>r;
//        for (int j=1; j<=h; j++) {
//            for (int k=1; k<=r; k++) {
//                a[k][j] = a[k][j-1] + a[k-1][j];
//            }
//        }
//        cout<<a[r][h]<<endl;
//
//    }
//
//    return 0;
//}

//        for (int i=0; i<15; i++) {
//            for (int j=0; j<15; j++) {
//                cout<<a[j][i]<<" ";
//            }
//            cout<<endl;
//        }
