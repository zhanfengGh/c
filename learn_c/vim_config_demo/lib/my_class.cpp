/*
 * =====================================================================================
 *
 *       Filename:  my_class.cpp
 *
 *    Description:  just for test
 *
 *        Version:  1.0
 *        Created:  09/21/2018 11:40:34
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

static void
printMsg (int i)
{
    std::cout << i << std::endl;
}

void
MyClass::printMsg(void)
{
    std::cout << "I'm MyClass!" << std::endl;
}

