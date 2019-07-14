//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    string s1;
//    string s2;
//    
//    cin>>s1>>s2;
//    
//    bool bigger = false;
//    // s1 bigger : true;
//    // s2 bigger : false;
//    // same don't care
//    for (int i=s1.length()-1; i>=0; i--) {
//        if(s1[i] > s2[i])
//        {
//            bigger = true;
//            break;
//        }
//        else if(s1[i] < s2[i])
//        {
//            bigger = false;
//            break;
//        }
//    }
//    
//    if(bigger)
//    {
//        for (int i=s1.length()-1; i>=0; i--) {
//            cout<<s1[i];
//        }
//        cout<<endl;
//    }
//    else
//    {
//        for (int i=s2.length()-1; i>=0; i--) {
//            cout<<s2[i];
//        }
//        cout<<endl;
//    }
//    return 0;
//}
