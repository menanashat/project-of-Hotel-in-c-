#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class floors {
private:
	int floor_number;
	int number_of_rooms;
	int a[10][10];
public:
	//constructure
	floors() {
		floor_number = 0;
		number_of_rooms = 0;
	}
	//set
void setfloornumber() {
	ifstream inl;
	inl.open("asd.txt");
	int g;
	string h;
	inl >>h>>g ;
	//cout << g << endl;
	floor_number = g;
	a[g][10];
}
//get
int getfloornumber() {
	return floor_number;
}
//set
void set_number_of_rooms() {//number of rooms
		int y = 0;
		ifstream inl;
		inl.open("asd.txt");
		int g1 = 0, h, f4 = 0,u=0,m=0;
		string j, k, b;
			for (int i = 0; u<floor_number; i++) {
				getline(inl, b);
				if (i == g1) {
					u++;
					inl >> j >> h >> k >> g1;
					if (g1 != 0) {
						for (int i = 0; i < g1; i++) {
							a[y][i] = 0;
							m++;
						}
						g1 += f4;
						g1 += 1;
						f4 += g1;
						y++;
					}
				}
			}
		// while (floor_number!=u);
		inl.close();
		number_of_rooms = m;
}
// get
int get_number_fo_rooms() {
	return number_of_rooms;
}
//2 function
int dispaly_profit_of_one_room() {
	cout << "Enter the floor" << endl;
	int g; cin >> g;
	cout << "enter the number of room" << endl;
	int fg; cin >> fg;
	cout << "enter the number of nights you want to stay here" << endl;
	int qwer; cin >> qwer;
	int y = 0;
	ifstream inl;
	inl.open("asd.txt");
	int g1 = 0, h, f4 = 0, u = 0, m = 0;
	string j, k, b;
	int gh = 0;
	int g12 = 0;
	for (int i = 0; !inl.eof(); i++) {
		getline(inl, b);
		if (i == g1) {
			inl >> j >> h >> k >> g1;
			if (g1 != 0 && h == g) {
				string f, u4;
				for (int o = 1; o <= fg; o++) {
					getline(inl, f);
					/*if (fg==1) {
					getline(inl, f);
					}*/
					if (o == fg) {
						inl >> j >> m;
						int q = 0;
						//	int int_1 = stoi(j);
						getline(inl, f);
						//	for (int h = 0; h < f.size();h++) {
						if (j == "standard,") {
							gh = f[1] - 48;
							char er = f[3];
							string qw = string(1, er);
							char rt = f[4];
							string we = string(1, rt);
							string rty = qw + we;
							q = stoi(rty);
						}
						else if (j == "sweet,") {
							char er = f[1];
							string qw = string(1, er);
							char rt = f[2];
							string we = string(1, rt);
							string rty = qw + we;
							q = stoi(rty);
						}
						else if (j == "conference,") {
							char er = f[1];
							string qw = string(1, er);
							char rt = f[2];
							string we = string(1, rt);
							string rty = qw + we;
							q = stoi(rty);
							char ers = f[4];
							string qws = string(1, er);
							char rts = f[5];
							string wes = string(1, rt);
							string rtys = qw + we;
							gh = stoi(rtys);
						}
						//}
						if (j == "standard,") {

							g12 += q * gh*qwer;
							return g12;
							cout << endl;
						}
						else if (j == "sweet,") {
							g12 += q*qwer;
							return g12;
							cout << endl;
						}
						else {
							g12 += gh * q;
							return g12;
							cout << endl;
						}
					}
				}
			}
			g1 += f4;
			g1 += 1;
			f4 += g1;
		}
	}

	cout << g12 << endl;
}
//1 function
void displayonefloor() {//display number of avaiavble room in one floor
	cout << "enter the number of floor" << endl;
	int h1;
	cin >> h1;
	int y = 0;
	ifstream inl;
	inl.open("asd.txt");
	int g1 = 0, h, f4 = 0, u = 0, m = 0;
	string j, k, b;
	for (int i = 0; u < floor_number; i++) {
		getline(inl, b);
		if (i == g1) {
			u++;
			y++;
			inl >> j >> h >> k >> g1;
			if (g1 != 0&&h==h1) {
				for (int h = 0; h < g1; h++) {
					if (a[y-1][h] == 0) {
						m++;
					}
				}
			}
				g1 += f4;
				g1 += 1;
				f4 += g1;
		}
	}

	cout << m << endl;

}
void display_profit() {//display profit in one floor
	cout << "enter the number of floor" << endl;
	int g; cin >> g;
	int y = 0;
	ifstream inl;
	inl.open("asd.txt");
	int g1 = 0, h, f4 = 0, u = 0, m = 0;
	string j, k, b;
	int gh=0;
	int g12 = 0;
	for (int i = 0; !inl.eof(); i++) {
		getline(inl, b);
		if (i == g1) {
			inl >> j >> h >> k >> g1;
			if (g1 != 0 && h == g) {
				string f,u4;
				for (int o = 0; o < g1; o++) {
			    u++;
					if (o == 0) {
						getline(inl, f);
					}
				 inl >> j >> h;
				 int q = 0;
				//	int int_1 = stoi(j);
					getline(inl, f);
				//	for (int h = 0; h < f.size();h++) {
					if (j == "standard,") {
						gh = f[1] - 48;
						char er = f[3];
						string qw = string(1, er);
						char rt = f[4];
						string we = string(1, rt);
						string rty = qw + we;
						q = stoi(rty);
					}
					else if(j=="sweet,") {
						char er = f[1];
						string qw = string(1, er);
						char rt = f[2];
						string we = string(1, rt);
						string rty = qw + we;
						q = stoi(rty);
					}
					else if (j=="conference,") {
						char er = f[1];
						string qw = string(1, er);
						char rt = f[2];
						string we = string(1, rt);
						string rty = qw + we;
						q = stoi(rty);
						char ers = f[4];
						string qws = string(1, er);
						char rts = f[5];
						string wes = string(1, rt);
						string rtys = qw + we;
						gh = stoi(rtys);
					}
					//}
				 if (j=="standard,") {
					 g12 += q*gh;
				 }
				 else if (j=="sweet,") {
					 g12 += q;
				 }
				 else {
					 g12 += gh * q;
				 }
				}
				}
			g1 += f4;
			g1 += 1;
			f4 += g1;
			}
		}
	cout << g12<<" EGP"<< endl;
}
void display_details_of_rooms() {//display detail of one floor
	cout << "enter number of floor" << endl;
	int g; cin >> g;//numberof floor 
	//int fg; cin >> fg;//number room
	int y = 0;
	ifstream inl;
	inl.open("asd.txt");
	int g1 = 0, h, f4 = 0, u = 0, m = 0;
	string j, k, b;
	int gh = 0;
	int g12 = 0;
	for (int i = 0; !inl.eof(); i++) {
		getline(inl, b);
		if (i == g1) {
			inl >> j >> h >> k >> g1;
			if (g1 != 0 && h == g) {
				for (int e = 0; e <= g1; e++) {
					string f;
					getline(inl, f);

					cout << f << endl;
					//	for (int h = 0; h < f.size();h++) {
				}
			}
			g1 += f4;
			g1 += 1;
			f4 += g1;
		}
		}
}
void display_details_of_one_room() {
	cout << "enter number of floor" << endl;
	int g; cin >> g; 
	cout << "enter number of room" << endl;
	int gh; cin >> gh;
	int y = 0;
	ifstream inl;
	inl.open("asd.txt");
	int g1 = 0, h, f4 = 0, u = 0, m = 0;
	string j, k, b;
	for (int i = 0; !inl.eof(); i++) {
		getline(inl, b);
		if (i == g1) {
			inl >> j >> h >> k >> g1;
			if (g1 != 0 && h == g) {
				for (int e = 0; e <= gh; e++) {
					string f;
					getline(inl, f);
					if (gh == e) {
					cout << f << endl;
					}
					//	for (int h = 0; h < f.size();h++) {
				}
			}
			g1 += f4;
			g1 += 1;
			f4 += g1;
		}
	}
}

void displayreserverooms() {//to reserve room
	cout << "===========================details of hotel================================" << endl;
	ifstream l;
	l.open("asd.txt");
	string g;
	while (!l.eof()) {
		getline(l, g);
		cout << g << endl;
	}
	//cout << a[0][0] << " " << a[0][1] <<" " << a[0][2] << " " << endl << a[0][1] << " " << a[0][1] << endl << a[1][0] << endl;
		int y, u;
	cout << "enter the number of floor then number of room" << endl;
	cin >> y >> u;
	if (a[y - 1][u - 1] == 1) {
		cout << "it is booking" << endl;
	}
	else {
		a[y - 1][u - 1] = 1;
		cout << "DONE" << endl;
	}
	//cout << a[0][0] << " " << a[0][1] <<" " << a[0][2] << " " << endl << a[0][1] << " " << a[0][1] << endl << a[1][0] << endl;
}
void cancelreservation() {
	int t, y;
	cout << "enter the floor and number of room" << endl;
	cin >> t >> y;
	a[t - 1][y - 1] = 0;
	cout << "thank you to stay in Hotel god bey " << endl;
}
void display() {
	cout << "============================details of hotel=======================================" << endl;
	string getcontent;
	ifstream input;
	input.open("asd.txt");
	while (!input.eof()) {
		getline(input,getcontent); 
		cout << getcontent << endl;
	}
	input.close();
}
void display_numberofavailableroomsinonefloor() {//number of avaible room in hotle
	int y = 0;
	ifstream inl;
	inl.open("asd.txt");
	int g1 = 0, h, f4 = 0, u = 0, m = 0;
	string j, k, b;
	for (int i = 0; u < floor_number; i++) {
		getline(inl, b);
		if (i == g1) {
			u++;
			inl >> j >> h >> k >> g1;
			if (g1 != 0) {
				for (int h = 0; h < g1; h++) {
					if (a[y][h] == 0) {
						m++;
					}
				}
				g1 += f4;
				g1 += 1;
				f4 += g1;
				y++;
			}
		}
	}

	cout << m << endl;
}
};
class rooms {
private:
	string type;
	string status;
	int daysOfReservation;
public:



};
class StandardRoom :public rooms {
private:
	int number_Of_Beds;
	double bed_Price;
	bool is_Reserved;
	int room_number;
public:
};
class SweetRoom: public rooms{
private:
	int room_number;
	double  price_Per_Night;
	bool   is_Reserved;
public:
};
class ConferenceRoom :public rooms {
private:
	int room_number;
	int 	number_Of_Seats; 
	double	seat_Price;
    bool is_Reserved;
public:
};
int menu() {
	int y;
	cout << "=========================================== +HOTEL Project+ ==============================================" << endl;
	cout << "============================================= Made By C++ =================================================" << endl;
	cout << "1-display all the rooms in Hotel " << endl;
	cout << "2-to reserve click here " << endl;
	cout << "3-to calculate the money of the room " << endl;
	cout << "4-to display the Empty room in the floor " << endl;
	cout << "5-to calculate the money of the floor " << endl;
	cout << "6-to dispaly all the rooms in one floor " << endl;
	cout << "7-to know all the details of one room " << endl;
	cout << "8-to cancel the reserve " << endl;
	cout << "9-to calculate all the empty rooms in all the HOTEL " << endl;
	cout << "10-exit" << endl;
	cout << "choose between 1 to 10 " << endl;
	cin >> y;
	return y;
}
int main() {
	floors yu;
	yu.setfloornumber();
	yu.set_number_of_rooms();
		char g; 
	do {
		//menu();
		int y = menu();
		switch (y) {
		case 1:
			yu.display();
			if (cin.get() == '/n') {
				system("cls");
			}
			break;
		case 2:
			yu.displayreserverooms();
			if (cin.get() == '/n') {
				system("cls");
			}
			break;
		case 3:
		cout<<	yu.dispaly_profit_of_one_room();
		if (cin.get() == '/n') {
			system("cls");
		}
		break;
		case 4:
			yu.displayonefloor();
			if (cin.get() == '/n') {
				system("cls");
			}
			break;
		case 5:
			yu.display_profit();
			if (cin.get() == '/n') {
				system("cls");
			}
			break;
		case 6:
			yu.display_details_of_rooms();
			if (cin.get() == '/n') {
				system("cls");
			}
			break;
		case 7:
			yu.display_details_of_one_room();
			if (cin.get() == '/n') {
				system("cls");
			}
			break;
		case 8:
			yu.cancelreservation();
			if (cin.get() == '/n') {
				system("cls");
			}
			break;
		case 9:
			yu.display_numberofavailableroomsinonefloor();
			if (cin.get() == '/n') {
				system("cls");
			}
			break;
		case 10:
			exit(0);
			break;
		default:
			cout << "Error try again?!!" << endl;
		}
		cout << endl;
		cout << "======================Qestion=======================" << endl;
		cout << "do you waqnt to do anthor process (y/n)" << endl;
		cin >> g;
		system("cls");
	} while (g == 'y');
		return 0;
}









