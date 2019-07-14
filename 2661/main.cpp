//#include <iostream>
//
//using namespace std;
//
//int num[80];
//int N;
//
//void goodseq(int k);
//bool eval(int k);
//bool found = false;
//int main(int argc, char *argv[])
//{
//    cin>>N;
//    goodseq(0);
//    
//    return 0;
//}
//
//void goodseq(int k)
//{
//    if(k == N)
//    {
//        if(!eval(N))
//        {
//            if(!found)
//            {
//                found = true;
//                for (int i=0; i<k; i++) {
//                    cout<<num[i];
//                }cout<<"\n";
//            }
//        }
//        return;
//    }
//    if(eval(k) && k>1)
//    {
//        return;
//    }
//    for (int i=1; i<=3; i++)
//    {
//        if(num[k-1] == i && k > 0)
//            continue;
//        else
//        {
//            num[k] = i;
//            goodseq(k+1);
//
//        }
//        if(found)
//            return;
//    }
//}
//
//bool eval(int k)
//{
//    for (int p=0; p<=k-2; p++)
//    {
////        for (int l=2;l<=(k/2-p);l++)
//        for (int l=2;l<=(k-p)/2;l++)
//        {
//            int cnt = 0;
//           
//            for (int i=0; i<=l; i++)
//            {
//                if(num[p+i] == num[p+l+i])
//                    cnt++;
//            }
////            cout<<cnt<<endl;
//            if(cnt == l)
//                return true;
//        }
//    }
//    
//    return false;
//}
//
