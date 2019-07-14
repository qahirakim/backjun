//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//
//    int A,B,C;
//    int nums[10] = {0, };
//
//    cin>>A>>B>>C;
//
//    string s = to_string(A*B*C);
//
//    for (int i=0; i<s.length(); i++) nums[s[i]-'0']++;
//    for (int i=0; i<10; i++)         cout<<nums[i]<<"\n";
//
//    return 0;
//}
//
//#include <iostream>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    int remainders[42] =  {0, };
//    int n;
//    for (int i=0; i<10; i++) {
//        cin>>n;
//        remainders[n%42]++;
//    }
//    int cnt = 0;
//    for (int i=0; i<42; i++) {
//        if(remainders[i])
//            cnt++;
//    }
//    cout<<cnt<<"\n";
//    return 0;
//}
//
