Hello user

To compile ZextonOS so you can change the code n stuff you will require GCC. Follow the guide below to install GCC on your system, compile the code, and run it.

### How to Install GCC

#### Linux (Fedora)
Open your terminal and run:
sudo dnf groupinstall "Development Tools"

#### Linux (Ubuntu / Debian / Mint)
Open your terminal and run:
sudo apt update
sudo apt install build-essential

#### Linux (Arch Linux)
Open your terminal and run:
sudo pacman -S base-devel

#### Windows 10 and 11
1. Download MSYS2 from msys2.org and run the installer.
2. Open the "MSYS2 UCRT64" terminal that got installed.
3. Run this command to install the compiler:
   pacman -S mingw-w64-ucrt-x86_64-gcc mingw-w64-ucrt-x86_64-g++
4. Look up how to add "C:\msys64\ucrt64\bin" to your Windows Environment Variables (PATH) so you can use it in your normal CMD or PowerShell.

---

### How to Compile and Run

Once you have GCC installed, open your terminal or command prompt, navigate to the folder with the code, and use these commands:

#### Linux (All Distros)

To compile:
g++ ZextonSHELL.cpp -o ZextonOS

To run:
./ZextonOS

#### Windows 10 and 11 (PowerShell)

To compile:
g++ ZextonSHELL.cpp -o ZextonOS.exe

To run:
./ZextonOS.exe

#### Windows 10 and 11 (Command Prompt / CMD)

To compile:
g++ ZextonSHELL.cpp -o ZextonOS.exe

To run:
ZextonOS.exe
