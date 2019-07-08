build:
	gcc msh.c -o msh
	gcc keyecho.c -o keyecho


clean:
	rm msh
	rm keyecho
