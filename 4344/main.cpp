//
//#include <iostream>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    int T,C;
//    int arr[1000];
//    
//    cout.setf(ios::fixed);
//    cout.precision(3);
//    
//    cin>>T;
//    double sum = 0;
//    double avg = 0.0;
//    int cnt = 0;
//    
//    for (int i=0; i<T; i++) {
//        cin>>C;
//        sum = 0.0;
//        avg = 0.0;
//        cnt = 0;
//        for (int j=0; j<C; j++) {
//            cin>>arr[j];
//            sum += arr[j];
//        }
//        avg = sum/(double)C;
//        for (int j=0; j<C; j++) {
//            if(avg < arr[j])
//                cnt++;
//        }
//
//        cout<<((double)cnt/(double)C)*100.0<<"%"<<endl;
//    }
//    
//    return 0;
//}
//
