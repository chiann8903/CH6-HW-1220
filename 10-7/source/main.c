#include<stdio.h>
struct card {
	char *face;
	char *suit;
};
main() {
	struct card acard;
	struct card *cardptr;
	acard.face = "Ace";
	acard.suit = "Spades";
	cardptr = &acard;
	printf("%s %s %s\n%s %s %s\n%s %s %s\n", acard.face, "of", acard.suit, cardptr->face, "of", cardptr->suit, (*cardptr).face, "of", (*cardptr).suit);
	system("pause");
}