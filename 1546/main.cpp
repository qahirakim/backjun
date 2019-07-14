//#include <iostream>
//#include <climits>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    
//    double N;
//    cin>>N;
//    
//    int max = INT_MIN;
//    double scores[1001];
//    
//    for (int i=0; i<N; i++) {
//        cin>>scores[i];
//        if(max < scores[i])
//            max = scores[i];
//    }
//    double sum = 0.0;
//    for (int i=0; i<N; i++) {
//        scores[i] = 100.0*scores[i]/max;
//        sum += scores[i];
//    }
//    
//    printf("%0.6lf\n", sum/N);
//    
//    return 0;
//}
