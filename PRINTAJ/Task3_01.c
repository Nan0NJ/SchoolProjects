#include <stdio.h>

struct LOL{
	int Pickaxe;
	int LongSword;
	int RejuvenationBeads; // League of Legends ~ GAME
};
int main() {
	struct LOL Game;
	Game.Pickaxe = 0;
	Game.LongSword = 0;
	Game.RejuvenationBeads = 0;
	printf("Number of pickaxes:");
	scanf("%d", &Game.Pickaxe);
	printf("Number of long swords:");
	scanf("%d", &Game.LongSword);
	printf("Number of rejuvenation beads:");
	scanf("%d", &Game.RejuvenationBeads);
	int TiamatAmmount = 0;
	while(Game.Pickaxe>0 && Game.LongSword> 0 && Game.RejuvenationBeads>0)
	{
		TiamatAmmount++;
		Game.Pickaxe--;
		Game.LongSword--;
		Game.RejuvenationBeads-=2;
	}
	printf("Maximum number of Tiamat items you can craft: %d\n", TiamatAmmount);
	printf("Remaining pickaxes: %d\n", Game.Pickaxe);
	printf("Remaining long swords: %d\n", Game.LongSword);
	printf("Remaining rejuvenation beads: %d\n", Game.RejuvenationBeads);
	return 0;
}
