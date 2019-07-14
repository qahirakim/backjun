//#include <iostream>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    int K;
//    cin>>K;
//    
//    int sp = 0;
//    int stack[100001] ={0, };
//    int n;
//    for (int i=0; i<K; i++)
//    {
//        cin>>n;
//        
//        if(n == 0)
//            sp--;
//        else
//            stack[sp++] = n;
//    }
//    
//    int sum = 0;
//    for (int i=0; i<sp; i++)
//    {
//        sum += stack[i];
//    }
//    
//    cout<<sum<<endl;
//    return 0;
//}
