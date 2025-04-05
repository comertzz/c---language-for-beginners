#include <iostream>
using namespace std;

class Saat {
    private:
        int saat;
        int dakika;
        int saniye;
    public:
        Saat(int h = 0, int m = 0, int s = 0) {
            saat = h;
            dakika = m;
            saniye = s;
        }
        void setSaat(int h) {
            saat = h;
        }
        void setDakika(int m) {
            dakika = m;
        }
        void setSaniye(int s) {
            saniye = s;
        }
        int getSaat() {
            return saat;
        }
        int getDakika() {
            return dakika;
        }
        int getSaniye() {
            return saniye;
        }
        void Arttir(int s) {
            saniye += s;
            while (saniye >= 60) {
                saniye -= 60;
                dakika++;
            }
            while (dakika >= 60) {
                dakika -= 60;
                saat++;
            }
        }
};

int main() {
	int art;
    Saat zaman(10, 30, 45);
    cout << "Saat: " << zaman.getSaat() << endl;
    cout << "Dakika: " << zaman.getDakika() << endl;
    cout << "Saniye: " << zaman.getSaniye() << endl;
    cin>>art;

    zaman.Arttir(art);
    cout << "Arttir fonksiyonundan sonra:" << endl;
    cout << "Saat: " << zaman.getSaat() << endl;
    cout << "Dakika: " << zaman.getDakika() << endl;
    cout << "Saniye: " << zaman.getSaniye() << endl;

    return 0;
}
