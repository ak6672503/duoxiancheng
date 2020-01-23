#include <iostream>
#include<Windows.h>

using namespace std;
DWORD WINAPI Fun1Proc(
	LPVOID lpParameter
);
DWORD WINAPI Fun2Proc(
	LPVOID lpParameter
);


int tickets = 100;

int main()
{
	HANDLE hThread1;
	hThread1 = CreateThread(NULL, 0, Fun1Proc, NULL, 0, NULL);
	CloseHandle(hThread1);
	while(index++<1000)
	cout << "main thread is running\n";
	return 0;
}

//线程1的入口函数
DWORD WINAPI Fun1Proc(LPVOID lpParameter) {
	while (index++ < 1000)
	cout << "thread1 is running\n";
	Sleep(10);
	return  0;
}
