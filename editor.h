
#include <stdio.h>
int edit(){
	// mozhno skazat hub zapisey
	char kg[256];
	char raz[256];
	char ves[256];
	printf("Skoljko kg\n");
	scanf("%s", kg);
	printf("Skoljko raz\n");
	scanf("%s", raz);
	printf("Kakoj TVOJ vies\n");
	scanf("%s", ves);
	FILE *barsik;
	barsik = fopen("manager", "w");
	fputs(kg, barsik);
	fputs("\n", barsik);
	fputs(raz, barsik);
	fputs("\n", barsik);
	fputs(ves, barsik);
	fputs("\n", barsik);
	fclose(barsik);
	return 0;

}
