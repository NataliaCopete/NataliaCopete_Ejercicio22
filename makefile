grafica.png:datos.txt
	python graf.py
datos.txt:
	c++ ej22.cpp
	./a.out>datos.txt

