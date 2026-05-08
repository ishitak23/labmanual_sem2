#include <iostream>
#include <string>
using namespace std;

class MovieTicket {
    int tickets[100][100];   // 0 = not booked, 1 = booked
    int count[100];          // tickets booked per movie

public:
    MovieTicket() {
        for (int i = 0; i < 100; i++) {
            count[i] = 0;
            for (int j = 0; j < 100; j++) {
                tickets[i][j] = 0;
            }
        }
    }

    void BOOK(int x, int y) {
        if (tickets[y][x] == 1 || count[y] == 100)
            cout << "false\n";
        else {
            tickets[y][x] = 1;
            count[y]++;
            cout << "true\n";
        }
    }

    void CANCEL(int x, int y) {
        if (tickets[y][x] == 0)
            cout << "false\n";
        else {
            tickets[y][x] = 0;
            count[y]--;
            cout << "true\n";
        }
    }

    void IS_BOOKED(int x, int y) {
        if (tickets[y][x] == 1)
            cout << "true\n";
        else
            cout << "false\n";
    }

    void AVAILABLE_TICKETS(int y) {
        cout << 100 - count[y] << endl;
    }
};

int main() {
    MovieTicket m;
    int Q;
    cin >> Q;

    while (Q--) {
        string s;
        cin >> s;

        if (s == "BOOK") {
            int x, y;
            cin >> x >> y;
            m.BOOK(x, y);
        }
        else if (s == "CANCEL") {
            int x, y;
            cin >> x >> y;
            m.CANCEL(x, y);
        }
        else if (s == "IS_BOOKED") {
            int x, y;
            cin >> x >> y;
            m.IS_BOOKED(x, y);
        }
        else if (s == "AVAILABLE_TICKETS") {
            int y;
            cin >> y;
            m.AVAILABLE_TICKETS(y);
        }
    }

    return 0;
}