#include <stdio.h>
#include <string.h>
#include "journal.h"
#include "editor.h"
int main(int argc, char **argv) {
	if(argc == 0) {
		printf("Laszpied ty pohodu nje umiejesh stavit argujeki:shorts:\nVso oczienj prosto:\n dlja prasmotra piszi proldzhekaczok look\n A dlja togo zapisatj infu nado napisatj proldzhekaczok edit\n jeslje jao licenzi agpl i eta pragrama swabodnaja\n");
		return 1;
	}
	if(!strcmp(argv[1], "edit"))
		edit();
	else if (!strcmp(argv[1], "look"))
		journalm();
	else {
		printf("Laszpied ty pohodu nje umiejesh stavit argujeki:shorts:\nVso oczienj prosto:\n dlja prasmotra piszi proldzhekaczok look\n A dlja togo zapisatj infu nado napisatj proldzhekaczok edit\n jeslje jao licenzi agpl i eta pragrama swabodnaja\n");
		return 2;
	}
	/*
	install gentoo >w<
	*/
	return 0;
}
