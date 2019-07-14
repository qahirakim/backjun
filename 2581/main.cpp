//#include <iostream>
//
//using namespace std;
//
//
//int main(int arg, char *argv[])
//{
//    int M, N;
//    
//    cin>>M>>N;
//    bool isprime = true;
//    
//    int sum = 0;
//    int min_prime = 999999999;
//    for (int i=M; i<=N; i++)
//    {
//        isprime = true;
//        if (i != 1 && i != 2)
//        {
//            for (int j=i-1; j>1; j--) {
//                if(i%j == 0)
//                {
//                    isprime = false;
//                    break;
//                }
//            }
//            if(isprime)
//            {
//                sum += i;
//                if(i<min_prime)
//                    min_prime = i;
//            }
//        }
//        if(i == 2)
//        {
//            sum += 2;
//            min_prime = 2;
//        }
//    }
//    if(sum > 0)
//    {
//        cout<<sum<<endl;
//        cout<<min_prime<<endl;
//    }
//    else
//        cout<<-1<<endl;
//    
//    return 0;
//}
//
