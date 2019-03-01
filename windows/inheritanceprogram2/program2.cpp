#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<tchar.h>
void _tmain(int argc, TCHAR *argv[], TCHAR *env[])
{
	STARTUPINFO si1;
	PROCESS_INFORMATION pi1;
	ZeroMemory(&si1, sizeof(si1));
	si1.cb = sizeof(si1);
	ZeroMemory(&pi1, sizeof(pi1));
	/*if (argc != 2)
	{
		printf("Usage %S[cmdline]\n", argv[0]);
		getchar();
		return
	}*/

	if (!CreateProcess(LPCWSTR("C://Users//esdm//ncrwork//windows//inheritance11//program1.exe"),NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si1, &pi1))
	{
		printf("Create process Error %d", GetLastError());
		getchar();
		return;
	}
}
