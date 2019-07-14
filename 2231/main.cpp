//#include <iostream>
//#include <cmath>
//#include <climits>
//
//using namespace std;
//
//int N;
//int k;
//int x[7];
//int n[7] = {INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX};
//
//void pick(int depth);
//
//int main(int argc, char *argv[])
//{
//    cin>>N;
//    
//    // 자릿수 확인
//    for (k=0; k<7; k++)
//    {
//        if(N <= pow(10.0, k))
//            break;
//    }
//    cout<<k<<endl;
//    pick(0);
//    
//    if(n[0] < INT_MAX)
//    {
//        if(n[0] != 0) cout<<n[0];
//        for (int i=1; i<k; i++)
//        {
//            cout<<n[i];
//        }
//        cout<<endl;
//    }
//    else
//        cout<<0<<endl;
//    return 0;
//}
//
//
//void pick(int depth)
//{
//    if(depth == k)
//    {
//        int sum = 0;
//        for (int i=0; i<k; i++)
//        {
//            sum += x[i] * (1 + pow(10.0, k-1-i));
//        }
//        if(sum == N)
//        {
//            for (int i=0; i<k; i++)
//            {
//                if(x[i]>n[i]) break;
//                else if(x[i]<n[i])
//                {
//                    for (int j=0; j<k; j++)
//                        n[j] = x[j];
//                    break;
//                }
//            }
//        }
//        return;
//    }
//    for (int i=0; i<=9; i++) {
//        x[depth] = i;
//        pick(depth+1);
//    }
//}
