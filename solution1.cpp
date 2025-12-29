#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    answer = stoi(s);
    return answer;
}

//int solution(string s) {
//    int answer = 0;
//    int m = 1;
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (s[i] >= '0' && s[i] <= '9')
//        {
//            answer *= 10;
//            answer += (s[i] - 48);
//        }
//        else if (s[i] == '-')
//            m = -1;
//    }
//    return answer * m;
//}
//
//int solution(string s) {
//    int answer = 0;
//    for (int i = s.size() - 1; i >= 0; i--) {
//        if (s[i] == '-' || s[i] == '+') { answer = s[i] == '-' ? answer * (-1) : answer; break; }
//        answer += pow(10, s.size() - i - 1) * (s[i] - '0');
//    }
//    return answer;
//}
//
//int solution(string s) {
//    int answer = 0;
//
//    answer = atoi(s.c_str());
//
//    return answer;
//}
//
//#include<sstream>
//int solution(string s) {
//    int answer = 0;
//    stringstream ss;
//    ss.str(s);
//    ss >> answer;
//
//    return answer;
//}