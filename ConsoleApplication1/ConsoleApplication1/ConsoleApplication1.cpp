#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <shellapi.h>

int main()
{
	HWND hq = 0;
	ShellExecute(0, (LPCWSTR)L"open", (LPCWSTR)L"一号\\rtknavi.exe", (LPCWSTR)L"", (LPCWSTR)L"", SW_SHOWNORMAL);
	ShellExecute(0, (LPCWSTR)L"open", (LPCWSTR)L"二号\\rtknavi.exe", (LPCWSTR)L"", (LPCWSTR)L"", SW_SHOWNORMAL);
	ShellExecute(0, (LPCWSTR)L"open", (LPCWSTR)L"三号\\rtknavi.exe", (LPCWSTR)L"", (LPCWSTR)L"", SW_SHOWNORMAL);
	ShellExecute(0, (LPCWSTR)L"open", (LPCWSTR)L"四号\\rtknavi.exe", (LPCWSTR)L"", (LPCWSTR)L"", SW_SHOWNORMAL);
	ShellExecute(0, (LPCWSTR)L"open", (LPCWSTR)L"五号\\rtknavi.exe", (LPCWSTR)L"", (LPCWSTR)L"", SW_SHOWNORMAL);
	ShellExecute(0, (LPCWSTR)L"open", (LPCWSTR)L"六号\\rtknavi.exe", (LPCWSTR)L"", (LPCWSTR)L"", SW_SHOWNORMAL);


    Sleep(20000);


	hq = FindWindow(NULL, (LPCWSTR)L"RTKNAVI ver.2.4.3 b29 刘鹏修改过的版本！！");
	HWND child = FindWindowEx(hq, NULL, (LPCWSTR)L"TPanel", NULL);
	child = FindWindowEx(hq, child, (LPCWSTR)L"TPanel", NULL);
	child = FindWindowEx(hq, child, (LPCWSTR)L"TPanel", NULL);
	HWND hBtn = FindWindowEx(child, NULL, NULL, (LPCWSTR)L"&Start");
	SendMessage(hBtn, BM_CLICK, 0, 0);

	hq = FindWindow(NULL, (LPCWSTR)L"RTKNAVI ver.2.4.3 b29 (2)");
	child = FindWindowEx(hq, NULL, (LPCWSTR)L"TPanel", NULL);
	child = FindWindowEx(hq, child, (LPCWSTR)L"TPanel", NULL);
	child = FindWindowEx(hq, child, (LPCWSTR)L"TPanel", NULL);
	hBtn = FindWindowEx(child, NULL, NULL, (LPCWSTR)L"&Start");
	SendMessage(hBtn, BM_CLICK, 0, 0);

	hq = FindWindow(NULL, (LPCWSTR)L"RTKNAVI ver.2.4.3 b29 (3)");
	child = FindWindowEx(hq, NULL, (LPCWSTR)L"TPanel", NULL);
	child = FindWindowEx(hq, child, (LPCWSTR)L"TPanel", NULL);
	child = FindWindowEx(hq, child, (LPCWSTR)L"TPanel", NULL);
	hBtn = FindWindowEx(child, NULL, NULL, (LPCWSTR)L"&Start");
	SendMessage(hBtn, BM_CLICK, 0, 0);

	hq = FindWindow(NULL, (LPCWSTR)L"RTKNAVI ver.2.4.3 b29 (4)");
	child = FindWindowEx(hq, NULL, (LPCWSTR)L"TPanel", NULL);
	child = FindWindowEx(hq, child, (LPCWSTR)L"TPanel", NULL);
	child = FindWindowEx(hq, child, (LPCWSTR)L"TPanel", NULL);
	hBtn = FindWindowEx(child, NULL, NULL, (LPCWSTR)L"&Start");
	SendMessage(hBtn, BM_CLICK, 0, 0);

	hq = FindWindow(NULL, (LPCWSTR)L"RTKNAVI ver.2.4.3 b29 (5)");
	child = FindWindowEx(hq, NULL, (LPCWSTR)L"TPanel", NULL);
	child = FindWindowEx(hq, child, (LPCWSTR)L"TPanel", NULL);
	child = FindWindowEx(hq, child, (LPCWSTR)L"TPanel", NULL);
	hBtn = FindWindowEx(child, NULL, NULL, (LPCWSTR)L"&Start");
	SendMessage(hBtn, BM_CLICK, 0, 0);

	hq = FindWindow(NULL, (LPCWSTR)L"RTKNAVI ver.2.4.3 b29 (6)");
	child = FindWindowEx(hq, NULL, (LPCWSTR)L"TPanel", NULL);
	child = FindWindowEx(hq, child, (LPCWSTR)L"TPanel", NULL);
	child = FindWindowEx(hq, child, (LPCWSTR)L"TPanel", NULL);
	hBtn = FindWindowEx(child, NULL, NULL, (LPCWSTR)L"&Start");
	SendMessage(hBtn, BM_CLICK, 0, 0);
}