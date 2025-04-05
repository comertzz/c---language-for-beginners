#include <iostream>
using namespace std;

class Personel {
    private:
        string adSoyad;
        string tckimlik;
        double maas;
    public:
        Personel(string ad = "", string tc = "", double m = 0) {
            cout << "Personel constructor" << endl;
            adSoyad = ad;
            tckimlik = tc;
            maas = m;
        }
        ~Personel() {
            cout << "Personel destructor" << endl;
        }
        void setAdSoyad(string ad) {
            adSoyad = ad;
        }
        void setTcKimlik(string tc) {
            tckimlik = tc;
        }
        void setMaas(double m) {
            maas = m;
        }
        string getAdSoyad() {
            return adSoyad;
        }
        string getTcKimlik() {
            return tckimlik;
        }
        double getMaas() {
            return maas;
        }
        virtual double maasGoster() {
            return maas * 0.8;
        }
};

class Ogretmen : public Personel {
    private:
        double ekders;
    public:
        Ogretmen(string ad = "", string tc = "", double m = 0, double e = 0) : Personel(ad, tc, m) {
            cout << "Ogretmen constructor" << endl;
            ekders = e;
        }
        ~Ogretmen() {
            cout << "Ogretmen destructor" << endl;
        }
        void setEkDers(double e) {
            ekders = e;
        }
        double getEkDers() {
            return ekders;
        }
        double maasGoster() {
            return (getMaas() + ekders) * 0.8;
        }
};

int main() {
    Ogretmen o1("Ali", "12345678901", 5000, 100);
    cout << "Ad Soyad: " << o1.getAdSoyad() << endl;
    cout << "TC Kimlik: " << o1.getTcKimlik() << endl;
    cout << "Maas: " << o1.maasGoster() << endl;

    return 0;
}
