//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    string input;
//    
//    vector<int> p;
//    vector<int> s;
//    int seq;
//    bool stable = true;
//    while(true)
//    {
//        getline(cin, input);
//        if (input == ".") {
//            break;
//        }
//        
//        seq = 0;
//        stable = true;
//        for (int i=0; i<input.length(); i++) {
//            if(input[i] == '(')
//            {
//                p.push_back(++seq);
//            }
//            if (input[i] == ')') {
//                if(p.empty())
//                {
//                    stable = false;
//                    break;
//                }
//                seq++;
//                int n = p[p.size()-1];
//                p.pop_back();
//                for (int j=0; j<s.size(); j++) {
//                    if(s[j] > n)
//                    {
//                        stable = false;
//                        break;
//                    }
//                }
//            }
//            if(input[i] == '[')
//            {
//                s.push_back(++seq);
//
//            }
//            if (input[i] == ']') {
//                if(s.empty())
//                {
//                    stable = false;
//                    break;
//                }
//                seq++;
//                int n = s[s.size()-1];
//                s.pop_back();
//                for (int j=0; j<p.size(); j++) {
//                    if(p[j] > n)
//                    {
//                        stable = false;
//                        break;
//                    }
//                }
//            }
//        }
//        
//        if(p.empty() && s.empty() && stable)
//            cout<<"yes"<<endl;
//        else
//            cout<<"no"<<endl;
//
//        p.clear();
//        s.clear();
//    }
//    
//    return 0;
//}
//
