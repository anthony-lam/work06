#include <strings.h>
#include <stdio.h>

struct Breakfast{ char *item; double  price; int calories; };

struct Breakfast create()
{
 	struct Breakfast menu = {"eggs", 1.99, 300};
	return menu;
}

void prints(struct Breakfast menu)
{
	printf("Item: %s\nPrice: %.2f\nCalories: %d\n", menu.item , menu.price, menu.calories);
}

void change(struct Breakfast menu, char* new)
{
}

int main()
{
	struct Breakfast test = create();
	prints(test);
	return 0;
}
  
