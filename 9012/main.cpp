//#include <iostream>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    int T;
//    cin>>T;
//    
//    stack<char> stk;
//    string op;
//    bool vps = true;
//    for (int i=0; i<T; i++)
//    {
//        cin>>op;
//        vps = true;
//        for (int j=0; j<op.length(); j++) {
//            if(op[j] == '(')
//                stk.push(op[j]);
//            else
//            {
//                if(!stk.empty())
//                {
//                    stk.pop();
//                }
//                else
//                    vps = false;
//            }
//        }
//        if(stk.empty() && vps) cout<<"YES"<<endl;
//        else            cout<<"NO"<<endl;
//        
//        while(!stk.empty()) stk.pop();
////        cin>>c;
////        if(c == '(')
////            stk.push(c);
////        else
////            stk.pop();
////
////        if(stk.empty()) cout<<"YES"<<endl;
////        else            cout<<"NO"<<endl;
////
////        while(!stk.empty()) stk.pop();
//    }
//    
//    return 0;
//}
