#include <stdio.h>

union un {
	int member1;
	char member2;
	float member3;
};

int main()
{
	union un var1;
	var1.member1 = 15;
	printf("The value stored in member1 and member2 = %d",var1.member1);
    var1.member2 = 'A';
    printf("\nThe value stored in member1 and member2 = %c",var1.member2);
	return 0;
}
