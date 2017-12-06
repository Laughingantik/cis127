/*Gavin Anderson
CIS127, Assignment 2.1
Purpose: Sends a greeting using your name */

#include <iostream> //for std::cout, std::cin, std::endl
#include <string> // for std string

using namespace std; // allow cout, cin, endl, string instead of std::cout/cin/endl,string

int main()
{
	string name;
	cout << "Gavin Anderson, CIS127, Assignment 2.1 " << endl;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Hello " <<  name << endl;
	return 0;
}

//OK, I thought I had fixed it because it had stopped double scanning. I still cannot get rid of these "cannot find or open...." messages in output
//I have tried creating a new project from scratch and these keep showing up, in my visual basic class this was the case as well,
//but we didnt need to copy the output messages. Also tried uninstalling visual studio and reinstalling. Got any other tips to try?

//OUTPUT:
/*'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Users\ander_000\Desktop\CIS127Projects_Anderson\Debug\CIS127Projects_Anderson.exe'. Symbols loaded.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\ntdll.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\kernel32.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Unloaded 'C:\Windows\SysWOW64\kernel32.dll'
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\kernel32.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\KernelBase.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\msvcp140d.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\vcruntime140d.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\ucrtbased.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\ucrtbased.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Unloaded 'C:\Windows\SysWOW64\ucrtbased.dll'
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\advapi32.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\msvcrt.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\sechost.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\rpcrt4.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\sspicli.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\cryptbase.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\bcryptprimitives.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\kernel.appcore.dll'. Cannot find or open the PDB file.
The thread 0x2038 has exited with code 0 (0x0).
The thread 0x154c has exited with code 0 (0x0).
The program '[1196] CIS127Projects_Anderson.exe' has exited with code 0 (0x0).*/
