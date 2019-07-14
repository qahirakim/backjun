//#include <iostream>
//
//using namespace std;
//
//int picked[3];
//int smallest_picked[3] = {9999999, 9999999, 9999999};
//
//int N;
//
//void pick(int);
//bool eval(int, int, int);
//
//int main(int arg, char *argv[])
//{
//    for(int i=1;i<1000000;i++)
//    {
//        N=i;
//        if(i < 100)
//            cout<<-1<<endl;
//        else
//        {
//            smallest_picked[0] = smallest_picked[1] = smallest_picked[2] = 9999999;
//            picked[0] = picked[1] = picked[2] = 9999999;
//            pick(0);
//            if( smallest_picked[0] == 9999999 || smallest_picked[1] == 9999999 || smallest_picked[2] == 9999999)
//                cout<<-1<<endl;
//            
//            else cout<<smallest_picked[0]<<smallest_picked[1]<<smallest_picked[2]<<endl;
//        }
//
//    }
//    
////    cin>>N;
////
////    picked[0] = picked[1] = picked[2] = 1;
////    pick(0);
////    cout<<smallest_picked[0]<<smallest_picked[1]<<smallest_picked[2]<<endl;
//    return 0;
//}
// 
