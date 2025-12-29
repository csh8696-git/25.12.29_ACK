#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> a;

    while (n) {
        a.push_back(n % 10);
        n /= 10;
    }
    sort(a.begin(), a.end(), greater<int>());
    for (int i = 0; i < a.size(); i++) {
        answer *= 10;
        answer += a[i];
    }
    return answer;
}

#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

long long solution(long long n) {
    long long answer = 0;

    string str = to_string(n);
    sort(str.begin(), str.end(), greater<char>());
    answer = stoll(str);

    return answer;
}