#include <iostream>

int main()
{

    float HA;
    float HB;
    float HC;
    float SA;
    float SB;
    float SC;
    float SD;
    char choice;
    char rchoice;
       
    std::cout << "*******Formen Rechner*******\n\n";
    
    std::cout << "[F]laecheninhalt oder [U]mfang vom Object ausrechnen?: ";
    std::cin >> rchoice;
    std::cout << "Welche Form ausrechnen?([D]reieck,[Q]uadrat,[R]echteck,[P]arallelogram,[T]rapez): ";
    std::cin >> choice;
    
    std::cout << "Angaben ohne 'cm' eingeben!" << std::endl;

    if(rchoice == 'F'){
        switch(choice) {
                case 'D':    
                    std::cout << "Belibiege Seite eintragen: ";
                    std::cin >> HA;
                    std::cout << "Belibiege Hoehe eintragen: ";
                    std::cin >> SA;
                    std::cout << '\n' << HA*SA/2 << "cm" << std::endl;
                    break;
                case 'Q':
                    std::cout << "Seite a eintragen: ";
                    std::cin >> SA;
                    std::cout << '\n' << SA*SA << "cm" << std::endl;
                    break;
                case 'R':
                    std::cout << "Seite a eintragen: " << std::endl;
                    std::cin >> SA;
                    std::cout << "Seite b eintragen: " << std::endl;
                    std::cin >> SB;
                    std::cout << '\n' << SA*SB << "cm" << std::endl;
                    break;
                case 'P':
                    std::cout << "Beliebige Seite eintragen: ";
                    std::cin >> HA;
                    std::cout << "Belibiege Hoehe eintragen: ";
                    std::cin >> SA;
                    std::cout << '\n' << HA*SA << "cm" << std::endl;
                    break;
                case 'T':
                    std::cout << "Seite c eintragen: ";
                    std::cin >> SC;
                    std::cout << "Seite a eintragen: ";
                    std::cin >> SA;
                    std::cout << "Hoehe c eintragen: ";
                    std::cin >> HC;
                    std::cout << '\n' << (SA+SC)*HC/2 << "cm" << std::endl;
                    break;
                default:
                    std::cout << "Gueltige Form eingeben!";
                    break;
            }
    }
    else if(rchoice == 'U'){
        switch(choice){
            case 'D':
                std::cout << "Seite a eingeben: ";
                std::cin >> SA;
                std::cout << "Seite b eingeben: ";
                std::cin >> SB;
                std::cout << "Seite c eingeben: ";
                std::cin >> SC;
                std::cout << '\n' << SA+SB+SC << "cm" << std::endl;
                break;
            case 'Q':
                std::cout << "Seite a eingeben: ";
                std::cin >> SA;
                std::cout << '\n' << 4*SA << "cm" << std::endl;
                break;
            case 'R':
                std::cout << "Seite a eingeben: ";
                std::cin >> SA;
                std::cout << "Seite b eingeben: ";
                std::cin >> SB;
                std::cout << '\n' << 2*(SA+SB) << "cm" << std::endl;
                break;
            case 'P':
                std::cout << "Seite a eingeben: ";
                std::cin >> SA;
                std::cout << "Seite b eingeben: ";
                std::cin >> SB;
                std::cout << '\n' << 2*(SA+SB) << "cm" << std::endl;
                break;
            case 'T':
                std::cout << "Seite a eingeben: ";
                std::cin >> SA;
                std::cout << "Seite b eingeben: ";
                std::cin >> SB;
                std::cout << "Seite c eingeben: ";
                std::cin >> SC;
                std::cout << "Seite d eingeben: ";
                std::cin >> SD;
                std::cout << '\n' << SA+SB+SC+SD << "cm" << std::endl;
                break;
            default:
                std::cout << "Gueltiges zeichen eingeben!";
                break;
        }
    }
    else{
        std::cout << "Gueltiges Zeichnen eingeben!";
    }

        std::cout << "\n" << "****************************";
        return 0;   
}