#include <iostream>
#include <Windows.h>
#include <tlhelp32.h>

int wmain(int argc, WCHAR *argv[])
{
	if (argc != 2) {
		std::wcout << "[!] ModuleInfo.exe <ProcessID>" << std::endl;
		return 0;
	}

	DWORD procId = _wtoi(argv[1]);
	HANDLE hSnapshot = ::CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, procId);

	if (hSnapshot == INVALID_HANDLE_VALUE) {
		std::wcout << "Unable to create a snapshot of process id: " << std::dec << procId << ", see MSDN error: " << ::GetLastError() << std::endl;
		return 1;
	}

	MODULEENTRY32 me{ 0 };
	me.dwSize = sizeof(MODULEENTRY32);
	if (::Module32First(hSnapshot, &me)) {
		do {
			std::wcout << "Module name: " << me.szModule
				<< ", Base address: 0x" << std::hex << me.modBaseAddr
				<< ", End address: 0x" << me.modBaseAddr + me.modBaseSize
				<< ", Module size: " << me.modBaseSize
				<< ", Path: " << me.szExePath << std::endl;
		} while (::Module32Next(hSnapshot, &me));
	}
	else {
		std::wcout << "Unable to iterate through the modules in process 0x" << std::dec << procId << ", see MSDN error: " << ::GetLastError() << std::endl;
		::CloseHandle(hSnapshot);
		return 1;
	}

	::CloseHandle(hSnapshot);
	return 0;
}
