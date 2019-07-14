//#include <iostream>
//#include <cstring>
//
//using namespace std;
//int map[100][100];
//
//int main(int argc, char *argv[])
//{
//    int m, n;
//    int T;
//    
//    cin>>T;
//    
//    for (int i=0; i<T; i++) {
//        cin>>m>>n;
//        memset(map, 0, sizeof(int)*m*n);
//        
//        for (int j=0; j<m; j++)
//        {
//            for (int k=0; k<n; k++)
//            {
//                cin>>map[j][k];
//            }
//        }
//        
//        int move = 0;
//        int col_cnt = 0;
//        for (int j=0; j<n; j++)
//        {
//            col_cnt = 0;
//            for (int k=0; k<m; k++)
//            {
//                if (map[m-1-k][j]) {
//                    move += (k - col_cnt);
//                    col_cnt++;
//
//                }
//            }
//        }
//        cout<<move<<endl;
//        
//    }
//    
//    return 0;
//}
