//#include <iostream>
//#include <sstream>
//#include <string>
//#include <deque>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    string op;
//    string s;
//    stringstream ss;
//    deque<string> deq;
//    
//    int N;
//    cin>>N;
//
//    for (int i=0; i<=N; i++)
//    {
//        getline(cin, op);
//        ss = stringstream(op);
//        while (ss>>s)
//        {
//            if (s == "push_front")
//            {
//                ss>>s;
//                deq.push_front(s);
//            }
//            else if (s == "push_back")
//            {
//                ss>>s;
//                deq.push_back(s);
//            }
//            else if (s == "pop_front")
//            {
//                if(deq.empty())
//                    cout<<"-1\n";
//                else
//                {
//                    cout<<deq.front()<<"\n";
//                    deq.pop_front();
//                }
//            }
//            else if (s == "pop_back")
//            {
//                if(deq.empty())
//                    cout<<"-1\n";
//                else
//                {
//                    cout<<deq.back()<<"\n";
//                    deq.pop_back();
//                }
//            }
//            else if (s == "size")
//            {
//                cout<<deq.size()<<"\n";
//            }
//            else if (s == "front")
//            {
//                if(deq.empty())
//                    cout<<"-1\n";
//                else
//                    cout<<deq.front()<<"\n";
//            }
//            else if (s == "back")
//            {
//                if(deq.empty())
//                    cout<<"-1\n";
//                else
//                    cout<<deq.back()<<"\n";
//            }
//            
//            else if (s == "empty")
//            {
//                cout<<deq.empty()<<"\n";
//            }
//        }
//        
//    }
//    
//    return 0;
//}

//15
//push_back 1
//push_front 2
//front
//back
//size
//empty
//pop_front
//pop_back
//pop_front
//size
//empty
//pop_back
//push_front 3
//empty
////front
//15
//push_back 1
//push_front 2
//front
//back
//size
//empty
//pop_front
//pop_back
//pop_front
//size
//empty
//pop_back
//push_front 3
//empty
//front
//예제 출력 1
//2
