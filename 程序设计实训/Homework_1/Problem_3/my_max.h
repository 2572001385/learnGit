#ifndef __MY_MAX__
#define __MY_MAX__

/**
* ����ģ�壬�Ƚ����������С������ϴ�Ĳ���
* @param a: T���͵Ĳ���
* @param b:	T���͵Ĳ���
* @return;	a,b�еĽϴ���
* @note:	1. a,b�������ԭ���ĿɱȽϹ�ϵ
*			2. string���Ͱ����ֵ���Ƚ�
*			3. ��a,b��ͬ������b
*/
template <typename T>
T Max(T a, T b) { return (a > b) ? a : b; }

#endif // !__MY_MAX__