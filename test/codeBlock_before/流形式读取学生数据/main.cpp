#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>

using namespace std;

struct Student {
    string name;
    string gender;
    double physics;
    double chinese;
    double english;
    double math;
};

bool compareStudents(const Student& s1, const Student& s2) {
    if (s1.gender != s2.gender) {
        return s1.gender < s2.gender;
    } else {
        return s1.math > s2.math;
    }
}

int main() {
    ifstream file("data.txt");
    if (!file) {
        cout << "无法打开文件" << endl;
        return 1;
    }

    int numStudents;
    file >> numStudents;

    vector<Student> students;

    for (int i = 0; i < numStudents; ++i) {
        Student student;
        file >> student.name >> student.gender >> student.physics >> student.chinese >> student.english >> student.math;
        students.push_back(student);
    }

    // 计算每位学生的平均分
    cout << "学生平均分：" << endl;
    for_each(students.begin(), students.end(), [](const Student& student) {
        double avg = (student.physics + student.chinese + student.english + student.math) / 4.0;
        cout << student.name << ": " << fixed << setprecision(2) << avg << endl;
    });

    // 计算每门课程的平均分
    cout << "课程平均分：" << endl;
    vector<double> physicsScores, chineseScores, englishScores, mathScores;
    for (const auto& student : students) {
        physicsScores.push_back(student.physics);
        chineseScores.push_back(student.chinese);
        englishScores.push_back(student.english);
        mathScores.push_back(student.math);
    }
    cout << "物理: " << fixed << setprecision(2) << accumulate(physicsScores.begin(), physicsScores.end(), 0.0) / physicsScores.size() << endl;
    cout << "语文: " << fixed << setprecision(2) << accumulate(chineseScores.begin(), chineseScores.end(), 0.0) / chineseScores.size() << endl;
    cout << "英语: " << fixed << setprecision(2) << accumulate(englishScores.begin(), englishScores.end(), 0.0) / englishScores.size() << endl;
    cout << "数学: " << fixed << setprecision(2) << accumulate(mathScores.begin(), mathScores.end(), 0.0) / mathScores.size() << endl;

    // 学生排序
    sort(students.begin(), students.end(), compareStudents);
    cout << "学生排序：" << endl;
    for (const auto& student : students) {
        cout << student.name << " ";
    }
    cout << endl;

    return 0;
}
