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

void change(struct Breakfast *menu, char *_item, double _price, int _calories)
{
	menu->item=_item;
	menu->price=_price;
	menu->calories=_calories;
}

int main()
{
	struct Breakfast test = create();
	prints(test);
	change(&test, "cereal", 0.99, 200);
	prints(test);

	return 0;
}
  
