//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//void pick(int);
//
//int L, C;
//
//char alpha[15];
//bool visited[15];
//char picked[16]="A";
//
////string consonant = "bcdfghjklmnpqrstvwxz";
//string vowel = "aeiouy";
//
//int main(int argc, char *argv[])
//{
//    cin>>L>>C;
//    
//    for (int i=0; i<C; i++)
//    {
//        cin>>alpha[i];
//    }
//    
//    sort(alpha, alpha+C);
//    
//    pick(1);
//    
//    return 0;
//}
//
//void pick(int t)
//{
//    if (t == L+1)
//    {
//        int v = 0;
//        int c = 0;
//        for (int i=1; i<=L; i++)
//        {
//            if(vowel.find(picked[i]) != string::npos)
//            {
//                v++;
//            }
//            else
//                c++;
//        }
//        if(c>1 && v>0)
//        {
//            for (int i=1; i<=L; i++)
//                cout<<picked[i];
//            cout<<endl;
//        }
//        return;
//    }
//    for (int i=0; i<C; i++) {
//        if (visited[i] == false)
//        {
//            if(alpha[i] > picked[t-1])
//            {
//                picked[t] = alpha[i];
//                visited[i] = true;
//                pick(t+1);
//                visited[i] = false;
//            }
//        }
//    }
//}
