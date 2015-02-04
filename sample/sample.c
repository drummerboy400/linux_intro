#include <stdio.h>

typedef enum CardSuit {
  spades = 1,
  hearts = 2,
  clubs = 4,
  diamonds = 8
} CardSuit;

typedef struct Card {
  enum CardSuit suit;
  unsigned short value;
} Card;

void display(Card* card) {
  if (card) {
    printf("The card has a value of %u and a suit of %u.\n", card->value, card->suit);
  } else {
    printf("The card is null.\n");
  }
}


int main() {
 
  printf("This is a printf statement.");
  printf(" It writes out to the stdout without a newline return after by default.\n");
  printf("It can take arguments as well. Which is very nifty.\n");
  printf("The arguments are referenced in the string in order.\n");
  printf("This displays an integer %d\n", 42);
  printf("This displays a double %g\n", 123.456);
  printf("This displays a hex value %x\n", 15);
  printf("This displays multiple. %d %g %x\n", 42, 123.456, 15);

  //Example of Use of a struct. Must be defined BEFORE using it.
  //Note void display(Card* card)s location above this method.
  Card carda;
  carda.suit = hearts;
  carda.value = 4;
  
  Card* card_pointer = &carda;
  display(card_pointer);
  
  Card* null_pointer = 0x00;
  display(null_pointer);
  
  return 0;
}

