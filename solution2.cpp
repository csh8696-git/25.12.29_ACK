#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    double a = sqrt(n);
    int b = a;
    if (a == b) {
        answer = (a + 1) * (a + 1);
    }
    else {
        answer = -1;
    }
    return answer;
}


#include <string>
#include <vector>
#include <math.h>
using namespace std;

long long solution(long long n) {
    long long answer = sqrt(n);

    return powl(answer, 2) == n ? powl(answer + 1, 2) : -1;
}

#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;

    long long i;
    for (i = 1; i * i <= n; i++);
    if ((i - 1) * (i - 1) == n)
    {
        answer = i * i;
    }

    else {
        answer = -1;
    }



    return answer;
}

long long solution(long long n) {
    long long answer = 0, i = 0;
    for (i = 1; i * i <= n; i++)
        if (i * i == n)
            return (i + 1) * (i + 1);
    return -1;
}

#include <string>
#include <vector>
#include <algorithm> // sort 사용 위해 필요 
#include <string>
#include <numeric>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    if (sqrt(n) == floor(sqrt(n)))
        return pow(sqrt(n) + 1, 2);
    else
        return -1;
}