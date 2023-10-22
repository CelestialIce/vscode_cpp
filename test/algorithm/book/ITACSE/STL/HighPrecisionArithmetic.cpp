#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class BigInteger {
public:
    string val;
    BigInteger(string s): val(s) {}

    BigInteger operator+(const BigInteger& other) const {
        string a = val, b = other.val;
        string res;
        int carry = 0;
        while (a.size() < b.size()) a = '0' + a;
        while (b.size() < a.size()) b = '0' + b;
        for (int i = a.size() - 1; i >= 0; --i) {
            int sum = (a[i] - '0') + (b[i] - '0') + carry;
            res += to_string(sum % 10);
            carry = sum / 10;
        }
        if (carry) res += to_string(carry);
        reverse(res.begin(), res.end());
        return BigInteger(res);
    }

    BigInteger operator-(const BigInteger& other) const {
        // 简单实现：不考虑负数
        string a = val, b = other.val;
        string res;
        int carry = 0;
        while (a.size() < b.size()) a = '0' + a;
        while (b.size() < a.size()) b = '0' + b;
        for (int i = a.size() - 1; i >= 0; --i) {
            int diff = (a[i] - '0') - (b[i] - '0') - carry;
            if (diff < 0) {
                diff += 10;
                carry = 1;
            } else {
                carry = 0;
            }
            res += to_string(diff);
        }
        while (res.back() == '0') res.pop_back();
        reverse(res.begin(), res.end());
        return BigInteger(res);
    }

    BigInteger operator*(const BigInteger& other) const {
        string a = val, b = other.val;
        vector<int> res(a.size() + b.size(), 0);
        for (int i = a.size() - 1; i >= 0; --i) {
            for (int j = b.size() - 1; j >= 0; --j) {
                int mul = (a[i] - '0') * (b[j] - '0');
                int sum = mul + res[i + j + 1];
                res[i + j + 1] = sum % 10;
                res[i + j] += sum / 10;
            }
        }
        string result;
        for (int num : res) {
            result += to_string(num);
        }
        while (result[0] == '0') result.erase(result.begin());
        return BigInteger(result);
    }

    // 简单除法实现，假设结果为整数
    BigInteger operator/(const BigInteger& other) const {
        string a = val, b = other.val;
        string res;
        string temp;
        for (char ch : a) {
            temp += ch;
            int div = stoi(temp) / stoi(b);
            if (!(res.empty() && div == 0)) {
                res += to_string(div);
            }
            temp = to_string(stoi(temp) % stoi(b));
        }
        return BigInteger(res.empty() ? "0" : res);
    }
};

int main() {
    BigInteger a("1234"), b("567");
    BigInteger c = a + b;
    BigInteger d = a - b;
    BigInteger e = a * b;
    BigInteger f = a / BigInteger("2");

    cout <<  c.val << endl;
    cout <<  d.val << endl;
    cout <<  e.val << endl;
    cout <<  f.val << endl;

    return 0;
}
