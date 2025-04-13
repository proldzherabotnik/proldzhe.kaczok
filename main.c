#include <stdio.h>
#include <string.h>
#include "journal.h"
#include "editor.h"
int main(int argc, char **argv) {
	if(argc == 0) {
		printf("Laszpied ty pohodu nje umiejesh stavit argujeki:shorts:\nVso oczienj prosto:\n dlja prasmotra piszi proldzhekaczok look\n A dlja togo zapisatj infu nado napisatj proldzhekaczok edit\nTiepier mozhno pisatj v kakoj fajljek dobro zapisatj, dlja etogo nado vviesti proldzhe-kaczok edit/look Imia_Fajla\n jeslje jao licenzi agpl i eta pragrama swabodnaja\n");
		return 1;
	}
	if(!strcmp(argv[1], "edit")) {
		if(argc < 2 || !strcmp(argv[2], "manager")) {
			edit("manager");
		} else if(strcmp(argv[2], "manager")) {
			edit(argv[2]);
		}
	} else if (!strcmp(argv[1], "look")) {
		if(argc < 2 || !strcmp(argv[2], "manager")) {
			journalm("manager");
		} else if(strcmp(argv[2], "manager")) {
			journalm(argv[2]);
		}
	} else {
		printf("Laszpied ty pohodu nje umiejesh stavit argujeki:shorts:\nVso oczienj prosto:\n dlja prasmotra piszi proldzhekaczok look\n A dlja togo zapisatj infu nado napisatj proldzhekaczok edit\nTiepier mozhno pisatj v kakoj fajljek dobro zapisatj, dlja etogo nado vviesti proldzhe-kaczok edit/look Imia_Fajla\n jeslje jao licenzi agpl i eta pragrama swabodnaja\n");
		return 2;
	}
	/*
	install gentoo >w<
	*/
	return 0;
}
