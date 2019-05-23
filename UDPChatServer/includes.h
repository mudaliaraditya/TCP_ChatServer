#pragma once
#ifndef WIN32
#include <errno.h>
#include <stdio.h> 
#include <signal.h>
#include <stdlib.h> 
#include <unistd.h> 
#include <string.h> 
#include <string>
#include <sys/types.h> 
#include <sys/socket.h> 
#include <arpa/inet.h> 
#include <netinet/in.h>  
#include <iostream>
#include <string.h>
#include <pthread.h>
#include <signal.h>
#include <fstream>
#include <map>
#include <set>
#include <list>
#include <deque>
#include <stdint.h>
#include "defines.h"
#include "types.h"
#include "structs.h"
#include "enums.h"
#include "globals.h"
#include "AllClasses.h"
#include "NetworkHeader.h"
#include "functions.h"
using namespace std;
#endif
#ifdef WIN32

#include <errno.h>
#include <stdio.h> 
#include <stdlib.h> 
//#include <unistd.h> 
#include <string.h> 
#include <sys/types.h> 
//#include <sys/socket.h> 
//#include <arpa/inet.h> 
//#include <netinet/in.h> 
#include <iostream>  
#include <string.h>
#include <map>
#include <list>
#include <winsock.h>
//#include <WinSock2.h>
//#include <WS2tcpip.h>
#include <Windows.h>
#include <time.h>
#include "structs.h"
#include "defines.h"
#include "enums.h"
#include <process.h>

//#include <inaddr.h>
//#include <c:\Program Files (x86)\Windows Kits\8.1\Include\shared\inaddr.h>
#pragma comment (lib,"wsock32.lib")
#pragma comment (lib, "Ws2_32.lib")
#endif
