// #include<bits/stdc++.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <strstream>
#include <tuple>
#include <typeinfo>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>

using namespace std;

int main()
{
    int x, n;
    long long int sum = 0;
    cin >> x >> n;
    for (int i = 2; i <= n; i += 2)
    {
        sum += pow(x * 1.0, i * 1.0);
    }
    cout << sum;

    return 0;
}

/*
if (x > 1 && n > 2)
    {
        for (int i = 2; i < n; i = i + 2)
        {
            long long int res = 1; // 5-25 = 25 --- 5-25-125-625
            for (int j = 0; j < i; j++)
            {
                res = res * x;
            }
            sum = sum + res;
        }
        cout << sum;
    }
    else if (x == 0)
        cout << 0;
    else if (x == 1)
        cout << x;
    else if (n == 2)
        cout << x * x;
    else if (n == 1)
        cout << x;
*/