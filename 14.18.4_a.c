/* 14.18.4.c */
#include <stdio.h>
#define LEN 41

struct name {
	char first[LEN];
	char middle[LEN];
	char last[LEN];
};
struct social {
	long serial;
	struct name person;
};
void display(struct social *);
int main(void)
{
	struct social *ps;
	struct social people[5] = {
		{21391929, {"Larry","Caron","Durrant"}},
		{90109281, {"Harry","James","Potter"}},
		{47898281, {"Adam", .last = "King"}},
		{77736123, {"Janine","Bacus","Lang"}},
		{86377727, {"Spencer","Easterwood","Qian"}},
	};
	ps = people;
	display(ps);
	return 0;
}

void display(struct social *p)
{
	for (int i = 0; i < 5; i++)
	{
		if ((p+i)->person.middle[0] != '\0')
			printf("type1: %s, %s %s. - %d\n", (p+i)->person.first,
										(p+i)->person.last,
										(p+i)->person.middle,
										(p+i)->serial);
		else
			printf("type2: %s, %s - %d\n", (p+i)->person.first,
									(p+i)->person.last,
									(p+i)->serial);
	}
}

