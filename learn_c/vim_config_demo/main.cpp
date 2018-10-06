/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  just for test
 *
 *        Version:  1.0
 *        Created:  09/21/2018 11:43:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhanfeng.zhang (), zhanfeng.zhang@icloud.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostring> 
#include <string> 
#include "lib/my_class.h" 
using namespace std; 
int g_num = 128; 
// 重载函数 
static void 
printMsg (char ch) 
{ 
	std::cout << ch << std::endl; 
} 
int 
main (void) 
{ 
	// 局部对象
	const string	name = "yangyang.gnu"; 
	// 类 
	MyClass	one; 
	// 成员函数 
	one.printMsg();
	// 使用局部对象 
	cout << g_num << name << endl; 
	return	(EXIT_SUCCESS); 
} 
