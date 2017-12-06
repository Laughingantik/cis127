/*Gavin Anderson
CIS127, Assignment 2.2
Purpose: To find the wholesale cost from the input of retail and markup % */

#include<iostream>
#include <cstdlib>

using namespace std;


int main()
{
	double retail, wholeSale, markUp;	//double variables



	cout << "Enter the retail price: ";
	cin >> retail;


	cout << "enter markup {e.g.50 for 50%: ";
	cin >> markUp;


	/*************************************************
	*****Call calculatedRetail fuction to calculate***
	******************retail price********************
	*************************************************/

	cout << "The wholesale price for the item is: " << endl;
	cout << "$ " << retail / (1 + markUp) << endl;
	system("pause");
	return 0;
}
/*'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Users\ander_000\Desktop\CIS127Projects_Anderson\Debug\CIS127Projects_Anderson.exe'. Symbols loaded.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\ntdll.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\kernel32.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Unloaded 'C:\Windows\SysWOW64\kernel32.dll'
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\kernel32.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\KernelBase.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Program Files\AVAST Software\Avast\aswhookx.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\msvcp140d.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\vcruntime140d.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\ucrtbased.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\advapi32.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\msvcrt.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\sechost.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\rpcrt4.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\sspicli.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\cryptbase.dll'. Cannot find or open the PDB file.
'CIS127Projects_Anderson.exe' (Win32): Loaded 'C:\Windows\SysWOW64\bcryptprimitives.dll'. Cannot find or open the PDB file.
The thread 0x2328 has exited with code -1073741510 (0xc000013a).
The program '[9668] CIS127Projects_Anderson.exe' has exited with code -1073741510 (0xc000013a).*/