﻿// cpp_parmlist.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include "Teacher.h"
using namespace std;
int main()
{
    Teacher t1;
    cout << t1.getName() << "\t" << t1.getAge() << endl;
    Teacher t2("Merry",12);
    cout << t2.getName() << "\t" << t2.getAge() << endl;
    Teacher t3("Merry", 12,150);
    cout << t3.getName() << "\t" << t3.getAge() <<"\t"<<t3.getMax()<< endl;
    system("pause");
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
