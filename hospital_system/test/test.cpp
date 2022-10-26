
#include<iostream>
int main () {
    std::string mewo[3];
    std::string text[3];
    for (int i = 0; i < 3; i++) {
        std::cin>>text[i];
        mewo[i] = text[i];
    };
    for (int i = 0; i < 3; i++){
        std::cout<<mewo[i]<<std::endl;
    }
    return 0;
}   
/*
   #include<iostream>

    int main () {
        std::string names[3];
        std::string text[] = {"Essam", "Ali", "Ahmed"};
        for (int i = 0; i < 3; i++) {
            names[i] = test[i]
        }
        for (int i = 0; i < 3; i++) {
            std::cout<<names[i]<<std::endl;
        }

        return 0;
    }
 #include<iostream>

    int main () {
        std::string names[3];
        std::string text[] = {"Essam", "Ali", "Ahmed"};
        for (int i = 0; i < 3; i++) {
            names[i] = text[i];
        };
        for (int i = 0; i < 3; i++) {
            std::cout<<names[i]<<std::endl;
        };

        return 0;
    }
    */