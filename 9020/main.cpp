//#include <iostream>
//#include <cmath>
//#include <cstring>
//#include <climits>
//
//using namespace std;
//
//bool seive[10001];
//
//int main(int argc, char *argv[])
//{
//    int T ,n;
//    int Goldbach[2];
//    
//    memset(seive, true, sizeof(bool)*(10001));
//    seive[1] = false;
//    int seed = sqrt(10000);
//    for (int i=2; i<=seed; i++)
//    {
//        for (int j=2; j*i<=10001; j++)
//        {
//            if(seive[i])
//                seive[i*j] = false;
//        }
//    }
//    
//    cin>>T;
//    int min = INT_MAX;
//    for (int t=0; t<T; t++)
//    {
//        cin>>n;
//        min = INT_MAX;
//        for (int i=2 ; i<=n/2; i++) {
//            if (seive[i] && seive[n-i])
//            {
//                if (min > n-2*i)
//                {
//                    min = n-2*i;
//                    Goldbach[0] = i;
//                    Goldbach[1] = n-i;
//                }
//            }
//        }
//        cout<<Goldbach[0]<<" "<<Goldbach[1]<<"\n";
//    }
//    
//    return 0;
//}
