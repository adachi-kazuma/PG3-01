#include <stdio.h>
template <typename Type>


Type Min(Type a, Type b)
{
	if (a > b) {
		return static_cast<Type> (b);
	}
	return a;
}
template <>
char Min<char>(char a, char b) {
	printf("数字以外は代入出来ません\n");
	return a;
}
int main()
{
	printf("%d\n", Min<int>(100, 10));
	printf("%f\n", Min<float>(1.9f, 1.0f));
	printf("%If\n", Min<double>(12, 11));
	Min<char>('a', 'b');
	return 0;
}