#include <stdio.h>
int journalm(char FromMToJ[10]) {
	FILE *journal;
	struct jurnal_struct {
		char ves[20];
		char raz[20];
		char vestela[20];
	};
	struct jurnal_struct today;
	journal = fopen(FromMToJ, "r");
	fscanf(journal, "%s%s%s", today.ves, today.raz, today.vestela);
	printf("Ves: \n%s\nRaz: \n%s\nVestela: \n%s\n", today.ves, today.raz, today.vestela);
	fclose(journal);
	return 0;
}
