#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using std::vector;
using namespace std;

class Yolcu {
	private:
	       string isim;
	       string soyisim;
	       string sifre;
	public:
	       Yolcu(string _isim , string _soyisim , string _sifre): isim(_isim), soyisim(_soyisim), sifre(_sifre)
	       string getİsim() {
		       cout << "İsminizi giriniz: ";
		       cin >> isim;
		       return isim;}
	       string getSoyisim() {
		       cout << "Soyisminizi girin: ";
		       cin >> soyisim;
		       return soyisim;}
	       string getSifre() {
		       cout << "Sifrenizi girin: ";
		       cin >> sifre; 
		       return sifre;}
};

class Otobus {
	public:
		string plaka;
		int toplamKoltuk;
	public:
		Otobus(string _plaka, int _toplamKoltuk): plaka(_plaka), toplamKoltuk(_toplamKoltuk) {}
		int getToplamKltuk() {return toplamKoltuk;}

};

class Rotalar : public Otobus {};
	private:
		string nereden;
		string nereye;
		int fiyat;
		vector <Rotalar> rota;

	public:
	Rotalar(string _plaka , int _toplamKoltuk, string _nereden, string _nereye, int _fiyat): nereden(_nereden), nereye(_nereye), fiyat(_fiyat) Otobus(_plaka, _toplamKoltuk){}
	rota.pusch_back(Rotalar("35 AA 35", 40, "İzmir", "Sivas", 1500 ));
	rota.push_back(Rotalar("24 BB 24", 45, "Erzincan", "İzmir", 1300 ));
	rota.push_back(Rotalar("35 DD 35", 45, "İzmir", "Erzincan", 1300));
	rota.push_back(Rotalar("58 CC 58" , 40, "Sivas", "İzmir", 1500));


int main() {
	Yolcu yolcu (isim, soyisim, sifre);
	yolcu_isim = yolcu.getİsim();
	cout << "İsim: " << yolcu_isim << endl << "Soyisim: " << yolcu.getSoyisim() << endl << "Sifre: " << getSifre() << endl;

	string secenek;
	cout << "Merhaba " << yolcu_isim << "Rezervasyon Sistemine Hoşgeldiniz." << endl << "1. Bilet Almak \n 2.Bilet İptali \n 3.Çıkış" << endl << "Lütfen Yapmak İstediğiniz İşlem Numarasını Giriniz: ";
	cin >> secenek;

	if (secenek == "1"){
		Rotalar rotalar(plaka, toplamKoltuk, nereden, nereye, fiyat);
	}		}
	else if (secenek == "2") { }
	else if (secenek == "3") {exit(0); }

	return 0;
append}
