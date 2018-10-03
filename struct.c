#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Breakfast{ char *item; double  price; int calories; };



struct Breakfast create()
{
  srand(time(NULL));
  struct Breakfast menu;
  int num = rand()%10;
  if (num<4){
        struct Breakfast menu = {"eggs", 1.99, 300};
  }
  else{
    if (num<7){
      struct Breakfast menu = {"bacon", 2.99, 600};
    }
    else{
      struct Breakfast menu = {"pancakes", 5.99, 900};
    }
  }
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
  
