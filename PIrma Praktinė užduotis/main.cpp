#include <iostream>
#include <iomanip>
using namespace std;

double GBP_Bendras   = 0.8729;
double GBP_Pirkti    = 0.8600;
double GBP_Parduoti  = 0.9220;
double USD_Bendras   = 1.1793;
double USD_Pirkti    = 1.1460;
double USD_Parduoti  = 1.2340;
double INR_Bendras   = 104.6918;
double INR_Pirkti    = 101.3862;
double INR_Parduoti  = 107.8546;


int main() {
    int pasirinkimas, palyginimas, pirkti, parduoti;
    double pirktiGBP, pirktiUSD, pirktiINR, parduotiGBP, parduotiUSD, parduotiINR;


    do {
        cout << "\nPASIRINKITE VEIKSMA: \n";
        cout << "\n1 - Valiutos kurso palyginimas.\n";
        cout << "\n2 - Pirkti valiuta.\n";
        cout << "\n3 - Parduoti valiuta.\n";
        cout << "\n4 - Iseiti is programos.\n";
        cin >> pasirinkimas;

        switch (pasirinkimas) {
            case 1: {
                cout << "\nPasirinkite valiuta\n";
                cout << "\n1 - GBP = EUR\n";
                cout << "\n2 - USD = EUR\n";
                cout << "\n3 - INR = EUR\n";
                cout << "\n4 - Gryzti i pagrindini.\n";
                cin >> palyginimas;

                switch (palyginimas) {
                    case 1:
                        cout << "GBP " << fixed << setprecision(2) << GBP_Bendras << " = EUR 1\n";
                        break;
                    case 2:
                        cout << "USD " << fixed << setprecision(2) << USD_Bendras << " = EUR 1\n";
                        break;
                    case 3:
                        cout << "INR " << fixed << setprecision(2) << INR_Bendras << " = EUR 1\n";
                        break;
                    case 4:

                        break;
                    default:
                        cout << "Neteisingas pasirinkimas.\n";
                        break;
                }
                break;
            }

            case 2: {
                cout << "\nPASIRINKITE VALIUTA KURIA NORITE PIRKTI\n";
                cout << "\n1 - GBP\n";
                cout << "\n2 - USD\n";
                cout << "\n3 - INR\n";
                cout << "\n4 - Gryzti i pagrindini.\n";
                cin >> pirkti;

                switch (pirkti) {
                    case 1:
                        cout << "\nPasirinkite uz kiek Euru norite pirkti GBP: \n";
                        cin >> pirktiGBP;
                        cout << "Sekmingai nusipirkote GBP: " << fixed << setprecision(2) << pirktiGBP * GBP_Pirkti << "\n";
                        break;
                    case 2:
                        cout << "\nPasirinkite uz kiek Euru norite pirkti USD: \n";
                        cin >> pirktiUSD;
                        cout << "\nSekmingai nusipirkote USD: " << fixed << setprecision(2) << pirktiUSD * USD_Pirkti << "\n";
                        break;
                    case 3:
                        cout << "\nPasirinkite uz kiek Euru norite pirkti INR: \n";
                        cin >> pirktiINR;
                        cout << "\nSekmingai nusipirkote INR: " << fixed << setprecision(2) << pirktiINR * INR_Pirkti << "\n";
                        break;
                    case 4:
                        break;
                    default:
                        cout << "Neteisingas pasirinkimas.\n";
                        break;
                }
                break;
            }

            case 3: { // BRACKETS for case 3 start
                cout << "\nPasirinkite kokia valiuta norite parduoti\n";
                cout << "\n1 - GBP\n";
                cout << "\n2 - USD\n";
                cout << "\n3 - INR\n";
                cout << "\n4 - Gryzti i pagrindini.\n";
                cin >> parduoti;

                switch (parduoti) {
                    case 1:
                        cout << "Kiek norite parduoti GBP?: ";
                        cin >> parduotiGBP;
                        cout << "Sekmingai pardavete, jus gavote: " << fixed << setprecision(2) << parduotiGBP / GBP_Parduoti << " EUR\n";
                        break;
                    case 2:
                        cout << "Kiek norite parduoti USD?: ";
                        cin >> parduotiUSD;
                        cout << "Sekmingai pardavete, jus gavote: " << fixed << setprecision(2) << parduotiUSD / USD_Parduoti << " EUR\n";
                        break;
                    case 3:
                        cout << "Kiek norite parduoti INR?: ";
                        cin >> parduotiINR;
                        cout << "Sekmingai pardavete, jus gavote: " << fixed << setprecision(2) << parduotiINR / INR_Parduoti << " EUR\n";
                        break;
                    case 4:
                        break;
                    default:
                        cout << "Neteisingas pasirinkimas.\n";
                        break;
                }
                break;
            }

            case 4:
                cout << "Iseinama is programos.\n";
                break;

            default:
                cout << "Neteisingas pasirinkimas, bandykite dar karta.\n";
                break;
        }
    } while (pasirinkimas != 4);

    return 0;
}