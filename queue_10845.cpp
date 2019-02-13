// 10845
#include <iostream>
#include <queue>
#include <string>

int main(int argc, const char * argv[]) {
    std::queue<int> q;
    int N=0;
    std::cin>>N;
    std::string s;
    for (int i=0; i<N; i++) {
        std::cin>>s;
        if(s == "push")
        {
            int d;
            std::cin>>d;
            q.push(d);
        }
        else if(s == "pop")
        {
            if(q.empty())
                std::cout<<-1<<std::endl;
            else
            {
                std::cout<<q.front()<<std::endl;
                q.pop();
            }
        }
        else if(s == "size")
        {
            std::cout<<q.size()<<std::endl;
        }
        else if(s == "empty")
        {
            if(q.empty())
                std::cout<<1<<std::endl;
            else
                std::cout<<0<<std::endl;
        }
        else if(s == "front")
        {
            if(q.empty())
                std::cout<<-1<<std::endl;
            else
            {
                std::cout<<q.front()<<std::endl;
            }
        }
        else if(s=="back")
        {
            if(q.empty())
                std::cout<<-1<<std::endl;
            else
            {
                std::cout<<q.back()<<std::endl;
            }
        }
    }
    
    return 0;
}
