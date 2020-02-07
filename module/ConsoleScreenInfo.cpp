#include <windows.h>
#include <iostream>
#include "ConsoleScreenInfo.h"



Point ConsoleScreenInfo() {
	Point screen;

	HANDLE hWndConsole;
	if (hWndConsole = GetStdHandle(-12)) {
		CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
		if (GetConsoleScreenBufferInfo(hWndConsole, &consoleInfo)) {
			screen.x = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left + 1;
			screen.y = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top + 1;

		} else
			printf("Error: %d\n", GetLastError());
	} else
		printf("Error: %d\n", GetLastError());


	return screen;
}