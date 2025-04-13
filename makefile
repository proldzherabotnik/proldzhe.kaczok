proldzhe-kaczok:
	mkdir build
	echo "OSTOROZHNO, jest bag die ty nje vvodisz niciego, no pri etom vylazit segmentation fault, prosto vvidi szto ugodno, hot prolzhe-kaczok fimoz"
	echo "Naczinaja s viersii 0.2 programka triebujet vvoda srazu oboih paramietrov po tipu proldzhe-kaczok fimoz fimozik"
	cc main.c -o build/proldzhe-kaczok
	cp manager build/manager
clean:
	rm -rf build
install:
	cp build/manager /usr/bin/manager
	cp build/proldzhe-kaczok /usr/bin/proldzhe-kaczok

