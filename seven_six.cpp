#include <iostream>
#include <Windows.h>
#include <stdlib.h>


void gotoxy(int x = 0, int y = 0){
    COORD poin;
    poin.X = x;
    poin.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), poin);
};

void delay(){
    int delay;
	delay = 5;
	while(delay<10000000){
	delay++;}
};

void border(){
    system("color F4");
    for(int i = 0; i < 60; i++){
        gotoxy(i+8,0);
        std::cout << '=';
        delay();
    }

    for(int i = 0; i < 60; i++){
        gotoxy(i+ 8,18);
        std::cout << '=';
        delay();
    }
};

void seven(){
    gotoxy(8, 2);
    for(int i = 0; i < 20; i++){
        if(i == 0 | i == 1 | i == 2 |i == 19){
            std::cout << ' ';
            delay();
        }else{
            std::cout << '*';
            delay();
        }

    }
    std::cout << std::endl;

    gotoxy(8, 3);
    for(int i = 0; i < 20; i++){
        if(i == 0 | i == 1 | i == 2 | i == 3 |i == 18 | i == 19){
            std::cout << ' ';
            delay();
        }
        else{
            std::cout << '*';
            delay();
        }
    }
    std::cout << std::endl;

    gotoxy(8, 4);
    for(int i = 0; i < 20; i++){
        if(i >= 15 && i <= 16){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    }

    gotoxy(8, 5);
    for(int i = 0; i < 20; i++){
        if(i >= 11 && i <= 15){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    }

    gotoxy(8, 6);
    for(int i = 0; i < 20; i++){
        if(i >= 10 && i <= 14){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    }

    gotoxy(8, 7);
    for(int i = 0; i < 20; i++){
        if(i >= 9 && i <= 13){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    }

    gotoxy(8, 8);
    for(int i = 0; i < 20; i++){
        if(i >= 8 && i <= 12){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    }

    gotoxy(8, 9);
    for(int i = 0; i < 20; i++){
        if(i >= 7 && i <= 11){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    }

    gotoxy(8, 10);
    for(int i = 0; i < 20; i++){
        if(i >= 6 && i <= 10){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    }

    gotoxy(8, 11);
    for(int i = 0; i < 20; i++){
        if(i >= 5 && i <= 7){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    }

};

void six1(){
    gotoxy(24, 6);
    for(int i = 0; i < 20; i++){
        if(i > 3 && i < 6){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    };
    std::cout << std::endl;

    gotoxy(24, 7);
    for(int i = 0; i < 10; i++){
        if(i > 2 && i <= 6){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    };
    std::cout << std::endl;


    gotoxy(24, 8);
    for(int i = 0; i < 10; i++){
        if(i > 1 && i <= 6){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    };
    std::cout << std::endl;


    gotoxy(24, 9);
    for(int i = 0; i < 10; i++){
        if(i > 0 && i <= 5){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    };
    std::cout << std::endl;


    gotoxy(24, 10);
    for(int i = 0; i < 10; i++){
        if(i >= 0 && i < 2){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    };
    std::cout << std::endl;
};

void six2(){

    gotoxy(21, 11);
    for(int i = 0; i < 20; i++){
        if(i > 1 && i < 10){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    };
    std::cout << std::endl;

    gotoxy(21, 12);
    for(int i = 0; i < 20; i++){
        if(i >= 1 && i < 11){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    };
    std::cout << std::endl;

    gotoxy(21, 13);
    for(int i = 0; i < 20; i++){
        if((i >= 0 && i < 4) | (i > 7 && i < 12)){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    };
    std::cout << std::endl;

    gotoxy(21, 14);
    for(int i = 0; i < 20; i++){
        if((i >= 0 && i < 4) | (i > 7 && i < 12)){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    };
    std::cout << std::endl;

    gotoxy(21, 15);
    for(int i = 0; i < 20; i++){
        if(i >= 1 && i < 11){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    };
    std::cout << std::endl;

    gotoxy(21, 16);
    for(int i = 0; i < 20; i++){
        if(i > 1 && i < 10){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    };
    std::cout << std::endl;

};

void t(){

    gotoxy(28,2);
    for(int i = 0; i < 8; i++){
        if(i > 2 && i < 6){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    }
    std::cout << std::endl;


    gotoxy(28,3);
    for(int i = 0; i < 8; i++){
        if(i == 4){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    }
    std::cout << std::endl;


    gotoxy(28,4);
    for(int i = 0; i < 8; i++){
        if(i == 4){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    }
    std::cout << std::endl;

};

void h(){

    gotoxy(36,2);
    for(int i = 0; i < 10; i++){
        if(i == 0 | i == 3){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    }
    std::cout << std::endl;

    gotoxy(36,3);
    for(int i = 0; i < 10; i++){
        if(i <= 3){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    }
    std::cout << std::endl;

    gotoxy(36,4);
    for(int i = 0; i < 10; i++){
        if(i == 0 | i == 3){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    }
    std::cout << std::endl;

};

void flag(){

    gotoxy(50, 7);
    for(int i = 0; i < 15; i++){
        std::cout << '*';
        delay();
    }
    std::cout << std::endl;

    gotoxy(50, 8);
    for(int i = 0; i < 15; i++){
        std::cout << '*';
        delay();
    }
    std::cout << std::endl;

    gotoxy(50, 9);
    for(int i = 0; i < 15; i++){
        std::cout << '*';
        delay();
    }
    std::cout << std::endl;

    gotoxy(50, 10);
    for(int i = 0; i < 15; i++){
        if(i == 0 | i == 14){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    }
    std::cout << std::endl;

    gotoxy(50, 11);
    for(int i = 0; i < 15; i++){
        if(i == 0 | i == 14){
            std::cout << '*';
            delay();
        }else{
            std::cout << ' ';
            delay();
        }
    }
    std::cout << std::endl;

    gotoxy(50, 12);
    for(int i = 0; i < 15; i++){
        std::cout << '*';
        delay();
    }
    std::cout << std::endl;
};

void fontsize(int a, int b){
      HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
      PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx = new CONSOLE_FONT_INFOEX();
      lpConsoleCurrentFontEx->cbSize = sizeof(CONSOLE_FONT_INFOEX);
      GetCurrentConsoleFontEx(out, 0, lpConsoleCurrentFontEx);
      lpConsoleCurrentFontEx->dwFontSize.X = a;
      lpConsoleCurrentFontEx->dwFontSize.Y = b;
      SetCurrentConsoleFontEx(out, 0, lpConsoleCurrentFontEx);
 };

int main(){

    fontsize(25, 25);
    border();
    seven();
    six1();
    six2();
    t();
    h();
    flag();

    std::cout << "\n\n\n\n\n\n\n";

    gotoxy(20, 20);
    std::string kata1 = "INDONESIA TANGGUH INDONESIA TUMBUH";
    std::string kata2 = "Visit my GitHub: @senyumpanda";

    for(int i = 0; i < kata1.size(); i++){
        delay();
        std::cout << kata1[i];
    }
    std::cout << std::endl;

    gotoxy(35, 21);
    std::cout << "***" << std::endl;

    gotoxy(22, 22);
    for(int i = 0; i < kata2.size(); i++){
        delay();
        std::cout << kata2[i];
    }
    std::cout << std::endl;

    std::cin.get();
}
