build:
	gcc msh.c -o msh
	gcc keyecho.c -o keyecho
	gcc echo.c -o echo


clean:
	rm msh
	rm keyecho
	rm echo
