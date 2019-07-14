//#include <iostream>
//#include <climits>
//#include <cmath>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    int side[3];
//    int max = INT_MIN;
//    int max_side = 0;
//    
//    while(true)
//    {
//        cin>>side[0]>>side[1]>>side[2];
//        if(side[0] == 0 &&  side[1] == 0 && side[2] == 0)
//            break;
//        
//        max = INT_MIN;
//        max_side = 0;
//        for (int i=0; i<3; i++)
//        {
//            if(max < side[i])
//            {
//                max = side[i];
//                max_side = i;
//            }
//        }
//        if(max_side == 0)
//        {
//            if (pow(side[0], 2) == pow(side[1], 2) + pow(side[2], 2))
//                cout<<"right\n";
//            else
//                cout<<"wrong\n";
//        }
//        else if(max_side == 1)
//        {
//            if (pow(side[1], 2) == pow(side[0], 2) + pow(side[2], 2))
//                cout<<"right\n";
//            else
//                cout<<"wrong\n";
//        }
//       else
//        {
//            if (pow(side[2], 2) == pow(side[1], 2) + pow(side[0], 2))
//                cout<<"right\n";
//            else
//                cout<<"wrong\n";
//        }
//        
//    }
//    
//    return 0;
//}
