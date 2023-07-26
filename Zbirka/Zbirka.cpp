#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <iterator>
#include <algorithm>
#include <string>
//using namespace std;



int sum(int n, int m)
{
	int s = 0;
	for (int i = n; i <= m; i++)
	{
		s = s + i;
	}
	return s;
}

template <typename f>
void stampajvektor(std::vector<f> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << " ";
	}
}




/*1. Napisati program koji izračunava
zapreminu na osnovu unete dužine,širine i visine.*/
void zadatak1()
{
	std::cout << "Unesite duzinu" << std::endl;
	float duzina = 0.0f;
	std::cin >> duzina;
	std::cout << std::endl;
	std::cout << "Unesite sirinu" << std::endl;
	float sirina = 0.0f;
	std::cin >> sirina;
	std::cout << std::endl;
	std::cout << "Unesite visinu" << std::endl;
	float visina = 0.0f;
	std::cin >> visina;
	std::cout << std::endl;
	float rezultat = duzina * sirina * visina;
	std::cout << "Zapremina datog objekta je: " << rezultat;
}

/*2. Napisati program koji odredjuje koliko se puta prvi uneti
broj sadrži u drugom unetom broju kao i njihov ostatak
deljenja.*/
void zadatak2()
{
	std::cout << "Unesite prvi broj : " << std::endl;
	int x = 0;
	std::cin >> x;
	std::cout << "Unesite drugi broj : " << std::endl;
	int y = 0;
	std::cin >> y;

	float kolicnik = y / x;
	int ostatak = y % x;

	std::cout << "kolicnik je : " << kolicnik << " a ostatak je " << ostatak << std::endl;
}

/*3. Napisati program koji unetu veličinu u galonima
pretvara u litre. 1 galon = 4.54 l*/
void zadatak3()
{
	std::cout << "Unesite velicinu u galonima: " << std::endl;
	float galon = 4.54;
	float l = 0.0f;
	std::cin >> l;

	l = l * galon;
	std::cout << "Rezultat je: " << l << " litara." << std::endl;
}

/*4. Automobil sa punim rezervoarom kapaciteta V litara
predje put od S kilometara.Napisati program kojim se
računa potrošnja u litrima na 100 km.*/
void zadatak4()
{
	std::cout << "Unesite kapacitet rezervoara: " << std::endl;
	float kapacitet = 0.0f;
	std::cin >> kapacitet;

	std::cout << "Unesite predjeni put: " << std::endl;
	float predjeniPut = 0.0f;
	std::cin >> predjeniPut;

	float potrosnja = kapacitet * 100 / predjeniPut;
	std::cout << "Potrosnja je: " << potrosnja << " litara na 100km." << std::endl;
}

/*5. Napisati program kojim se računa hipotenuza i
površina pravouglog trougla na osnovu zadatih
kateta. */
void zadatak5()
{
	std::cout << "Unesite stranicu a: " << std::endl;
	float a = 0.0f;
	std::cin >> a;

	std::cout << "Unesite stranicu b: " << std::endl;
	float b = 0.0f;
	std::cin >> b;

	float povrsina = (a * b) / 2;
	float c = sqrt(a * a + b * b);
	std::cout << "Povrsina trougla je: " << povrsina << " a hipotenuza: " << c << std::endl;
}

/*6. Napisati program koji prevodi težinu iz funti u kg
(1 funta = 400g)*/
void zadatak6()
{
	std::cout << "Unesite tezinu u funtama :" << std::endl;
	double funta = 0.4;
	float kg = 0.0f;
	std::cin >> kg;
	kg = kg * funta;
	std::cout << "Tezina je: " << kg << " kg" << std::endl;
}

/*7. Napisati program koji izračunava cenu porcije
sira x grama,ako je 1kg sira 165 dinara.*/
void zadatak7()
{
	std::cout << "Unesite tezinu porcije sira u gramima: " << std::endl;
	float tezinaSira = 0.0f;
	std::cin >> tezinaSira;
	float cenaSira = 0.165 * tezinaSira;
	std::cout << "Cena sira je: " << cenaSira << std::endl;
}

/*8. Napisati program koji pomaže kasirki da obračuna
kusur,tako što od nje traži da unese jediničnu cenu
artikla i koliko novca dobije od kupca.*/
void zadatak8()
{
	std::cout << "Unesite cenu artikla: " << std::endl;
	float cenaArtikla = 0.0f;
	std::cin >> cenaArtikla;
	std::cout << "Unesite kolicinu: " << std::endl;
	int kolicinaArtikla = 0;
	std::cin >> kolicinaArtikla;
	std::cout << "Unesite iznos koji daje kupac: " << std::endl;
	float iznos = 0.0f;
	std::cin >> iznos;

	float kusur = iznos - (cenaArtikla * kolicinaArtikla);
	if (iznos >= cenaArtikla * kolicinaArtikla)
	{
		std::cout << "Vas kusur je: " << kusur << std::endl;
	}
	else
	{
		std::cout << "NEDOVOLJNO NOVCA!!!" << std::endl;
	}
}

/*9. Napisati program kojim se računa potrebno
vreme za download unete veličine fajla,pri unetoj
brzini. Program treba da ispiše za koliko de se sati,
minuta i sekundi skinuti fajl. */
void zadatak9()
{
	std::cout << "Unesite velicinu fajla u megabajtima: " << std::endl;
	int velicinaFajla = 0;
	std::cin >> velicinaFajla;
	std::cout << "Unesite brzinu downloada u kb: " << std::endl;
	int brzinaDownloada = 0;
	std::cin >> brzinaDownloada;

	int potrebnoVreme = (velicinaFajla * 1024) / brzinaDownloada;
	int sat = potrebnoVreme / 3600;
	int minut = potrebnoVreme % 3600;
	int sekund = 0;

	std::cout << "Potrebno vreme je " << sat << " sati, " << minut << " minuta, " << std::endl;
}

/*10. Napisati program koji izračunava obim i površinu
kvadrata i program koji izračunava površinu i obim
pravougaonika. */
void zadatak10()
{
	std::cout << "Unesite velicinu prve stranice: " << std::endl;
	float stranicaA = 0.0f;
	std::cin >> stranicaA;
	std::cout << "Unesite velicinu druge stranice: " << std::endl;
	float stranicaB = 0.0f;
	std::cin >> stranicaB;

	float povrsina = stranicaA * stranicaB;
	float obim = 2 * (stranicaA + stranicaB);

	if (stranicaA == stranicaB)
	{
		std::cout << "Obim kvadrata je: " << obim << ", a povrsina: " << povrsina << std::endl;
	}
	else
	{
		std::cout << "Obim pravougaonika je: " << obim << ", a povrsina: " << povrsina << std::endl;
	}
}

/*11. Dat je ugao u stepenima na dve decimale.
Napisati program koji za date vrednosti ugla
izračunava ugao u stepenima i minutama. */
void zadatak11()
{
	std::cout << "Unesite ugao u stepenima: " << std::endl;
	float ugao = 0.0f;
	std::cin >> ugao;

	int stepen = ugao;
	float minuti = (ugao - stepen) * 60;
	std::cout << "Ugao ima: " << stepen << " stepeni" << " i " << minuti << " minuta." << std::endl;
}

/*12. Napisati program kojim se vrši preračunavanje
američkih dolara u Euro, ako su poznate dinarske
vrednosti ovih valuta.*/
void zadatak12()
{
	std::cout << "Iznos americkih dolara: " << std::endl;
	float dolar = 0.0f;
	std::cin >> dolar;

	std::cout << "Kurs dolara u dinarima: " << std::endl;
	float kursDolar = 0.0f;
	std::cin >> kursDolar;

	std::cout << "Kurs eura u dinarima: " << std::endl;
	float kursEuro = 0.0f;
	std::cin >> kursEuro;

	float iznos = dolar * (kursDolar / kursEuro);
	std::cout << iznos << " eura" << std::endl;
}

/*13. Napisati program koji rešava slededi matematički
izraz: (x^2+y^2)^2*/
void zadatak13()
{
	std::cout << "Unesite promenljive x: " << std::endl;
	float x = 0.0f;
	std::cin >> x;
	std::cout << "Unesite promenljive y: " << std::endl;
	float y = 0.0f;
	std::cin >> y;

	float z = (x * x + y * y) * (x * x + y * y);
	std::cout << "Iznos je: " << z << std::endl;
}

/*14. Učitanom trocifrenom broju razdvojiti sve cifre.*/
void zadatak14()
{
	std::cout << "Unesite trocifreni broj: " << std::endl;
	int broj = 0;
	std::cin >> broj;

	int a = broj / 100;
	int b = (broj % 100) / 10;
	int c = broj % 10;
	//sam sam dosao do racuna :)

	std::cout << a << " " << b << " " << c << std::endl;
}

/*15. Napisati program koji datom cetvorocifrenom
celom broju izracunava zbir kvadrata cifara.
*/
void zadatak15()
{
	std::cout << "Unesite cetvorocifreni broj: " << std::endl;
	int broj = 0;
	std::cin >> broj;

	int a = broj / 1000;
	int b = (broj % 1000) / 100;
	int c = (broj % 100) / 10;
	int d = (broj % 1000) % 10;

	int zbir = a * a + b * b + c * c + d * d;
	//cout << a << " " << b << " " << c << " " << d << endl;
	std::cout << "Zbir je: " << zbir << std::endl;
}

/*16. Izračunati dijagonale d i D kocke (za poznatu
stranicu a)*/
void zadatak16()
{
	std::cout << "Unesite stranicu kocke: ";
	float stranicaKocke = 0.0f;
	std::cin >> stranicaKocke;

	float vecaDijagonala = stranicaKocke * sqrt(2);
	float manjaDijagonala = stranicaKocke * sqrt(3);

	std::cout << "Manja dijagonala je: " << manjaDijagonala << " a veca dijagonala je: " << vecaDijagonala << std::endl;
}

/*17. Napisati program kojim se odredjuje koji je od
dva uneta broja vedi i ispisuje poruku o tome. Ako su
brojevi jednaki , ispiši poruku o tome.*/
void zadatak17()
{
	std::cout << "Unesite prvi broj: " << std::endl;
	int a = 0;
	std::cin >> a;
	std::cout << "Unesite drugi broj: " << std::endl;
	int b = 0;
	std::cin >> b;

	if (a > b)
	{
		std::cout << "Prvi broj je veci od drugog broja";
	}
	else if (a == b)
	{
		std::cout << "Brojevi su jednaki";
	}
	else
	{
		std::cout << "Drugi broj je veci od prvog broja";
	}
}

/*18. Imamo da je C = 5. Korisnik unosi vrednost A i B.
Ako je A vede od B vrednost C de se uvedati za 12. U
suprotnom C de ostati 5.*/
void zadatak18()
{
	std::cout << "Unesite prvi broj: " << std::endl;
	int a = 0;
	std::cin >> a;
	std::cout << "Unesite drugi broj: " << std::endl;
	int b = 0;
	std::cin >> b;
	int c = 5;

	if (a > b)
	{
		c = c + 12;
		std::cout << "C= " << c;
	}
	else
	{
		std::cout << "C= " << c;
	}
}

/*19. Napisati program kojim se promenljivoj max
dodeljuje vrednost vedeg od dva uneta broja.*/
void zadatak19()
{
	std::cout << "Unesite a i b: " << std::endl;
	int a = 0;
	int	b = 0;
	std::cin >> a >> b;
	int max = 0;

	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	std::cout << "Max: " << max;
}

/*20. Napisati program kojim se proverava da li je
uneti broj paran ili nije.*/
void zadatak20()
{
	std::cout << "Unesite broj: " << std::endl;
	int broj = 0.0f;
	std::cin >> broj;
	int ostatak = broj % 2;
	if (ostatak == 0)
	{
		std::cout << "Broj je paran!";
	}
	else
	{
		std::cout << "Broj je neparan!";
	}
}

/*21. Napisati program kojim se unose dve
promenljive sa tastature, promenljivoj max dodaje
vrednost vedeg od ta dva broja , a promenljivoj min
,vrednost manjeg od ta dva broja.
*/
void zadatak21()
{
	std::cout << "Unesite a i b: " << std::endl;
	int a, b = 0;
	std::cin >> a >> b;
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
	std::cout << "Max je: " << max << ", a Min je: " << min;
}

/*22. Napisati program koji izračunava kv.koren
unetog broja.Ako je ulazni podatak nekorektan (x<0)
ispisuje se odgovarajuda poruka.*/
void zadatak22()
{
	std::cout << "Unesite broj koji ce da se korenuje: " << std::endl;
	float broj = 0.0f;
	std::cin >> broj;
	float koren = 0.0f;

	if (broj >= 0)
	{
		koren = sqrt(broj);
		std::cout << "Koren je: " << koren;
	}
	else
	{
		std::cout << "Ne postoji kvadratni koren negativnog broja!!!";
	}
}

/*23. Napisati program koji zavisno od učitane
vrednosti,izračunava vrednost funkcije ili daje
poruku da je funkcija nedefinisana y =√x^2-1*/
void zadatak23()
{
	std::cout << "Unesite vrednost: " << std::endl;
	float vrednost = 0.0f;
	std::cin >> vrednost;
	float vrednostKorena = 0.0f;

	if (vrednost > 0 || vrednost < 0)
	{
		vrednostKorena = sqrt(vrednost * vrednost - 1);
		std::cout << "Vrednost izraza je: " << vrednostKorena;
	}
	else
	{
		std::cout << "Funkcija nije definisana!!!";
	}
}

/*24. Napisati program koji učitava dva broja I
proverava da li su istog znaka. */
void zadatak24()
{
	std::cout << "Unesite dva broja: " << std::endl;
	float a = 0.0f;
	float b = 0.0f;
	std::cin >> a >> b;
	float proizvod = a * b;

	if (proizvod > 0)
	{
		std::cout << "Brojevi su istog znaka!";
	}
	else
	{
		std::cout << "Brojevi su razlicitog znaka!";
	}
}

/*25. Za tri učitana broja ispitati da li je jedan do njih
jednak sumi druga dva broja.*/
void zadatak25()
{
	std::cout << "Unesite prvi broj: " << std::endl;
	int a = 0;
	std::cin >> a;
	std::cout << "Unesite drugi broj: " << std::endl;
	int b = 0;
	std::cin >> b;
	std::cout << "Unesite treci broj: " << std::endl;
	int c = 0;
	std::cin >> c;

	if (a == (b + c))
	{
		std::cout << "Prvi broj je jedna zbiru preostala 2!";
	}
	else if (b == (a + c))
	{
		std::cout << "Drugi broj je jedna zbiru preostala 2!";
	}
	else if (c == (a + b))
	{
		std::cout << "Treci broj je jedna zbiru preostala 2!";
	}
	else
	{
		std::cout << "Ni jedan od njih nije jednak zbiru preostala dva!";
	}
}

/*26. Napisti niz naredbi kojim se sumiraju samo
pozitivne vrednosti promenljivih a,b,c.*/
void zadatak26()
{
	std::cout << "Unesite prvi broj: " << std::endl;
	int a = 0;
	std::cin >> a;
	std::cout << "Unesite drugi broj: " << std::endl;
	int b = 0;
	std::cin >> b;
	std::cout << "Unesite treci broj: " << std::endl;
	int c = 0;
	std::cin >> c;
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
		std::cout << "Ovo ne ide!!!";
	}
	if (suma != 0)
	{
		std::cout << "Suma je: " << suma;
	}
}

/*27. Napisati program koji izračunava površinu
kružnog poprečnog preseka na osnovu spoljašnjeg i
unutrašnjeg poluprečnika (kontrolišudi tačnost
unetih podataka).*/
void zadatak27()
{
	std::cout << "Unesite vrednost unutrasnjeg poluprecnika u cm: " << std::endl;
	float unutrasnjiPoluprecnik = 0.0f;
	std::cin >> unutrasnjiPoluprecnik;
	std::cout << "Unesite vrednost spoljasnjeg poluprecnika u cm: " << std::endl;
	float spoljasnjiPoluprecnik = 0.0f;
	std::cin >> spoljasnjiPoluprecnik;

	float povrsina = 0.0f;
	float Pi = 3.14;

	if (spoljasnjiPoluprecnik > unutrasnjiPoluprecnik)
	{
		povrsina = (spoljasnjiPoluprecnik * spoljasnjiPoluprecnik * Pi) - (unutrasnjiPoluprecnik * unutrasnjiPoluprecnik * Pi);
		std::cout << "Povrsina je: " << povrsina << " cm kvadratnih.";
	}
	else
	{
		std::cout << "Vrednost unutrasnjeg poluprecnika mora da bude manja od vrednosti spoljasnjeg!!!";
	}
}

/*28. Napisati program koji na osnovu trajanja
telefonskog razgovora i cene u minutama izračunava
cenu telefonskog razgovora,ako je vikendom popust
od 10%.U programu treba predvideti unos
indikatora za dan razgovora 1-radni dan,2-vikend.*/
void zadatak28()
{
	std::cout << "Unesite vreme trajanja razgovora u minutima: " << std::endl;
	float vremeTrajanjaRazgovora = 0.0f;
	std::cin >> vremeTrajanjaRazgovora;
	std::cout << "Unesite cenu razgovora po minuti: " << std::endl;
	float cenaRazgovora = 0.0f;
	std::cin >> cenaRazgovora;

	std::cout << "Unesite 1 za radni dan, a 2 za vikend" << std::endl;
	int dan;
	std::cin >> dan;

	float ukupnaCena = 0.0f;

	if (dan == 1)
	{
		ukupnaCena = cenaRazgovora * vremeTrajanjaRazgovora;
		std::cout << "Cena razgovora je: " << ukupnaCena;
	}
	else if (dan == 2)
	{
		ukupnaCena = cenaRazgovora * vremeTrajanjaRazgovora * 0.9;
		std::cout << "Cena razgovora je: " << ukupnaCena;
	}
	else
	{
		std::cout << "Uneli ste pogresnu vrednost, pokusajte ponovo!!!";
	}
}

/*29. Napisati program koji izračunava iznos poreza za
unetu platu. Ako je bruto plata veda od iznosa 1000e
porez je 20%,inače je porez 15%.*/
void zadatak29()
{
	std::cout << "Unesite iznos plate: " << std::endl;
	float plata = 0.0f;
	std::cin >> plata;
	float porez = 0.0f;

	if (plata <= 1000 && plata >= 0)
	{
		porez = plata * 15 / 100;
		std::cout << "Iznos poreza je: " << porez;
	}
	else if (plata > 1000)
	{
		porez = plata * 20 / 100;
		std::cout << "Imate  veliku platu. Iznos poreza je: " << porez;
	}
	else
	{
		std::cout << "Duzni ste kao Grcka!!!";
	}
}

/*30. Napisati program koji na osnovu visine osobe
odredjuje težinu.Idealna težina osobe muškog pola
je manja od visine za 100,a ženskog pola za
110.Predvideti unos identifikatora pola 1-muski,2-
ženski pol. */
void zadatak30()
{
	std::cout << "Unesite visinu u santimima:" << std::endl;
	float visina = 0.0f;
	std::cin >> visina;

	std::cout << "Unesite 1 ako ste muskog pola a 2 ako ste zenskog pola:" << std::endl;
	int pol;
	std::cin >> pol;

	float idealnaTezina = 0.0f;

	if (pol == 1)
	{
		idealnaTezina = visina - 100;
		std::cout << "Vasa idealna tezina je: " << idealnaTezina;
	}
	else if (pol == 2)
	{
		idealnaTezina = visina - 110;
		std::cout << "Vasa idealna tezina je: " << idealnaTezina;
	}
	else
	{
		std::cout << "Uneta vrednost mora biti 1 ili 2, pokusajte ponovo!!!";
	}
}

/*31. Napisati program koji na osnovu unete
visine, težine i indikatora pola osobe ispisuje
odgovarajudu poruku: “Vi imate idealnu težinu, trebalo bi
da se popravite, trebalo bi da smršate” ...*/
void zadatak31()
{
	std::cout << "Unesite visinu u santimima:" << std::endl;
	int visina = 0.0f;
	std::cin >> visina;

	std::cout << "Unesite tezinu:" << std::endl;
	int tezina = 0;
	std::cin >> tezina;

	std::cout << "Unesite 1 ako ste muskog pola a 2 ako ste zenskog pola:" << std::endl;
	int pol;
	std::cin >> pol;

	int idealnaTezina = 0;

	if (pol == 1)
	{
		idealnaTezina = visina - 100;
		std::cout << "ID" << idealnaTezina << std::endl;
	}
	else if (pol == 2)
	{
		idealnaTezina = visina - 110;
		std::cout << "ID" << idealnaTezina << std::endl;
	}
	else
	{
		std::cout << "Uneta vrednost mora biti 1 ili 2, pokusajte ponovo!!!";

	}

	//if ((pol == 1 || pol == 2) && tezina > visina)
	//{
	//	std::cout << "PODHITNO SMRSAJ STOKO!!!!";
	//}

	if (pol == 1 && idealnaTezina < tezina)
	{
		std::cout << "Smrsaj stoko!!!";
	}
	if (pol == 1 && idealnaTezina > tezina)
	{
		std::cout << "Jedi boraniju brateeu!!!";
	}
	if (pol == 1 && idealnaTezina == tezina)
	{
		std::cout << "Imate idealnu tezinu!";
	}
	if (pol == 2 && idealnaTezina < tezina)
	{
		std::cout << "Smrsaj stoko!!!";
	}
	if (pol == 2 && idealnaTezina > tezina)
	{
		std::cout << "Jedi boraniju brateeu!!!";
	}
	if (pol == 2 && idealnaTezina == tezina)
	{
		std::cout << "Imate idealnu tezinu!";
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
	std::cout << "Unesite otpor R1: " << std::endl;
	float otpor1 = 0.0f;
	std::cin >> otpor1;

	std::cout << "Unesite vrednost otpora R2" << std::endl;
	float otpor2 = 0.0f;
	std::cin >> otpor2;

	std::cout << "Unesite 1 za rednu vezu ili 2 za paralelnu vezu:" << std::endl;
	int veza;
	std::cin >> veza;

	float ukupanOtpor = 0.0f;

	if (veza == 1)
	{
		ukupanOtpor = otpor1 + otpor2;
	}
	else if (veza == 2)
	{
		ukupanOtpor = (otpor1 * otpor2) / (otpor1 + otpor2);
	}
	std::cout << "Ukupan otpor je: " << ukupanOtpor;
}

/*33. Napisati niz naredbi kojima se odredjuje koliko
je vrednosti unetih promenljivih a,b,c jednako nuli.*/
void zadatak33()
{
	std::cout << "Unesite promenjljivu a: " << std::endl;
	int a = 0;
	std::cin >> a;

	std::cout << "Unesite promenjljivu b: " << std::endl;
	int b = 0;
	std::cin >> b;

	std::cout << "Unesite promenjljivu c: " << std::endl;
	int c = 0;
	std::cin >> c;

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
	std::cout << "Broj promenljivih jednakih 0 je: " << brojPromeljivih;
}

/*34. Napisati program koji od korisnika učitava
godinu (broj izmedju 1538 i 10000) i utvrdjuje da li je
ona prestupna. Po gregorijanskom kalendaru
prestupne godine odredjuju se na slededi način:
-ako je godina deljiva sa 400,prestupna je (npr.2000
godina je prestupna)
-ako godina nije deljiva sa 400, ali je deljiva sa
100,nije prestupna (npr.1900. godina nije prestupna)
-ako godina nije deljiva sa 100, ali je deljiva sa
4,prestupna je (npr.2004 godina je prestupna)
-ako godina nije deljiva nije 100 deljiva sa 4,nije
prestupna (npr.2001. nije prestupna)*/
void zadatak34()
{
	std::cout << "Unesite godinu izmedju 1538 i 10000: " << std::endl;
	int godina;
	std::cin >> godina;

	if (godina < 1538 || godina > 10000)
	{
		std::cout << "Niste uneli ispravnu godinu!";
	}

	else if ((godina % 400 == 0) || (godina % 100 != 0 && godina % 4 == 0))
	{
		std::cout << "Godina " << godina << ". je prestupna";
	}
	else
	{
		std::cout << "Godina nije prestupna!";
	}
}

/*35. Napisati program kojim se rešava jednačina
ax+b=0.*/
void zadatak35()
{
	std::cout << "Unesite a:" << std::endl;
	float a = 0.0f;
	std::cin >> a;

	std::cout << "Unesite b:" << std::endl;
	float b = 0.0f;
	std::cin >> b;

	float x = 0.0f;

	if (a != 0)
	{
		x = -b / a;
		std::cout << "X = " << x;
	}
	else
	{
		std::cout << "a mora biti razlicit od 0";
	}
}

/*36. Napisati program kojim se dati brojevi a,b i c
udvostručuju,ako je a≥b≥c ,a u protivnom se
zamenjuju njihovim apsolutnim vrednostima. */
void zadatak36()
{
	std::cout << "Unesite a: " << std::endl;
	float a = 0.0f;
	std::cin >> a;

	std::cout << "Unesite b: " << std::endl;
	float b = 0.0f;
	std::cin >> b;

	std::cout << "Unesite c: " << std::endl;
	float c = 0.0f;
	std::cin >> c;

	if (a >= b && a >= c && b >= c)
	{
		a = 2 * a;
		b = 2 * b;
		c = 2 * c;
		std::cout << "Vrednost a je: " << a << " Vrednost b je: " << b << " Vrednost c je: " << c;
	}
	else
	{
		a = abs(a);
		b = abs(b);
		c = abs(c);
		std::cout << "Vrednost a je: " << a << " Vrednost b je: " << b << " Vrednost c je: " << c;
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
	std::cout << "Unesite broj atoma vodonika, sumpora i kiseonika: " << std::endl;
	int atomV = 0;
	int atomS = 0;
	int atomK = 0;
	std::cin >> atomV >> atomS >> atomK;
	int minA = atomV / 2;

	if (minA > atomS)
	{
		minA = atomS;
	}
	if (minA > (atomK / 4))
	{
		minA = atomK / 4;
	}
	std::cout << "Moze se napraviti " << minA << " molekula sumporne kiseline." << std::endl;
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
	std::cout << "Unesite x, y, z: " << std::endl;
	int x = 0;
	int y = 0;
	int z = 0;
	std::cin >> x >> y >> z;

	int p = (x + y + z) / 2;
	int povrsina = 0;

	if (x + y > z && x + z > y && y + z > x)
	{
		povrsina = sqrt(p * (p - x) * (p - y) * (p - z));
		std::cout << "Povrsina trougla je: " << povrsina;
	}
	else
	{
		std::cout << "Ne moze se konstruisati trougao!";
	}
}

/*39. Napisati program kojim se y izračunava u
zavisnosti od uslova koje ispunjava promenljiva x.*/
void zadatak39()
{
	std::cout << "Unesite vrednost x: " << std::endl;
	float x = 0.0f;
	std::cin >> x;
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
	std::cout << "Vrednost funkcije je: " << y;
}

/*40. Napisati program kojim se ispisuje da li su dati
celi brojevi A,B,C uredjeni u neopadajudem poretku
(A≤B≤C).Ispisati odgovarajudu poruku.*/
void zadatak40()
{
	std::cout << "Unesite a, b, c:" << std::endl;
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a >> b >> c;

	if (a <= b && b <= c)
	{
		std::cout << "Brojevi su uredjeni u neopadajucem poretku.";
	}
	else
	{
		std::cout << "Brojevi nisu uredjeni u neopadajucem poretku.";
	}
}

/*41. Napisati program kojim se dva data realna broja
premeštaju tako da važi poredak A≤B*/
void zadatak41()
{
	std::cout << "Unesite brojeve a i b:" << std::endl;
	int a = 0;
	int b = 0;
	std::cin >> a >> b;

	int pomocnaPromenljiva = 0;

	if (a > b)
	{
		pomocnaPromenljiva = a;
		a = b;
		b = pomocnaPromenljiva;
		std::cout << a << " " << b;
	}
	else
	{
		std::cout << a << " " << b;
	}
}

/*42. Napisati program kojim se vrednosti tri broja
premeštaju tako da važi poredak A≤B≤C*/
void zadatak42()
{
	std::cout << "Unesite brojeve a, b i c:" << std::endl;
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a >> b >> c;

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
	std::cout << a << " " << b << " " << c;
}

/*43. Napisati naredbu uslovnog prelaska kojom se
vrednosti promenljive f izračunavaju po formuli.
f = { a + b ako je a neparno,
	  a * b ako je a parno }
*/

void zadatak43()
{
	std::cout << "Unesite a i b:" << std::endl;
	int a = 0;
	int b = 0;
	std::cin >> a >> b;

	int p = 0;

	if ((a % 2) == 0)
	{
		p = a * b;
	}
	else
	{
		p = a + b;
	}
	std::cout << p;
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
	std::cout << "Unesite x: " << std::endl;
	float x = 0.0f;
	std::cin >> x;

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
	std::cout << "Vrednost y je: " << y;
}

/*45. Napisati program koji za tri uneta broja A,B,C
odredjuje zbir dva najmanja.*/
void zadatak45()
{
	std::cout << "Unesite brojeve a, b, c:" << std::endl;
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a >> b >> c;
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
	std::cout << "Zbir je: " << zbir;
}

/*46. Napisati program koji za dve različite
promenljive A i B ispituje da li je veda od njih deljiva
sa manjom bez ostatka.*/
void zadatak46()
{
	std::cout << "Unesite a i b:" << std::endl;
	int a = 0;
	int b = 0;
	std::cin >> a >> b;

	//int x = std::max(a, b);
	//int y = a + b - x;



	if (a < b && a != 0 && (b % a) == 0)
	{
		std::cout << "Broj b je deljiv brojem a bez ostatka";
	}
	else if (a > b && b != 0 && (a % b) == 0)
	{
		std::cout << "Broj a je deljiv brojem b bez ostatka";
	}
	else if (a > b && b != 0 && (a % b) != 0)
	{
		std::cout << "Broj a nije deljiv brojem b bez ostatka";
	}
	else if (a < b && a != 0 && (b % a) != 0)
	{
		std::cout << "Broj b nije deljiv brojem a bez ostatka";
	}
	else
	{
		std::cout << "Ne mozete deliti nulom!";
	}
}

/*47. Napisati naredbu uslovnog prelaska koijm se za
dato x izračuava y po formuli:
y= (min(x,y)+0.5) / (max(y,x)^2+1 )
 */
void zadatak47()
{
	std::cout << "Unesite x i y:" << std::endl;
	int x = 0;
	int y = 0;
	std::cin >> x >> y;

	int z = 0;

	if (x > y)
	{
		z = (y + 0.5) / pow(x, 2) + 1;
	}
	else
	{
		z = (x + 0.5) / pow(y, 2) + 1;
	}
	std::cout << z;
}

/*48. Napisati program koji ispituje u kojem se
kvadrantu nalazi trougao koga obrazuju prava
odredjena jednačinom y = ax+b i koordinate ose.*/
void zadatak48()
{
	std::cout << "Unesite koeficijente a i b:" << std::endl;
	int a = 0;
	int b = 0;
	std::cin >> a >> b;

	if (a > 0 && b > 0)
	{
		std::cout << "Trougao se formira u II kvadrantu";
	}
	else if (a < 0 && b < 0)
	{
		std::cout << "Trougao se formira u III kvadrantu";
	}
	else if (a < 0 && b > 0)
	{
		std::cout << "Trougao se formira u I kvadrantu";
	}

	else if ((a > 0 || a < 0) && b == 0)
	{
		std::cout << "Trougao se NE FORMIRA!";
	}
	else if (a == 0)
	{
		std::cout << "Trougao se NE FORMIRA!";
	}
	else
	{
		std::cout << "Trougao se formira u IV kvadrantu";
	}
}

/*49. Napisati program koji izračunava realna rešenja
kvadratne jednačine ax^2+bx+c = 0 (a≠0) */
void zadatak49()
{
	std::cout << "Unesite koeficijente jednacine:" << std::endl;
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a >> b >> c;

	int D = (b * b) - (4 * a * c);
	int x = 0;
	int x1 = 0;

	if (D < 0)
	{
		std::cout << "Jednacina nema realnih resenja!";
	}
	else if (D == 0 && a != 0)
	{
		x = -b / (2 * a);
		std::cout << "Jednacina ima jedno resenje, x = " << x;
	}
	else if (D > 0 && a != 0)
	{
		x = (-b + sqrt(D)) / 2 * a;
		x1 = (-b - sqrt(D)) / 2 * a;
		std::cout << "Jednacina im dva realna resenja:" << std::endl << "x1 = " << x << std::endl << "x2 = " << x1;
	}
	else
	{
		std::cout << "a ne sme biti 0";
	}
}

/*50. Neka se sa tastature unose celi brojevi n1, n2, i
n3. Napiši program kojim se izračunava zbir brojeva
koji se nalaze u intervalu 3 do 7.*/
void zadatak50()
{
	std::cout << "Unesite cele brojeve a, b, c:" << std::endl;
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a >> b >> c;
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
	std::cout << "Zbir je: " << zbir;
}

/*51. Napisati program koji računa ukupan broj poena učenika,tako što korisnik unosi svoj uspeh četiri školske
godine (koji ne sme biti manji od 2,a ni vedi od 5 u suprotnom program treba da ispiše „Greška u unosu“)
kao i broj poena na prijemnom ( koji ne sme biti manji od 0 niti vedi od 60).*/
void zadatak51()
{
	std::cout << "Unesite uspeh iz I godine:" << std::endl;
	float uspeh1 = 0.0f;
	std::cin >> uspeh1;

	std::cout << "Unesite uspeh iz II godine:" << std::endl;
	float uspeh2 = 0.0f;
	std::cin >> uspeh2;

	std::cout << "Unesite uspeh iz III godine:" << std::endl;
	float uspeh3 = 0.0f;
	std::cin >> uspeh3;

	std::cout << "Unesite uspeh iz IV godine:" << std::endl;
	float uspeh4 = 0.0f;
	std::cin >> uspeh4;

	std::cout << "Unesite poene sa prijemnog:" << std::endl;
	float bodoviPrijemni = 0.0f;
	std::cin >> bodoviPrijemni;

	float bodoviSkola = (uspeh1 + uspeh2 + uspeh3 + uspeh4) * 2;
	float ukupniBodovi = bodoviSkola + bodoviPrijemni;

	if (uspeh1 >= 2 && uspeh1 <= 5 && uspeh2 >= 2 && uspeh2 <= 5 && uspeh3 >= 2 && uspeh3 <= 5 && uspeh4 >= 2 && uspeh4 <= 5 && bodoviPrijemni >= 0 && bodoviPrijemni <= 60)
	{
		std::cout << "Ukupan broj bodova je: " << ukupniBodovi << std::endl;
	}
	else
	{
		std::cout << "Pogresili ste u unosu podataka!";
	}
}

/*52. Dodeliti vrednost max vecem od dva uneta
broja.*/
void zadatak52()
{
	std::cout << "Unesite vrednosti a i b:\n";
	int x = 0;
	int y = 0;
	std::cin >> x >> y;
	int max = 0;

	switch (x >= y)
	{
	case true:
	{
		max = x;
		std::cout << "Maksimalna vrednost je: " << max;
	}   break;
	case false:
	{
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
	std::cout << "Unesite ocenu:\n";
	int ocena = 0;
	std::cin >> ocena;

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
	std::cout << "Unesite redni broj dana u nedelji:\n";
	int dan = 0;
	std::cin >> dan;

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
	std::cout << "Unesite redni broj kvadranta:\n";
	int brojKvadranta = 0;
	std::cin >> brojKvadranta;

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
	std::cout << "Unesite redni meseca:\n";
	int brojMeseca = 0;
	std::cin >> brojMeseca;

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
	std::cout << "Unesite 1 za pravougaonik, 2 za trougao, 3 za trapez ili 4 za krug.\n";
	int geometrijskoTelo = 0;
	std::cin >> geometrijskoTelo;
	int povrsina = 0;

	switch (geometrijskoTelo)
	{
	case 1:
	{
		std::cout << "Unesite stranice pravougaonika a i b\n";
		float a = 0.0f;
		float b = 0.0f;
		std::cin >> a >> b;
		if (a > 0 && b > 0)
		{
			povrsina = a * b;
			std::cout << "Povrsina pravougaonika je: " << povrsina;
		}
		else
		{
			std::cout << "Vrednost stranice mora biti veca od 0!!!";
		}
		break;
	}
	case 2:
	{
		std::cout << "Unesite duzinu osnovice i visine trougla a i h.\n";
		float a = 0.0f;
		float h = 0.0f;
		std::cin >> a >> h;
		if (a > 0 && h > 0)
		{
			povrsina = (a * h) / 2;
			std::cout << "Povrsina trougla je: " << povrsina;
		}
		else
		{
			std::cout << "Vrednost stranice mora biti veca od 0!!!";
		}
		break;
	}
	case 3:
	{
		std::cout << "Unesite duzinu osnovica i visine trapeza a, b i h.\n";
		float a = 0.0f;
		float b = 0.0f;
		float h = 0.0f;
		std::cin >> a >> b >> h;
		if (a > 0 && b > 0 && h > 0)
		{
			povrsina = ((a + b) * h) / 2;
			std::cout << "Povrsina trapeza je: " << povrsina;
		}
		else
		{
			std::cout << "Vrednost stranice mora biti veca od 0!!!";
		}
		break;
	}
	case 4:
	{
		std::cout << "Unesite poluprecnik kruga/n";
		float r = 0.0f;
		std::cin >> r;
		float pi = 3.14159265359;
		if (r > 0)
		{
			povrsina = r * r * pi;
			std::cout << "Povrsina kruga je: " << povrsina;
		}
		else
		{
			std::cout << "Vrednost poluprecnika mora biti veca od 0!!!";
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
	std::cout << "Unesite redni broj dana u godini\n";
	std::cin >> redniBrojDanaUGodini1 >> redniBrojDanaUGodini2 >> redniBrojDanaUGodini3;

	int n1 = redniBrojDanaUGodini1 % 7;
	int n2 = redniBrojDanaUGodini2 % 7;
	int n3 = redniBrojDanaUGodini3 % 7;

	if (n1 == n2 && n2 == n3)
	{
		std::cout << "U pitanju su isti dani u nedelji!";
	}
	else
	{
		std::cout << " Nisu isti dani u nedelji!";
	}
}

/*59. Napisati program kojim se za učitani ugao u
stepenima koji može biti vedi od 360˚ odredjuje
kvadrant kome pripada.*/
void zadatak59()
{
	int ugao = 0;
	std::cout << "Unesite velicinu ugla u stepenima.\n";
	std::cin >> ugao;
	int ostatak = ugao % 360;

	switch (ostatak / 90)
	{
	case 0: {std::cout << "Ugao se nalazi u prvom kvadrantu."; } break;
	case 1: {std::cout << "Ugao se nalazi u drugom kvadrantu."; } break;
	case 2: {std::cout << "Ugao se nalazi u trecem kvadrantu."; } break;
	case 3: {std::cout << "Ugao se nalazi u cetvrtom kvadrantu."; }
	}
}

/*60. Napisati program kojim se učitava znak za operaciju (+,-,*,/) i dva realna operanda, a zatim štampa
rezultat. Program treba da simulira kalkulator.*/
void zadatak60()
{
	float a = 0.0f;
	float b = 0.0f;
	float rezultat = 0.0f;
	std::cout << "Unesite realne brojeve a i b\n";
	std::cin >> a >> b;

	char operatori;
	std::cout << "Unesite operator +, -, * ili /\n";
	std::cin >> operatori;

	switch (operatori)
	{
	case '+':
	{
		rezultat = a + b;
		std::cout << "Rezultat je : " << rezultat;
	}
	break;

	case '-':
	{
		rezultat = a + b;
		std::cout << "Rezultat je : " << rezultat;
	}
	break;

	case '*':
	{
		rezultat = a * b;
		std::cout << "Rezultat je : " << rezultat;
	}
	break;

	case '/':
	{
		rezultat = a / b;
		std::cout << "Rezultat je : " << rezultat;
	}

	}
}

/*61. Napisati program kojim se ispisuju velika slova
latiničnog alfabeta i njihovi redni brojevi.*/
void zadatak61()
{
	std::string alfabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (int i = 0; i < alfabet.length(); i++)
	{
		std::cout << i + 1 << ". " << alfabet[i] << std::endl;
	}
}

/*62. Za vrednost od 1 do n unetog broja napisati i
program za učitavanje,sumiranje i štampanje njihove
sume.*/
void zadatak62()
{
	int suma = 0;
	int k = 0;
	std::cout << "Unesite vrednost broja k.\n";
	std::cin >> k;

	std::cout << "Brojevi su: ";

	for (int i = 1; i <= k; i++)
	{
		std::cout << i << " ";
	}
	suma = sum(1, k);
	std::cout << "\nSuma od 1 do k je: " << suma;
}

/*63. Napisati program koji ispisuje sve parne brojeve
od 1 do unetog n.*/

void zadatak63()
{
	int n = 0;
	std::cout << "Unesite vrednost broja n.\n";
	std::cin >> n;

	std::cout << "\nParni brojevi su: ";
	for (int i = 0; i <= n; i++)
	{
		if ((i % 2) == 0)
		{
			std::cout << i << " ";
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
		std::cout << "Unesi " << i << ". broj:\n";
		std::cin >> a;
		zbir += a;
		proizvod *= a;
	}

	std::cout << "Zbir je: " << zbir << " a proizvod je: " << proizvod;
}

/*65. Preduzece placa honorarno zaposlene sa X dinara po satu. Napisati program koji za n radnika učitava ime
kao podatak tipa string (ne duži od 20 znakova), broj sati provedenih na radu i za svakog radnika ispisuje
njegovo ime, bruto zaradu, iznos poreza (16% bruto zarade), iznos doprinosa (26% bruto zarade) i neto
zaradu (bruto zarada umanjena za porez i doprinos). */
void zadatak65()
{
	std::string imeRadnika;
	float brutoZarada = 0.0f;
	float iznosPoreza = 0.0f;
	float iznosDoprinosa = 0.0f;
	float netoZarada = 0.0f;
	float brojSatiProvedenihNaRadu = 0.0f;
	float satnica = 900;
	int n = 3;

	for (int i = 0; i < n; i++)
	{
		std::cout << "Unesite ime radnika:" << std::endl;
		std::cin >> imeRadnika;
		std::cout << "Unesite broj sati provedenih na radu:" << std::endl;
		std::cin >> brojSatiProvedenihNaRadu;

		brutoZarada = brojSatiProvedenihNaRadu * satnica;
		iznosPoreza = brutoZarada * 0.16;
		iznosDoprinosa = brutoZarada * 0.26;
		netoZarada = brutoZarada - iznosDoprinosa - iznosPoreza;

		std::cout << imeRadnika << "\nBruto zarada je: " << brutoZarada << "\nIznos poreza je: " << iznosPoreza <<
			"\nIznos doprinosa je: " << iznosDoprinosa << "\nNeto zarada je: " << netoZarada << std::endl;
	}
}

/*66. Napisati program kojim se za dato n izračunava
faktorijel prirodnog broja n. */
void zadatak66()
{
	int n = 0;
	int proizvod = 1;
	std::cout << "Unesite n: " << std::endl;
	std::cin >> n;

	//while (n > 0)
	//{
	//	proizvod *= n;
	//	n--;
	//}

	for (int i = 1; i <= n; i++)
	{
		proizvod *= i;
	}

	std::cout << "Faktorijel broja n je: " << proizvod;
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
	std::cout << "Unestire broj n: " << std::endl;
	std::cin >> n;
	int sumaFaktorijela = 0;

	for (int i = 1; i <= n; i++)
	{
		sumaFaktorijela += izracunajFaktorijel(i);
	}

	std::cout << "Suma faktorijela je: " << sumaFaktorijela;
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
	std::cout << "Zbir je: " << zbirBrojeva;
}

/*69. Napisati program koji proverava da li je uneti
broj savršen ili nije i ispisuje poruku o tome. Broj je
savršen ako je jednak sumi svojih delitelja
isključujudi njega samog. Naprimer 28 je savršen
broj,jer je: 28=1+2+4+7+14*/
void zadatak69()
{
	int broj = 0;
	std::cout << "Unesite broj: ";
	std::cin >> broj;
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
		std::cout << "Uneti broj " << broj << " je savrsen!";
	}
	else
	{
		std::cout << "Uneti broj nije savrsen!";
	}
}

/*70. Napisati program kojim se učitavaju ocene
učenika za n predmeta i izračunava njegova
prosečna ocena.*/
void zadatak70()
{
	int ocena = 0;
	int brojPredmeta = 0;
	std::cout << "Unesite broj predmeta: ";
	std::cin >> brojPredmeta;
	float prosek = 0.0f;
	int zbirOcena = 0.0f;

	for (int i = 1; i <= brojPredmeta; i++)
	{
		std::cout << "Napisi ocenu: \n";
		std::cin >> ocena;
		zbirOcena += ocena;
	}
	prosek = (float)zbirOcena / brojPredmeta;
	std::cout << "Prosek je: " << prosek;
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
	std::cout << "Unesite broj predavaca: ";
	std::cin >> brojPredavaca;

	for (int i = 1; i <= brojPredavaca; i++)
	{
		std::cout << "Unesite broj odrzanih casova: \n";
		std::cin >> brojOdrzanihCasova;
		zarada = brojOdrzanihCasova * cenaCasa;
		std::cout << "Zarada je: " << zarada << std::endl;
		ukupanIznos += zarada;
	}
	std::cout << "Ukupan iznos za isplatu je: " << ukupanIznos;
}

/*72. Sa tastature se učitavaju temperature za n dana u godini. Napisati program koji de odrediti maksimalnu
temperaturu za unete dane i redni broj dana kada je temperatura bila maksimalna. */
void zadatak72()
{
	int brojDana = 0;
	std::cout << "Unesite broj dana: ";
	std::cin >> brojDana;

	int redniBrojDana = 0;
	float temperatura = 0.0f;
	float maksTemp = -100;

	for (int i = 1; i <= brojDana; i++)
	{
		std::cout << "Unesite temperaturu: \n";
		std::cin >> temperatura;
		if (temperatura > maksTemp)
		{
			maksTemp = temperatura;
			redniBrojDana = i;
		}
	}
	std::cout << "maksimalna temperatura je: " << maksTemp << " i bila je " << redniBrojDana << ". dana";
}

/*73. Napisati program kojim se izražava zbir od 1 do n
brojeva. */
void zadatak73()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;
	int zbir = 0;

	/*zbir = (n * (n + 1)) / 2;*/
	for (int i = 1; i <= n; i++)
	{
		zbir += i;
	}
	std::cout << "Zbir je: " << zbir;
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
	std::cout << "Unesite n: ";
	std::cin >> n;
	int zbir = 0;

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			zbir += i;
		}
	}
	std::cout << "Zbir je: " << zbir;
}

/*75. Napisati program za proveru tačnosti
matematičkih formula za izračunavanje sume.
1 + 3 + 5 +…+ (2n-1)=n^2*/
void zadatak75()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;
	int zbir = 0;
	int kvadrat = n * n;

	for (int i = 1; i <= 2 * n - 1; i++)
	{
		if (i % 2 != 0)
		{
			zbir += i;
		}
	}

	std::cout << "Zbir je: " << zbir << ", a kvadrat je : " << kvadrat << ".";

	if (zbir == kvadrat)
	{
		std::cout << "Vazi jednakost!";
	}
	else
	{
		std::cout << "Ne vazi jednakost!";
	}
}

/*76. Napisati program za proveru tačnosti
matematičkih formula za izračunavanje sume.
1^2 + 3^2 + 5^2 +…+ (2n-1)^2= n*(4n^2-1)/3 */
void zadatak76()
{
	double n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;
	int zbir = 0;
	int kvadrat = (n * (4 * pow(n, 2) - 1)) / 3;

	for (int i = 1; i <= (2 * n - 1); i++)
	{
		if (i % 2 != 0)
		{
			zbir += i * i;
		}
	}

	std::cout << "Zbir je: " << zbir << ", a kvadrat je : " << kvadrat << ".";

	if (zbir == kvadrat)
	{
		std::cout << " Vazi jednakost!";
	}
	else
	{
		std::cout << " Ne vazi jednakost!";
	}
}

/*77. Napisati program kojim se izračunava zbir prvih n
članova reda: 1 + 1/2 + 1/3 + 1/4 +...*/
void zadatak77()
{
	float zbir = 0.0f;
	int n = 0;
	std::cout << "Unesite broj n clanova reda:";
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		zbir += 1 / (float)i;
	}
	std::cout << "Zbir je: " << zbir;
}

/*78. Napisati program koji se izračunava zbir prvih n
članova reda: 1 + 1/3 + 1/5 +...+ 1/(2 * n - 1)
*/
void zadatak78()
{
	float zbir = 0.0f;
	int n = 0;
	std::cout << "Unesite broj n clanova reda:";
	std::cin >> n;

	for (int i = 1; i <= 2 * n - 1; i++)
	{
		if (i % 2 != 0)
		{
			zbir += 1 / (float)i;
		}
	}
	std::cout << "Zbir je: " << zbir;
}

/*79. Napisati program kojim se izračunava zbir prvih n
članova reda. 1 - 1/3 + 1/5 - 1/7 ... */
void zadatak79()
{
	float zbir = 0.0f;
	int k = 1;
	int n = 0;
	std::cout << "Unesite broj n clanova reda:";
	std::cin >> n;


	for (int i = 1; i <= n; i++)
	{
		{
			zbir += k / (float)((2 * i) - 1);
			k = -k;
		}
	}
	std::cout << "Zbir je: " << zbir;
}

/*80. Napisati program kojim se računa stepen broja
dva od prvog stepena do n-tog stepena.*/
void zadatak80()
{
	int n = 0;
	std::cout << "Unesite stepen n:";
	std::cin >> n;

	int stepenBrojaDva = 0;

	for (int i = 0; i <= n; i++)
	{
		stepenBrojaDva = pow(2, i);
	}
	std::cout << "Stepen broja n je: " << stepenBrojaDva;
}

/*81. Napisati program kojim se izračunava suma:
S = 2 + 2^2 + 2^3 + … + 2^n */
void zadatak81()
{
	int n = 0;
	std::cout << "Unesite stepen n:";
	std::cin >> n;

	int suma = 0;

	for (int i = 1; i <= pow(2, n); i++)
	{
		suma += pow(2, i);
	}
	std::cout << "Suma je: " << suma;
}

/*82. Napisati program kojim se za realno x izračunava
suma:
S = x + x^2 + x^3 + … + x^n*/
void zadatak82()
{
	int x = 0;
	std::cout << "Unesite promenljivu x:";
	std::cin >> x;

	int n = 0;
	std::cout << "Unesite stepen n:";
	std::cin >> n;

	int suma = 0;

	for (int i = 1; i <= n; i++)
	{
		suma += pow(x, i);
	}
	std::cout << "Suma je: " << suma;
}

/*82a. Napisati program kojim se za realno x izračunava
suma:
S = x + 2x^2 + 3x^3 + … + nx^n*/
void zadatak82a()
{
	int x = 0;
	std::cout << "Unesite promenljivu x:";
	std::cin >> x;

	int n = 0;
	std::cout << "Unesite stepen n:";
	std::cin >> n;

	int k = 1;
	int suma = 0;

	for (int i = 1; i <= n; i++)
	{
		k *= x;
		suma += i * k;
	}
	std::cout << "Suma je: " << suma;
}

/*83. Napisati program kojim se za realno x izračunava
suma: s = 1 + 1/x + 1/x^2 + 1/x^3 +...+ 1/x^n */
void zadatak83()
{
	int x = 0;
	std::cout << "Unesite promenljivu x:";
	std::cin >> x;

	int n = 0;
	std::cout << "Unesite stepen n:";
	std::cin >> n;

	int suma = 0;

	for (int i = 0; i <= n; i++)
	{
		suma += 1 / pow(x, i);
	}
	std::cout << "Suma je: " << suma;
}

/*84. . Napisati program kojim se izračunava proizvod:
p = (1 + 1/2!) * (1 + 1/3!) +...+ (1 + 1/n!)   */
void zadatak84()
{
	int n = 0;
	std::cout << "Unesite stepen n:";
	std::cin >> n;

	float proizvod = 1;

	for (int i = 2; i <= n; i++)
	{
		proizvod *= (1 + 1 / (float)izracunajFaktorijel(i));
	}

	std::cout << "Proizvod je: " << proizvod;
}

/*85. Napisati program kojim se izračunava proizvod:
p = (1 + 1/2) * (1 + 1/3) * ... *(1 + 1 / (n + 1)) */
void zadatak85()
{
	int n = 0;
	std::cout << "Unesite stepen n:";
	std::cin >> n;

	float proizvod = 1;


	for (int i = 2; i <= n + 1; i++)
	{
		proizvod *= (1 + 1 / (float)i);
	}
	std::cout << "Proizvod je: " << proizvod;
}

/*86. Napisati program kojim se za dati prirodan broj n
izračunava: s= 1! / 1/2 + 2!/ 1/2 + 1/3 +...+ n!/1/2 + 1/3 + 1/n + 1   */
void zadatak86()
{
	int n = 0;
	std::cout << "Unesite  n:";
	std::cin >> n;

	float suma = 0;
	int faktorijel = 1;
	float ukupanZbir = 0;

	for (int i = 1; i <= n; i++)
	{
		faktorijel *= i;
		suma += 1 / (float)(i + 1);
		ukupanZbir += faktorijel / suma;
	}
	std::cout << "Faktorijel " << faktorijel;


	std::cout << " Suma je: " << ukupanZbir;
}

/*87. Napisati program kojim se za dati prirodan broj n
izračunava:  s = 3! - 6! + 9! +(-1)^n+1(3n)!  */
void zadatak87()
{
	int n = 0;
	std::cout << "Unesite n:";
	std::cin >> n;

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
	std::cout << faktorijel;
	std::cout << "Suma je: " << suma;
}

/*88. Dat je slededi niz:
S = sin(x) + sin^2(x) + sin^3(x) + … + sin^n(x)
Napisati program koji računa zbir ako se sa tastature
unose n i broj x:*/
void zadatak88()
{
	int n = 0;
	std::cout << "Unesite n:";
	std::cin >> n;

	int x = 0;
	std::cout << "Unesite x:";
	std::cin >> x;

	float suma = 0.0f;

	for (int i = 1; i <= n; i++)
	{
		suma += pow(sin(x), i);
	}
	std::cout << "Trazena suma je: " << suma;
}

/*89. Napisati program kojim se, ako su dati prirodan
broj n i realan broj x izračunava.
S = cos(x) + cos(x^2) + … + cos(x^n)*/
void zadatak89()
{
	int n = 0;
	std::cout << "Unesite n:";
	std::cin >> n;

	int x = 0;
	std::cout << "Unesite x:";
	std::cin >> x;

	float suma = 0;

	for (int i = 1; i <= n; i++)
	{
		suma += cos(pow(x, i));
	}
	std::cout << "Trazena suma je: " << suma;
}

/*90. Napisati program kojim se,ako su dati prirodan
broj n i realan broj x izračunava.
S = sin(x) + sin(sin(x)) + … + sin(sin(…sin(x)))
*/
void zadatak90()
{
	int n = 0;
	std::cout << "Unesite n:";
	std::cin >> n;

	float x = 0.f;
	std::cout << "Unesite x:";
	std::cin >> x;

	float suma = 0.0f;

	for (int i = 1; i <= n; i++)
	{
		x = sin(x);
		suma += x;
	}
	std::cout << "Trazena suma je: " << suma;
}

/*91. Napisati program kojim se izračunava proizvod
prvih n faktora izraza: s = 1/2 * 3/4 * 5/6....  */
void zadatak91()
{
	int n = 0;
	std::cout << "Unesite n: \n";
	std::cin >> n;
	float proizvod = 1.0f;

	for (int i = 1; i <= n; i++)
	{
		proizvod *= (float)(2 * i - 1) / (float)(2 * i);
	}
	std::cout << "Proizvod je: " << proizvod;
}

/*92. Približna vrednost broja π može se odrediti
pomodu formule π ≈ 4Pk gde je: Pk = 1 - 1/3 + 1/5 - 1/7 +...+ (-1)^k+1 * 1/ 2k - 1)
*/
void zadatak92()
{
	int n = 0;
	std::cout << "Unesite n: \n";
	std::cin >> n;
	float suma = 0.0f;
	int k = 1;

	for (int i = 1; i <= n; i++)
	{
		suma += k / (float)(2 * i - 1);
		k = -k;
	}
	float pi = 4 * suma;
	std::cout << "Pi je: " << pi;
}

/*93. Napisati program koji od korisnika učitava realan
broj x i ceo broj n≥2 i potom računa i štampa
vrednost.   1 + 2*x + 3*x^2 +...+ n*x^n-1 / 1 + 2 + 3 +...+ n  */
void zadatak93()
{
	int x = 0;
	std::cout << "Unesite realnu promenljivu x: \n";
	std::cin >> x;

	int n = 0;
	std::cout << "Unesite n: \n";
	std::cin >> n;

	float suma = 0;
	float suma1 = 0;
	float suma2 = (n * (n - 1)) / 2;

	for (int i = 1; i <= n; i++)
	{
		suma1 += i * pow(x, i - 1);
	}
	suma = suma1 / suma2;
	std::cout << suma;
}
/*94. Napisati program koji od korisnika učitava ceo broj n ≥ 3, a potom n realnih brojeva i utvrdjuje i štampa
najvedi od tih brojeva kao i koliko se on puta pojavio. Npr za n=5 1,13 ; 2,56 ; 2.56; 3 ; 7,2; ispisuje da je
najvedi 7,2 i da se pojavio jednom.*/
void zadatak94()
{
	int n = 0;
	std::cout << "Unesite n tako da je n >= 3: ";
	std::cin >> n;

	int a = 0;
	int max = 0;
	int brojac = 0;

	if (n < 3)
	{
		std::cout << "n mora biti veci od 3!!!";
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			std::cout << "Unesite " << i << ". broj: ";
			std::cin >> a;
			if (a > max)
			{
				max = a;
			}
			else if (a = max)
			{
				brojac += 1;
			}

		}
		std::cout << "Max je: " << max << " i pojavljuje se " << brojac << " puta.";
	}
}
void zadatak95();
/*95. Napisati program kojim se za uneto n izračunava slededa suma:
s= 1/1! - (1 + 2)/2! + (1 + 2 + 3)/3! +...+(-1)^n+1 * (1 + 2 + ...+ n)/n! */

void zadatak95()
{
	int k = 1;
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int suma = 0;

	for (int i = 0; i <= n; i++)
	{
		suma += sumaPrvihNBrojeva(i) / izracunajFaktorijel(i); //sumaPrvihNBrojeva() 73. zadatak, izracunajFaktorijal() 66.zadatak
	}
	std::cout << "Suma izraza je : " << suma;
}

/*96. Napisati program kojim se za uneto n izračunava
slededi proizvod: S = 1*2 + 2*3*4 +...+N*(N+1)*...*(2N)*/
void zadatak96()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

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

		for (int k = i; k <= 2 * i; k++)
		{
			proizvod *= k;
		}
		suma += proizvod;
		proizvod = 1;
	}
	std::cout << suma;
}

/*97. Napisati program kojim se izračunava suma:
S = 1 / (1*2*3)  + 1/ 2*3*4 +...+1/ N*(N+1)*(N+2) */
void zadatak97()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	float suma = 0.0f;
	int proizvod = 1;

	for (int i = 1; i <= n; i++)
	{
		for (int k = i; k <= i + 2; k++)
		{
			proizvod *= k;
		}
		suma += 1 / (float)proizvod;
		proizvod = 1;
	}
	std::cout << suma;
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
	std::cout << "Suma svih trocifrenih brojeva ciji je zbir cifara paran broj je: " << sumaSvihTrocifrenihBrojeva;
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
			std::cout << i << ", ";
		}
	}
}

/*100. Napisati program kojim se za uneto n
izračunava slededa suma: s= 1!/x+1 + 2!/x^2+2 +...+n!/x^n+n    */
void zadatak100()
{
	int n = 0;
	std::cout << "Unesite n: \n";
	std::cin >> n;

	int x = 0;
	std::cout << "Unesite realnu promenljivu x: \n";
	std::cin >> x;


	float kolicnik = 0.0f;

	for (int i = 1; i <= n; i++)
	{
		kolicnik += izracunajFaktorijel(i) / (float)(pow(x, i) + i);
	}

	std::cout << kolicnik;
}

/*101. Napisati program koji od korisnika učitava prirodne
brojeve n i k i potom računa zbir k-tih stepena prvih n
prirodnih brojeva tj:
1^k + 2^k + 3^k + … + n^k */
void zadatak101()
{
	int n = 0;
	std::cout << "Unesite n: \n";
	std::cin >> n;

	int k = 0;
	std::cout << "Unesite stepen k: \n";
	std::cin >> k;

	int suma = 0;

	for (int i = 1; i <= n; i++)
	{
		suma += pow(i, k);
	}

	std::cout << "Suma je: " << suma;
}

/*102. Napisati program koji učitani broj n
transformiše tako da mu se uklanjaju nule sa desne
strane.*/
void zadatak102()
{
	int n = 0;
	std::cout << "Unesite broj n: ";
	std::cin >> n;

	int noviN = 0;

	while (n % 10 == 0)
	{
		noviN = n / 10;
		std::cout << noviN;
		break;
	}
}

/*103. Napisati program koji za dati broj n ispituje da
li je stepen broja 3. */
void zadatak103()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	while (n % 3 == 0)
	{
		n /= 3;
	}

	if (n == 1)
	{
		std::cout << "Dati broj je stepen broja 3!";
	}
	else
	{
		std::cout << "Dati broj NIJE stepen broja 3!";
	}
}

/*104. Napisati program za izračunavanje suma s
kvadrata parnih i kubova neparnih prirodnih
brojeva od n do m. */
void zadatak104()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int m = 0;
	std::cout << "Unesite m: ";
	std::cin >> m;

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
	std::cout << suma;
}

/*105. Napisati program koji proverava da li je uneti
broj n prost.Broj je prost ako je deljiv samo sa
jedan i samim sobom.*/
void zadatak105()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;
	int i = 2;
	int koren = sqrt(n);

	while (i <= koren && (n % i) != 0)
	{
		i++;
	}
	if (i > koren)
	{
		std::cout << "Broj je prost!";
	}
	else
	{
		std::cout << "Broj NIJE prost!";
	}
}

/*106. . Napisati program koji broj transformiše na
proste faktore. Na primer, za 15 ispisace 5 3. */
void zadatak106()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int faktor = 2;

	while (faktor <= n)
	{
		if (n % faktor == 0)
		{
			std::cout << faktor << " ";
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
	int i = 101;
	int k = 2;
	int koren = 0;

	while (i < 999)
	{
		koren = sqrt(i);
		while (k <= koren && (i % k) != 0)
		{
			k++;
			if (k > koren)
			{
				std::cout << i << " ";
			}
		}
		k = 2;
		i++;
	}
}


//int Fibonacci(int elem)
//{
//	if (elem == 1 || elem == 2)
//		return 1;
//	else 
//		return Fibonacci(elem - 1) + Fibonacci(elem - 2);
//}


/*108. Napisati program kojim se odredjuje n-ti član
Fibonačijevog niza.Niz gde je novi član jednak zbiru
prethodna dva. 1,1,2,3,5,8,13,21,34,55,89 */
void zadatak108()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int nepostojeciElement = 0;
	int drugiElement = 1;
	int naredniElement = 0;
	int i = 1;
	while (i <= n - 1)
	{
		naredniElement = nepostojeciElement + drugiElement;
		nepostojeciElement = drugiElement;
		drugiElement = naredniElement;
		i++;

	}
	std::cout << naredniElement;
}

/*109. Napisati program koji štampa stepene dvojke ne
vede od n.*/
void zadatak109()
{
	int stepen = 0;
	std::cout << "Unesite stepen: ";
	std::cin >> stepen;

	int brojac = 0;
	int broj = 2;

	while (brojac <= stepen)
	{
		std::cout << pow(broj, brojac) << " ";
		brojac++;
	}
}

/*110. Odrediti stepen i vrednost prvog stepena
dvojke koji je veci od zadate vrednosti n.*/
void zadatak110()
{
	int n = 0;
	std::cout << "Unesite vrednost n: ";
	std::cin >> n;

	int i = 1;
	int stepen = 0;
	while (i <= n)
	{
		i *= 2;
		stepen++;
	}
	std::cout << "To je: " << i << ", " << stepen << ". stepen broja 2.";
}

/*111. Odrediti zbir neparnih prirodnih brojeva na
intervalu od 1 do n.*/
void zadatak111()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int prviElement = 1;
	int suma = 0;

	while (prviElement <= n)
	{
		if ((prviElement % 2) != 0)
			suma += prviElement;
		prviElement++;
	}
	std::cout << suma;
}

/*112. Odrediti najmanji broj uzastopnih parnih
brojeva počevši od 2 čije je suma veca od n.*/
void zadatak112()
{
	int n = 0;
	std::cout << "Unesite vrednost n: ";
	std::cin >> n;

	int suma = 0;
	int prviElement = 2;
	int brojacParnihbrojeva = 0;

	while (suma <= n)
	{
		suma += prviElement;
		prviElement += 2;
		brojacParnihbrojeva++;
	}
	if (brojacParnihbrojeva < 5)
	{
		std::cout << "Potrebno je " << brojacParnihbrojeva << " uzatopna parna broja.";
	}
	else
	{
		std::cout << "Potrebno je " << brojacParnihbrojeva << " uzastopnih parnih brojeva.";
	}
}

/*113. Napisati program kojim se za dati prirodan broj
n odredjuje k-kao broj cifara u dekadnom zapisu
broja.*/
void zadatak113()
{
	int n = 0;
	std::cout << "Unesite vrednost n: ";
	std::cin >> n;

	int k = 0;
	while (n > 0)
	{
		n = n / 10;
		k++;
	}
	std::cout << "Broj cifara je: " << k;
}

/*114. Napisati program koji za dati prirodan broj n
odredjuje sumu cifara broja n*/
void zadatak114()
{
	int n = 0;
	std::cout << "Unesite vrednost n: ";
	std::cin >> n;

	int sumaCifara = 0;
	int k = 0;

	while (n > 0)
	{
		sumaCifara += n % 10;
		n = n / 10;

	}
	std::cout << "Suma cifara je: " << sumaCifara;
}

/*115. Napisati program koji za dati prirodan broj n
ispituje da li je n palindrom (Broj je palindrom ako je
redosled cifara gledano unazad isti kao i gledano
unapred , na primer 123321 , 1331, 2442 , 11 itd…)*/
void zadatak115()
{
	int n = 0;
	std::cout << "Unesite vrednost n: ";
	std::cin >> n;

	int noviBroj = 0;
	int m = n;

	while (m > 0)
	{
		noviBroj = (noviBroj * 10) + (m % 10);
		m = m / 10;
	}
	if (n == noviBroj)
	{
		std::cout << "Broj je palindrom!";
	}
	else
	{
		std::cout << "Broj nije palindrom!";
	}
}

/*116. Napisati program kojim se odredjuje najveci
zajednički delilac prirodnih brojeva m i n.*/
void zadatak116()
{
	int m, n;
	std::cout << "Unesite m i n: ";
	std::cin >> m >> n;
	int nzd = 0;

	while ((m % n) != 0)
	{
		nzd = m % n;
		m = n;
		n = nzd;
	}
	std::cout << "NZD je: " << n;

	//Cika Euklid
	/*if (m % n == 0)
		cout << "NZD je: " << n;

	if (m == n)
		cout << "NZD je: " << n;

	if(m > n)
	{
		while (m > n)
		{
			nzd = m - n;
			m = nzd;
			while (n > m)
			{
				nzd = n - m;
				n = nzd;
			}
		}
		if (n == m)
		{
			cout << "NZD je: " << nzd;
		}
	}
	if (m < n)
	{
		while (n > m)
		{
			nzd = n - m;
			n = nzd;
			while (m > n)
			{
				nzd = m - n;
				m = nzd;
			}
		}
		if (m == n)
		{
			cout << "NZD je: " << nzd;
		}
	}*/
}

/*117. Napisati program kojim se odredjuje
maksimalna vrednost u nizu.*/
void zadatak117()
{

	int n;
	std::vector<int> niz = { 1,2,3,4,5,6,7,8,9,10 };

	int max = niz[0];

	int i = 0;
	while (i < niz.size())
	{
		if (niz[i] > max)
		{
			max = niz[i];
		}
		i++;
	}
	std::cout << "Maks je: " << max;
}

/*118. Napisati program kojim se odredjuje koliko je
elemenata u najdužoj seriji jednakih .*/
void zadatak118()
{
	int n;
	std::vector<int> niz = { 1,2,3,3,3,4,4,4,4,3,3,3,3,3,8,8,10 };

	int prviElement = niz[0];
	int brojacElemenata = 1;
	int pbrojac = 0;

	int i = 1;
	while (i < niz.size())
	{
		if (niz[i] == prviElement)
		{

			brojacElemenata++;
			if (brojacElemenata > pbrojac)
			{
				pbrojac = brojacElemenata;

			}
		}
		else
		{
			prviElement = niz[i];
			brojacElemenata = 1;
		}
		i++;
	}

	std::cout << "U najduzoj seriji je " << pbrojac << " elementa";
}

/*119. Napisati program kojim se odredjuje koliko je
elemenata u najdužoj rastucoj seriji elemenata koji se
medjusobno razlikuju za 1.*/
void zadatak119()
{
	int n;
	std::vector<int> niz = { 1,2,3,3,3,4,4,4,4,5,6,7,8,9,10,3,3,3,3,3,8,8,10 };

	int prviElement = niz[0];
	int brojacElemenata = 1;
	int pbrojac = 0;

	int i = 1;
	while (i < niz.size())
	{
		if (niz[i] == prviElement + 1)
		{

			brojacElemenata++;
			if (brojacElemenata > pbrojac)
			{
				pbrojac = brojacElemenata;
			}
		}
		else
		{
			brojacElemenata = 1;
		}
		prviElement = niz[i];
		i++;
	}
	std::cout << "U najduzoj seriji je " << pbrojac << " elementa";
}
/*120. Napisati program kojim se odredjuje broj
jedinica u binarnom zapisu prirodnog
broja n.*/
void zadatak120()
{
	int n = 0;
	std::cout << "Unesite prirodni broj n: ";
	std::cin >> n;

	int brojJedinica = 0;
	while (n != 0)
	{
		if ((n % 2) & 1)
		{
			brojJedinica++;
		}
		n = n >> 1;
	}

	/*while (n != 0)
	{
		if ((n % 2) != 0)
		{
			brojjedinica++;
		}
		n = n / 2;
	}*/
	std::cout << "Broj jedinica: " << brojJedinica;
}

/*121. Napisati program za izračunavanje n-tog
stepena celog broja a.*/
void zadatak121()
{
	int a = 0;
	int i = 1;
	int stepen = 1;
	std::cout << "Unesite  broj a: ";
	std::cin >> a;

	int n = 0;
	std::cout << "Unesite stepen n: ";
	std::cin >> n;


	while (i <= n)
	{
		stepen *= a;
		i++;
	}
	std::cout << n << ". stepen broja " << a << " je " << stepen;
}

/*122. Napisati program kojim se u tekstu čije je obeležje kraja '*' odredjuje broj samoglasnika, suglasnika
i praznina. Tekst pisati velikim slovima latinice.*/
void zadatak122()
{
	std::string text = "AB BE KKKKLLAEIOPJ LA LKJSAPOIREQW";
	int brojSamoglasnika = 0;
	int brojSuglasnika = 0;
	int brojPraznina = 0;

	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == ' ')
		{
			brojPraznina++;
		}
		else if (text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U' || text[i] == 'R')
		{
			brojSamoglasnika++;
		}
		else
		{
			brojSuglasnika++;
		}
	}
	std::cout << brojPraznina << brojSamoglasnika << brojSuglasnika;
}

/*123. Napisati program kojim se štampaju svi
stepeni dvojke,ne veci od unete vrednosti
promenljive granica,koja je veda od 2.*/
void zadatak123()
{
	int stepen = 2;
	int granica = 0;
	std::cout << "Unesite granicu: ";
	std::cin >> granica;

	while (stepen < granica)
	{
		std::cout << stepen << " ";
		stepen *= 2;
	}
}

/*124. Napisati program kojim se od datog prirodnog
broja n formira broj sa istim ciframa,ali u inverznom
poretku. */
void zadatak124()
{
	int n = 0;
	std::cout << "Unesite prirodan broj n: ";
	std::cin >> n;

	int inverz = 0;
	do
	{
		inverz = (inverz * 10) + n % 10;
		n = n / 10;
	} while (n != 0);
	std::cout << inverz;
}

/*125. Napisati program koji, korišcenjem repeat
naredbe,odredjuje najmanji broj parnih brojeva od
2 čija je suma veca od R.*/
void zadatak125()
{
	int r = 0;
	std::cout << "Unesite R: ";
	std::cin >> r;

	int prviBroj = 2;
	int suma = 0;
	int brojacParnihBrojeva = 0;

	while (suma <= r)
	{
		suma += prviBroj;
		prviBroj += 2;
		brojacParnihBrojeva++;
	}
	std::cout << "Potrebno je: " << brojacParnihBrojeva << " parnih brojeva.";
}

/*126. Približna vrednost broja π može se odrediti
pomodu formule :π ≈ 4Pk gde je*/
void zadatak126()
{
	int n = 0;
	std::cout << "Unesite n: \n";
	std::cin >> n;
	float suma = 0.0f;
	int k = 1;
	int i = 1;

	while (i <= n)
	{
		suma += k / (float)(2 * i - 1);
		k = -k;
		i++;
	}
	float pi = 4 * suma;
	std::cout << "Pi je: " << pi;
}
std::vector<int> generisiNizDuzineN(int n)
{
	std::vector<int> niz;
	niz.resize(n);
	return niz;
}

std::vector<int> generisiNasumicniNizDuzineN(int n)
{
	std::vector<int> niz;
	niz.resize(n);
	for (int i = 0; i < n; i++)
	{
		niz[i] = rand() % 100;
		if (niz[i] < 35)
		{
			niz[i] *= -1;
		}
	}
	return niz;
}

/*127. Dat je niz n proizvoljnih realnih brojeva,
n<=100. Napisati program za izračunavanje sume
elemenata niza.*/
void zadatak127()
{
	int n = 0;
	std::cout << "Unesi n: ";
	std::cin >> n;

	int suma = 0;

	std::vector<int> nizOdN = generisiNasumicniNizDuzineN(n);
	for (int i = 0; i < nizOdN.size(); i++)
	{
		suma += nizOdN[i];
	}

	stampajvektor(nizOdN);
	std::cout << suma << std::endl;
}

/*128. Napisati program kojim se unose članovi niza i
izračunava srednja vrednost niza x od n elemenata.*/
void zadatak128()
{
	int n = 0;
	std::cout << "Unesi n: ";
	std::cin >> n;

	int suma = 0;
	int prosecnaVrednost = 0;

	std::vector<int> nizOdN = generisiNasumicniNizDuzineN(n);
	for (int i = 0; i < nizOdN.size(); i++)
	{
		suma += nizOdN[i];
	}
	prosecnaVrednost = suma / n;
	stampajvektor(nizOdN);
	std::cout << "Prosecna vrednost: " << prosecnaVrednost;
}

/*129. Napisati program kojim se izračunava maksimalna vrednost niza x od n elemenata (n≤50).*/
void zadatak129()
{
	int n = 0;
	std::cout << "Unesi n: ";
	std::cin >> n;

	int suma = 0;
	int maksimalnaVrednost = 0;

	std::vector<int> nizOdN = generisiNasumicniNizDuzineN(n);
	for (int i = 0; i < nizOdN.size(); i++)
	{
		if (nizOdN[i] > maksimalnaVrednost)
		{
			maksimalnaVrednost = nizOdN[i];
		}
	}
	stampajvektor(nizOdN);
	std::cout << "\nMax vrednost: " << maksimalnaVrednost;
}

/*130. Napisati program koji od korisnika učitava
ceo broj n, 1 ≤ n ≤ 5000 , potom n realnih brojeva i
odredjuje koliko njih je strogo vede od proseka svih
učitanih realnih brojeva. */
void zadatak130()
{
	int n = 0;
	std::cout << "Unesi n realnih brojeva: ";
	std::cin >> n;

	int suma = 0;
	int prosecnaVrednost = 0;
	int brojacClanova = 0;

	if (n >= 1 && n <= 5000)
	{
		std::vector<int> nizOdN = generisiNasumicniNizDuzineN(n);
		for (int i = 0; i < nizOdN.size(); i++)
		{
			suma += nizOdN[i];
		}
		prosecnaVrednost = suma / n;

		for (int i = 0; i < nizOdN.size(); i++)
		{
			if (nizOdN[i] > prosecnaVrednost)
			{
				brojacClanova++;
			}
		}
		stampajvektor(nizOdN);
		std::cout << "\nProsecna vrednost: " << prosecnaVrednost;
		std::cout << "\nVece od proseka je " << brojacClanova << " clana/ova.";
	}
	else
	{
		std::cout << "Uneta vrednost n mora biti 1 <= n <=5000!!!";
	}
}

/*131. Dat je prirodan broj N. Napisati program koji
de generisati i odštampati niz cifara broja N,
počevši od cifre najmanje težine. */
void zadatak131()
{
	int i = 0;
	int n = 0;
	std::cout << "Unesite prirodan broj n: ";
	std::cin >> n;


	if (n > 0)
	{
		std::vector<int> nizCifara;
		while (n > 0)
		{
			nizCifara.push_back(n % 10);
			n = n / 10;
		}
		std::sort(nizCifara.begin(), nizCifara.end());
		stampajvektor(nizCifara);
	}
	else
	{
		std::cout << "n mora biti veci od 0!!!";
	}
}

/*132.Napisati program koji unesene brojeve sortira
u rastucem redosledu*/
void zadatak132()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	std::vector<int> niz = generisiNasumicniNizDuzineN(n);
	int pp = 0;
	for (int i = 0; i < niz.size(); i++)
	{

		for (int k = i; k < niz.size() - 1; k++)
		{
			if (niz[i] >= niz[k + 1])
			{
				pp = niz[i];
				niz[i] = niz[k + 1];
				niz[k + 1] = pp;
			}

		}
	}
	stampajvektor(niz);
}

/*133. Napisati program za određivanje najmanjeg
člana niza a*i+,i=1,30 i njegovog rednog mesta u
nizu.*/
void zadatak133()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	std::vector<int> niz = generisiNasumicniNizDuzineN(n);

	int min = niz[0];
	int pozicija = 0;

	for (int i = 1; i < niz.size(); i++)
	{
		if (min > niz[i])
		{
			min = niz[i];
			pozicija = i;
		}
	}
	stampajvektor(niz);
	std::cout << "Minimum je: " << min << " na poziciji " << pozicija;
}

/*134.Sastaviti program za određivanje najmanjeg
člana niza čiji su indeksi neparni i najveceg člana
niza čiji su indeksi parni.*/
void zadatak134()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	std::vector<int> niz = generisiNasumicniNizDuzineN(n);

	int min = niz[1];
	int max = niz[0];
	int pozicijaParnih = 0;
	int pozicijaNeparnih = 0;

	for (int i = 1; i < niz.size(); i += 2)
	{
		if (min > niz[i])
		{
			min = niz[i];
			pozicijaNeparnih = i;
		}
	}

	stampajvektor(niz);
	std::cout << "\nMinimum neparnih indeksa je: " << min << " na poziciji " << pozicijaNeparnih;

	for (int i = 0; i < niz.size(); i += 2)
	{
		if (max < niz[i])
		{
			max = niz[i];
			pozicijaParnih = i;
		}
	}
	std::cout << "\nMaksimum parnih indeksa je: " << max << " na poziciji " << pozicijaParnih;
}

/*135. . Napisati program kojim se na osnovu nizova
b[1], b[2],...,b[n] i c[1], c[2],...,c[n] formira niz a[1],
a*2+,...,a*2n+ čije su vrednosti b*1+, c*1+,b*2+
,c[2],..., b[n],c[n].*/
void zadatak135()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	std::vector<int> niz1 = generisiNasumicniNizDuzineN(n);
	std::vector<int> niz2 = generisiNasumicniNizDuzineN(n);
	std::vector<int> niz3;
	niz3.resize(2 * n);

	for (int i = 0; i < niz3.size(); i += 2)
	{

		niz3[i] = niz1[i / 2];
		niz3[i + 1] = niz2[i / 2];
	}

	stampajvektor(niz1);
	std::cout << "\n";
	stampajvektor(niz2);
	std::cout << "\n";
	stampajvektor(niz3);
}

/*136. . Napisati program kojim se elementi niza
a*1+, a*2+,...,a*n+ premeštaju u inverzni poredak.*/
void zadatak136()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	std::vector<int> niz = generisiNasumicniNizDuzineN(n);
	int pp = 0;
	stampajvektor(niz);

	for (int i = 0; i < niz.size() / 2; i++)
	{
		pp = niz[n - i - 1];
		niz[n - i - 1] = niz[i];
		niz[i] = pp;
	}
	/*std::vector<float> inverzniNiz;
	inverzniNiz.resize(n);

	for (int i = 0; i < niz.size(); i ++ )
	{
		inverzniNiz[i] = niz[n-1];
		n--;
	}*/
	std::cout << std::endl;
	stampajvektor(niz);
	/*std::cout << "\n";
	std::cout << "Inverzni niz je : ";
	stampajvektor(inverzniNiz);*/
}

/*137. Napisati program kojim se niz a[1], a[2],...,a[n]
sortira u monotono neopadajudi poredak.*/
void zadatak137()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	std::vector<int> niz = generisiNasumicniNizDuzineN(n);
	int pp = 0;
	for (int i = 0; i < niz.size(); i++)
	{

		for (int k = i; k < niz.size() - 1; k++)
		{
			if (niz[i] >= niz[k + 1])
			{
				pp = niz[i];
				niz[i] = niz[k + 1];
				niz[k + 1] = pp;
			}

		}
	}

	stampajvektor(niz);
}

/*138. Napisati program za određivanje i prikazivanje
dva najveda elementa niza A*i+.*/
void zadatak138()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	std::vector<int> niz = generisiNasumicniNizDuzineN(n);

	int max = niz[0];
	int max1 = max;

	int pozicija1 = 0;
	int pozicija2 = 0;

	for (int i = 0; i < niz.size(); i++)
	{
		if (max < niz[i])
		{
			max = niz[i];
			pozicija1 = i;
		}
	}

	for (int i = 0; i < niz.size(); i++)
	{
		if (max1 < niz[i] && i != pozicija1)
		{
			max1 = niz[i];
			pozicija2 = i;
		}
	}
	stampajvektor(niz);
	std::cout << "\nDva najveca broja su: " << max << " na poziciji " << pozicija1 << " i " << max1 << " na poziciji " << pozicija2;
}

/*139. Neka je dat niz xx od n elemenata. Napisati
program kojim se računa zbir članova niza koji su
deljivi sa 3 i 7.*/
void zadatak139()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int suma = 0;

	std::vector<int> niz = generisiNasumicniNizDuzineN(n);

	for (int i = 0; i < niz.size(); i++)
	{
		if (niz[i] % 3 == 0 && niz[i] % 7 == 0)
		{
			suma += niz[i];
		}
	}
	stampajvektor(niz);
	std::cout << std::endl << suma;
}

/*140. Neka su data dva niza xx i yy od po
pet članova. Napiši program kojim se računa
ukupan broj parova nizova koji na istom indeksu i
imaju jednake elemente.*/
void zadatak140()
{
	std::vector<int> nizXX = { 1, -10, 3, 0 ,20 };
	std::vector<int> nizYY = { 1, 0, 3, 2, 20 };
	int pp = 0;
	for (int i = 0; i < nizXX.size(); i++)
	{
		if (nizXX[i] == nizYY[i])
		{
			pp++;
		}
	}
	stampajvektor(nizXX);
	std::cout << std::endl;
	stampajvektor(nizYY);
	std::cout << std::endl << "Broj jednakih parova je :" << pp;
}

/*141. Neka je dat niz xx od 5 elemenata. Napiši
program kojim se formira niz yy od elemanata niza
xx koji su parni.*/
void zadatak141()
{
	std::vector<int> nizXX = { 1, -10, 3, 0 ,20 };
	std::vector<int> nizYY;
	nizYY.resize(nizXX.size());
	int brojac = 0;
	for (int i = 0; i < nizXX.size(); i++)
	{
		if (nizXX[i] % 2 == 0)
		{
			nizYY[brojac] = nizXX[i];
			brojac++;
		}
	}
	nizYY.resize(brojac);
	stampajvektor(nizYY);
}

/*142. . Ispred blagajne je poređano n ljudi sa svojim
visinama h [1], h [2], ..., h [n] u tom redosledu.
Napisati program koji određuje broj ljudi koje vidi
blagajnik sa početka reda. Na primer, za ljude sa
visinama 155, 170, 165, 180, 175, 195, blagajnik
vidi prvog, drugog, četvrtog i šestog čoveka –
odgovor je 4. */
std::vector<int> generisiVisine(int n)
{
	std::vector<int> niz;
	niz.resize(n);
	for (int i = 0; i < n; i++)
	{
		niz[i] = 100 + rand() % 100;

	}
	return niz;
}
void zadatak142()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	std::vector<int> visine = generisiVisine(n);
	stampajvektor(visine);

	int max = visine[0];
	int brojac = 1;

	for (int i = 1; i < visine.size(); i++)
	{

		if (max < visine[i])
		{
			brojac++;
			max = visine[i];
		}

	}
	std::cout << "Moze da vidi: " << brojac << " coveka.";
}
/*143. Napisati program koji određuje indeks i
vrednost prvog člana u nizu koji je najbliži srednjoj
vrednosti niza.*/
void zadatak143()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int suma = 0;
	int srednjaVrednost = 0;


	std::vector<int> niz = generisiNasumicniNizDuzineN(n);
	stampajvektor(niz);
	for (int i = 0; i < niz.size(); i++)
	{
		suma += niz[i];
	}

	srednjaVrednost = suma / n;
	std::cout << "\nSrednja vrednost niza je : " << srednjaVrednost;

	int razlika = abs(srednjaVrednost - niz[0]);
	int indeks = 0;
	int minimalnaRazlika = 0;

	for (int k = 1; k < niz.size(); k++)
	{
		if (abs(srednjaVrednost - niz[k]) < razlika)
		{
			razlika = abs(srednjaVrednost - niz[k]);
			indeks = k;
		}
	}

	std::cout << "\nTo je broj: " << niz[indeks] << ", sa indeksom " << indeks;
}

/*144. Napisati program koji de ispitati da li je niz
b[1],...,b[k] podniz niza a[1],...,a[n]. Niz b je podniz
niza a ukoliko postoji indeks s (0 ≤ s ≤ n) tako da
važi: a[s]+=b[0], a[s+1]=b[2],..., a[s+k-1]=b[k].*/
void zadatak144()
{
	/*int n = 0;
	std::cout << "Unesite broj clanova niza A: ";
	std::cin >> n;
	int k = 0;
	std::cout << "Unesite broj clanova niza B: ";
	std::cin >> n;

	if (k <= n)
	{*/
	std::vector<int> nizA = { 5, 1, 7, 8 , 5, 1, 1 };
	std::vector<int> nizB = { 5, 1, 9 };

	bool check = false;
	int j = 0;
	for (int i = 0; i < nizA.size(); i++)
	{
		if (nizB[j] == nizA[i])
		{
			j++;
			if (j == nizB.size())
			{
				std::cout << "Niz B je podniz niza A";
				check = true;
				break;
			}
		}
		else
		{
			j = 0;

		}
	}
	if (!check)
	{
		std::cout << "Niz B nije podniz niza A";
	}
	/*}
	else
		std::cout << "NizB nije podniz nizaA!!!"*/

}

/*145. Neka je dat niz a od 10 elemeneta. Napiši
program kojim se sračunava ukupan broj brojeva
koji su međusobno jednaki.*/
void zadatak145()
{
	std::vector<int> niz = { 0, 2, 3 , 2, 3, 0, 0, 6 , -1, -1, 0 };
	std::vector<int> pomocniNiz;

	stampajvektor(niz);
	std::cout << std::endl;


	int brojac = 0;

	for (int i = 0; i < niz.size(); i++)
	{
		bool uPomocnomNizu = false;
		for (int k = 0; k < pomocniNiz.size(); k++)
		{
			if (niz[i] == pomocniNiz[k])
			{
				uPomocnomNizu = true;
				break;
			}
		}
		if (uPomocnomNizu)
		{
			continue;
		}
		for (int k = i + 1; k < niz.size(); k++)
		{
			if (niz[i] == niz[k])
			{
				pomocniNiz.push_back(niz[i]);
				brojac++;
				break;
			}
		}
	}

	stampajvektor(pomocniNiz);
	std::cout << "\nBr. brojeva koji su jednaki: " << brojac;
	/*std::cout << niz.size();*/
}
void zadatak145a()
{
	std::vector<int> niz = { 0, 2, 3 , 2, 3, 0, 0, 6 , -1, -1, 0 };
	int pp = 0;
	for (int i = 0; i < niz.size(); i++)
	{

		for (int k = i; k < niz.size() - 1; k++)
		{
			if (niz[i] >= niz[k + 1])
			{
				pp = niz[i];
				niz[i] = niz[k + 1];
				niz[k + 1] = pp;
			}

		}
	}
	stampajvektor(niz);
	std::vector<int> pomocniNiz;

	for (int j = 0; j < niz.size(); j++)
	{
		bool uPomocnomNizu = false;

		if (niz[j] == niz[j + 1])
		{
			pomocniNiz.push_back(niz[j]);
		}
	}
}

/*146. Učitati članove niza. Izračunati i ispisati sumu
parnih i neparnih članova niza odvojeno.*/
void zadatak146()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int sumaParnih = 0;
	int sumaNeparnih = 0;

	std::vector<int> niz = generisiNasumicniNizDuzineN(n);

	for (int i = 0; i < niz.size(); i++)
	{
		if (niz[i] % 2 == 0)
		{
			sumaParnih += niz[i];
		}
		else
		{
			sumaNeparnih += niz[i];
		}
	}
	stampajvektor(niz);
	std::cout << "Suma parnih brojeva u nizu je: " << sumaParnih << " a suma neparnih je: " << sumaNeparnih;
}

/*147. Učitati članove niza.Izračunati i ispisati broj
članova niza vedih od aritmetičke sredine i njihovu
sumu*/
void zadatak147()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	std::vector<int> niz = generisiNasumicniNizDuzineN(n);
	int brojac = 0;
	int suma = 0;
	int sumaArt = 0;

	for (int i = 0; i < niz.size(); i++)
	{
		suma += niz[i];
	}
	int aritmetickaSredina = suma / n;

	for (int i = 0; i < niz.size(); i++)
	{
		if (niz[i] > aritmetickaSredina)
		{
			brojac++;
			sumaArt += niz[i];
		}
	}

	stampajvektor(niz);
	std::cout << std::endl;

	std::cout << "Aritmeticka sredina je " << aritmetickaSredina << "\nBroj clanova koji su veci od Aritmeticke sredine su: " << brojac << " i njihova suma je " << sumaArt;
}

/*148. Izračunati proizvod pozitivnih članova niza
deljivih sa 4.*/
void zadatak148()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	std::vector<int> niz = generisiNasumicniNizDuzineN(n);
	int proizvod = 1;

	for (int i = 0; i < niz.size(); i++)
	{
		if (niz[i] > 0)
		{
			proizvod *= niz[i];
		}

	}
	stampajvektor(niz);
	std::cout << "Proizvod pozitivnih brojeva u nizu je: " << proizvod;
}

/*149. Učitati članove niza. Množiti članove niza sve
dok je proizvod manji od 541.*/

std::vector<int> generisiPozitivanNiz(int n)
{
	std::vector<int> niz;
	niz.resize(n);
	for (int i = 0; i < n; i++)
	{
		niz[i] = ((rand() % 100) / 10) + 1;
	}
	return niz;
}

void zadatak149()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	std::vector<int> niz = generisiPozitivanNiz(n);
	stampajvektor(niz);
	std::cout << "\n";
	int proizvod = 1;
	int i = 0;

	while (proizvod * niz[i] < 5410)
	{
		proizvod *= niz[i];
		std::cout << niz[i] << " ";
		i++;
	}


	std::cout << "Proizvod je: " << proizvod;
}

/*150. Učitati niz od 20 brojeva i ispisati najveci i
najmanji broj u nizu.*/
void zadatak150()
{
	std::vector<int> niz = generisiNasumicniNizDuzineN(20);
	stampajvektor(niz);

	int najmanji = niz[0];
	int najveci = niz[0];

	for (int i = 0; i < niz.size(); i++)
	{
		if (niz[i] > najveci)
		{
			najveci = niz[i];
		}
		else if (niz[i] < najmanji)
		{
			najmanji = niz[i];
		}
	}
	std::cout << "\nNajveci broj u nizu je : " << najveci;
	std::cout << "\nNajmanji broj u nizu je : " << najmanji;
}

/*151. Učitati niz X od n članova. Nadji maksimum od
članova sa parnim indeksima.*/
void zadatak151()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	std::vector<int> nizX = generisiNasumicniNizDuzineN(n);
	stampajvektor(nizX);

	int maksimum = nizX[0];

	for (int i = 0; i < nizX.size(); i += 2)
	{
		if (nizX[i] > maksimum)
		{
			maksimum = nizX[i];
		}
	}
	std::cout << "\nNajveci broj sa parnim indeksom je: " << maksimum;
}

/*152. Učitati niz X od n članova. Nadi minimum
i maksimum od članova sa neparnim indeksima.*/
void zadatak152()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	std::vector<int> nizX = generisiNasumicniNizDuzineN(n);
	stampajvektor(nizX);

	int minimum = nizX[1];
	int maksimum = nizX[1];

	for (int i = 1; i < nizX.size(); i += 2)
	{
		if (nizX[i] > maksimum)
		{
			maksimum = nizX[i];
		}
		else if (nizX[i] < minimum)
		{
			minimum = nizX[i];
		}
	}
	std::cout << "\nNajveci broj u nizu sa neparnim indeksom je: " << maksimum;
	std::cout << "\nNajmanji broj u nizu sa neparnim indeksom je: " << minimum;
}

/*153. Učitati članove niza. Ispisati: pozitivne, nule
pa negativne članove niza.*/
void zadatak153()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	std::vector<int> niz = generisiNasumicniNizDuzineN(n);
	stampajvektor(niz); std::cout << std::endl;

	std::cout << "\nPozitivni br. u nizu su: ";
	for (int i = 0; i < niz.size(); i++)
	{
		if (niz[i] > 0)
		{
			std::cout << niz[i] << " ";
		}
	}
	std::cout << "\nNegativni br. u nizu su: ";
	for (int i = 0; i < niz.size(); i++)
	{
		if (niz[i] < 0)
		{
			std::cout << niz[i] << " ";
		}

	}
	std::cout << "\nNule se nalaze na sledecim pozicijama: ";
	for (int i = 0; i < niz.size(); i++)
	{
		if (niz[i] == 0)
		{
			std::cout << i << " ";
		}

	}
}

/*154. Učitati i ispisati dvodimenzionalni niz -
matricu 2x3.*/
void zadatak154()
{
	int niz[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (auto j = 0; j < 3; j++)
		{
			niz[i][j] = (rand() % 100) / 5;
			std::cout << niz[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

/*155. Učitati i ispisati dvodimenzionalni niz -
matricu nxn. Zatim ispisati članove niza koji su na
glavnoj dijagonali.*/
void zadatak155()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	std::vector<std::vector<int>> matrica;
	matrica.resize(n);
	for (int i = 0; i < matrica.size(); i++)
	{
		matrica[i].resize(n);
	}

	for (int i = 0; i < n; i++)
	{
		for (auto j = 0; j < n; j++)
		{
			matrica[i][j] = (rand() % 100) / 10;
			std::cout << matrica[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << "Clanovi niza na glavnoj dijagonali su: ";

	for (int i = 0; i < n; i++)
	{
		std::cout << matrica[i][i] << " ";
	}
}

/*156. Učitati i ispisati dvodimenzionalni niz -
matricu 4x4. Zatim ispisati članove niza koji su
iznad glavne dijagonale.*/
void zadatak156()
{
	int matrica[4][4];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			matrica[i][j] = (rand() % 100) / 5;
			std::cout << matrica[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << "\nBrojevi iznad glavne dijagonale su: ";
	for (int i = 0; i < 3; i++)   //znam da je j > i, kasno sam provalio :( 
	{
		for (int j = 1 + i; j < 4; j++)
		{
			std::cout << matrica[i][j] << " ";
		}

	}
}
/*157. Učitati i ispisati dvodimenzionalni niz -
kvadratnu matricu nxn. Zatim ispisati članove niza
koji su ispod glavne dijagonale*/
void zadatak157()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	std::vector<std::vector<int>> matrica;
	matrica.resize(n);
	for (int i = 0; i < matrica.size(); i++)
	{
		matrica[i].resize(n);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrica[i][j] = (rand() % 100) / 10;
			std::cout << matrica[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << "Brojevi ispod glavne dijagonale su: ";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j)
			{
				std::cout << matrica[i][j] << " ";
			}
		}
	}
}

/*158. Učitati dvodimenzionalni niz. Ispisati parne
članove matrice.*/
void zadatak158()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int m = 0;
	std::cout << "Unesite m: ";
	std::cin >> m;

	std::vector<std::vector<int>> matrica;
	matrica.resize(m);
	for (int i = 0; i < matrica.size(); i++)
	{
		matrica[i].resize(n);
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrica[i][j] = (rand() % 100) / 10;
			std::cout << matrica[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << "Parni clanovi matrice su: ";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (matrica[i][j] % 2 == 0)
			{
				std::cout << matrica[i][j] << " ";
			}
		}
	}
}

/*159. Učitati dvodimenzionalni niz. Ispisati članove
matrice koji su deljivi sa 3.*/
void zadatak159()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int m = 0;
	std::cout << "Unesite m: ";
	std::cin >> m;

	std::vector<std::vector<int>> matrica;
	matrica.resize(n);
	for (int i = 0; i < matrica.size(); i++)
	{
		matrica[i].resize(m);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrica[i][j] = (rand() % 100) / 10;
			std::cout << matrica[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << "Clanovi matrice deljivi sa 3 su: ";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (matrica[i][j] % 3 == 0)
			{
				std::cout << matrica[i][j] << " ";
			}
		}
	}
}

/*160. Učitati dvodimenzionalni niz i formirati drugi
čiji je opšti član: y[i][j] = x[i][j] (isti nizovi). Ispisati oba
niza.*/
void zadatak160()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int m = 0;
	std::cout << "Unesite m: ";
	std::cin >> m;

	std::vector<std::vector<int>> matricaX;
	matricaX.resize(n);
	for (int i = 0; i < matricaX.size(); i++)
	{
		matricaX[i].resize(m);
	}

	std::cout << "Matrica X: \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matricaX[i][j] = (rand() % 100) / 10;
			std::cout << matricaX[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::vector<std::vector<int>> matricaY;
	matricaY.resize(matricaX.size());
	for (int i = 0; i < matricaX.size(); i++)
	{
		matricaY[i].resize(matricaX[i].size());
	}

	std::cout << "Matrica Y: \n";
	for (int i = 0; i < matricaX.size(); i++)
	{
		for (int j = 0; j < matricaX[i].size(); j++)
		{
			matricaY[i][j] = matricaX[i][j];
			std::cout << matricaY[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

/*161. Učitati dva dvodimenzionalna niza i formirati
tredi čiji je opšti član: cij = xij + yij.*/
void zadatak161()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int m = 0;
	std::cout << "Unesite m: ";
	std::cin >> m;

	std::vector<std::vector<int>> matricaX;
	matricaX.resize(n);
	for (int i = 0; i < matricaX.size(); i++)
	{
		matricaX[i].resize(m);
	}

	std::cout << "Matrica X : \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matricaX[i][j] = (rand() % 100) / 10;
			std::cout << matricaX[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::vector<std::vector<int>> matricaY;
	matricaY.resize(matricaX.size());
	for (int i = 0; i < matricaX.size(); i++)
	{
		matricaY[i].resize(matricaX[i].size());
	}

	std::cout << "Matrica Y: \n";
	for (int i = 0; i < matricaX.size(); i++)
	{
		for (int j = 0; j < matricaX[i].size(); j++)
		{
			matricaY[i][j] = (rand() % 100) / 10;
			std::cout << matricaY[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::vector<std::vector<int>> matricaC;
	matricaC.resize(matricaX.size());
	for (int i = 0; i < matricaX.size(); i++)
	{
		matricaC[i].resize(matricaX[i].size());
	}

	std::cout << "Matrica C = X + Y: \n";
	for (int i = 0; i < matricaX.size(); i++)
	{
		for (int j = 0; j < matricaX[i].size(); j++)
		{
			matricaC[i][j] = matricaX[i][j] + matricaY[i][j];
			std::cout << matricaC[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

/*162. Učitati dva dvodimenzionalna niza i formirati
treci čiji je opšti član: cij = xij + 2yij.*/
void zadatak162()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int m = 0;
	std::cout << "Unesite m: ";
	std::cin >> m;

	std::vector<std::vector<int>> matricaX;
	matricaX.resize(n);
	for (int i = 0; i < matricaX.size(); i++)
	{
		matricaX[i].resize(m);
	}

	std::cout << "Matrica X : \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matricaX[i][j] = (rand() % 100) / 10;
			std::cout << matricaX[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::vector<std::vector<int>> matricaY;
	matricaY.resize(matricaX.size());
	for (int i = 0; i < matricaX.size(); i++)
	{
		matricaY[i].resize(matricaX[i].size());
	}

	std::cout << "Matrica Y: \n";
	for (int i = 0; i < matricaX.size(); i++)
	{
		for (int j = 0; j < matricaX[i].size(); j++)
		{
			matricaY[i][j] = (rand() % 100) / 10;
			std::cout << matricaY[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::vector<std::vector<int>> matricaC;
	matricaC.resize(matricaX.size());
	for (int i = 0; i < matricaX.size(); i++)
	{
		matricaC[i].resize(matricaX[i].size());
	}

	std::cout << "Matrica C = X + 2Y: \n";
	for (int i = 0; i < matricaX.size(); i++)
	{
		for (int j = 0; j < matricaX[i].size(); j++)
		{
			matricaC[i][j] = matricaX[i][j] + (2 * matricaY[i][j]);
			std::cout << matricaC[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

/*163. Učitiati dvodimenzionalni niz - matricu nxm.
Izračunati i ispisati sumu svih elemenata niza A[5, 5]*/
void zadatak163()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int m = 0;
	std::cout << "Unesite m: ";
	std::cin >> m;

	std::vector<std::vector<int>> matrica;
	matrica.resize(n);
	for (int i = 0; i < matrica.size(); i++)
	{
		matrica[i].resize(m);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrica[i][j] = (rand() % 100) / 10;
			std::cout << matrica[i][j] << " ";
		}
		std::cout << std::endl;
	}
	int zbir = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			zbir += matrica[i][j];
		}
	}
	std::cout << "Zbir svih elemenata matrice je: " << zbir;
}

/*164. Učitati dvodimenzionalni niz - matricu nxm.
Prebrojati i ispisati koliko ima elemenata matrice
koju su 1.*/
void zadatak164()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int m = 0;
	std::cout << "Unesite m: ";
	std::cin >> m;

	std::vector<std::vector<int>> matrica;
	matrica.resize(n);
	for (int i = 0; i < matrica.size(); i++)
	{
		matrica[i].resize(m);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrica[i][j] = (rand() % 100) / 10;
			std::cout << matrica[i][j] << " ";
		}
		std::cout << std::endl;
	}
	int brojac = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrica[i][j] == 1)
			{
				brojac++;
			}
		}
	}
	std::cout << "Broj jedinica u matrici je: " << brojac;
}
/*165. Učitati dvodimenzionalni niz - matricu nxm.
Izračunati i ispisati aritmetičku sredinu elemenata
niza deljivih sa 2 (parni).*/
void zadatak165()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int m = 0;
	std::cout << "Unesite m: ";
	std::cin >> m;

	std::vector<std::vector<int>> matrica;
	matrica.resize(n);
	for (int i = 0; i < matrica.size(); i++)
	{
		matrica[i].resize(m);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrica[i][j] = (rand() % 100) / 10;
			std::cout << matrica[i][j] << " ";
		}
		std::cout << std::endl;
	}
	double zbir = 0;
	double brojac = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrica[i][j] % 2 == 0)
			{
				zbir += matrica[i][j];
				brojac++;
			}
		}
	}
	std::cout << "Zbir parnih elemenata matrice je: " << zbir << std::endl;
	std::cout << "Aritmeticka sredina matrice je: " << zbir / brojac;
}

/*166. Učitati dvodimenzionalni niz - matricu nxm.
Nadi i ispisati najmanji elemenat matrice X[n,m]*/
void zadatak166()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int m = 0;
	std::cout << "Unesite m: ";
	std::cin >> m;

	std::vector<std::vector<int>> matrica;
	matrica.resize(n);
	for (int i = 0; i < matrica.size(); i++)
	{
		matrica[i].resize(m);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrica[i][j] = (rand() % 100) / 10;
			std::cout << matrica[i][j] << " ";
		}
		std::cout << std::endl;
	}

	int najmanji = matrica[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrica[i][j] < najmanji)
			{
				najmanji = matrica[i][j];
			}
		}
	}
	std::cout << "Najmanji element u matrici je: " << najmanji;
}

/*167. Učitati dvodimenzionalni niz - matricu nxm.
Formirati novi jednodimenzionalni niz čije članove
čine najmanji članovi polja po redovima.*/
void zadatak167()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int m = 0;
	std::cout << "Unesite m: ";
	std::cin >> m;

	std::vector<std::vector<int>> matrica;
	matrica.resize(n);
	for (int i = 0; i < matrica.size(); i++)
	{
		matrica[i].resize(m);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrica[i][j] = (rand() % 100) / 10;
			std::cout << matrica[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::vector<int> nizNajmanjihPoRedovima;
	for (int i = 0; i < n; i++)
	{
		int pp = matrica[i][0];
		for (int j = 0; j < m; j++)
		{
			if (matrica[i][j] < pp)
				pp = matrica[i][j];
		}
		nizNajmanjihPoRedovima.push_back(pp);
	}
	std::cout << "Niz najmanjih elemenata po redovima je: ";
	for (int i = 0; i < nizNajmanjihPoRedovima.size(); i++)
	{
		std::cout << nizNajmanjihPoRedovima[i] << " ";
	}
}

/*168. Učitati dvodimenzionalni niz X i formirati
drugi dvodimenzionalni niz Y čiji je opšti član: y[i][j] =
x[j][i] (elementi i-tog reda matrice X se razmenjuju sa
elementima i-te kolone matrice Y). Ispisati oba
niza.*/
void zadatak168()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int m = 0;
	std::cout << "Unesite m: ";
	std::cin >> m;

	std::vector<std::vector<int>> matricaX;
	matricaX.resize(n);
	for (int i = 0; i < matricaX.size(); i++)
	{
		matricaX[i].resize(m);
	}

	std::cout << "Matrica X: \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matricaX[i][j] = (rand() % 100) / 10;
			std::cout << matricaX[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::vector<std::vector<int>> matricaY;
	matricaY.resize(matricaX.size());
	for (int i = 0; i < matricaX.size(); i++)
	{
		matricaY[i].resize(matricaX[i].size());
	}

	std::cout << "Matrica Y: \n";
	for (int i = 0; i < matricaX.size(); i++)
	{
		for (int j = 0; j < matricaX[i].size(); j++)
		{
			matricaY[i][j] = matricaX[j][i];
			std::cout << matricaY[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

/*169. Učitati dvodimenzionalni niz i formirati drugi
čiji je opšti član: y ij = -xij (negativne vrednosti
članova niza). Ispisati oba niza.*/
void zadatak169()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int m = 0;
	std::cout << "Unesite m: ";
	std::cin >> m;

	std::vector<std::vector<int>> matricaX;
	matricaX.resize(n);
	for (int i = 0; i < matricaX.size(); i++)
	{
		matricaX[i].resize(m);
	}

	std::cout << "Matrica X: \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matricaX[i][j] = (rand() % 100) / 10;
			std::cout << matricaX[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::vector<std::vector<int>> matricaY;
	matricaY.resize(matricaX.size());
	for (int i = 0; i < matricaX.size(); i++)
	{
		matricaY[i].resize(matricaX[i].size());
	}

	std::cout << "Matrica Y: \n";
	for (int i = 0; i < matricaX.size(); i++)
	{
		for (int j = 0; j < matricaX[i].size(); j++)
		{
			matricaY[i][j] = matricaX[i][j] * -1;
			std::cout << matricaY[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

/*170. Učitati dvodimenzionalni niz i formirati drugi čiji je opšti član: yij = xij za i+j parno, inače je yij = 2.
*/
void zadatak170()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int m = 0;
	std::cout << "Unesite m: ";
	std::cin >> m;

	std::vector<std::vector<int>> matricaX;
	matricaX.resize(n);
	for (int i = 0; i < matricaX.size(); i++)
	{
		matricaX[i].resize(m);
	}

	std::cout << "Matrica X: \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matricaX[i][j] = (rand() % 100) / 10;
			std::cout << matricaX[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::vector<std::vector<int>> matricaY;
	matricaY.resize(matricaX.size());
	for (int i = 0; i < matricaX.size(); i++)
	{
		matricaY[i].resize(matricaX[i].size());
	}

	std::cout << "Matrica Y: \n";
	for (int i = 0; i < matricaX.size(); i++)
	{
		for (int j = 0; j < matricaX[i].size(); j++)
		{
			if ((i + j) % 2 == 0)
			{
				matricaY[i][j] = matricaX[i][j];
				std::cout << matricaY[i][j] << " ";
			}
			else
			{
				matricaY[i][j] = 2;
				std::cout << matricaY[i][j] << " ";
			}
		}
		std::cout << std::endl;
	}
}

/*171. Učitati, ispisati niz znakova.*/
void zadatak171()
{
	std::string str;
	std::cout << "Unesite niz znakova" << std::endl;
	std::cin >> str;
	std::cout << "Uneti string je: " << str;
}

/*172. Učitati niz znakova . Ispisati znak , i redni broj
znaka , na osnovu redosleda unošenja.*/
void zadatak172()
{
	std::string str;
	std::cout << "Unesite niz znakova" << std::endl;
	std::getline(std::cin, str);
	std::cout << "Uneti string je: " << str;

	for (int i = 0; i < str.size(); i++)
	{
		std::cout << std::endl << i << "-i znak je " << str[i];
	}
}

/*173. Učitati niz znakova. Ispisati znak, i redni broj znaka
datog stringa unazad.*/
void zadatak173()
{
	std::string str;
	std::cout << "Unesite niz znakova" << std::endl;
	std::getline(std::cin, str);
	std::cout << "Uneti string je: " << str;

	for (int i = str.size() - 1; i >= 0; i--)
	{
		std::cout << std::endl << i << "-i znak je " << str[i];
	}
}

/*174. Svaku reč učitanog stringa ispisati u novom redu.*/
void zadatak174()
{
	std::string str;
	std::cout << "Unesite niz karaktera" << std::endl;
	std::getline(std::cin, str);

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] != ' ')
		{
			std::cout << str[i];
		}
		else
		{
			std::cout << std::endl;
		}
	}
}

/*175. Prebrojati broj velikih slova u učitanom
stringu.*/
void zadatak175()
{
	std::string str;
	std::cout << "Unesite niz karaktera" << std::endl;
	std::getline(std::cin, str);

	int brojac = 0;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 65 && str[i] <= 90)   //ASCII code  izmedju 65 i 90
		{
			brojac++;
		}
	}
	std::cout << "Broj velikih slova u stringu je: " << brojac;
}

/*176. Prebrojati broj velikih slova i broj malih slova
u učitanom stringu.*/
void zadatak176()
{
	std::string str;
	std::cout << "Unesite niz karaktera" << std::endl;
	std::getline(std::cin, str);

	int brojacVelikih = 0;
	int brojacMalih = 0;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			brojacVelikih++;
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			brojacMalih++;
		}
	}
	std::cout << "Broj velikih slova u stringu je: " << brojacVelikih << " a broj malih slova je: " << brojacMalih;
}

/*177. Učitati string i odredjeni znak. Ispisati koliko
puta se taj znak pojavljuje u upisanom stringu.*/
void zadatak177()
{
	std::string str;
	std::cout << "Unesite niz karaktera" << std::endl;
	std::getline(std::cin, str);

	char karakter;
	std::cout << "Unesite karakter: ";
	std::cin >> karakter;

	int brojac = 0;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == karakter)
		{
			brojac++;
		}
	}
	std::cout << "Karakter koji ste uneli se ponavlja: " << brojac << " u stringu.";

}

/*178. Učitati string i prebrojati reči u stringu.*/
void zadatak178()
{
	std::string str;
	std::cout << "Unesite niz karaktera" << std::endl;
	std::getline(std::cin, str);

	int brojac = 1;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
		{
			brojac++;
		}
	}
	std::cout << "Broj reci je: " << brojac; //pod uslovom da je pravilo ispisano
}

/*179. Učitati string i prebrojati operatore u stringu
(+,-,*,/).*/
void zadatak179()
{
	std::string str;
	std::cout << "Unesite niz karaktera" << std::endl;
	std::getline(std::cin, str);

	int brojac = 0;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '*')
		{
			brojac++;
		}
		else if (str[i] == '-')
		{
			brojac++;
		}
		else if (str[i] == '+')
		{
			brojac++;
		}
		else if (str[i] == '/')
		{
			brojac++;
		}
	}
	std::cout << "Broj operatora je: " << brojac;
}

/*180. Učitati string i prebrojati znake interpunkcije
u stringu (, . ? !).*/
void zadatak180()
{
	std::string str;
	std::cout << "Unesite niz karaktera" << std::endl;
	std::getline(std::cin, str);

	int brojac = 0;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ',')
		{
			brojac++;
		}
		else if (str[i] == '.')
		{
			brojac++;
		}
		else if (str[i] == '!')
		{
			brojac++;
		}
		else if (str[i] == '?')
		{
			brojac++;
		}
	}
	std::cout << "Broj znakova interpunkcije je: " << brojac;
}

/*Bonus zadatak 1:
	*
	**
	***
	****
	*****
*/
void zadatakBonus1()
{
	int n = 0;
	std::cout << "Uneti n: ";
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{

		for (int k = 0; k < i + 1; k++)
		{
			std::cout << '*';
		}
		std::cout << std::endl;
	}
}

/*  Bonus zadatak 2:
	*****
	****
	***
	**
	*
*/
void zadatakBonus2()
{
	int n = 0;
	std::cout << "Uneti n: ";
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{

		for (int k = i; k < n; k++) // k = 0; k < n - i; k++
		{
			std::cout << '*';
		}
		std::cout << std::endl;
	}
}
/*Bonus zadatak 3: Za dato n (gde je n broj redova), napraviti:
	   *
	  ***
	 *****
	*******
  ............*/
void zadatakBonus3()
{
	int n = 0;
	std::cout << "Uneti n: ";
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k <= n - i; k++)
		{
			std::cout << ' ';
		}
		for (int j = 0; j <= 2 * i; j++)
		{
			std::cout << '*';
		}
		std::cout << std::endl;
	}

	/*for (int i = 0; i < n; i++)
	{
		for (int k = 0; k <= n - i; k++)
		{
			std::cout << ' ';
		}
		for (int j = 0; j <= 2 * i; j++)
		{
			std::cout << '*';
		}
		std::cout << std::endl;
	}*/
}

void zadatak()
{
	int n = 0;
	std::cout << "Unesite n: ";
	std::cin >> n;

	int m = 0;

	std::cout << "Unesite m: ";
	std::cin >> m;
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m];
	}

	std::vector<std::vector<int>> matricaX;
	matricaX.resize(n);
	for (int i = 0; i < matricaX.size(); i++)
	{
		matricaX[i].resize(m);
	}

	std::cout << "Matrica X: \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matricaX[i][j] = (rand() % 100) / 10;
			std::cout << matricaX[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::vector<std::vector<int>> matricaY;
	matricaY.resize(matricaX.size());
	for (int i = 0; i < matricaX.size(); i++)
	{
		matricaY[i].resize(matricaX[i].size());
	}

	std::cout << "Matrica Y: \n";
	for (int i = 0; i < matricaX.size(); i++)
	{
		for (int j = 0; j < matricaX[i].size(); j++)
		{
			matricaY[i][j] = matricaX[i][j] * -1;
			std::cout << matricaY[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

/*Napisati C++ program koji rešava linearnu jednačinu sa jednom nepoznatom, tipa -2x+9-8x=11-3x
Nema razmaka između elemenata
Nema suvišnih karaktera*/
void zadatakLinearnaJednacina()
{
	std::string jednacina = "-2x+9-8x=11-3x";

	int multiplikatorPromenljive;
	int n;

	std::vector<int> pozicijeOperatora;

	int pozicijaJednakosti = 0;

	//Pozicija jednakosti
	for (int i = 0; i < jednacina.size(); i++)
	{
		if (jednacina[i] == '=')
		{
			pozicijaJednakosti = i;
			std::cout << "Pozicija jednakosti je : " << pozicijaJednakosti << std::endl;
		}
	}

	//Pozicije operatora pre =
	for (int i = 0; i < pozicijaJednakosti; i++)
	{
		if (jednacina[i] == '+' || jednacina[i] == '-' || jednacina[i] == '*' || jednacina[i] == '/')
		{
			pozicijeOperatora.push_back(i);
		}
	}
	for (int i = 0; i < pozicijeOperatora.size(); i++)
	{
		std::cout << pozicijeOperatora[i] << " ";
	}

	////pozicija X pre pozicije jednakosti
	//for (int i = 0; i < pozicijaJednakosti; i++)
	//{
	//	if (jednacina[i] == 'x' || jednacina[i] == 'X')
	//	{
	//		pozicijaX = i;
	//		std::cout << "Pozicija X pre jednakosti je: " << pozicijaX << std::endl;
	//		
	//		for (int i = pozicijaX; i > 0; i--)
	//		{
	//			clanoviX.push_back(jednacina[i]);
	//		}
	//		for (int i = 0; i < clanoviX.size(); i++)
	//		{
	//			std::cout << clanoviX[i];
	//		}
	//	}
	//}
	//
	////Upisujem clanove do X u vektor
	//
	//
	//
	//std::cout << std::endl;
	////pozicija X posle pozicije jednakosti upis u vektor i stampa
	//for (int i = pozicijaJednakosti + 1; i < jednacina.size(); i++)
	//{
	//	if (jednacina[i] == 'x' || jednacina[i] == 'X')
	//	{
	//		pozicijaX = i;
	//		std::cout << "Pozicija X posle jednakosti je: " << pozicijaX << std::endl;
	//	}
	//}
	//
	///*for (int i = pozicijaJednakosti; i < pozicijaX; i++)
	//{
	//	clanoviX.push_back(jednacina[i]);
	//}

	//for (int i = 0; i < clanoviX.size(); i++)
	//{
	//	std::cout << clanoviX[i];
	//}*/



}
/*Vezba*/
void ternary()
{
	int num1;

	int num2;
	std::cin >> num1 >> num2;

	int max = (num1 > num2) ? num1 : num2;
	std::cout << "Max je: " << max;


}

int main()
{
	ternary();
	return 0;
}