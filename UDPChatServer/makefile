


all : server.out
	
server.out :  Source.cpp
	g++ -o server.out Source.cpp NetworkSources.cpp globals.cpp -std=c++11 -lpthread -g
	
#Source.o :
#	g++ -c Source.cpp -std=c++11 -lpthread -g

#NetworkSources.o :
#	g++ -c NetworkSources.cpp -std=c++11 -lpthread -g
clean : 
	rm *.out || true
