#include <stdio.h>
#include <stdlib.h>
// Colors
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
int termux();
int apt();
int pacman();
int xbps();

int main() {
    int x;
    printf(ANSI_COLOR_YELLOW "\t[1]-Termux" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_YELLOW "\t[2]-Debian dists (apt package manager)" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_YELLOW "\t[3]-Arch dists (pacman package manager)" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_YELLOW "\t[4]-Void linux (xbps package manager)" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_GREEN "\nElige el sistema para el cual configurar zsh: " ANSI_COLOR_RESET);
    scanf("%i",&x);
    if (x == 1) {
        termux();
    }
    else if (x == 2) {
        apt();
    }
    else if (x == 3) {
        pacman();
    }
    else if (x == 4) {
        xbps();
    }
    else {
        printf("No existe esta opcion");
    }

    return 0;
}
int termux() {
    system("apt install zsh zsh-autosuggestions zsh-syntax-highlighting");
    system("cp zshrc ~/.zshrc");
    return 0;
}
int apt() {
    system("sudo apt install zsh zsh-autosuggestions zsh-syntax-highlighting");
    system("cp zshrc ~/.zshrc");
    return 0;
}
int pacman() {
    system("sudo pacman -S zsh zsh-autosuggestions zsh-syntax-highlighting");
    system("cp zshrc ~/.zshrc");
    return 0;
}
int xbps() {
    system("sudo xbps-install zsh zsh-autosuggestions zsh-syntax-highlighting");
    system("cp zshrc ~/.zshrc");
    return 0;
}
