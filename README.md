Download here: [ModuleInfo.exe x64](https://github.com/ismaelvazquez182/ModuleInfo/releases/tag/v1.0.0.0)

usage: ModuleInfo.exe <process_id>

This tool prints all the loaded modules in a running processes memory space. It also prints where in memory those modules are located, the modules sizes, and the file path on disk to the modules.

Several tools can be used to retrieve a proccesses procces ID. The most basic of which would be Task Manager. Simply press [ctrl] + [alt] + [delete] and select task manager. Under the Details tab there will be a PID column. Pass this value to ModuleInfo.exe.

Sample output:
```
C:\Users\ismae\Downloads>ModuleInfo.exe 5112
Module name: nvsphelper64.exe, Base address: 0x00007FF657FC0000, End address: 0x00007FF658095000, Module size: d5000, Path: C:\Program Files\NVIDIA Corporation\ShadowPlay\nvsphelper64.exe
Module name: ntdll.dll, Base address: 0x00007FFFA6350000, End address: 0x00007FFFA6567000, Module size: 217000, Path: C:\Windows\SYSTEM32\ntdll.dll
Module name: KERNEL32.DLL, Base address: 0x00007FFFA4800000, End address: 0x00007FFFA48C4000, Module size: c4000, Path: C:\Windows\System32\KERNEL32.DLL
Module name: KERNELBASE.dll, Base address: 0x00007FFFA3790000, End address: 0x00007FFFA3B3D000, Module size: 3ad000, Path: C:\Windows\System32\KERNELBASE.dll
Module name: SHELL32.dll, Base address: 0x00007FFFA57A0000, End address: 0x00007FFFA6008000, Module size: 868000, Path: C:\Windows\System32\SHELL32.dll
Module name: msvcp_win.dll, Base address: 0x00007FFFA3FE0000, End address: 0x00007FFFA407A000, Module size: 9a000, Path: C:\Windows\System32\msvcp_win.dll
Module name: ucrtbase.dll, Base address: 0x00007FFFA3670000, End address: 0x00007FFFA3781000, Module size: 111000, Path: C:\Windows\System32\ucrtbase.dll
Module name: USER32.dll, Base address: 0x00007FFFA60A0000, End address: 0x00007FFFA624E000, Module size: 1ae000, Path: C:\Windows\System32\USER32.dll
Module name: win32u.dll, Base address: 0x00007FFFA3E50000, End address: 0x00007FFFA3E76000, Module size: 26000, Path: C:\Windows\System32\win32u.dll
Module name: GDI32.dll, Base address: 0x00007FFFA6260000, End address: 0x00007FFFA6289000, Module size: 29000, Path: C:\Windows\System32\GDI32.dll
Module name: gdi32full.dll, Base address: 0x00007FFFA3D30000, End address: 0x00007FFFA3E49000, Module size: 119000, Path: C:\Windows\System32\gdi32full.dll
Module name: ole32.dll, Base address: 0x00007FFFA4E10000, End address: 0x00007FFFA4FB5000, Module size: 1a5000, Path: C:\Windows\System32\ole32.dll
Module name: combase.dll, Base address: 0x00007FFFA4180000, End address: 0x00007FFFA450D000, Module size: 38d000, Path: C:\Windows\System32\combase.dll
Module name: RPCRT4.dll, Base address: 0x00007FFFA5120000, End address: 0x00007FFFA5234000, Module size: 114000, Path: C:\Windows\System32\RPCRT4.dll
Module name: ADVAPI32.dll, Base address: 0x00007FFFA4530000, End address: 0x00007FFFA45E2000, Module size: b2000, Path: C:\Windows\System32\ADVAPI32.dll
Module name: msvcrt.dll, Base address: 0x00007FFFA46A0000, End address: 0x00007FFFA4747000, Module size: a7000, Path: C:\Windows\System32\msvcrt.dll
Module name: sechost.dll, Base address: 0x00007FFFA4750000, End address: 0x00007FFFA47F9000, Module size: a9000, Path: C:\Windows\System32\sechost.dll
Module name: bcrypt.dll, Base address: 0x00007FFFA3FB0000, End address: 0x00007FFFA3FD8000, Module size: 28000, Path: C:\Windows\System32\bcrypt.dll
Module name: IMM32.DLL, Base address: 0x00007FFFA4DC0000, End address: 0x00007FFFA4DF1000, Module size: 31000, Path: C:\Windows\System32\IMM32.DLL
Module name: msasn1.dll, Base address: 0x00007FFFA3300000, End address: 0x00007FFFA3312000, Module size: 12000, Path: C:\Windows\SYSTEM32\msasn1.dll
Module name: profapi.dll, Base address: 0x00007FFFA35A0000, End address: 0x00007FFFA35C1000, Module size: 21000, Path: C:\Windows\SYSTEM32\profapi.dll
Module name: wtsapi32.dll, Base address: 0x00007FFFA2520000, End address: 0x00007FFFA2534000, Module size: 14000, Path: C:\Windows\SYSTEM32\wtsapi32.dll
Module name: msvcp140.dll, Base address: 0x00007FFF81390000, End address: 0x00007FFF8141D000, Module size: 8d000, Path: C:\Windows\SYSTEM32\msvcp140.dll
Module name: VCRUNTIME140.dll, Base address: 0x00007FFF81480000, End address: 0x00007FFF8149E000, Module size: 1e000, Path: C:\Windows\SYSTEM32\VCRUNTIME140.dll
Module name: VCRUNTIME140_1.dll, Base address: 0x00007FFF81360000, End address: 0x00007FFF8136C000, Module size: c000, Path: C:\Windows\SYSTEM32\VCRUNTIME140_1.dll
Module name: version.dll, Base address: 0x00007FFF9BDA0000, End address: 0x00007FFF9BDAA000, Module size: a000, Path: C:\Windows\SYSTEM32\version.dll
Module name: wldp.dll, Base address: 0x00007FFFA2F10000, End address: 0x00007FFFA2F59000, Module size: 49000, Path: C:\Windows\SYSTEM32\wldp.dll
Module name: OLEAUT32.dll, Base address: 0x00007FFFA4AF0000, End address: 0x00007FFFA4BC7000, Module size: d7000, Path: C:\Windows\System32\OLEAUT32.dll
Module name: windows.storage.dll, Base address: 0x00007FFFA1580000, End address: 0x00007FFFA1E7E000, Module size: 8fe000, Path: C:\Windows\SYSTEM32\windows.storage.dll
Module name: wintypes.dll, Base address: 0x00007FFFA1440000, End address: 0x00007FFFA157F000, Module size: 13f000, Path: C:\Windows\SYSTEM32\wintypes.dll
Module name: SHCORE.dll, Base address: 0x00007FFFA5020000, End address: 0x00007FFFA5119000, Module size: f9000, Path: C:\Windows\System32\SHCORE.dll
Module name: shlwapi.dll, Base address: 0x00007FFFA4FC0000, End address: 0x00007FFFA501E000, Module size: 5e000, Path: C:\Windows\System32\shlwapi.dll
Module name: ntmarta.dll, Base address: 0x00007FFFA2780000, End address: 0x00007FFFA27B4000, Module size: 34000, Path: C:\Windows\SYSTEM32\ntmarta.dll
Module name: cryptnet.dll, Base address: 0x00007FFF9B8D0000, End address: 0x00007FFF9B902000, Module size: 32000, Path: C:\Windows\SYSTEM32\cryptnet.dll
Module name: CRYPT32.dll, Base address: 0x00007FFFA3BC0000, End address: 0x00007FFFA3D27000, Module size: 167000, Path: C:\Windows\System32\CRYPT32.dll
Module name: drvstore.dll, Base address: 0x00007FFF9B760000, End address: 0x00007FFF9B8C2000, Module size: 162000, Path: C:\Windows\SYSTEM32\drvstore.dll
Module name: devobj.dll, Base address: 0x00007FFFA3390000, End address: 0x00007FFFA33BC000, Module size: 2c000, Path: C:\Windows\SYSTEM32\devobj.dll
Module name: cfgmgr32.dll, Base address: 0x00007FFFA3340000, End address: 0x00007FFFA338E000, Module size: 4e000, Path: C:\Windows\SYSTEM32\cfgmgr32.dll
Module name: cryptbase.dll, Base address: 0x00007FFFA2E60000, End address: 0x00007FFFA2E6C000, Module size: c000, Path: C:\Windows\SYSTEM32\cryptbase.dll
Module name: nvsphelperplugin64.dll, Base address: 0x00007FFF42200000, End address: 0x00007FFF422D9000, Module size: d9000, Path: C:\Program Files\NVIDIA Corporation\ShadowPlay\nvsphelperplugin64.dll
Module name: uxtheme.dll, Base address: 0x00007FFFA0250000, End address: 0x00007FFFA0300000, Module size: b0000, Path: C:\Windows\system32\uxtheme.dll
Module name: MSCTF.dll, Base address: 0x00007FFFA48D0000, End address: 0x00007FFFA4A2B000, Module size: 15b000, Path: C:\Windows\System32\MSCTF.dll
Module name: ipccommon64.dll, Base address: 0x00007FFF72270000, End address: 0x00007FFF72360000, Module size: f0000, Path: C:\Program Files\NVIDIA Corporation\ShadowPlay\ipccommon64.dll
Module name: libprotobuf.dll, Base address: 0x00007FFF79CF0000, End address: 0x00007FFF79E23000, Module size: 133000, Path: C:\Program Files\NVIDIA Corporation\nvcontainer\libprotobuf.dll
Module name: iphlpapi.dll, Base address: 0x00007FFFA2190000, End address: 0x00007FFFA21BD000, Module size: 2d000, Path: C:\Windows\SYSTEM32\iphlpapi.dll
Module name: wintrust.dll, Base address: 0x00007FFFA3E80000, End address: 0x00007FFFA3EEB000, Module size: 6b000, Path: C:\Windows\System32\wintrust.dll
Module name: imagehlp.dll, Base address: 0x00007FFFA4510000, End address: 0x00007FFFA452F000, Module size: 1f000, Path: C:\Windows\System32\imagehlp.dll
Module name: CRYPTSP.dll, Base address: 0x00007FFFA2E40000, End address: 0x00007FFFA2E5B000, Module size: 1b000, Path: C:\Windows\SYSTEM32\CRYPTSP.dll
Module name: rsaenh.dll, Base address: 0x00007FFFA26C0000, End address: 0x00007FFFA26F5000, Module size: 35000, Path: C:\Windows\system32\rsaenh.dll
Module name: bcryptPrimitives.dll, Base address: 0x00007FFFA3B40000, End address: 0x00007FFFA3BBB000, Module size: 7b000, Path: C:\Windows\System32\bcryptPrimitives.dll
Module name: gpapi.dll, Base address: 0x00007FFFA2C70000, End address: 0x00007FFFA2C96000, Module size: 26000, Path: C:\Windows\SYSTEM32\gpapi.dll
Module name: MessageBus.dll, Base address: 0x00007FFF7A0C0000, End address: 0x00007FFF7A7F7000, Module size: 737000, Path: C:\Program Files\NVIDIA Corporation\NvContainer\MessageBus.dll
Module name: WS2_32.dll, Base address: 0x00007FFFA5240000, End address: 0x00007FFFA52B1000, Module size: 71000, Path: C:\Windows\System32\WS2_32.dll
Module name: kernel.appcore.dll, Base address: 0x00007FFFA2760000, End address: 0x00007FFFA2778000, Module size: 18000, Path: C:\Windows\SYSTEM32\kernel.appcore.dll
Module name: NSI.dll, Base address: 0x00007FFFA4DB0000, End address: 0x00007FFFA4DB9000, Module size: 9000, Path: C:\Windows\System32\NSI.dll
Module name: dhcpcsvc.DLL, Base address: 0x00007FFF9F770000, End address: 0x00007FFF9F78F000, Module size: 1f000, Path: C:\Windows\SYSTEM32\dhcpcsvc.DLL
```
