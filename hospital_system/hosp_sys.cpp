#include<iostream>
std::string septation1[15], septation2[15], septation2[15], septation3[15], septation4[15], septation5[15],septation6[15], septation7[15], septation8[15], septation9[15], septation10[15], septation11[15], septation12[15], septation13[15], septation14[15], septation15[15], septation16[15], septation17[15], septation19[15], septation20[15];
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
