#ifndef __MY_MAX__
#define __MY_MAX__

/**
* 函数模板，比较输入参数大小并输出较大的参数
* @param a: T类型的参数
* @param b:	T类型的参数
* @return;	a,b中的较大者
* @note:	1. a,b必须存在原生的可比较关系
*			2. string类型按照字典序比较
*			3. 若a,b相同，返回b
*/
template <typename T>
T Max(T a, T b) { return (a > b) ? a : b; }

#endif // !__MY_MAX__