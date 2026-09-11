#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <fstream>
#include <filesystem>

int main() {
    std::system("clear");
    MM:

    std::cout << "booting to ZextonOS" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(4));
    std::cout << "loading Systemd" << std::endl;
    std::cout << "processing bootstrap image" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "enabling CcomBoot" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "[SYSTEM PROCESS] - enbling extensions" << std::endl;
    std::cout << "[SYSTEM PROCESS] - pre-booting software" << std::endl;
    std::cout << "end" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "press enter to proceed" << std::endl;
    std::cin.get();
    std::system("clear");
    std::cout << "[SYSTEM PROCESS] - booting ZextonOS" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(6));
    std::system("clear");
    std::cout << "welcome to ZextonOS" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::system("clear");
    std::cout << "Type 'help' for help" << std::endl;
    MM1:

    std::string Sel1;
    std::cout << "root@root1$ #";
    std::cin >> Sel1;
    // here are the if cmds and stuff
    if (Sel1 == "help") {
        goto help;
    }
    if (Sel1 == "cls") {
        goto cls;
    }
    if (Sel1 == "mkdir") {
        goto mkdir;
    }
    if (Sel1 == "touch") {
        goto touch;
    }

    std::cout << "The cmd ";
    std::cout << Sel1;
    std::cout << " is not a currently registered cmd" << std::endl;
    std::cout << "Please type 'help' or goto our website 'https://zextonos.neocities.org/' for more help" << std::endl;
    goto MM1;

    help:
    std::cout << "current commands" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "help - shows this menu" << std::endl;
    std::cout << "cls - clears all text" << std::endl;
    std::cout << "mkdir - creates a folder" << std::endl;
    std::cout << "touch - creates a file" << std::endl;
    goto MM1;
    cls:
    std::system("clear");
    goto MM1;

    mkdir:
    std::string foldername;
    std::cout << "Folder Name > ";
    std::cin >> foldername;
    std::filesystem::create_directory(foldername);
    std::cout << "Folder created!" << std::endl;
    goto MM1;

    touch:
    std::string filename;
    std::cout << "File Name > ";
    std::cin >> filename;
    std::ofstream newfile(filename);
    newfile.close();
    std::cout << "File created!" << std::endl;
    goto MM1;
}
