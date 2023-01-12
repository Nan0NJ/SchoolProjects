#include <stdio.h>

int GetTiamat(int*,int*,int*);
int main() {
	int Pickaxe;
	int LongSword;
	int RejuvenationBeads;
	printf("Number of pickaxes:");
	scanf("%d", &Pickaxe);
	printf("Number of long swords:");
	scanf("%d", &LongSword);
	printf("Number of rejuvenation beads:");
	scanf("%d", &RejuvenationBeads);
	int TiamatAmmount = 0;
	while(Pickaxe>0 && LongSword> 0 && RejuvenationBeads>0)
	{
		TiamatAmmount++;
		Pickaxe--;
		LongSword--;
		RejuvenationBeads-=2;
	}
	printf("Maximum number of Tiamat items you can craft: %d\n", TiamatAmmount);
	printf("Remaining pickaxes: %d\n", Pickaxe);
	printf("Remaining long swords: %d\n", LongSword);
	printf("Remaining rejuvenation beads: %d\n", RejuvenationBeads);
	return 0;
}