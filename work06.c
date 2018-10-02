#include <strings.h>
#include <stdio.h>
struct Breakfast{char *item; char *item2;};

struct Breakfast create(){
  struct Breakfast menu = {"eggs", "bacon"};
}

void prints(struct Breakfast menu){
  printf("%s , %s \n", menu -> item , menu -> item2);
}

void change(struct Breakfast menu, char* new){
}

int main(){
  struct Breakfast test = create();
  printf("%s\n", test.item);
  return 0;
}
  
