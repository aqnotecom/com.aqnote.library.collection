/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/13/19 10:01:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  "Peng Li<aqnote@qq.com>"
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>

#include "moduleA.hpp"
#include "moduleB.hpp"

int main(int argc, char** argv)
{
    A a;
    cout << "CALL " << a.get() << endl;

    B b;
    cout << "CALL " << b.get() << endl;
    return 0;
}
