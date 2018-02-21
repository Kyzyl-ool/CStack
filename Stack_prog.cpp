#include "Stack.hpp"

int main()
{
	CStack s;
	for (int i = 0; i < CSTACK_SIZE; i++)
		s.push(i);
	s.dump();
	return 0;
}
