#include <string.h>
#include <stdio.h>
int edit(){
	// mozhno skazat hub zapisey
	char kg[256] = "hoi maya";
	char raz[256] = "install gentoo";
	char ves[256] = "daite denek";
	char YepOrNop[2];
	wybor:
	printf("Skoljko kg\n");
	scanf("%s", kg);
	printf("Skoljko raz\n");
	scanf("%s", raz);
	printf("Kakoj TVOJ vies\n");
	scanf("%s", ves);
	printf("praviljno vviol? [Y/N] \n$ ");
	scanf("%s", YepOrNop);
	obosrals:
	if(!strcmp(YepOrNop, "Y") || !strcmp(YepOrNop, "y")) {
		printf("\nOke :>\n");
	} else if(!strcmp(YepOrNop, "N") || !strcmp(YepOrNop, "n"))
		goto wybor;
	else {
		printf("\nDibiluszka :rofl:\n");
		goto obosrals;
	}
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
