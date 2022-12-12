/*          Desenvolvedor Erasmo Cardoso
                        Instalador automatico do PAMAC no arch linuc ou manjaro
*/
#include <iostream>
#include <string.h>
#include <cstdlib>

// Variaveis Globais

std::string comando;
int opc;

//funções

void menu(){
    std::cout<<" ╭─━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━─╮  "<<std::endl;
    std::cout<<" ┋                                                       ┋ "<<std::endl;
    std::cout<<" ┋               Instalador do yay e PAMAC               ┋ "<<std::endl;
    std::cout<<" ┋                                                       ┋ "<<std::endl;
    std::cout<<" ╰─━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━─╯ "<<std::endl;
}

void fim(){
    std::cout<<" ╭─━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━─╮  "<<std::endl;
    std::cout<<" ┋                                                       ┋ "<<std::endl;
    std::cout<<" ┋               FIM PAMAC E YAY INSTALADOS              ┋ "<<std::endl;
    std::cout<<" ┋                                                       ┋ "<<std::endl;
    std::cout<<" ╰─━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━─╯ "<<std::endl;
}

void limpa(){ system("clear");}

void yayinst(){
    std::string yay = "cd  ~/yay  && makepkg -si";
    system("sudo pacman -S git");
    system("git clone https://aur.archlinux.org/yay.git");
    system(yay.c_str());
}

void pamac(){
    std::string pamac = "yay -S pamac-aur";
    system(pamac.c_str());
}
// Programa
int main(){
    menu();
    yayinst();
    pamac();
    limpa();
    fim();

    return 0;
}
