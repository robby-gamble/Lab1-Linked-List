#include <stdio.h>

#include "list.h"

int main() {
  printf("Tests for linked list implementation\n");
  
  list_t *test = list_alloc();
  
  list_add_to_back(test ,1);
  list_add_to_back(test, 2);
  list_add_to_back(test, 3);
  
  printf("The List Lenght is %d\n",list_length(test));
  printf("\n");
  
  
  printf("This is the list order when I just append: \n");
  list_print(test);
  
  
  list_add_to_front(test, 4);
  list_add_to_front(test, 5);
  
  printf("This is the list order after I prepend: \n");
  list_print(test);
  
  
  printf("This is the order of the list after I insert 10 at position 2: \n");
  list_add_at_index(test, 10, 2);
  list_print(test);
 
  printf("This is the order of the list after I remove from the back: \n");
  list_remove_from_back(test);
  list_print(test);
  
  printf("This is the order of the list after I remove from position one: \n");
  list_remove_at_index(test, 1);
  list_print(test);
  
  printf("Checking to see if 2 is in the list: \n");
  list_is_in(test, 2);
  printf("\n");
  
  printf("Returning the value at index 3: \n");
  printf("The Value at index 3 is: %d\n",list_get_elem_at(test,3));
  printf("\n");
 
  printf("Searching for the index of element 1: \n");
  printf("The Value 1 is at index: %d\n",list_get_index_of(test,1));
  printf("\n");
  
  list_free(test);
  
  return 0;
}