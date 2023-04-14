//2-26现在是否下雨
// #include<iostream>
// using namespace std;
// int main()
// {
//     bool flag = true;
//     char ch;
//     while (flag)
//     {
//         cout<<"现在正在下雨吗？";
//         cin>>ch;
//         if(ch == 'Y'){
//             cout<<"现在正在下雨"<<endl;
//             flag = false;
//         }
//         else if(ch == 'N'){
//             cout<<"现在没有下雨"<<endl;
//             flag = false;
//         }
//     }
// }
#include<iostream>
using namespace std;
int main()
{
    char ch;
    bool flag=true;
    while(flag){
        cout<<"Menu: A(dd) D(elete) S(ort) Q(uit), Select one:";
        cin>>ch;
        switch (ch)
        {
        case 'A':
            cout<<"数据已经增加"<<endl;
            break;
        case 'D':
            cout<<"数据已经删除"<<endl;
            break;
        case 'S':
            cout<<"数据已经排序"<<endl;
            break;
        case 'Q':
            flag = false;
            continue;
        default:
            break;
        }
    }
    return 0;
}
