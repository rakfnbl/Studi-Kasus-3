using namespace std;

class Input {
    public:
      void cetak() {
        cout << "-- Kedai Ayam --\n";
        cout << "Menu yang tersedia :\n";
        cout << "1). Ayam geprek  Rp. 21.000\n";
        cout << "2). Ayam goreng  Rp. 17.000\n";
        cout << "3). Udang goreng  Rp. 19.000\n";
        cout << "4). Cumi goreng  Rp. 20.000\n";
        cout << "5). Ayam bakar  Rp. 25.000\n";
        cout << "============================\n"
        cout << "Pesanan ayam bakar : "; cin >> bnyk_aymGr;
        cout << "Pesanan ayam bakar : "; cin >> bnyk_aymBkr;
        
      }

      void tofile() {
        tulis_data.open("api_data.txt");
        tulis_data << bnyk_aymGr << endl;
        tulis_data << bnyk_aymBkr;
        tulis_data.close();
       }

    private:
      offstream tulis_data;
      int bnyk_agymGr, bnyk_aymBkr;
};