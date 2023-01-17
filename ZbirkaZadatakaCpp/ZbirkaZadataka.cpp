#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void funkcija(int n)
{
	int niz[100];

	for (int j = 0; j < 100; j++)
	{
		niz[j] = 0;
	}

	int pomocniBrojac = 99;
	while (n > 0)
	{
		int ostatak = n % 2;
		n = n / 2;
		niz[pomocniBrojac] = ostatak;
		pomocniBrojac -= 1;
	}

	for (int i = pomocniBrojac + 1; i < 100; i++)
	{
		cout << niz[i];
	}

}


#pragma region komentari
//string ime = "";
//string prezime = "";
//int brojGodina = 0;
//int godinaRodjenja = 0;

//cout << "Unesite svoje ime " << endl;
//cin >> ime;
//cout << "Unesite svoje prezime " << endl;
//cin >> prezime;
//cout << "Unesite broj godina" << endl;
//cin >> brojGodina;
//cout << "Unesite godinu rodjenja " << endl;
//cin >> godinaRodjenja;
//cout << "Moje ime je: " << ime << " Moje prezime je: " << prezime << " Moj broj godina je: " << brojGodina << " Godina rodjenja je: " << godinaRodjenja;

//if (brojGodina < 18) {
//	cout << "NE SKOCICU!";
//}
//else if (brojGodina >= 18 && brojGodina < 26) {
//	cout << " TOVARI TO SKOCICU";
//}
//else{
//	cout << " PREPUSTI TO CICI SKOCICU";
//}

//char karakter = ' ';
//while (karakter != '0') {
//	cin >> karakter;
//	cout << karakter << endl;
//
//			
//}

//float Pi = 0.0f;
//int repeticija = 1000000;

//for (int i = 1; i < repeticija; i++)
//{
//	Pi = Pi + 4*(pow(-1, i + 1) * 1.0f / (2.0f * i - 1.0f));
//}
//cout << Pi;

//int result = sum(10, 20);
//cout << result;

//stampaj2(6);

//GenerisiDomaci(0, 151, 3);
//float x = 0.0f;
//float y = 0.0f;
//float z = 0.0f;

//cin >> x >> y;
//if (x > y)
//{
//
//	z = x;
//	x = y;
//	y = z;
//	
//}
//cout << x << y << endl;

//float x = 0.0f;
//float y = 0.0f;
//float z = 0.0f;
//float zbir = 0.0f;
//
//cin >> x >> y >> z;
//if (x <= y && y <= z)
//{
//	zbir = x + y;
//
//}
//else if (z <= x && y <= x)
//{
//	zbir = z + y;
//}
//else
//{
//	zbir = x + z;
//}
// cout << zbir;

//
//vector<int> vec1 = KreirajVektorSaTastature();
//float zbir = 0;
//for (int i = 0; i < vec1.size(); i++)
//{
//	zbir = zbir + vec1[i];
//}
//
//float srednjaVrednost = zbir / vec1.size();
//
//cout << "SREDNJA VREDNOST : " << srednjaVrednost << endl;
//
//int indexNajblizeg = 0;
//int najblizi = vec1[0];
//float rastojanje = abs(srednjaVrednost - najblizi);
//
//for (int i = 0; i < vec1.size(); i++)
//{
//	if (abs(srednjaVrednost - vec1[i]) < rastojanje)
//	{
//		rastojanje = abs(srednjaVrednost - vec1[i]);
//		indexNajblizeg = i;
//		najblizi = vec1[i];
//	}
//}
//
//cout << indexNajblizeg << " " << najblizi << endl;
#pragma endregion

int sum(int n, int m)
{
	int s = 0;
	for (int i = n; i <= m; i++)
	{
		s = s + i;
	}
	return s;
}

void stampaj()
{
	for (int x = 0; x < 5 && x != 3; x++)
	{
		cout << x;
	}
}

void stampaj1(int n)
{
	for (int y = 1; y <= n * n; y++)
	{
		cout << y << " ";
	}
}

void stampaj2(int n)
{
	int result = sum(0, n);
	for (int y = 1; y <= result; y++)
	{
		cout << y << " ";
	}
}

void stampajNiz(int niz[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << niz[i] << endl;
	}
}


void GenerisiDomaci(int pocetni, int krajnji, int brojZadatakaZaDomaci)
{
	for (int i = 0; i < brojZadatakaZaDomaci; i++)
	{
		std::cout << rand() % krajnji << std::endl;
	}
}

template <typename F>
void StampajVektor(vector<F> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
}

template <typename F>
vector<F> KreirajVektorSaTastature()
{
	vector<F> vec1;

	int unos;

	while (true)
	{
		cin >> unos;
		if (unos == -1)
		{
			break;
		}
		else
		{
			vec1.push_back(unos);
		}
	}


	return vec1;
}



/*1. Napisati program koji izračunava
zapreminu na osnovu unete dužine,širine i visine.*/
void zadatak1()
{
	cout << "Unesite duzinu" << endl;
	float duzina = 0.0f;
	cin >> duzina;
	cout << endl;
	cout << "Unesite sirinu" << std::endl;
	float sirina = 0.0f;
	cin >> sirina;
	cout << endl;
	cout << "Unesite visinu" << std::endl;
	float visina = 0.0f;
	cin >> visina;
	cout << endl;
	float rezultat = duzina * sirina * visina;
	cout << "Zapremina datog objekta je: " << rezultat;
}

/*2. Napisati program koji odredjuje koliko se puta prvi uneti
broj sadrži u drugom unetom broju kao i njihov ostatak
deljenja.*/
void zadatak2()
{
	cout << "Unesite prvi broj : " << endl;
	int x = 0;
	cin >> x;
	cout << "Unesite drugi broj : " << endl;
	int y = 0;
	cin >> y;

	float kolicnik = y / x;
	int ostatak = y % x;

	cout << "kolicnik je : " << kolicnik << " a ostatak je " << ostatak << endl;


}

/*3. Napisati program koji unetu veličinu u galonima
pretvara u litre. 1 galon = 4.54 l*/
void zadatak3()
{
	cout << "Unesite velicinu u galonima: " << endl;
	float galon = 4.54;
	float l = 0.0f;
	cin >> l;

	l = l * galon;


	cout << "Rezultat je: " << l << " litara." << endl;




}

/*4. Automobil sa punim rezervoarom kapaciteta V litara
predje put od S kilometara.Napisati program kojim se
računa potrošnja u litrima na 100 km.*/
void zadatak4()
{
	cout << "Unesite kapacitet rezervoara: " << endl;
	float kapacitet = 0.0f;
	cin >> kapacitet;

	cout << "Unesite predjeni put: " << endl;
	float predjeniPut = 0.0f;
	cin >> predjeniPut;

	float potrosnja = kapacitet * 100 / predjeniPut;
	cout << "Potrosnja je: " << potrosnja << " litara na 100km." << endl;

}

/*5. Napisati program kojim se računa hipotenuza i
površina pravouglog trougla na osnovu zadatih
kateta. */
void zadatak5()
{
	cout << "Unesite stranicu a: " << endl;
	float a = 0.0f;
	cin >> a;

	cout << "Unesite stranicu b: " << endl;
	float b = 0.0f;
	cin >> b;

	float povrsina = (a * b) / 2;
	float c = sqrt(a * a + b * b);
	cout << "Povrsina trougla je: " << povrsina << " a hipotenuza: " << c << endl;



}

/*6. Napisati program koji prevodi težinu iz funti u kg
(1 funta = 400g)*/
void zadatak6()
{
	cout << "Unesite tezinu u funtama :" << endl;
	double funta = 0.4;
	float kg = 0.0f;
	cin >> kg;
	kg = kg * funta;
	cout << "Tezina je: " << kg << " kg" << endl;



}

/*7. Napisati program koji izračunava cenu porcije
sira x grama,ako je 1kg sira 165 dinara.*/
void zadatak7()
{
	cout << "Unesite tezinu porcije sira u gramima: " << endl;
	float tezinaSira = 0.0f;
	cin >> tezinaSira;
	float cenaSira = 0.165 * tezinaSira;
	cout << "Cena sira je: " << cenaSira << endl;



}

/*8. Napisati program koji pomaže kasirki da obračuna
kusur,tako što od nje traži da unese jediničnu cenu
artikla i koliko novca dobije od kupca.*/
void zadatak8()
{
	cout << "Unesite cenu artikla: " << endl;
	float cenaArtikla = 0.0f;
	cin >> cenaArtikla;
	cout << "Unesite kolicinu: " << endl;
	int kolicinaArtikla = 0;
	cin >> kolicinaArtikla;
	cout << "Unesite iznos koji daje kupac: " << endl;
	float iznos = 0.0f;
	cin >> iznos;

	float kusur = iznos - (cenaArtikla * kolicinaArtikla);
	if (iznos >= cenaArtikla * kolicinaArtikla)
	{
		cout << "Vas kusur je: " << kusur << endl;
	}

	else
	{
		cout << "NEDOVOLJNO NOVCA!!!" << endl;
	}


}

/*9. Napisati program kojim se računa potrebno
vreme za download unete veličine fajla,pri unetoj
brzini. Program treba da ispiše za koliko de se sati,
minuta i sekundi skinuti fajl. */
void zadatak9()
{
	cout << "Unesite velicinu fajla u megabajtima: " << endl;
	int velicinaFajla = 0;
	cin >> velicinaFajla;
	cout << "Unesite brzinu downloada u kb: " << endl;
	int brzinaDownloada = 0;
	cin >> brzinaDownloada;

	int potrebnoVreme = (velicinaFajla * 1024) / brzinaDownloada;
	int sat = potrebnoVreme / 3600;
	int minut = potrebnoVreme % 3600;
	int sekund = 0;

	cout << "Potrebno vreme je " << sat << " sati, " << minut << " minuta, " << endl;




}

/*10. Napisati program koji izračunava obim i površinu
kvadrata i program koji izračunava površinu i obim
pravougaonika. */
void zadatak10()
{
	cout << "Unesite velicinu prve stranice: " << endl;
	float stranicaA = 0.0f;
	cin >> stranicaA;
	cout << "Unesite velicinu druge stranice: " << endl;
	float stranicaB = 0.0f;
	cin >> stranicaB;

	float povrsina = stranicaA * stranicaB;
	float obim = 2 * (stranicaA + stranicaB);

	if (stranicaA == stranicaB)
	{
		cout << "Obim kvadrata je: " << obim << ", a povrsina: " << povrsina << endl;
	}
	else
	{
		cout << "Obim pravougaonika je: " << obim << ", a povrsina: " << povrsina << endl;
	}



}

/*11. Dat je ugao u stepenima na dve decimale.
Napisati program koji za date vrednosti ugla
izračunava ugao u stepenima i minutama. */
void zadatak11()
{
	cout << "Unesite ugao u stepenima: " << endl;
	float ugao = 0.0f;
	cin >> ugao;

	int stepen = ugao;
	float minuti = (ugao - stepen) * 60;
	cout << "Ugao ima: " << stepen << " stepeni" << " i " << minuti << " minuta." << endl;

}

/*12. Napisati program kojim se vrši preračunavanje
američkih dolara u Euro, ako su poznate dinarske
vrednosti ovih valuta.*/
void zadatak12()
{
	cout << "Iznos americkih dolara: " << endl;
	float dolar = 0.0f;
	cin >> dolar;

	cout << "Kurs dolara u dinarima: " << endl;
	float kursDolar = 0.0f;
	cin >> kursDolar;

	cout << "Kurs eura u dinarima: " << endl;
	float kursEuro = 0.0f;
	cin >> kursEuro;

	float iznos = dolar * (kursDolar / kursEuro);
	cout << iznos << " eura" << endl;


}

/*13. Napisati program koji rešava slededi matematički
izraz: (x^2+y^2)^2*/
void zadatak13()
{
	cout << "Unesite promenljive x: " << endl;
	float x = 0.0f;
	cin >> x;
	cout << "Unesite promenljive y: " << endl;
	float y = 0.0f;
	cin >> y;

	float z = (x * x + y * y) * (x * x + y * y);
	cout << "Iznos je: " << z << endl;
}

/*14. Učitanom trocifrenom broju razdvojiti sve cifre.*/
void zadatak14()
{
	cout << "Unesite trocifreni broj: " << endl;
	int broj = 0;
	cin >> broj;

	int a = broj / 100;
	int b = (broj % 100) / 10;
	int c = broj % 10;
	//sam sam dosao do racuna :)

	cout << a << " " << b << " " << c << endl;


}

/*15. Napisati program koji datom cetvorocifrenom
celom broju izracunava zbir kvadrata cifara.
*/
void zadatak15()
{
	cout << "Unesite cetvorocifreni broj: " << endl;
	int broj = 0;
	cin >> broj;

	int a = broj / 1000;
	int b = (broj % 1000) / 100;
	int c = (broj % 100) / 10;
	int d = (broj % 1000) % 10;

	int zbir = a * a + b * b + c * c + d * d;
	//cout << a << " " << b << " " << c << " " << d << endl;
	cout << "Zbir je: " << zbir << endl;
}
/*16. Izračunati dijagonale d i D kocke (za poznatu
stranicu a)*/
void zadatak16()
{
	cout << "Unesite stranicu kocke: ";
	float stranicaKocke = 0.0f;
	cin >> stranicaKocke;

	float vecaDijagonala = stranicaKocke * sqrt(2);
	float manjaDijagonala = stranicaKocke * sqrt(3);

	cout << "Manja dijagonala je: " << manjaDijagonala << " a veca dijagonala je: " << vecaDijagonala << endl;
}

/*17. Napisati program kojim se odredjuje koji je od
dva uneta broja vedi i ispisuje poruku o tome. Ako su
brojevi jednaki , ispiši poruku o tome.*/
void zadatak17()
{
	cout << "Unesite prvi broj: " << endl;
	int a = 0;
	cin >> a;
	cout << "Unesite drugi broj: " << endl;
	int b = 0;
	cin >> b;

	if (a > b)
	{
		cout << "Prvi broj je veci od drugog broja";
	}
	else if (a == b)
	{
		cout << "Brojevi su jednaki";
	}
	else
	{
		cout << "Drugi broj je veci od prvog broja";
	}
}

/*18. Imamo da je C = 5. Korisnik unosi vrednost A i B.
Ako je A vede od B vrednost C de se uvedati za 12. U
suprotnom C de ostati 5.*/
void zadatak18()
{
	cout << "Unesite prvi broj: " << endl;
	int a = 0;
	cin >> a;
	cout << "Unesite drugi broj: " << endl;
	int b = 0;
	cin >> b;
	int c = 5;

	if (a > b)
	{
		c = c + 12;
		cout << "C= " << c;
	}
	else
	{
		cout << "C= " << c;
	}
}

/*19. Napisati program kojim se promenljivoj max
dodeljuje vrednost vedeg od dva uneta broja.*/
void zadatak19()
{
	cout << "Unesite a i b: " << endl;
	int a = 0;
	int	b = 0;
	cin >> a >> b;
	int max = 0;

	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	cout << "Max: " << max;
}

/*20. Napisati program kojim se proverava da li je
uneti broj paran ili nije.*/
void zadatak20()
{
	cout << "Unesite broj: " << endl;
	int broj = 0.0f;
	cin >> broj;
	int ostatak = broj % 2;
	if (ostatak == 0)
	{
		cout << "Broj je paran!";
	}
	else
	{
		cout << "Broj je neparan!";
	}
}

/*21. Napisati program kojim se unose dve
promenljive sa tastature, promenljivoj max dodaje
vrednost vedeg od ta dva broja , a promenljivoj min
,vrednost manjeg od ta dva broja.
*/
void zadatak21()
{
	cout << "Unesite a i b: " << endl;
	int a, b = 0;
	cin >> a >> b;
	int max = 0;
	int	min = 0;

	if (a > b)
	{
		max = a;
		min = b;
	}
	else if (b > a)
	{
		max = b;
		min = a;
	}
	else
	{
		max = a;
		min = a;
	}
	cout << "Max je: " << max << ", a Min je: " << min;
}

/*22. Napisati program koji izračunava kv.koren
unetog broja.Ako je ulazni podatak nekorektan (x<0)
ispisuje se odgovarajuda poruka.*/
void zadatak22()
{
	cout << "Unesite broj koji ce da se korenuje: " << endl;
	float broj = 0.0f;
	cin >> broj;
	float koren = 0.0f;

	if (broj >= 0)
	{
		koren = sqrt(broj);
		cout << "Koren je: " << koren;
	}
	else
	{
		cout << "Ne postoji kvadratni koren negativnog broja!!!";
	}

}

/*23. Napisati program koji zavisno od učitane
vrednosti,izračunava vrednost funkcije ili daje
poruku da je funkcija nedefinisana y =√x^2-1*/
void zadatak23()
{
	cout << "Unesite vrednost: " << endl;
	float vrednost = 0.0f;
	cin >> vrednost;
	float vrednostKorena = 0.0f;

	if (vrednost > 0 || vrednost < 0)
	{
		vrednostKorena = sqrt(vrednost * vrednost - 1);
		cout << "Vrednost izraza je: " << vrednostKorena;
	}
	else
	{
		cout << "Funkcija nije definisana!!!";
	}



}

/*24. Napisati program koji učitava dva broja I
proverava da li su istog znaka. */
void zadatak24()
{
	cout << "Unesite dva broja: " << endl;
	float a = 0.0f;
	float b = 0.0f;
	cin >> a >> b;
	float proizvod = a * b;

	if (proizvod > 0)
	{
		cout << "Brojevi su istog znaka!";
	}
	else
	{
		cout << "Brojevi su razlicitog znaka!";
	}
}

/*25. Za tri učitana broja ispitati da li je jedan do njih
jednak sumi druga dva broja.*/
void zadatak25()
{
	cout << "Unesite prvi broj: " << endl;
	int a = 0;
	cin >> a;
	cout << "Unesite drugi broj: " << endl;
	int b = 0;
	cin >> b;
	cout << "Unesite treci broj: " << endl;
	int c = 0;
	cin >> c;

	if (a == (b + c))
	{
		cout << "Prvi broj je jedna zbiru preostala 2!";
	}
	else if (b == (a + c))
	{
		cout << "Drugi broj je jedna zbiru preostala 2!";
	}
	else if (c == (a + b))
	{
		cout << "Treci broj je jedna zbiru preostala 2!";
	}
	else
	{
		cout << "Ni jedan od njih nije jednak zbiru preostala dva!";
	}


}

/*26. Napisti niz naredbi kojim se sumiraju samo
pozitivne vrednosti promenljivih a,b,c.*/
void zadatak26()
{
	cout << "Unesite prvi broj: " << endl;
	int a = 0;
	cin >> a;
	cout << "Unesite drugi broj: " << endl;
	int b = 0;
	cin >> b;
	cout << "Unesite treci broj: " << endl;
	int c = 0;
	cin >> c;
	int suma = 0;

	if (a >= 0)
	{
		suma = suma + a;
	}
	if (b >= 0)
	{
		suma = suma + b;
	}
	if (c >= 0)
	{
		suma = suma + c;
	}
	if (a < 0 && b < 0 && c < 0)
	{
		cout << "Ovo ne ide!!!";
	}
	if (suma != 0)
	{
		cout << "Suma je: " << suma;
	}
}

/*27. Napisati program koji izračunava površinu
kružnog poprečnog preseka na osnovu spoljašnjeg i
unutrašnjeg poluprečnika (kontrolišudi tačnost
unetih podataka).*/
void zadatak27()
{
	cout << "Unesite vrednost unutrasnjeg poluprecnika u cm: " << endl;
	float unutrasnjiPoluprecnik = 0.0f;
	cin >> unutrasnjiPoluprecnik;
	cout << "Unesite vrednost spoljasnjeg poluprecnika u cm: " << endl;
	float spoljasnjiPoluprecnik = 0.0f;
	cin >> spoljasnjiPoluprecnik;

	float povrsina = 0.0f;
	float Pi = 3.14;

	if (spoljasnjiPoluprecnik > unutrasnjiPoluprecnik)
	{
		povrsina = (spoljasnjiPoluprecnik * spoljasnjiPoluprecnik * Pi) - (unutrasnjiPoluprecnik * unutrasnjiPoluprecnik * Pi);
		cout << "Povrsina je: " << povrsina << " cm kvadratnih.";
	}
	else
	{
		cout << "Vrednost unutrasnjeg poluprecnika mora da bude manja od vrednosti spoljasnjeg!!!";
	}
}

/*28. Napisati program koji na osnovu trajanja
telefonskog razgovora i cene u minutama izračunava
cenu telefonskog razgovora,ako je vikendom popust
od 10%.U programu treba predvideti unos
indikatora za dan razgovora 1-radni dan,2-vikend.*/
void zadatak28()
{
	cout << "Unesite vreme trajanja razgovora u minutima: " << endl;
	float vremeTrajanjaRazgovora = 0.0f;
	cin >> vremeTrajanjaRazgovora;

	cout << "Unesite cenu razgovora po minuti: " << endl;
	float cenaRazgovora = 0.0f;
	cin >> cenaRazgovora;

	cout << "Unesite 1 za radni dan, a 2 za vikend" << endl;
	int dan;
	cin >> dan;

	float ukupnaCena = 0.0f;

	if (dan == 1)
	{
		ukupnaCena = cenaRazgovora * vremeTrajanjaRazgovora;
		cout << "Cena razgovora je: " << ukupnaCena;
	}
	else if (dan == 2)
	{
		ukupnaCena = cenaRazgovora * vremeTrajanjaRazgovora * 0.9;
		cout << "Cena razgovora je: " << ukupnaCena;
	}
	else
	{
		cout << "Uneli ste pogresnu vrednost, pokusajte ponovo!!!";
	}
}

/*29. Napisati program koji izračunava iznos poreza za
unetu platu. Ako je bruto plata veda od iznosa 1000e
porez je 20%,inače je porez 15%.*/
void zadatak29()
{
	cout << "Unesite iznos plate: " << endl;
	float plata = 0.0f;
	cin >> plata;
	float porez = 0.0f;

	if (plata <= 1000 && plata >= 0)
	{
		porez = plata * 15 / 100;
		cout << "Iznos poreza je: " << porez;
	}
	else if (plata > 1000)
	{
		porez = plata * 20 / 100;
		cout << "Imate  veliku platu. Iznos poreza je: " << porez;
	}
	else
	{
		cout << "Duzni ste kao Grcka!!!";
	}
}

/*30. Napisati program koji na osnovu visine osobe
odredjuje težinu.Idealna težina osobe muškog pola
je manja od visine za 100,a ženskog pola za
110.Predvideti unos identifikatora pola 1-muski,2-
ženski pol. */
void zadatak30()
{
	cout << "Unesite visinu u santimima:" << endl;
	float visina = 0.0f;
	cin >> visina;

	cout << "Unesite 1 ako ste muskog pola a 2 ako ste zenskog pola:" << endl;
	int pol;
	cin >> pol;

	float idealnaTezina = 0.0f;

	if (pol == 1)
	{
		idealnaTezina = visina - 100;
		cout << "Vasa idealna tezina je: " << idealnaTezina;
	}
	else if (pol == 2)
	{
		idealnaTezina = visina - 110;
		cout << "Vasa idealna tezina je: " << idealnaTezina;
	}
	else
	{
		cout << "Uneta vrednost mora biti 1 ili 2, pokusajte ponovo!!!";
	}
}

/*31. Napisati program koji na osnovu unete
visine, težine i indikatora pola osobe ispisuje
odgovarajudu poruku: “Vi imate idealnu težinu, trebalo bi
da se popravite, trebalo bi da smršate” ...*/
void zadatak31()
{
	cout << "Unesite visinu u santimima:" << endl;
	int visina = 0.0f;
	cin >> visina;

	cout << "Unesite tezinu:" << endl;
	int tezina = 0;
	cin >> tezina;

	cout << "Unesite 1 ako ste muskog pola a 2 ako ste zenskog pola:" << endl;
	int pol;
	cin >> pol;

	int idealnaTezina = 0;

	if (pol == 1)
	{
		idealnaTezina = visina - 100;
		cout << "ID" << idealnaTezina << endl;
	}
	else if (pol == 2)
	{
		idealnaTezina = visina - 110;
		cout << "ID" << idealnaTezina << endl;
	}
	else
	{
		cout << "Uneta vrednost mora biti 1 ili 2, pokusajte ponovo!!!";

	}

	//if ((pol == 1 || pol == 2) && tezina > visina)
	//{
	//	cout << "PODHITNO SMRSAJ STOKO!!!!";
	//}

	if (pol == 1 && idealnaTezina < tezina)
	{
		cout << "Smrsaj stoko!!!";
	}
	if (pol == 1 && idealnaTezina > tezina)
	{
		cout << "Jedi boraniju brateeu!!!";
	}
	if (pol == 1 && idealnaTezina == tezina)
	{
		cout << "Imate idealnu tezinu!";
	}
	if (pol == 2 && idealnaTezina < tezina)
	{
		cout << "Smrsaj stoko!!!";
	}
	if (pol == 2 && idealnaTezina > tezina)
	{
		cout << "Jedi boraniju brateeu!!!";
	}
	if (pol == 2 && idealnaTezina == tezina)
	{
		cout << "Imate idealnu tezinu!";
	}
	//if ((pol == 1 || pol == 2) && tezina > visina)
	//{
	//	cout << "PODHITNO SMRSAJ STOKO!!!!";
	//}
}

/*32. Napisati program kojim se izračunava ukupan
otpor R koji daju otpornici R1 i R2 zavisno od tipa
veze i to: 1-redno,2-paralelno.*/
void zadatak32()
{
	cout << "Unesite otpor R1: " << endl;
	float otpor1 = 0.0f;
	cin >> otpor1;

	cout << "Unesite vrednost otpora R2" << endl;
	float otpor2 = 0.0f;
	cin >> otpor2;

	cout << "Unesite 1 za rednu vezu ili 2 za paralelnu vezu:" << endl;
	int veza;
	cin >> veza;

	float ukupanOtpor = 0.0f;

	if (veza == 1)
	{
		ukupanOtpor = otpor1 + otpor2;
	}
	else if (veza == 2)
	{
		ukupanOtpor = (otpor1 * otpor2) / (otpor1 + otpor2);
	}
	cout << "Ukupan otpor je: " << ukupanOtpor;
}

/*33. Napisati niz naredbi kojima se odredjuje koliko
je vrednosti unetih promenljivih a,b,c jednako nuli.*/
void zadatak33()
{
	cout << "Unesite promenjljivu a: " << endl;
	int a = 0;
	cin >> a;

	cout << "Unesite promenjljivu b: " << endl;
	int b = 0;
	cin >> b;

	cout << "Unesite promenjljivu c: " << endl;
	int c = 0;
	cin >> c;

	int brojPromeljivih = 0;

	if (a == 0)
	{
		brojPromeljivih = brojPromeljivih + 1;
	}
	if (b == 0)
	{
		brojPromeljivih = brojPromeljivih + 1;

	}
	if (c == 0)
	{
		brojPromeljivih = brojPromeljivih + 1;
	}
	cout << "Broj promenljivih jednakih 0 je: " << brojPromeljivih;
}

/*34. Napisati program koji od korisnika učitava
godinu (broj izmedju 1538 i 10000) i utvrdjuje da li je
ona prestupna. Po gregorijanskom kalendaru
prestupne godine odredjuju se na slededi način:
-ako je godina deljiva sa 400,prestupna je (npr.2000
godina je prestupna)
-ako godina nije deljiva sa 400,ali je deljiva sa
100,nije prestupna (npr.1900. godina nije prestupna)
-ako godina nije deljiva sa 100,ali je deljiva sa
4,prestupna je (npr.2004 godina je prestupna)
-ako godina nije deljiva nije 100 deljiva sa 4,nije
prestupna (npr.2001. nije prestupna)*/
void zadatak34()
{
	cout << "Unesite godinu izmedju 1538 i 10000: " << endl;
	int godina;
	cin >> godina;

	if (godina < 1538 || godina > 10000)
	{
		cout << "Niste uneli ispravnu godinu!";
	}

	else if ((godina % 400 == 0) || (godina % 100 != 0 && godina % 4 == 0))
	{
		cout << "Godina " << godina << ". je prestupna";
	}
	else
	{
		cout << "Godina nije prestupna!";
	}
}

/*35. Napisati program kojim se rešava jednačina
ax+b=0.*/
void zadatak35()
{
	cout << "Unesite a:" << endl;
	float a = 0.0f;
	cin >> a;

	cout << "Unesite b:" << endl;
	float b = 0.0f;
	cin >> b;

	float x = 0.0f;

	if (a != 0)
	{
		x = -b / a;
		cout << "X = " << x;
	}
	else
	{
		cout << "a mora biti razlicit od 0";
	}

}

/*36. Napisati program kojim se dati brojevi a,b i c
udvostručuju,ako je a≥b≥c ,a u protivnom se
zamenjuju njihovim apsolutnim vrednostima. */
void zadatak36()
{
	cout << "Unesite a: " << endl;
	float a = 0.0f;
	cin >> a;

	cout << "Unesite b: " << endl;
	float b = 0.0f;
	cin >> b;

	cout << "Unesite c: " << endl;
	float c = 0.0f;
	cin >> c;

	if (a >= b && a >= c && b >= c)
	{
		a = 2 * a;
		b = 2 * b;
		c = 2 * c;
		cout << "Vrednost a je: " << a << " Vrednost b je: " << b << " Vrednost c je: " << c;
	}
	else
	{
		a = abs(a);
		b = abs(b);
		c = abs(c);
		cout << "Vrednost a je: " << a << " Vrednost b je: " << b << " Vrednost c je: " << c;

	}
}

/*37. Ako se molekul sumporne kiseline H2SO4 sastoji
od dva atoma vodonika,jednog atoma atoma
sumpora I četiri atoma kiseonika, napisati program
koji odredjuje maksimalan broj molekula sumporne
kiseline koji se može formirati od datih A atoma
vodonika,B atoma sumpora i C atoma kiseonika.
Traženi broj molekula je min (A div 2,B,C div 4) na
čemu se bazira rešenje */
void zadatak37()
{
	cout << "Unesite broj atoma vodonika, sumpora i kiseonika: " << endl;
	int atomV = 0;
	int atomS = 0;
	int atomK = 0;
	cin >> atomV >> atomS >> atomK;
	int minA = atomV / 2;

	if (minA > atomS)
	{
		minA = atomS;
	}
	if (minA > (atomK / 4))
	{
		minA = atomK / 4;
	}
	cout << "Moze se napraviti " << minA << " molekula sumporne kiseline." << endl;



}

/*38. Ako se od odsečaka sa dužinama x,y,z može
konstruisati trougao,izračunati njegovu površinu po
formuli:
S=√ p * (p - x) * (p - y) * (p - z)
gde je
p = (x + y + z) / 2
*/
void zadatak38()
{
	cout << "Unesite x, y, z: " << endl;
	int x = 0;
	int y = 0;
	int z = 0;
	cin >> x >> y >> z;

	int p = (x + y + z) / 2;
	int povrsina = 0;

	if (x + y > z && x + z > y && y + z > x)
	{
		povrsina = sqrt(p * (p - x) * (p - y) * (p - z));
		cout << "Povrsina trougla je: " << povrsina;
	}
	else
	{
		cout << "Ne moze se konstruisati trougao!";
	}
}

/*39. Napisati program kojim se y izračunava u
zavisnosti od uslova koje ispunjava promenljiva x.*/
void zadatak39()
{
	cout << "Unesite vrednost x: " << endl;
	float x = 0.0f;
	cin >> x;
	float y = 0.0f;

	if (x < 0)
	{
		y = -2 * x + 1;
	}
	else if (x < 1)
	{
		y = x;
	}
	else
	{
		y = x * x;
	}
	cout << "Vrednost funkcije je: " << y;

}

/*40. Napisati program kojim se ispisuje da li su dati
celi brojevi A,B,C uredjeni u neopadajudem poretku
(A≤B≤C).Ispisati odgovarajudu poruku.*/
void zadatak40()
{
	cout << "Unesite a, b, c:" << endl;
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;

	if (a <= b && b <= c)
	{
		cout << "Brojevi su uredjeni u neopadajucem poretku.";
	}
	else
	{
		cout << "Brojevi nisu uredjeni u neopadajucem poretku.";
	}
}

/*41. Napisati program kojim se dva data realna broja
premeštaju tako da važi poredak A≤B*/
void zadatak41()
{
	cout << "Unesite brojeve a i b:" << endl;
	int a = 0;
	int b = 0;
	cin >> a >> b;

	int pomocnaPromenljiva = 0;

	if (a > b)
	{
		pomocnaPromenljiva = a;
		a = b;
		b = pomocnaPromenljiva;
		cout << a << " " << b;
	}
	else
	{
		cout << a << " " << b;
	}

}
/*42. Napisati program kojim se vrednosti tri broja
premeštaju tako da važi poredak A≤B≤C*/
void zadatak42()
{
	cout << "Unesite brojeve a, b i c:" << endl;
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;

	int pomocnaPromenljiva = 0;

	if (a > b)
	{
		pomocnaPromenljiva = a;
		a = b;
		b = pomocnaPromenljiva;
	}
	if (a > c)
	{
		pomocnaPromenljiva = a;
		a = c;
		c = pomocnaPromenljiva;
	}
	if (b > c)
	{
		pomocnaPromenljiva = b;
		b = c;
		c = pomocnaPromenljiva;
	}
	cout << a << " " << b << " " << c;
}

/*43. Napisati naredbu uslovnog prelaska kojom se
vrednosti promenljive f izračunavaju po formuli.
f = { a + b ako je a neparno,
	  a * b ako je a parno }
*/

void zadatak43()
{
	cout << "Unesite a i b:" << endl;
	int a = 0;
	int b = 0;
	cin >> a >> b;

	int p = 0;

	if ((a % 2) == 0)
	{
		p = a * b;
	}
	else
	{
		p = a + b;
	}
	cout << p;


}

/*44. .Napisati naredbu uslovnog prelaska kojom se za
dato x po formuli izračunava y.
y = {-5 za x < 0,
	 x + 2 za x < 1,
	 3x -1 za x < 5,
	 2x za x > 5 }
*/
void zadatak44()
{
	cout << "Unesite x: " << endl;
	float x = 0.0f;
	cin >> x;

	float y = 0.0f;

	if (x < 0)
	{
		y = -5;
	}
	else if (x < 1)
	{
		y = x + 2;
	}
	else if (x < 5)
	{
		y = (3 * x) - 1;
	}
	else
	{
		y = 2 * x;
	}
	cout << "Vrednost y je: " << y;

}

/*45. Napisati program koji za tri uneta broja A,B,C
odredjuje zbir dva najmanja.*/
void zadatak45()
{
	cout << "Unesite brojeve a, b, c:" << endl;
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;
	int zbir = 0;

	if (a <= b && a <= c && b < c)
	{
		zbir = a + b;
	}
	else if (a <= b && a <= c && c <= b)
	{
		zbir = a + c;
	}
	else
	{
		zbir = b + c;
	}
	cout << "Zbir je: " << zbir;
}

/*46. Napisati program koji za dve različite
promenljive A i B ispituje da li je veda od njih deljiva
sa manjom bez ostatka.*/
void zadatak46()
{
	cout << "Unesite a i b:" << endl;
	int a = 0;
	int b = 0;
	cin >> a >> b;

	//int x = std::max(a, b);
	//int y = a + b - x;



	if (a < b && a != 0 && (b % a) == 0)
	{
		cout << "Broj b je deljiv brojem a bez ostatka";
	}
	else if (a > b && b != 0 && (a % b) == 0)
	{
		cout << "Broj a je deljiv brojem b bez ostatka";
	}
	else if (a > b && b != 0 && (a % b) != 0)
	{
		cout << "Broj a nije deljiv brojem b bez ostatka";
	}
	else if (a < b && a != 0 && (b % a) != 0)
	{
		cout << "Broj b nije deljiv brojem a bez ostatka";
	}
	else
	{
		cout << "Ne mozete deliti nulom!";
	}
}

/*47. Napisati naredbu uslovnog prelaska koijm se za
dato x izračuava y po formuli:
y= (min(x,y)+0.5) / (max(y,x)^2+1 )
 */
void zadatak47()
{
	cout << "Unesite x i y:" << endl;
	int x = 0;
	int y = 0;
	cin >> x >> y;

	int z = 0;

	if (x > y)
	{
		z = (y + 0.5) / pow(x, 2) + 1;
	}
	else
	{
		z = (x + 0.5) / pow(y, 2) + 1;
	}
	cout << z;
}

/*48. Napisati program koji ispituje u kojem se
kvadrantu nalazi trougao koga obrazuju prava
odredjena jednačinom y = ax+b i koordinate ose.*/
void zadatak48()
{
	cout << "Unesite koeficijente a i b:" << endl;
	int a = 0;
	int b = 0;
	cin >> a >> b;

	if (a > 0 && b > 0)
	{
		cout << "Trougao se formira u II kvadrantu";
	}
	else if (a < 0 && b < 0)
	{
		cout << "Trougao se formira u III kvadrantu";
	}
	else if (a < 0 && b > 0)
	{
		cout << "Trougao se formira u I kvadrantu";
	}

	else if ((a > 0 || a < 0) && b == 0)
	{
		cout << "Trougao se NE FORMIRA!";
	}
	else if (a == 0)
	{
		cout << "Trougao se NE FORMIRA!";
	}
	else
	{
		cout << "Trougao se formira u IV kvadrantu";
	}
}

/*49. Napisati program koji izračunava realna rešenja
kvadratne jednačine ax^2+bx+c = 0 (a≠0) */
void zadatak49()
{
	cout << "Unesite koeficijente jednacine:" << endl;
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;

	int D = (b * b) - (4 * a * c);
	int x = 0;
	int x1 = 0;

	if (D < 0)
	{
		cout << "Jednacina nema realnih resenja!";
	}
	else if (D == 0 && a != 0)
	{
		x = -b / (2 * a);
		cout << "Jednacina ima jedno resenje, x = " << x;
	}
	else if (D > 0 && a != 0)
	{
		x = (-b + sqrt(D)) / 2 * a;
		x1 = (-b - sqrt(D)) / 2 * a;
		cout << "Jednacina im dva realna resenja:" << endl << "x1 = " << x << endl << "x2 = " << x1;
	}
	else
	{
		cout << "a ne sme biti 0";
	}
}

/*50. Neka se sa tastature unose celi brojevi n1, n2, i
n3. Napiši program kojim se izračunava zbir brojeva
koji se nalaze u intervalu 3 do 7.*/
void zadatak50()
{
	cout << "Unesite cele brojeve a, b, c:" << endl;
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;
	int zbir = 0;

	if (a > 3 && a < 7)
	{
		zbir = zbir + a;
	}
	if (b > 3 && b < 7)
	{
		zbir = zbir + b;
	}
	if (c > 3 && c < 7)
	{
		zbir = zbir + c;

	}

	cout << "Zbir je: " << zbir;

}

/*51. Napisati program koji računa ukupan broj poena učenika,tako što korisnik unosi svoj uspeh četiri školske
godine (koji ne sme biti manji od 2,a ni vedi od 5 u suprotnom program treba da ispiše „Greška u unosu“)
kao i broj poena na prijemnom ( koji ne sme biti manji od 0 niti vedi od 60).*/
void zadatak51()
{
	cout << "Unesite uspeh iz I godine:" << endl;
	float uspeh1 = 0.0f;
	cin >> uspeh1;

	cout << "Unesite uspeh iz II godine:" << endl;
	float uspeh2 = 0.0f;
	cin >> uspeh2;

	cout << "Unesite uspeh iz III godine:" << endl;
	float uspeh3 = 0.0f;
	cin >> uspeh3;

	cout << "Unesite uspeh iz IV godine:" << endl;
	float uspeh4 = 0.0f;
	cin >> uspeh4;

	cout << "Unesite poene sa prijemnog:" << endl;
	float bodoviPrijemni = 0.0f;
	cin >> bodoviPrijemni;

	float bodoviSkola = (uspeh1 + uspeh2 + uspeh3 + uspeh4) * 2;
	float ukupniBodovi = bodoviSkola + bodoviPrijemni;

	if (uspeh1 >= 2 && uspeh1 <= 5 && uspeh2 >= 2 && uspeh2 <= 5 && uspeh3 >= 2 && uspeh3 <= 5 && uspeh4 >= 2 && uspeh4 <= 5 && bodoviPrijemni >= 0 && bodoviPrijemni <= 60)
	{
		cout << "Ukupan broj bodova je: " << ukupniBodovi << endl;
	}
	else
	{
		cout << "Pogresili ste u unosu podataka!";
	}


}


/*52. Dodeliti vrednost max vedem od dva uneta
broja.*/
void zadatak52()
{
	cout << "Unesite vrednosti a i b:\n";
	int x = 0;
	int y = 0;
	cin >> x >> y;
	int max = 0;

	switch (x >= y)
	{
	case true: {
		max = x;
		std::cout << "Maksimalna vrednost je: " << max;
	}   break;
	case false: {
		max = y;
		std::cout << "Maksimalna vrednost je: " << max;

	}


	}
}

/*53. Napisati case naredbu kojom se na osnovu
brojnih ocena 5,4,3,2,1 ispisuju opisne ocene
odličan,vr.dobar,dobar…*/
void zadatak53()
{
	cout << "Unesite ocenu:\n";
	int ocena = 0;
	cin >> ocena;

	switch (ocena)
	{
	case 1: {std::cout << "Nedovoljan"; break; }
	case 2: {std::cout << "Dovoljan"; break; }
	case 3: {std::cout << "Dobar"; break; }
	case 4: {std::cout << "Vrlo dobar"; break; }
	case 5: {std::cout << "Odlican"; break; }
	default: {std::cout << "Pogresan unos ocene!"; }


	}
}

/*54. Napisati program koji za dati redni broj dana u
nedelji štampa ime dana.*/
void Zadatak54()
{
	cout << "Unesite redni broj dana u nedelji:\n";
	int dan = 0;
	cin >> dan;

	switch (dan)
	{
	case 1: {std::cout << "Ponedeljak"; break; }
	case 2: {std::cout << "Utorak"; break; }
	case 3: {std::cout << "Sreda"; break; }
	case 4: {std::cout << "Cetvrtak"; break; }
	case 5: {std::cout << "Petak"; break; }
	case 6: {std::cout << "Petak"; break; }
	case 7: {std::cout << "Petak"; break; }
	default: {std::cout << "Pogresan unos rednog broja dana!"; }


	}
}

/*55. Napisati program koji ispisuje mogude vrednosti
koordinata x i y zavisno od broja kvadranta koji se
unosi.*/
void zadatak55()
{
	cout << "Unesite redni broj kvadranta:\n";
	int brojKvadranta = 0;
	cin >> brojKvadranta;

	switch (brojKvadranta)
	{
	case 1: {std::cout << "x je manji od 0, y je veci od nule"; break; }
	case 2: {std::cout << "x i y su veci od nule"; break; }
	case 3: {std::cout << "x i y su manji od nule"; break; }
	case 4: {std::cout << "x je veci od 0, y je manji od 0"; break; }
	default: {std::cout << "Pogresan unos rednog broja kvadranta!"; }
	}
}

/*56. Napisati program koji za dati mesec ispisuje
njegov broj dana. U slučaju meseca februrar pitati
korisnika da li je godina prestupna.*/
void zadatak56()
{
	cout << "Unesite redni meseca:\n";
	int brojMeseca = 0;
	cin >> brojMeseca;

	switch (brojMeseca)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
	case 11: {std::cout << "Dati mesec ima 31 dan."; break; }

	case 2:
	{
		char odgovor;
		std::cout << "Da li je godina prestupna D/N?\n";
		std::cin >> odgovor;

		if (odgovor == 'D')
		{
			std::cout << "Dati mesec ima 29 dana.";
		}
		else if (odgovor == 'N')
		{
			std::cout << "Dati mesec ima 28 dana.";
		}
		else
		{
			std::cout << "Greska!";
		}



	}
	case 4:
	case 6:
	case 8:
	case 10:
	case 12: {std::cout << "Dati mesec ima 30 dana."; break; }


	}
}

/*57. Napisati program koji zavisno od vrednosti
indikatora N izračunava površinu geometrijskih
figura: 1-pravougaonik, 2 – trougao, 3-trapez, 4 –
krug. Nakon izbora gemetrijske figure unose se
odgovarajudi podaci.*/
void zadatak57()
{
	cout << "Unesite 1 za pravougaonik, 2 za trougao, 3 za trapez ili 4 za krug.\n";
	int geometrijskoTelo = 0;
	cin >> geometrijskoTelo;
	int povrsina = 0;


	switch (geometrijskoTelo)
	{
	case 1:
	{
		cout << "Unesite stranice pravougaonika a i b\n";
		float a = 0.0f;
		float b = 0.0f;
		cin >> a >> b;
		if (a > 0 && b > 0)
		{
			povrsina = a * b;
			cout << "Povrsina pravougaonika je: " << povrsina;
		}
		else
		{
			cout << "Vrednost stranice mora biti veca od 0!!!";
		}
		break;
	}
	case 2:
	{
		cout << "Unesite duzinu osnovice i visine trougla a i h.\n";
		float a = 0.0f;
		float h = 0.0f;
		cin >> a >> h;
		if (a > 0 && h > 0)
		{
			povrsina = (a * h) / 2;
			cout << "Povrsina trougla je: " << povrsina;
		}
		else
		{
			cout << "Vrednost stranice mora biti veca od 0!!!";
		}
		break;
	}
	case 3:
	{
		cout << "Unesite duzinu osnovica i visine trapeza a, b i h.\n";
		float a = 0.0f;
		float b = 0.0f;
		float h = 0.0f;
		cin >> a >> b >> h;
		if (a > 0 && b > 0 && h > 0)
		{
			povrsina = ((a + b) * h) / 2;
			cout << "Povrsina trapeza je: " << povrsina;
		}
		else
		{
			cout << "Vrednost stranice mora biti veca od 0!!!";
		}
		break;
	}
	case 4:
	{
		cout << "Unesite poluprecnik kruga/n";
		float r = 0.0f;
		cin >> r;
		float pi = 3.14159265359;
		if (r > 0)
		{
			povrsina = r * r * pi;
			cout << "Povrsina kruga je: " << povrsina;
		}
		else
		{
			cout << "Vrednost poluprecnika mora biti veca od 0!!!";
		}
		break;
	}
	}
}

/*58. Ako se sa ulaza učitavaju tri prirodna broja
k1,k2,k3, koji označavaju redni broj dana u godini,
ispitati da li označavaju isti dan u nedelji.Na primer
isti dan označavaju 2,16 i 30 ili 344,351 i 358.*/
void zadatak58()
{

	int redniBrojDanaUGodini1 = 0;
	int redniBrojDanaUGodini2 = 0;
	int redniBrojDanaUGodini3 = 0;
	cout << "Unesite redni broj dana u godini\n";
	cin >> redniBrojDanaUGodini1 >> redniBrojDanaUGodini2 >> redniBrojDanaUGodini3;

	int n1 = redniBrojDanaUGodini1 % 7;
	int n2 = redniBrojDanaUGodini2 % 7;
	int n3 = redniBrojDanaUGodini3 % 7;

	if (n1 == n2 && n2 == n3)
	{
		cout << "U pitanju su isti dani u nedelji!";
	}
	else
	{
		cout << " Nisu isti dani u nedelji!";
	}
}

/*59. Napisati program kojim se za učitani ugao u
stepenima koji može biti vedi od 360˚ odredjuje
kvadrant kome pripada.*/
void zadatak59()
{
	int ugao = 0;
	cout << "Unesite velicinu ugla u stepenima.\n";
	cin >> ugao;
	int ostatak = ugao % 360;

	switch (ostatak / 90)
	{
	case 0: {cout << "Ugao se nalazi u prvom kvadrantu."; } break;
	case 1: {cout << "Ugao se nalazi u drugom kvadrantu."; } break;
	case 2: {cout << "Ugao se nalazi u trecem kvadrantu."; } break;
	case 3: {cout << "Ugao se nalazi u cetvrtom kvadrantu."; }
	}
}

/*60. Napisati program kojim se učitava znak za operaciju (+,-,*,/) i dva realna operanda, a zatim štampa
rezultat. Program treba da simulira kalkulator.*/
void zadatak60()
{
	float a = 0.0f;
	float b = 0.0f;
	float rezultat = 0.0f;
	cout << "Unesite realne brojeve a i b\n";
	cin >> a >> b;

	char operatori;
	cout << "Unesite operator +, -, * ili /\n";
	cin >> operatori;

	switch (operatori)
	{
	case '+':
	{
		rezultat = a + b;
		cout << "Rezultat je : " << rezultat;
	}
	break;

	case '-':
	{
		rezultat = a + b;
		cout << "Rezultat je : " << rezultat;
	}
	break;

	case '*':
	{
		rezultat = a * b;
		cout << "Rezultat je : " << rezultat;
	}
	break;

	case '/':
	{
		rezultat = a / b;
		cout << "Rezultat je : " << rezultat;
	}

	}

}

/*61. Napisati program kojim se ispisuju velika slova
latiničnog alfabeta i njihovi redni brojevi.*/
void zadatak61()
{
	string alfabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (int i = 0; i < alfabet.length(); i++)
	{
		cout << i + 1 << ". " << alfabet[i] << endl;
	}
}

/*62. Za vrednost od 1 do n unetog broja napisati i
program za učitavanje,sumiranje i štampanje njihove
sume.*/
void zadatak62()
{
	int suma = 0;
	int k = 0;
	cout << "Unesite vrednost broja k.\n";
	cin >> k;

	cout << "Brojevi su: ";

	for (int i = 1; i <= k; i++)
	{
		cout << i << " ";
	}
	suma = sum(1, k);
	cout << "\nSuma od 1 do k je: " << suma;
}

/*63. Napisati program koji ispisuje sve parne brojeve
od 1 do unetog n.*/

void zadatak63()
{
	int n = 0;
	cout << "Unesite vrednost broja n.\n";
	cin >> n;

	cout << "\nParni brojevi su: ";
	for (int i = 0; i <= n; i++)
	{
		if ((i % 2) == 0)
		{
			cout << i << " ";
		}
	}

}

/*64. Sa tastature se unose 10 brojeva.Napisati
program koji računa njihov zbir i proizvod.*/
void zadatak64()
{
	int proizvod = 1;
	int zbir = 0;
	int a = 0;

	for (int i = 1; i <= 10; i++)
	{
		cout << "Unesi " << i << ". broj:\n";
		cin >> a;
		zbir += a;
		proizvod *= a;
	}

	cout << "Zbir je: " << zbir << " a proizvod je: " << proizvod;
}

/*65. Preduzece placa honorarno zaposlene sa X dinara po satu. Napisati program koji za n radnika učitava ime
kao podatak tipa string (ne duži od 20 znakova), broj sati provedenih na radu i za svakog radnika ispisuje
njegovo ime, bruto zaradu, iznos poreza (16% bruto zarade), iznos doprinosa (26% bruto zarade) i neto
zaradu (bruto zarada umanjena za porez i doprinos). */
void zadatak65()
{
	string imeRadnika;
	float brutoZarada = 0.0f;
	float iznosPoreza = 0.0f;
	float iznosDoprinosa = 0.0f;
	float netoZarada = 0.0f;
	float brojSatiProvedenihNaRadu = 0.0f;
	float satnica = 900;
	int n = 3;

	for (int i = 0; i < n; i++)
	{
		cout << "Unesite ime radnika:" << endl;
		cin >> imeRadnika;
		cout << "Unesite broj sati provedenih na radu:" << endl;
		cin >> brojSatiProvedenihNaRadu;

		brutoZarada = brojSatiProvedenihNaRadu * satnica;
		iznosPoreza = brutoZarada * 0.16;
		iznosDoprinosa = brutoZarada * 0.26;
		netoZarada = brutoZarada - iznosDoprinosa - iznosPoreza;

		cout << imeRadnika << "\nBruto zarada je: " << brutoZarada << "\nIznos poreza je: " << iznosPoreza <<
			"\nIznos doprinosa je: " << iznosDoprinosa << "\nNeto zarada je: " << netoZarada << endl;
	}

}

/*66. Napisati program kojim se za dato n izračunava
faktorijel prirodnog broja n. */
void zadatak66()
{
	int n = 0;
	int proizvod = 1;
	cout << "Unesite n: " << endl;
	cin >> n;

	//while (n > 0)
	//{
	//	proizvod *= n;
	//	n--;
	//}


	for (int i = 1; i <= n; i++)
	{
		proizvod *= i;
	}

	cout << "Faktorijel broja n je: " << proizvod;
}
int izracunajFaktorijel(int n)
{
	int proizvod = 1;

	for (int i = 1; i <= n; i++)
	{
		proizvod *= i;
	}
	return proizvod;
}

/*67. Napisati program kojim se izračunava suma
faktorijela s=1!+2!+3!...+n!*/
void zadatak67()
{
	int n = 0;
	cout << "Unestire broj n: " << endl;
	cin >> n;
	int sumaFaktorijela = 0;

	for (int i = 1; i <= n; i++)
	{
		sumaFaktorijela += izracunajFaktorijel(i);
	}

	cout << "Suma faktorijela je: " << sumaFaktorijela;
}

/*68. Napisati program kojim se izračunava zbir
brojeva od 1 do 100 čija je zadnja cifra 9. */
void zadatak68()
{
	int zbirBrojeva = 0;

	/*for (int i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			zbirBrojeva += i;
		}
	}*/
	for (int i = 9; i <= 100; i += 10)
	{
		zbirBrojeva += i;
	}
	cout << "Zbir je: " << zbirBrojeva;
}

/*69. Napisati program koji proverava da li je uneti
broj savršen ili nije i ispisuje poruku o tome. Broj je
savršen ako je jednak sumi svojih delitelja
isključujudi njega samog. Naprimer 28 je savršen
broj,jer je: 28=1+2+4+7+14*/
void zadatak69()
{
	int broj = 0;
	cout << "Unesite broj: ";
	cin >> broj;
	int zbirDelitelja = 0;

	for (int i = 1; i < broj; i++)
	{
		if (broj % i == 0)
		{
			zbirDelitelja += i;
		}
	}
	if (broj == zbirDelitelja)
	{
		cout << "Uneti broj " << broj << " je savrsen!";
	}
	else
	{
		cout << "Uneti broj nije savrsen!";
	}

}

/*70. Napisati program kojim se učitavaju ocene
učenika za n predmeta i izračunava njegova
prosečna ocena.*/
void zadatak70()
{
	int ocena = 0;
	int brojPredmeta = 0;
	cout << "Unesite broj predmeta: ";
	cin >> brojPredmeta;
	float prosek = 0.0f;
	int zbirOcena = 0.0f;

	for (int i = 1; i <= brojPredmeta; i++)
	{
		cout << "Napisi ocenu: \n";
		cin >> ocena;
		zbirOcena += ocena;
	}
	prosek = (float)zbirOcena / brojPredmeta;
	cout << "Prosek je: " << prosek;
}

/*71. N predavača u centru za talente drži predavanje po ceni časa (c).Napisati program kojim se za svakog
predavača učitava koliko je održao časova u toku meseca i ispisuje njegova zarada.Odrediti i ukupan iznos za
isplatu. */
void zadatak71()
{
	int cenaCasa = 100;
	int brojOdrzanihCasova = 0;
	int zarada = 0;
	int ukupanIznos = 0;
	int brojPredavaca = 0;
	cout << "Unesite broj predavaca: ";
	cin >> brojPredavaca;

	for (int i = 1; i <= brojPredavaca; i++)
	{
		cout << "Unesite broj odrzanih casova: \n";
		cin >> brojOdrzanihCasova;
		zarada = brojOdrzanihCasova * cenaCasa;
		cout << "Zarada je: " << zarada << endl;
		ukupanIznos += zarada;
	}
	cout << "Ukupan iznos za isplatu je: " << ukupanIznos;
}

/*72. Sa tastature se učitavaju temperature za n dana u godini. Napisati program koji de odrediti maksimalnu
temperaturu za unete dane i redni broj dana kada je temperatura bila maksimalna. */
void zadatak72()
{
	int brojDana = 0;
	cout << "Unesite broj dana: ";
	cin >> brojDana;

	int redniBrojDana = 0;
	float temperatura = 0.0f;
	float maksTemp = -100;

	for (int i = 1; i <= brojDana; i++)
	{
		cout << "Unesite temperaturu: \n";
		cin >> temperatura;
		if (temperatura > maksTemp)
		{
			maksTemp = temperatura;
			redniBrojDana = i;
		}

	}
	cout << "maksimalna temperatura je: " << maksTemp << " i bila je " << redniBrojDana << ". dana";
}

/*73. Napisati program kojim se izražava zbir od 1 do n
brojeva. */
void zadatak73()
{
	int n = 0;
	cout << "Unesite n: ";
	cin >> n;
	int zbir = 0;

	/*zbir = (n * (n + 1)) / 2;*/
	for (int i = 1; i <= n; i++)
	{
		zbir += i;
	}
	cout << "Zbir je: " << zbir;
}
int sumaPrvihNBrojeva(int n)
{

	int zbir = 0;

	/*zbir = (n * (n + 1)) / 2;*/
	for (int i = 1; i <= n; i++)
	{
		zbir += i;
	}
	return n;
}

/*74. Napisati program kojim se izračunava zbir od 1
do n ali samo parnih brojeva.*/
void zadatak74()
{
	int n = 0;
	cout << "Unesite n: ";
	cin >> n;
	int zbir = 0;

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			zbir += i;
		}
	}
	cout << "Zbir je: " << zbir;
}

/*75. Napisati program za proveru tačnosti
matematičkih formula za izračunavanje sume.
1 + 3 + 5 +…+ (2n-1)=n^2*/
void zadatak75()
{
	int n = 0;
	cout << "Unesite n: ";
	cin >> n;
	int zbir = 0;
	int kvadrat = n * n;

	for (int i = 1; i <= 2 * n - 1; i++)
	{
		if (i % 2 != 0)
		{
			zbir += i;
		}
	}

	cout << "Zbir je: " << zbir << ", a kvadrat je : " << kvadrat << ".";

	if (zbir == kvadrat)
	{
		cout << "Vazi jednakost!";
	}
	else
	{
		cout << "Ne vazi jednakost!";
	}
}

/*76. Napisati program za proveru tačnosti
matematičkih formula za izračunavanje sume.
1^2 + 3^2 + 5^2 +…+ (2n-1)^2= n*(4n^2-1)/3 */
void zadatak76()
{
	double n = 0;
	cout << "Unesite n: ";
	cin >> n;
	int zbir = 0;
	int kvadrat = (n * (4 * pow(n, 2) - 1)) / 3;

	for (int i = 1; i <= (2 * n - 1); i++)
	{
		if (i % 2 != 0)
		{
			zbir += i * i;
		}
	}

	cout << "Zbir je: " << zbir << ", a kvadrat je : " << kvadrat << ".";

	if (zbir == kvadrat)
	{
		cout << " Vazi jednakost!";
	}
	else
	{
		cout << " Ne vazi jednakost!";
	}
}

/*77. Napisati program kojim se izračunava zbir prvih n
članova reda: 1 + 1/2 + 1/3 + 1/4 +...*/
void zadatak77()
{
	float zbir = 0.0f;
	int n = 0;
	cout << "Unesite broj n clanova reda:";
	cin >> n;


	for (int i = 1; i <= n; i++)
	{
		zbir += 1 / (float)i;
	}
	cout << "Zbir je: " << zbir;
}

/*78. Napisati program koji se izračunava zbir prvih n
članova reda: 1 + 1/3 + 1/5 +...+ 1/(2 * n - 1)
*/
void zadatak78()
{
	float zbir = 0.0f;
	int n = 0;
	cout << "Unesite broj n clanova reda:";
	cin >> n;


	for (int i = 1; i <= 2 * n - 1; i++)
	{
		if (i % 2 != 0)
		{
			zbir += 1 / (float)i;
		}
	}
	cout << "Zbir je: " << zbir;
}

/*79. Napisati program kojim se izračunava zbir prvih n
članova reda. 1 - 1/3 + 1/5 - 1/7 ... */
void zadatak79()
{
	float zbir = 0.0f;
	int k = 1;
	int n = 0;
	cout << "Unesite broj n clanova reda:";
	cin >> n;


	for (int i = 1; i <= n; i++)
	{
		{
			zbir += k / (float)((2 * i) - 1);
			k = -k;
		}
	}
	cout << "Zbir je: " << zbir;
}

/*80. Napisati program kojim se računa stepen broja
dva od prvog stepena do n-tog stepena.*/
void zadatak80()
{
	int n = 0;
	cout << "Unesite stepen n:";
	cin >> n;

	int stepenBrojaDva = 0;

	for (int i = 0; i <= n; i++)
	{
		stepenBrojaDva = pow(2, i);
	}
	cout << "Stepen broja n je: " << stepenBrojaDva;
}

/*81. Napisati program kojim se izračunava suma:
S = 2 + 2^2 + 2^3 + … + 2^n */
void zadatak81()
{
	int n = 0;
	cout << "Unesite stepen n:";
	cin >> n;

	int suma = 0;

	for (int i = 1; i <= pow(2, n); i++)
	{
		suma += pow(2, i);
	}
	cout << "Suma je: " << suma;
}

/*82. Napisati program kojim se za realno x izračunava
suma:
S = x + x^2 + x^3 + … + x^n*/
void zadatak82()
{
	int x = 0;
	cout << "Unesite promenljivu x:";
	cin >> x;

	int n = 0;
	cout << "Unesite stepen n:";
	cin >> n;

	int suma = 0;

	for (int i = 1; i <= n; i++)
	{
		suma += pow(x, i);
	}
	cout << "Suma je: " << suma;
}

/*82a. Napisati program kojim se za realno x izračunava
suma:
S = x + 2x^2 + 3x^3 + … + nx^n*/
void zadatak82a()
{
	int x = 0;
	cout << "Unesite promenljivu x:";
	cin >> x;

	int n = 0;
	cout << "Unesite stepen n:";
	cin >> n;

	int k = 1;
	int suma = 0;

	for (int i = 1; i <= n; i++)
	{
		k *= x;
		suma += i * k;

	}

	cout << "Suma je: " << suma;
}

/*83. Napisati program kojim se za realno x izračunava
suma: s = 1 + 1/x + 1/x^2 + 1/x^3 +...+ 1/x^n */
void zadatak83()
{
	int x = 0;
	cout << "Unesite promenljivu x:";
	cin >> x;

	int n = 0;
	cout << "Unesite stepen n:";
	cin >> n;

	int suma = 0;

	for (int i = 0; i <= n; i++)
	{
		suma += 1 / pow(x, i);
	}
	cout << "Suma je: " << suma;
}

/*84. . Napisati program kojim se izračunava proizvod:
p = (1 + 1/2!) * (1 + 1/3!) +...+ (1 + 1/n!)   */
void zadatak84()
{
	int n = 0;
	cout << "Unesite stepen n:";
	cin >> n;

	float proizvod = 1;


	for (int i = 2; i <= n; i++)
	{
		proizvod *= (1 + 1 / (float)izracunajFaktorijel(i));
	}

	cout << "Proizvod je: " << proizvod;

}

/*85. Napisati program kojim se izračunava proizvod:
p = (1 + 1/2) * (1 + 1/3) * ... *(1 + 1 / (n + 1)) */
void zadatak85()
{
	int n = 0;
	cout << "Unesite stepen n:";
	cin >> n;

	float proizvod = 1;


	for (int i = 2; i <= n + 1; i++)
	{
		proizvod *= (1 + 1 / (float)i);
	}

	cout << "Proizvod je: " << proizvod;
}

/*86. Napisati program kojim se za dati prirodan broj n
izračunava: s= 1! / 1/2 + 2!/ 1/2 + 1/3 +...+ n!/1/2 + 1/3 + 1/n + 1   */
void zadatak86()
{
	int n = 0;
	cout << "Unesite  n:";
	cin >> n;

	float suma = 0;
	int faktorijel = 1;
	float ukupanZbir = 0;



	for (int i = 1; i <= n; i++)
	{
		faktorijel *= i;
		suma += 1 / (float)(i + 1);
		ukupanZbir += faktorijel / suma;
	}
	cout << "Faktorijel " << faktorijel;


	cout << " Suma je: " << ukupanZbir;
}

/*87. Napisati program kojim se za dati prirodan broj n
izračunava:  s = 3! - 6! + 9! +(-1)^n+1(3n)!  */
void zadatak87()
{
	int n = 0;
	cout << "Unesite n:";
	cin >> n;

	int suma = 0;
	int k = 1;
	int faktorijel = 1;

	for (int i = 3; i <= 3 * n; i++)
	{
		if (i % 3 == 0)
		{
			suma += k * izracunajFaktorijel(i);
			k = -k;

		}
	}
	cout << faktorijel;
	cout << "Suma je: " << suma;
}

/*88. Dat je slededi niz:
S = sin(x) + sin^2(x) + sin^3(x) + … + sin^n(x)
Napisati program koji računa zbir ako se sa tastature
unose n i broj x:*/
void zadatak88()
{
	int n = 0;
	cout << "Unesite n:";
	cin >> n;

	int x = 0;
	cout << "Unesite x:";
	cin >> x;

	float suma = 0.0f;

	for (int i = 1; i <= n; i++)
	{
		suma += pow(sin(x), i);
	}
	cout << "Trazena suma je: " << suma;
}

/*89. Napisati program kojim se, ako su dati prirodan
broj n i realan broj x izračunava.
S = cos(x) + cos(x^2) + … + cos(x^n)*/
void zadatak89()
{
	int n = 0;
	cout << "Unesite n:";
	cin >> n;

	int x = 0;
	cout << "Unesite x:";
	cin >> x;

	float suma = 0;

	for (int i = 1; i <= n; i++)
	{
		suma += cos(pow(x, i));
	}
	cout << "Trazena suma je: " << suma;
}

/*90. Napisati program kojim se,ako su dati prirodan
broj n i realan broj x izračunava.
S = sin(x) + sin(sin(x)) + … + sin(sin(…sin(x)))
*/
void zadatak90()
{
	int n = 0;
	cout << "Unesite n:";
	cin >> n;

	float x = 0.f;
	cout << "Unesite x:";
	cin >> x;

	float suma = 0.0f;

	for (int i = 1; i <= n; i++)
	{
		x = sin(x);
		suma += x;
	}
	cout << "Trazena suma je: " << suma;
}

/*91. Napisati program kojim se izračunava proizvod
prvih n faktora izraza: s = 1/2 * 3/4 * 5/6....  */
void zadatak91()
{
	int n = 0;
	cout << "Unesite n: \n";
	cin >> n;
	float proizvod = 1.0f;

	for (int i = 1; i <= n; i++)
	{
		proizvod *= (float)(2 * i - 1) / (float)(2 * i);
	}
	cout << "Proizvod je: " << proizvod;
}

/*92. Približna vrednost broja π može se odrediti
pomodu formule π ≈ 4Pk gde je: Pk = 1 - 1/3 + 1/5 - 1/7 +...+ (-1)^k+1 * 1/ 2k - 1)
*/
void zadatak92()
{
	int n = 0;
	cout << "Unesite n: \n";
	cin >> n;
	float suma = 0.0f;
	int k = 1;

	for (int i = 1; i <= n; i++)
	{
		suma += k / (float)(2 * i - 1);
		k = -k;
	}
	float pi = 4 * suma;
	cout << "Pi je: " << pi;
}

/*93. Napisati program koji od korisnika učitava realan
broj x i ceo broj n≥2 i potom računa i štampa
vrednost.   1 + 2*x + 3*x^2 +...+ n*x^n-1 / 1 + 2 + 3 +...+ n  */
void zadatak93()
{
	int x = 0;
	cout << "Unesite realnu promenljivu x: \n";
	cin >> x;

	int n = 0;
	cout << "Unesite n: \n";
	cin >> n;

	float suma = 0;
	float suma1 = 0;
	float suma2 = (n * (n - 1)) / 2;

	for (int i = 1; i <= n; i++)
	{
		suma1 += i * pow(x, i - 1);
	}
	suma = suma1 / suma2;
	cout << suma;

}
/*94. Napisati program koji od korisnika učitava ceo broj n ≥ 3, a potom n realnih brojeva i utvrdjuje i štampa
najvedi od tih brojeva kao i koliko se on puta pojavio. Npr za n=5 1,13 ; 2,56 ; 2.56; 3 ; 7,2; ispisuje da je
najvedi 7,2 i da se pojavio jednom.*/
void zadatak94()
{
	int n = 0;
	cout << "Unesite n tako da je n >= 3: ";
	cin >> n;

	int a = 0;
	int max = 0;
	int brojac = 0;

	if (n < 3)
	{
		cout << "n mora biti veci od 3!!!";
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			cout << "Unesite " << i << ". broj: ";
			cin >> a;
			if (a > max)
			{
				max = a;
			}
			else if (a = max)
			{
				brojac += 1;
			}

		}
		cout << "Max je: " << max << " i pojavljuje se " << brojac << " puta.";
	}
}
void zadatak95();
/*95. Napisati program kojim se za uneto n izračunava slededa suma:
s= 1/1! - (1 + 2)/2! + (1 + 2 + 3)/3! +...+(-1)^n+1 * (1 + 2 + ...+ n)/n! */

void zadatak95()
{
	int k = 1;
	int n = 0;
	cout << "Unesite n: ";
	cin >> n;

	int suma = 0;
	


	for (int i = 0; i <= n; i++)
	{
		suma += sumaPrvihNBrojeva(i) / izracunajFaktorijel(i); //sumaPrvihNBrojeva() 73. zadatak, izracunajFaktorijal() 66.zadatak
	}
	cout << "Suma izraza je : " << suma;
}

/*96. Napisati program kojim se za uneto n izračunava
slededi proizvod: S = 1*2 + 2*3*4 +...+N*(N+1)*...*(2N)*/
void zadatak96()
{
	int n = 0;
	cout << "Unesite n: ";
	cin >> n;

	int suma = 0;
	int proizvod = 1;

	/*for (int i = 1; i <= n; i++)
	{
		
		for (int k = 0; k <= i; k++)
		{
			proizvod *= (i + k);
		}
		suma += proizvod;
		proizvod = 1;
	}
	cout << suma;*/

	for (int i = 1; i <= n; i++)
	{

		for (int k = i; k <= 2*i; k++)
		{
			proizvod *= k;
		}
		suma += proizvod;
		proizvod = 1;
	}
	cout << suma;
}

/*97. Napisati program kojim se izračunava suma:
S = 1 / (1*2*3)  + 1/ 2*3*4 +...+1/ N*(N+1)*(N+2) */
void zadatak97()
{
	int n = 0;
	cout << "Unesite n: ";
	cin >> n;

	float suma = 0.0f;
	int proizvod = 1;

	for (int i = 1; i <= n; i++)
	{
		for (int k = i; k <= i + 2; k++)
		{
			proizvod *= k;
		}
		suma += 1/(float)proizvod;
		proizvod = 1;
	}
	cout << suma;
}
/*98. Napisati program kojim se nalazi suma svih
trocifrenih brojeva čiji je zbir cifara paran broj.*/
void zadatak98()
{

	int sumaSvihTrocifrenihBrojeva = 0;
	int suma = 0;
	int cifraStotina = 0;
	int cifraDesetica = 0;
	int cifraJedinica = 0;
	

	for (int i = 100; i <= 999; i++)
	{
		cifraJedinica = i % 10;
		cifraDesetica = (i % 100) / 10;
		cifraStotina = i / 100;
		suma = cifraJedinica + cifraDesetica + cifraStotina;
		if (suma % 2 == 0)
		{
			sumaSvihTrocifrenihBrojeva += i;
		}	
	}
	cout << "Suma svih trocifrenih brojeva ciji je zbir cifara paran broj je: " << sumaSvihTrocifrenihBrojeva;
}

/*99. Napisati program kojim se štampaju svi
četvorocifreni brojevi koji su jednaki proizvodu svojih
cifara.*/
void zadatak99()
{
	
	int proizvod = 0;
	int cifraStotina = 0;
	int cifraDesetica = 0;
	int cifraJedinica = 0;
	int cifraHiljada = 0;

	for (int i = 1000; i <= 9999; i++)
	{
		cifraJedinica = i % 10;
		cifraDesetica = (i % 100) / 10;
		cifraStotina = (i % 1000) / 100;
		cifraHiljada = i;
		proizvod = cifraJedinica * cifraDesetica * cifraStotina * cifraHiljada;
		if (proizvod == i)
		{
			cout << i << ", ";
		}
	}
	
}

/*100. Napisati program kojim se za uneto n
izračunava slededa suma: s= 1!/x+1 + 2!/x^2+2 +...+n!/x^n+n    */
void zadatak100()
{
	int n = 0;
	cout << "Unesite n: \n";
	cin >> n;

	int x = 0;
	cout << "Unesite realnu promenljivu x: \n";
	cin >> x;


	float kolicnik = 0.0f;

	for (int i = 1; i <= n; i++)
	{
		kolicnik += izracunajFaktorijel(i) / (float)(pow(x, i) + i);
	}
	
	cout << kolicnik;
}

/*101. Napisati program koji od korisnika učitava prirodne
brojeve n i k i potom računa zbir k-tih stepena prvih n
prirodnih brojeva tj:
1^k + 2^k + 3^k + … + n^k */
void zadatak101()
{
	int n = 0;
	cout << "Unesite n: \n";
	cin >> n;

	int k = 0;
	cout << "Unesite stepen k: \n";
	cin >> k;

	int suma = 0;

	for (int i = 1; i <= n; i++)
	{
		suma += pow(i, k);
	}

	cout << "Suma je: " << suma;
}

/*102. Napisati program koji učitani broj n
transformiše tako da mu se uklanjaju nule sa desne
strane.*/
void zadatak102()
{
	int n = 0;
	cout << "Unesite broj n: ";
	cin >> n;

	int noviN = 0;

	while (n % 10 == 0)
	{
		noviN = n / 10;
		cout << noviN;
		break;
	}
	
}

/*103. Napisati program koji za dati broj n ispituje da 
li je stepen broja 3. */
void zadatak103()
{
	int n = 0;
	cout << "Unesite n: ";
	cin >> n;
	
	while (n % 3 == 0)
	{
		n /= 3;	
	}
	
	if (n == 1)
	{
		cout << "Dati broj je stepen broja 3!";
	}
	else
	{
		cout << "Dati broj NIJE stepen broja 3!";
	}
}

/*104. Napisati program za izračunavanje suma s 
kvadrata parnih i kubova neparnih prirodnih 
brojeva od n do m. */
void zadatak104()
{
	int n = 0;
	cout << "Unesite n: ";
	cin >> n;

	int m = 0;
	cout << "Unesite m: ";
	cin >> m;
	
	int suma = 0;

	while (n <= m)
	{
		if (n % 2 == 0)
		{
			suma += n * n;
		}
		else
		{
			suma += n * n * n;
		}
		n++;
	}

	cout << suma;
}

/*105. Napisati program koji proverava da li je uneti 
broj n prost.Broj je prost ako je deljiv samo sa 
jedan i samim sobom.*/
void zadatak105()
{
	int n = 0;
	cout << "Unesite n: ";
	cin >> n;
	int i = 2;
	int koren = sqrt(n);
	
	while (i <= koren && (n % i) !=0 )
	{
		i++;
	}
	if (i > koren)
	{
		cout << n << "  je prost broj";
	}
	else
	{
		cout << n << " nije prost broj";
	}
}

/*106. . Napisati program koji broj transformiše na
proste faktore. Na primer, za 15 ispisace 5 3. */
void zadatak106()
{
	int n = 0;
	cout << "Unesite n: ";
	cin >> n;

	int faktor = 2;

	while (faktor <= n)
	{
		if (n % faktor == 0)
		{ 
			cout << faktor << " ";
			n = n / faktor;
		}

		else
		{
			faktor++;
		}
	}
}

/*107. Napisati program koji štampa trocifrene proste
brojeve. */
void zadatak107()
{
	int i = 100;
	int koren
	
	
	while (i < 1000)
	{
		koren = sqrt(i);
	}
	cout << koren;
}
int main()
{
	zadatak107();
	return 0;
}