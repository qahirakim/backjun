//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    int N,M;
//    int cards[100001];
//    int guess;
//    cin>>N;
//    
//    for (int i=0; i<N; i++) {
//       scanf("%d ", &cards[i]);
//    }
//    cin>>M;
//    
//    sort(cards, cards+N);
//    
//    int mid = N/2;
//    int l = 0;
//    int r = N-1;
//    bool found = false;
//    for (int i=0; i<M; i++) {
//        scanf("%d ", &guess);
//        mid = N/2;
//        l = 0;
//        r = N-1;
//        found = false;
//        while(r-l >= 0)
//        {
//            mid = (l+r)/2;
//            if(cards[mid] == guess)
//            {
//                found = true;
//                break;
//            }
//            if(cards[mid] > guess)
//            {
//                r = mid-1;
//            }
//            else if(cards[mid] < guess)
//            {
//                l = mid+1;
//            }
//        }
//        if(found)
//            printf("1\n");
//        else printf("0\n");
//    }
//    
//    return 0;
//}
