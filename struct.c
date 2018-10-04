//Rubin Peci and Anthony Lam
//Period 5
//2018-10-03
//Construction

#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declare the Breakfast structure 
struct Breakfast{ char *item; double  price; int calories; };

//the create method returns a breakfast based off a randomly generated number
struct Breakfast create()
{
	struct Breakfast menu;
	int num = rand() % 6;
	if (num == 0){
		struct Breakfast menu = {"eggs", 1.99, 300};
	}
	if (num == 1){
		struct Breakfast menu = {"bacon", 2.99, 600};
	}
	if(num==2){
		struct Breakfast menu = {"pancakes", 5.99, 900};
	}
	if(num==3){
		struct Breakfast menu = {"toast", 3.99, 800};
	}
	if(num==4){
		struct Breakfast menu = {"sausage", 4.99, 700};
	}
	if(num==5){
		struct Breakfast menu = {"bagel", 4.49, 600};
	}
	return menu;
}

//prints out each item in a readable way
void prints(struct Breakfast menu)
{
	printf("Item: %s\nPrice: %.2f\nCalories: %d\n", menu.item , menu.price, menu.calories);
}

//uses pointers to change the value of a given menu
void change(struct Breakfast *menu, char *_item, double _price, int _calories)
{
	menu->item=_item;
	menu->price=_price;
	menu->calories=_calories;
}

int main()
{	
	srand(time(NULL));
	printf("====Creates a new Breakfast Item====\n\n");
	struct Breakfast first = create();
	prints(first);
	printf("\n====Creates a new Breakfast Item====\n\n");
	struct Breakfast second = create();
	prints(second);
	printf("\n====Creates a new Breakfast Item====\n\n");
	struct Breakfast third = create();
	prints(third);
	printf("\n====Changes breakfast to waffles====\n\n");
	change(&third, "waffles", 6.99, 1000);
	prints(third);

	return 0;
}
  
