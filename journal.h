#include <stdio.h>
int journalm() {
	FILE *journal;
	struct jurnal_struct {
		char ves[20];
		char raz[20];
		char vestela[20];
	};
	struct jurnal_struct today;
	journal = fopen("manager", "r");
	fscanf(journal, "%s%s%s", today.ves, today.raz, today.vestela);
	if(!strcmp(today.raz, "bars") && strcmp(today.vestela, "2"))
		printf("Hoi maya >w<\n");
	else
		printf("Ves: \n%s\nRaz: \n%s\nVestela: \n%s\n", today.ves, today.raz, today.vestela);
	fclose(journal);
	return 0;
}
