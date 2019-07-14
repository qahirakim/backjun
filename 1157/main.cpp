//#include <iostream>
//#include <string>
//#include <cstring>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    string s;
//    int alpha[26];
//    
//    memset(alpha, 0, sizeof(int)*26);
//    
//    cin>>s;
//    
//    for(int i=0;i<s.length();i++)
//    {
//        if(s[i] >= 'a')
//            alpha[s[i] - 'a']++;
//        else
//            alpha[s[i] - 'A']++;
//    }
//    
//    int max = -1;
//    int max_i = 0;
//    for (int i=0; i<26; i++)
//    {
//        if(max<alpha[i])
//        {
//            max_i = i;
//            max = alpha[i];
//        }
//    }
//    bool flag = true;
//    for (int i=0; i<26; i++)
//    {
//        if(alpha[i] == max && max_i != i)
//        {
//            flag = false;
//            break;
//        }
//    }
//    if(flag)
//        cout<<(char)(max_i+'A')<<endl;
//    else
//        cout<<"?"<<endl;
//
//    return 0;
//}
