//#include <iostream>
//#include <stack>
//#include <string>
//#include <sstream>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    int T;
//    string op;
//    stack<string> stk;
//    
//    string s;
//    
//    cin>>T;
//    
//    for (int i=0; i<=T; i++)
//    {
//        getline(cin, op);
//        stringstream ss(op);
//        
//        while(ss>>s)
//        {
//            if (s == "push")
//            {
//                ss>>s;
//                stk.push(s);
//            }
//            if (s == "pop")
//            {
//                if(!stk.empty())
//                {
//                    cout<<stk.top()<<endl;
//                    stk.pop();
//                }
//                else
//                    cout<<-1<<endl;
//            }
//            if (s == "top")
//            {
//                if(!stk.empty())
//                    cout<<stk.top()<<endl;
//                else
//                    cout<<-1<<endl;
//            }
//            if (s == "size")
//            {
//                cout<<stk.size()<<endl;
//            }
//            if (s == "empty")
//            {
//                cout<<stk.empty()<<endl;
//                
//            }
//            
//        }
//    }
//    
//    
//    return 0;
//}
