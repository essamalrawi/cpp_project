#include<iostream>
std::string septation2[15];
std::string septation3[15];
std::string septation4[15];
std::string septation5[15];
std::string septation6[15];
std::string septation7[15];
std::string septation8[15];
std::string septation9[15];
std::string septation10[15];
std::string septation11[15];
std::string septation12[15];
std::string septation13[15];
std::string septation14[15];
std::string septation15[15];
std::string septation16[15];
std::string septation17[15];
std::string septation18[15];
std::string septation19[15];
std::string septation20[15];
int menu () {
    
    std::cout << "1) Add new patient\n";
    std::cout << "2) Print all patients\n";
    std::cout << "3) Get next patient\n";
    std::cout << "4) Exit\n";

    return 0;
}
int checkseptation  () {
    int whatisyourseptation = -1; 
    int specialzation[1], statis[1];
    std::string name[1];

    std::cout<<"\nEnter your Septation choice [1 - 20]\n";
    while (whatisyourseptation == -1)std::cin>>whatisyourseptation;
    std::cout<<"Enter specialzation, name, statis: \n";
    std::cin >> specialzation[1] >> name[1] >> statis[1];
    if (whatisyourseptation == 1) {
        for (int i = 0; i < 1; i++) {
        septation1[i] = specialzation[i];
        septation1[i] = name[i];
        septation1[i] = statis[i];
        }
        for (int i = 0; i < 1; i++) {
            std::cout<<septation1[i];
        }
    };

    return 0;
}
int main () {
    
    while (choice == -1) {
        menu();
        std::cin>>choice;
    }
    if (choice == 1)checkseptation();
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

*/