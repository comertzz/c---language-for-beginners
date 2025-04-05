#include <iostream>
using namespace std;


class Nokta {
    private:
        int x;
        int y;
    public:
        Nokta(int x = 0, int y = 0) {
            this->x = x;
            this->y = y;
        }
        void setX(int x) {
            this->x = x;
        }
        void setY(int y) {
            this->y = y;
        }
        int getX() const {
            return x;
        }
        int getY() const {
            return y;
        }
};

class AgirlikliNokta : public Nokta {
    private:
        double agirlik;
    public:
        AgirlikliNokta(int x = 0, int y = 0, double a = 0) : Nokta(x, y) {
            agirlik = a;
        }
        void setAgirlik(double a) {
            agirlik = a;
        }
        double getAgirlik() const {
            return agirlik;
        }
        AgirlikliNokta operator+(const AgirlikliNokta& other) {
            AgirlikliNokta result(getX() + other.getX(), getY() + other.getY(), getAgirlik() + other.getAgirlik());
            return result;
        }
};

int main() {
    AgirlikliNokta n1(1, 2, 3);
    AgirlikliNokta n2(4, 5, 6);
    AgirlikliNokta n3 = n1 + n2;

    cout << "n3: (" << n3.getX() << ", " << n3.getY() << ", " << n3.getAgirlik() << ")" << endl;

    return 0;
}
