/*
 * =====================================================================================
 *
 *       Filename:  my_class.c
 *
 *    Description:  just for test
 *
 *        Version:  1.0
 *        Created:  09/21/2018 15:33:41
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhanfeng.zhang (), zhanfeng.zhang@icloud.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>

#include "my_class.h"
// 重载函数
static void
printMsg (int i)
{
	std::cout << i << std::endl;
}
void
MyClass::printMsg (void)
{
	std::cout << "I'M MyClass!" << std::endl;
}
