#include <iostream>

using namespace std;

struct Date
{
    unsigned short int dd, mm, rrrr;
};

class Worker {
public:
    unsigned int id{};
    string name{}, surname{};
    Date dateBirtday{};

    void showAllData();
    void setId(unsigned int x, string name1, string surname1, unsigned short int dd1 {
        id = x;
        name = name1;
        surname = surname1;
        dateBirtday.dd = dd1;
        dateBirtday.mm = mm1;
        dateBirtday.rrrr = rrrr1;
    }
};

void Worker::showAllData() {
    cout << "dane prcownika: \n" << "Id: " << id;
    << "\n Imię i Nazwisko: " << name << " " << surname
        << "\n Data Urodzenia: " << dateBirtday.dd;
    }

int main(int argc, char** argv) {
    setlocale(LC_CTYPE, "polish");
    Worker pracownik;
    pracownik.setId(100, "Tomek");
    pracownik.showAllData();
}

