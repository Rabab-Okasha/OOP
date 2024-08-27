#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

int main(){
    Tours tours
            { "Tour Ticket Prices from Miami",
              {
                      {
                              "Colombia", {
                              { "Bogota", 8778000, 400.98 },
                              { "Cali", 2401000, 424.12 },
                              { "Medellin", 2464000, 350.98 },
                              { "Cartagena", 972000, 345.34 }
                      },
                      },
                      {
                              "Brazil", {
                              { "Rio De Janiero", 13500000, 567.45 },
                              { "Sao Paulo", 11310000, 975.45 },
                              { "Salvador", 18234000, 855.99 }
                      },
                      },
                      {
                              "Chile", {
                              { "Valdivia", 260000, 569.12 },
                              { "Santiago", 7040000, 520.00 }
                      },
                      },
                      { "Argentina", {
                              { "Buenos Aires", 3010000, 723.77 }
                      }
                      },
              }
            };

   //cout << "1234567890123456789012345678901234567890123456789012345678901234567890" << endl;
    cout << setw(50) << tours.title << endl;

    cout << setw(21) << left << "\nCountry"
    << setw(22) << left << "City"
    << "Population" << setw(18) << right << "Price" << endl;

    cout << setfill('-') << setw(70) << '-' << endl;
    cout << setfill(' ');
    cout << setprecision(2) << fixed;

    for(Country country : tours.countries){
        for(size_t i = 0; i < country.cities.size(); i++){
            cout << setw(20) << left << ((i == 0) ? country.name : "")
            << setw(20) << left << country.cities.at(i).name
            << setw(15) << right << country.cities.at(i).population
            << setw(15) << right << country.cities.at(i).cost << endl;
        }
    }

    return 0;
}