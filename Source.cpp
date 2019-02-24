#include<iostream>
#include<conio.h>
#include"Header.h"
#include <Windows.h>
#include <stdlib.h>
#include <string>
#include<fstream>

using namespace std;

//ofstream out2("download.txt");

ifstream in("download.txt");

ofstream out("result.txt");

//ВСПОМОГАТЕЛЬНЫЕ ФУНКЦИИ---------------------------------------

int number_of_digit(int a) {//ВОЗВРАЩАЕТ КОЛ-ВО ЦИФР В ЧИСЛЕ 
	int i = 0;
	for (a; a > 0; i++, a /= 10);
	return i;
}

int choose_day() {//ВЫВОД МЕНЮ ВЫБОРА ДНЯ НА ЭКРАН
	int i = 1;
	cout << "Select a day: " << '\n' << "========================================================================================================================" << '\n' << "----------" << '\n' << "|1)Monday|" << '\n' << "----------" << '\n' << " 2)Tuesday" << '\n' << " 3)Wednesday" << '\n' << " 4)Thursday" << '\n' << " 5)Friday" << '\n' << " 6)Saturday" << '\n' << " 7)Sunday"<<'\n'<<" 8)Return to the menu";
	while (true) {
		char q = _getch();
		if (q == 13) {
			system("cls");
			switch (i) {
			case 1:return 1; break;
			case 2:return 2; break;
			case 3:return 3; break;
			case 4:return 4; break;
			case 5:return 5; break;
			case 6:return 6; break;
			case 7:return 7; break;
			case 8:return 8;
			}
		}
		else if (q == 72) {
			if (i == 1) {
				i = 8;
			}
			else {
				i--;
			}
		}
		else if (q == 80) {
			if (i == 8) {
				i = 1;
			}
			else {
				i++;
			}
		}
		system("cls");
		switch (i) {
		case 1:cout << "Select a day: " << '\n' << "========================================================================================================================"  << "----------" << '\n' << "|1)Monday|" << '\n' << "----------" << '\n' << " 2)Tuesday" << '\n' << " 3)Wednesday" << '\n' << " 4)Thursday" << '\n' << " 5)Friday" << '\n' << " 6)Saturday" << '\n' << " 7)Sunday" << '\n' << " 8)Return to the menu"; break;
		case 2:cout << "Select a day: " << '\n' << "========================================================================================================================" << '\n' << " 1)Monday" << '\n' << "-----------" << '\n' << "|2)Tuesday|" << '\n' << "-----------" << '\n' << " 3)Wednesday" << '\n' << " 4)Thursday" << '\n' << " 5)Friday" << '\n' << " 6)Saturday" << '\n' << " 7)Sunday" << '\n' << " 8)Return to the menu"; break;
		case 3:cout << "Select a day: " << '\n' << "========================================================================================================================" << '\n' << " 1)Monday" << '\n' << " 2)Tuesday" << '\n' << "-------------" << '\n' << "|3)Wednesday|" << '\n' << "-------------" << '\n' << " 4)Thursday" << '\n' << " 5)Friday" << '\n' << " 6)Saturday" << '\n' << " 7)Sunday" << '\n' << " 8)Return to the menu"; break;
		case 4:cout << "Select a day: " << '\n' << "========================================================================================================================" << '\n' << " 1)Monday" << '\n' << " 2)Tuesday" << '\n' << " 3)Wednesday" << '\n' << "------------" << '\n' << "|4)Thursday|" << '\n' << "------------" << '\n' << " 5)Friday" << '\n' << " 6)Saturday" << '\n' << " 7)Sunday" << '\n' << " 8)Return to the menu"; break;
		case 5:cout << "Select a day: " << '\n' << "========================================================================================================================" << '\n' << " 1)Monday" << '\n' << " 2)Tuesday" << '\n' << " 3)Wednesday" << '\n' << " 4)Thursday" << '\n' << "----------" << '\n' << "|5)Friday|" << '\n' << "----------" << '\n' << " 6)Saturday" << '\n' << " 7)Sunday" << '\n' << " 8)Return to the menu"; break;
		case 6:cout << "Select a day: " << '\n' << "========================================================================================================================" << '\n' << " 1)Monday" << '\n' << " 2)Tuesday" << '\n' << " 3)Wednesday" << '\n' << " 4)Thursday" << '\n' << " 5)Friday" << '\n' << "------------" << '\n' << "|6)Saturday|" << '\n' << "------------" << '\n' << " 7)Sunday" << '\n' << " 8)Return to the menu"; break;
		case 7:cout << "Select a day: " << '\n' << "========================================================================================================================" << '\n' << " 1)Monday" << '\n' << " 2)Tuesday" << '\n' << " 3)Wednesday" << '\n' << " 4)Thursday" << '\n' << " 5)Friday" << '\n' << " 6)Saturday" << '\n' << "----------" << '\n' << "|7)Sunday|" << '\n' << "----------" << '\n' << " 8)Return to the menu"; break;
		case 8:cout << "Select a day: " << '\n' << "========================================================================================================================" << '\n' << " 1)Monday" << '\n' << " 2)Tuesday" << '\n' << " 3)Wednesday" << '\n' << " 4)Thursday" << '\n' << " 5)Friday" << '\n' << " 6)Saturday" << '\n' << " 7)Sunday" << '\n' <<"----------------------"<<'\n'<< "|8)Return to the menu|" << '\n' << "----------------------";
		}
	}
	return 1;
}

bool yes_or_no() {//ВЫВОДИТ ВЫБОР ДА ИЛИ НЕТ В МЕНЮ//ПОКА ЧТО НИГДЕ НЕ ИСПОЛЬЗУЕТСЯ
	int i = 1;
	cout << "========================================================================================================================" << "-----" << '\n'<< "|yes|" << '\n' << "-----" << '\n' << " no";
	while (true) {
		char q = _getch();
		if (q == 13) {
			switch (i) {
			case 1: return true;
			case 2: return false;
			}
		}
		else if (q == 72) {
			if (i == 1) {
				i = 2;
			}
			else {
				i--;
			}
		}
		else if (q == 80) {
			if (i == 2) {
				i = 1;
			}
			else {
				i++;
			}
		}
		system("cls");
		switch (i) {
		case 1:cout << '\n' << "========================================================================================================================"<<'\n' << "-----" << '\n'<<"|Yes|" << '\n' << "-----" << '\n' << " No"; break;
		case 2:cout << '\n' << "========================================================================================================================"<<'\n'<< " Yes" << '\n' << "----" << '\n' << "|No|" << '\n' << "----"; break;

		}
	}
}//пока что не реализована

//CLASS TIME----------------------------------------------------

time::time() {//КОНСТРУКТОР TIME ДЛЯ КОРРЕКТНОГО СОСТОЯНИЯ ПО УМОЛЧАНИЮ
	hour = 0;
	minute = 0;
}

time::time(int x, int y) {//кКОНСТРУКТОР TIME СО ЗНАЧЕНИЯМИ 
	hour = x;
	minute = y;
}

void time::in(int x, int y) {//ВВОД TIME С ПЕРЕДАВАЕМЫМИ ЗНАЧЕНИЯМИ 
	hour = x;
	minute = y;
}

void time::in(string s) {//ВВОД TIME С ПЕРЕДАВАЕМОЙ СТРОКОЙ, ИСПОЛЬЗУЕТСЯ ДЛЯ МЕТОДА LOADING(GROUP_LIST)
	int f = 1;
	try {
		int i = 0;
		while (s[i] != '/' && s[i] != ':') {//поиск двоеточия
			if (i + 1 == s.size() || i > 2) {//проверка, что до двоеточия больше чем 2 символа и двоеточие существует
				throw 1;
			}
			i++;
		}
		for (int I = i - 1; I >= 0; f *= 10, I--) {//преобразование char в int
			if (s[I] > 57 || s[I] < 48) {//проверка на то что в char находятся именно числа
				throw 1;
			}
			hour += ((s[I] - '0') * f);
		}
		if (hour > 24 || i + 3 < s.size() || i + 1 == s.size()) {//проверка на корректность hour, и на корректность следующих двух символов
			throw 1;
		}
		i += 2;
		for (i, f = 1; s[i] != '/' && s[i] != ':'; f *= 10, i--) {//преобразование char в int
			if (s[i] > 57 || s[i] < 48) {//проверка на то что в char находятся именно числa
				throw 1;
			}
			minute += ((s[i] - '0') * f);
		}
		if (minute > 60) {//проверка на корректность minute
			throw 1;
		}
	}
	catch (int f) {
		if (f == 1) {
			cout << "The error in the boot file!" << '\n' << "Write the time in the correct format." << '\n' << "For example 12:12 or 12/12.";
			Sleep(200);
		}
	}
}

void time::in() {//ASCII: 49-57 цифры/
	try {		 //ВВОД TIME БЕЗ ПЕРЕДАВАЕМЫХ ЗНАЧЕНИЙ 
		hour = 0;
		minute = 0;
		int f = 1;
		cout << "Write the start time of the lesson in 24 hour format" << '\n';
		string s;
		cin >> s;
		int i = 0;
		while (s[i] != '/' && s[i] != ':') {//поиск двоеточия
			if (s[i + 1] == '\0' || i > 2) {//проверка, что до двоеточия больше чем 2 символа и двоеточие существует 
				throw 1;
			}
			i++;
		}
		for (int I = i - 1; I >= 0; f *= 10, I--) {//преобразование char в int
			if (s[I] > 57 || s[I] < 48) {//проверка на то что в char находятся именно числа
				throw 1;
			}
			hour += ((s[I] - '0') * f);
		}
		if (hour > 24 || s[i + 3] != '\0' || s[i + 1] == '\0') {//проверка на корректность hour, и на корректность следующих двух символов
			throw 1;
		}
		i += 2;
		for (i, f = 1; s[i] != '/' && s[i] != ':'; f *= 10, i--) {//преобразование char в int
			if (s[i] > 57 || s[i] < 48) {//проверка на то что в char находятся именно числа
				throw 1;
			}
			minute += ((s[i] - '0') * f);
		}
		if (minute > 60) {//проверка на корректность minute
			throw 1;
		}
	}
	catch (int i) {
		system("cls");
		if (i == 1) {
			cout << "Write the time in the correct format."<<'\n'<<"For example 12:12 or 12/12.";
			Sleep(3000);
			system("cls");
			in();
		}
	}
}

time::time(const time&b) { //КОНТСРУКТОР КОПИРОВАНИЯ ДЛЯ TIME
	hour = b.hour;
	minute = b.minute;
}

void time::print_time() { //ПЕЧАТЬ TIME
	//Условия для вывода времени в общепринятом формате 
	if (hour < 10 && minute < 10) {
		cout << '0' << hour << ":" << '0' << minute;
	}
	else if ( minute < 10) {

		cout << hour << ":" << '0' << minute;
	}
	else if (hour < 10) {
		cout << '0' << hour << ":" << minute;
	}
	else {
		cout << hour << ":" << minute;
	}
}

void time::print_time_file() {//ПЕЧАТЬ TIME В ФАЙЛ, АНАЛОГИЧНА ПРЕДЫДУЩЕЙ ФУНКЦИИ
	if (hour < 10 && minute < 10) {
		out << '0' << hour << ":" << '0' << minute;
	}
	else if (minute < 10) {
		out << hour << ":" << '0' << minute;
	}
	else if (hour < 10) {
		out << '0' << hour << ":" << minute;
	}
	else {
		out << hour << ":" << minute;
	}
}

//void time::print1_to_dowload() {
//	if (hour < 10 && minute < 10) {
//		out2 << '0' << hour << ":" << '0' << minute;
//	}
//	else if (minute < 10) {
//		out2 << hour << ":" << '0' << minute;
//	}
//	else if (hour < 10) {
//		out2 << '0' << hour << ":" << minute;
//	}
//	else {
//		out2 << hour << ":" << minute;
//	}
//}

//CLASS LESSON--------------------------------------------------

lesson::lesson() {//КОСНТУРУКТОР LESSON(СПИСОК УРОКОВ В ОДИН ДЕНЬ)
	head = NULL;
}

lesson::~lesson() {//ДЕСТКУРТОР LESSON
	while (head != NULL) {//удаления списка, содержащегося в lesson(struct node)
		node_lesson*help = head;
		head = head->next;
		delete help;
	}
}

void lesson::add_lesson(string name, int number, time nw) {//ДОБАВЛЕНИЯ ЭЛЕМЕНТА В СПИСОК С СОРТИРОВКОЙ ПО ВРЕМЕНИ 
	node_lesson*help = new node_lesson;//создаем будущий элемент списка
	if (head == NULL) {//если список пуст
		help->lesson_name = name;
		help->cabinet_number = number;
		help->now = nw;
		help->next = NULL;
		head = help;
		return;
	}
	//присваем значения будущему элементу списка
	help->lesson_name = name;
	help->cabinet_number = number;
	help->now = nw;
	help->next = NULL;
	node_lesson*cur = head;
	node_lesson*last = NULL;
	for (cur; cur->next != NULL; cur = cur->next) {//проходим по списку пока(cur->next!-NULL), ищем нужный интервал времни 
		int hour1 = nw.get_hour();
		int hour2 = cur->now.get_hour();
		int minute1 = nw.get_minute();
		int minute2 = cur->now.get_minute();
		if (hour1 < hour2 && minute1 < minute2) {//сравниеваем время текущего и будущего элемента 
			if (last == NULL) {//если первый заход в цикл, т.е. будущей элемент встает на первое место 
				help->next = cur;
				head = help;
				return;
			}
			else {//добавляем будущий элемент в нужное место 
				help->next = cur;
				last->next = help;
				return;
			}
		}
		else if (hour1 == hour2 && minute1 == minute2) {//ОБРАБОТКА ИСКЛЮЧЕНИЯ, ЕСЛИ ЭТО ВРЕМЯ УЖЕ ЗАНЯТО
			//УЗНАЕМ У ПОЛЬЗОВАТЕЛЯ, ОСТАВИТЬ ВСЕ КАК ЕСТЬ ИЛИ ЗАМЕНИТЬ НА ТЕКУЩИЙ УРОК
			string q;
			q = "a";//для запуска цикла
			while (q != "yes" && q != "no") {
				cout << "This time is already taken. Do you want to re-write this time? ";
				cin >> q;
				if (q == "yes") {
					cur->cabinet_number = number;
					cur->lesson_name = name;
					cur->now = nw;
					return;
				}
				else if (q == "no") {
					return;
				}
				else {
					cout << "Write the correct answer(yes or no)" << '\n';
					Sleep(500);
					system("cls");
				}
			}
		}
		last = cur;//присваиваем значение last перед тем как cur перейдем в cur->next
	}
	//ОБРАБОТКА ПОСЛЕДНЕГО ЭЛЕМЕНТА, Т.К. ИЗ-ЗА НАЛИЧИЯ LAST ЦИКЛ ОГРАНИЧЕН CUR->NEXT!=NULL
	int hour1 = nw.get_hour();
	int hour2 = cur->now.get_hour();
	int minute1 = nw.get_minute();
	int minute2 = cur->now.get_minute();
	if (hour1 < hour2 && minute1 < minute2) {//сравниваем время текущего и будущего элемента
		if (last == NULL) { //если цикл имеет 0 заходов, т.е. менняем первый элмент
			help->next = cur;
			head = help;
			return;
		}
		else if (last == head) {//если last== head, будущий встает на место второго элемента
			help->next = cur;
			last->next = help;
			return;
		}
		else {//добавлеяем в нужное место будущий элемент
			help->next = cur;
			last->next = help;
			return;
		}
	}
	else if (hour1 == hour2 && minute1 == minute2) {//ОБРАБОТКА ИСКЛЮЧЕНИЯ АНАЛОГИЧНА
		string q;
		q="a";
		while (q != "yes" && q != "no") {
			cout << "This time is already taken. Do you want to re-write this time? ";
			cin >> q;
			if (q == "yes") {
				cur->cabinet_number = number;
				cur->lesson_name = name;
				cur->now = nw;
				return;
			}
			else if (q == "no") {
				return;
			}
			else {
				cout << "Write the correct answer(yes or no)" << '\n';
				Sleep(500);
				system("cls");
			}
		}
	}
	cur->next = help;//ЕСЛИ БУДУЩИЙ ЭЛЕМЕНТ ОКАЗАЛСЯ БОЛЬШЕ ВСЕХ ЭЛЕМЕНТОВ СПИСКА
}

void lesson::add_lesson() {//ДОБАВЛЕНИЕ УРОКА БЕЗ ПЕРЕДВАННЫХ ЗНАЧЕНИЙ
	string name;
	cout << "Write name of the lesson"<<'\n';
	cin >> name;
	system("cls");
	cout << "Write number of cabinet"<<'\n';
	int number; 
	cin >> number;
	system("cls");
	time nw;
	nw.in();
	system("cls");
	add_lesson(name, number, nw);//вызов функции добавления со значениями
}

lesson::lesson(const lesson&b)//КОНСТРУКТОР КОПИРОВАНИЯ ДЛЯ LESSON, ОСНОВАН НА ФУНКЦИИ ДОБАВЛЕНИЯ СО ЗНАЧЕНИЯМИ
{
	head = NULL;
	for (node_lesson*cur = b.head; cur != NULL; cur = cur->next) {
		add_lesson(cur->lesson_name, cur->cabinet_number, cur->now);
	}
}

void lesson::day_lessons() {//ПЕЧАТЬ УРОКОВ НА ДАННЫЙ ДЕНЬ 
	int i = 1;
	system("cls");
	for (node_lesson*cur = head ; cur != NULL; cur = cur->next,i++) {
		cout << "Lesson #" << i << " "; /*<< "lesson name: " << cur->lesson_name << '\n' << '\n' << "cabinet number: " << cur->cabinet_number << '\n' << '\n' << "lesson time: ";*/
	   (cur->now).print_time();
	   cout << "-" << cur->lesson_name << "(" << cur->cabinet_number << ")";
		cout << '\n' ;
	}
	cout << '\n';
	cout << "Press any key for continue";
	_getch();
}

void lesson::day_lesson_time(time tm) {//ФУНКЦИЯ ПОИСКА УРОКА ПО ЗАДАННОМУ ВРЕМЕНИ, ИСПОЛЬЗУЕТСЯ SEARCH_FOR_TODAY(WEEK)
	int i = 1;
	system("cls");
	for (node_lesson*cur = head; cur != NULL; cur = cur->next, i++) {
		if (tm.get_hour() == cur->now.get_hour()&&tm.get_minute() == cur->now.get_minute()) {
			/*cout << "Lesson name: " << cur->lesson_name << '\n' << "Cabinet number: " << cur->cabinet_number << '\n';
		*/	
			cout << "lesson #" << i << '\n';
			cur->now.print_time();
			cout<<"-"<< cur->lesson_name << "(" << cur->cabinet_number << ")";
			cout <<'\n' << '\n' << "Press any key for continue...";
			_getch();
			return;
		}
	}
	cout << "At this time there is no lesson";
	Sleep(700);
}

lesson lesson::operator = (const lesson&b) {//ПЕРЕГРУЗКА ОПЕРАТОРА = ДЛЯ LESSON
	head = NULL;
	for (node_lesson*cur = b.head; cur != NULL; cur = cur->next) {
		int cabinet = cur->cabinet_number;
		string lesson = cur->lesson_name;
		time nw = cur->now;
		add_lesson(lesson, cabinet, nw);
	}
	return*this;
}

void lesson::delete_lesson(time tm) {//УДАЛЕНИЕ УРОКА ПО ВРЕМЕНИ
	if (head == NULL) {//обработка исключениия, если список пуст
		cout << "There are no lesson on this day";
		return;
	}
	node_lesson*cur = head;
	node_lesson*prev = head;
	if (tm.get_hour() == cur->now.get_hour() && tm.get_minute() == cur->now.get_minute()) {//если первый элемент является искомым
		head = head->next;
		delete cur;
		return;
	}
	try {
		for (cur; cur != NULL; cur = cur->next) {
			if (tm.get_hour() == cur->now.get_hour() && tm.get_minute() == cur->now.get_minute()) {//если урок совпал 
				if (cur->next == NULL) {//если урок совпал и он является последним элементом списка
					throw 1;
				}
				throw 2;//если урок совпал, но он не является последним элементом списка
			}
			prev = cur;
		}
	}
	catch (int i) {//обаботка 
		if (i == 1) {
			prev->next = NULL;
			delete cur;
			return;
		}
		prev->next = cur->next;
		delete cur;
		return;
	}
	cout << "At this time there are not lesson";//если список пройден до конца и искомого элемента не оказалось
	Sleep(3000);
}

int lesson::print_just_one(int i) {//выводит один урок в формате время-предмет(номер кабинета), основано на поиска i-ого урока т.к ВЫВОД ПРОИСХОДИТ ПОСТРОЧНО
	int I = 0;                     //ТОЛЬКО ДЛЯ group_schedule, НЕ ДЛЯ ПОЛЬЗОВАТЕЛЯ
	for (node_lesson*cur = head; cur != NULL; cur = cur->next,I++) {
		if (i == I) {
			int i = 8;//КОЛ-ВО ПРОБЕЛОВ ПО УМОЛЧАНИЮ 8
			cur->now.print_time();
			cout << "-" << cur->lesson_name << "(" << cur->cabinet_number << ")";
			i += cur->lesson_name.length();
			i += number_of_digit(cur->cabinet_number);
			return i;//ВОЗВРАЩАЕТСЯ ДЛЯ ВЫВОДА НУЖНОГО КОЛ-ВА ПРОБЕЛОВ
		}
	}
	return 0;//ЕСЛИ УРОКА НЕ НАШЛОСЬ
}

int lesson::print_just_one_file(int i) {//выводит один урок в формате время-предмет(номер кабинета) АНАЛОГИЧНО ПРЕДЫДУЩЕЙ ФУНКЦИИ ТОЛЬКО ДЛЯ ВЫВОДА В ФАЙЛ
	int I = 0;                          //ТОЛЬКО ДЛЯ group_schedule_file, НЕ ДЛЯ ПОЛЬЗОВАТЕЛЯ
	for (node_lesson*cur = head; cur != NULL; cur = cur->next, I++) {
		if (i == I) {
			int i = 8;
			cur->now.print_time_file();
			out << "-" << cur->lesson_name << "(" << cur->cabinet_number << ")";
			i += cur->lesson_name.length();
			i += number_of_digit(cur->cabinet_number);
			return i;
		}
	}
	return 0;
}

//void lesson::print2_to_dowload() {
//	node_lesson*cur = head;
//	for (cur; cur->next != NULL; cur = cur->next) {
//		out2 << cur->lesson_name << "-" << cur->cabinet_number << "-";
//		cur->now.print1_to_dowload();
//		out2 << "/";
//	}
//	out2 << cur->lesson_name << "-" << cur->cabinet_number << "-";
//	cur->now.print1_to_dowload();
//}

//CLASS WEEK----------------------------------------------------

week::week() {//КОНСТРУКТОР КЛАССА WEEK, ОБЯЗАТЕЛЕН Т.К WEEK ПРЕДСТАВЛЯЕТ СОБОЙ СПИСОК ИЗ 7 ЭЛЕМЕНТОВ. ВСЕГДА
	head = NULL;
	node_day*help=new node_day;
	node_day*cur = help;
	for (int i = 1; i < 7; i++) {
		cur->day_name = i;
		node_day*help1 = new node_day;
		cur->next = help1;
		cur = cur->next;
	}
	cur->day_name = 7;
	cur->next = NULL;
	head = help;
}

week::~week() {// ДЕСТРУКТОР
	while (head != NULL) {
		node_day*help = head;
		head = head->next;
		delete help;
	}
}

week::week(const week&b) {//КОНСТРУКТОР КОПИРОВАНИЯ ДЛЯ WEEK
	head = NULL;
	node_day*help = new node_day;
	node_day*cur = help;
	for (int i = 1; i < 7; i++) {
		cur->day_name = i;
		node_day*help1 = new node_day;
		cur->next = help1;
		cur = cur->next;
	}
	cur->day_name = 7;
	cur->next = NULL;
	head = help;
	node_day*cur1 = head;
	for (node_day*cur = b.head; cur != NULL; cur = cur->next, cur1 = cur1->next) {
		cur1->today = cur->today;
	}
}

week week::operator=(const week&b) { //ПЕРЕГРУЗКА ОПЕРАТОРА = ДЛЯ WEEK
	head = NULL;
	node_day*help = new node_day;
	node_day*cur = help;
	for (int i = 1; i < 7; i++) {
		cur->day_name = i;
		node_day*help1 = new node_day;
		cur->next = help1;
		cur = cur->next;
	}
	cur->day_name = 7;
	cur->next = NULL;
	head = help;
	node_day*cur1 = head;
	for (node_day*cur = b.head; cur != NULL; cur = cur->next, cur1 = cur1->next) {
		cur1->today = cur->today;
	}
	return*this;
}

void week::change_day(int i,lesson td){//ДОБАВЛЕНИЯ СПИСКА УРОКОВ(CLASS LESSON) ПО i-ому дню недели, НЕРЕАЛИЗОВАНА НИГДЕ 
	node_day*cur = head;
	for (cur; cur->day_name != i; cur = cur->next) {}
	cur->today = td;
}

void week::change_day() {//ИЗМЕНЕНИЕ ДАННОГО ДНЯ НЕДЕЛИ( ДОБАВЛЕНИЕ|УДАЛЕНИЕ)
	int p = 1;
	int i = choose_day();//ВОЗВРАЩЕНИЕ ЗНАЧЕНИЯ ДНЯ НЕДЕЛИ С ПОИОЩЬЮ CHOOSE_DAY(1<=I<=7)
	while (i != 8) {// I==8 ОЗНАЧАЕТ ЧТО ПОЛЬЗОВАТЕЛЬ ВЫБРАЛ ВЫХОД В МЕНЮ 
		if (p != 1) {// если заход в цикл происходит не впервые
			 i = choose_day();
			 if (i == 8) {//если пользователь выбрал выход в меню
				 return;
			 }
		}
		p++;
		node_day*cur = head;
		for (cur; cur->day_name != i; cur = cur->next) {}//доходим до нужного i-ого дня 
		int f = 1;
		time nw;
		string day;
		//присваиваем нужное имя дня в зависимости от i для удобовста пользователя
		if (i == 1) {
			day = "Monday";
		}
		else if (i == 2) {
			day = "Tuesday";
		}
		else if (i == 3) {
			day = "Wednesday";
		}
		else if (i == 4) {
			day = "Thursday";
		}
		else if (i == 5) {
			day = "Friday";
		}
		else if (i == 6) {
			day = "Saturday";
		}
		else if (i == 7) {
			day = "Sunday";
		}
		cout << "Current day for change: " << day << '\n' << "========================================================================================================================" << '\n' << "--------------" << '\n' << "|1)Add lesson|" << '\n' << "--------------" << '\n' << " 2)Delete lesson" << '\n' << " 3)Return back" << '\n';
		bool check = true;
		while (check) {//ПОКА НЕ CASE 3(Т.Е ПОКА ПОЛЬЗОВАТЕЛЬ НЕ ВЫБРАЛ ВОЗРАЩЕНИЕ НА ПУКНТ ОБРАТНО 
			char q = _getch();
			if (q == 13) {
				system("cls");
				switch (f) {
				case 1:(cur->today).add_lesson(); break;
				case 2:
					nw.in();
					(cur->today).delete_lesson(nw);
					break;
				case 3: check=false;
				}
			}
			else if (q == 72) {
				if (f == 1) {
					f = 3;
				}
				else {
					f--;
				}
			}
			else if (q == 80) {
				if (f == 3) {
					f = 1;
				}
				else {
					f++;
				}
			}
			system("cls");
			switch (f) {
			case 1: cout << "Current day for change: " << day << '\n' << "========================================================================================================================" << '\n' << "--------------" << '\n' << "|1)Add lesson|" << '\n' << "--------------" << '\n' << " 2)Delete lesson" << '\n' << " 3)Return back" << '\n'; break;
			case 2:	cout << "Current day for change: " << day << '\n' << "========================================================================================================================" << '\n' << " 1)Add lesson" << '\n' << "-----------------" << '\n' << "|2)Delete lesson|" << '\n' << "-----------------" << '\n' << " 3)Return back" << '\n'; break;
			case 3: cout << "Current day for change: " << day << '\n' << "========================================================================================================================" << '\n' << " 1)Add lesson" << '\n' << " 2)Delete lesson" << '\n' << "---------------" << '\n' << "|3)Return back|" << '\n' << "---------------" << '\n'; break;
			}
		}
		system("cls");
	}
	system("cls");
}

void week::group_schedule() {//ВЫВОДИТ I-ЫЙ УРОК В КАЖДОМ ДНЕ НЕДЕЛИ ПОСТРОЧНО
	int i = 0;               //ТОЛЬКО ДЛЯ print, НЕ ДЛЯ ПОЛЬЗОВАТЕЛЯ  
	int f = 0;
	int a = 1;
	while (a!=0) {
		a = 0;
		node_day*help = head;
		for (help; help != NULL; help = help->next) {
			cout << "|";
			f=(help->today).print_just_one(i);//ИСПОЛЬЗОВАНИЕ PRINJ_JUST_ONE(СLASS LESSON)//DОЗВРАЩАЕТ КОЛ-ВО ЗАНЯТЫХ СИМОВЛОВ
			for (int c = 25 - f; c > 0; c--) {//ВЫВОД НУЖНОГО КОЛ-ВА ПРОБЕЛОВ
				cout << " ";
			}
			if (f != 0) {
				a++;//УСЛОВИЕ ЧТО УРОКИ ЕЩЕ СУЩЕСТВУЮТ
			}
		}
		i++;
		//для корреткого вида таблицы
		cout << "|";
		cout << '\n';
		if (a != 0) {
			cout << "     ";
		}
	}
}

void week::group_schedule_file() {//ВЫВОДИТ I-ЫЙ УРОК В КАЖДОМ ДНЕ НЕДЕЛИ ПОСТРОЧНО, АНАЛОГИЧНО ПРЕДЫДУЩЕЙ ФУНКЦИИ
	int i = 0;                    //ТОЛЬКО ДЛЯ result, НЕ ДЛЯ ПОЛЬЗОВАТЕЛЯ  
	int f = 0;
	int a = 1;
	while (a != 0) {
		a = 0;
		node_day*help = head;
		for (help; help != NULL; help = help->next) {
			out << "|";
			f = (help->today).print_just_one_file(i);
			for (int c = 25 - f; c > 0; c--) {
				out << " ";
			}
			if (f != 0) {
				a++;
			}
		}
		i++;
		out << "|";
		out << '\n';
		if (a != 0) {
			out << "     ";
		}
	}
} 

void week::search_for_today() {//ВЫВОДИТ НА ПЕЧАТЬ ЛИБО РАСПИСАНИЕ НА ВЕСЬ ДЕНЬ, ЛИБО ВЫПОЛНЯЕТ ПОИСК ПО ВРЕМЕНИ
	system("cls");
	int p = 1;
	int i = choose_day();//выбор дня
	while (i != 8) {
		if (p != 1) {//если выбор дня происходит не впервые
			i = choose_day();
			if (i == 8) {
				return;
			}
		}
		p++;
		string day;
		//присваиваем дню имя для удобства пользователя
		if (i == 1) {
			day = "Monday";
		}
		else if (i == 2) {
			day = "Tuesday";
		}
		else if (i == 3) {
			day = "Wednesday";
		}
		else if (i == 4) {
			day = "Thursday";
		}
		else if (i == 5) {
			day = "Friday";
		}
		else if (i == 6) {
			day = "Saturday";
		}
		else if (i == 7) {
			day = "Sunday";
		}
		system("cls");
		node_day*cur = head;
		for (cur; cur->day_name != i; cur = cur->next) {}
		time tm;
		int f = 1;
		cout << "Current day for change: " << day << '\n' << "========================================================================================================================" << '\n' << "--------------------------------" << '\n' << "|1)Print the whole day schedule|" << '\n' << "--------------------------------" << '\n' << " 2)Search by time" << '\n' << " 3)Return back" << '\n';
		bool check = true;
		while (check) {//пока не case 3(RETURN BACK!)
			char q = _getch();
			if (q == 13) {
				system("cls");
				switch (f) {
				case 1:(cur->today).day_lessons(); break;
				case 2:
					tm.in();
					(cur->today).day_lesson_time(tm);
					break;
				case 3:check = false;
				}
			}
			else if (q == 72) {
				if (f == 1) {
					f = 3;
				}
				else {
					f--;
				}
			}
			else if (q == 80) {
				if (f == 3) {
					f = 1;
				}
				else {
					f++;
				}
			}
			system("cls");
			switch (f) {
			case 1:	cout << "Current day for change: " << day << '\n' << "========================================================================================================================" << '\n' << "--------------------------------" << '\n' << "|1)Print the whole day schedule|" << '\n' << "--------------------------------" << '\n' << " 2)Search by time" << '\n' << " 3)Return back" << '\n'; break;
			case 2:	cout << "Current day for change: " << day << '\n' << "========================================================================================================================" << '\n' << " 1)Print the whole day schedule" << '\n' << "------------------" << '\n' << "|2)Search by time|" << '\n' << "------------------" << '\n' << " 3)Return back" << '\n'; break;
			case 3: cout << "Current day for change: " << day << '\n' << "========================================================================================================================" << '\n' << " 1)Print the whole day schedule" << '\n' << " 2)Search by time" << '\n' << "---------------" << '\n' << "|3)Return back|" << '\n' << "---------------" << '\n'; break;
			}
		}
		system("cls");
	}
}

//void week::print3_to_download(){
//	for (node_day*cur=head; cur!= NULL; cur = cur->next) {
//		cur->today.print2_to_dowload();
//		cout << "STOP";
//		_getch();
//		out2 << "|";
//	}
//}

//CLASS GROUP_LIST----------------------------------------------

group_list::group_list() {//КОНСТРУКТОР КЛАССА GROUP_LIST
	main_root = NULL;
}

void group_list::Default() {//устанавливает дефолтное значение group_list(необходим для удаления всего дерева и корректного продолжения работы в меню)
	main_root = NULL;
}

//БАЛАНСИРОВКА

int group_list::find_height(tree*root) {
	int heightleft = 0;
	int heightright = 0;
	if (root->right) {
		heightright = root->right->height;
	}
	if (root->left) {
		heightleft = root->left->height;
	}
	return heightright - heightleft;
}

void group_list::fix_height(tree*root) {
	int heightleft = 0;
	int heightright = 0;
	if (root->right) {
		heightright = root->right->height;
	}
	if (root->left) {
		heightleft = root->left->height;
	}
	if (heightleft > heightright) {
		root->height = heightleft + 1;
	}
	else {
		root->height = heightright + 1;
	}
}

group_list:: tree* group_list::rotateright(tree*rootR){
	tree*help = rootR->left;
	rootR->left = help->right;
	help->right = rootR;
	fix_height(rootR);
	fix_height(help);
	return help;
}

group_list::tree* group_list::rotateleft(tree*rootL) {
	tree*help = rootL->right;
	rootL->right = help->left;
	help->left = rootL;
	fix_height(rootL);
	fix_height(help);
	return help;
}

group_list::tree* group_list::balance(tree*root) {
	fix_height(root);
	if (find_height(root)==2) {
		if (find_height(root->right) < 0) {
			root->right = rotateright(root->right);
		}
		return rotateleft(root);
	}
	if (find_height(root) == -2) {
		if (find_height(root->left) > 0) {
			root->left = rotateleft(root->left);
		}
		return rotateright(root);
	}
	return root;
}

group_list::tree* group_list::minimum(tree*root)
{
	if (root->left) {
		return minimum(root->left);
	}
	else{
		return root;
	}
}

group_list::tree* group_list::delete_min(tree* root)
{
	if (root->left == 0) {
		return root->right;
	}
	root->left = delete_min(root->left);
	return balance(root);
}

//РЕКУРСИВНЫЕ ФУНКЦИИ GROUP_LIST ТИПА PRIVAT
	
void group_list::add(int number, week week, tree*&root) {//РЕУКРСИВНОЕ ДОБАВЛЕНИЕ ЭЛЕМЕНТА//ПОСТРОЕНИЕ ДЕРЕВА ПРОИСХОДИТ ПО НОМЕРАМ ГРУПП
	//ЕСЛИ ТАКАЯ ГРУППА УЖЕ СУЩЕСТВУЕТ
	if (root!=NULL && number == root->group_number) {
		cout << "Group #"<<number<<" already has a shedule, rewrite the schedule for this group?" << '\n';//узнаем хочет ли пользователь перезаписать расписание для существующей группы
		string help;
		cin >> help;
		while (help != "yes" && help != "no") {
			system("cls");
			cout << "Write the correct answer(yes or no)" << '\n';
			Sleep(500);
			system("cls");
			cout << "Group #" << number << " already has a shedule, rewrite the schedule for this group?" << '\n';//узнаем хочет ли пользователь перезаписать расписание для существующей группы
			string menu;
			cin >> menu;
			help = menu;
		}
		system("cls");
		if (help == "no") {
			return;
		}
		else if (help == "yes") {
			root->schedule = week;
			return;
		}
	}
	if (root == NULL) {//ТОЧКА ОСТАНОВКИ
		root = new tree;
		root->height = 1;
		root->group_number = number;
		root->schedule = week;
		root->left = NULL;
		root->right = NULL;
	}
	else if (root->group_number > number) {
		add(number, week, root->left);
	}
	else {
		add(number, week, root->right);
	}
	root = balance(root);// ЗАКОММЕНТИРОВАТЬ В СЛУЧАЕ ВОЗНИКНОВЕНИЯ АВАРИЙНОЙ СИТУАЦИИ
}

void group_list::print(tree*root) {//ВЫВОД НОМЕРА ГРУППЫ И ОТПРАВЛЕНИЕ НА GROUP_SCHEDULE(WEEK)
	if (root != NULL) {//ТОЧКА ОСТНОВКИ
		print(root->left);
		cout << (root->group_number)<<":";
		int a = number_of_digit(root->group_number)+1;
		for (int i = 5- a; i > 0; i--) {//вывод нужного кол-ва пробелов
			cout << " ";
		}
		root->schedule.group_schedule();
		for (int i = 188; i > 0; i--) {//вывод нужного кол-ва символов для создания границ таблицы вывода общего расписания
			cout << "-";
		}
		cout << '\n';
		print(root->right);
	}
}

void group_list::result(tree*root) {//ВЫВОД НОМЕРА ГРУППЫ И ОТПРАВЛЕНИЕ НА GROUP_SCHEDULE_FILE(WEEK)//АНАЛОГИЧНА ПРЕДЫДУЩЕЙ ФУНКЦИИ
	if (root != NULL) {
		result(root->left);
		out << (root->group_number) << ":";
		int a = number_of_digit(root->group_number) + 1;
		for (int i = 5 - a; i > 0; i--) {
			out << " ";
		}
		root->schedule.group_schedule_file();
		for (int i = 188; i > 0; i--) {
			out << "-";
		}
		out << '\n';
		result(root->right);
	}
}

void group_list::binary_for_change(tree*root, int number) {// БИНАРНЫЙ ПОИСК ДЛЯ ИЗМЕНИЯ РАСПИСАНИЯ НУЖНОЙ ГРУППЫ
	system("cls");
	while (root != NULL) {//ТОЧКА ОСТНОВКИ
		if (number == root->group_number) {
			root->schedule.change_day();
			return;
		}
		if (number >= root->group_number) {
			return binary_for_change(root->right, number);
		}
		else {
			return binary_for_change(root->left, number);
		}
	}
	cout << "Selected groups are not in the schedule"	;//ЕСЛИ НУЖНОЙ ГРУППЫ НЕ НАШЛОСЬ
	Sleep(1000);
}

void group_list::binary_for_current(tree*root, int number) {// БИНАРНЫЙ ПОИСКА ДЛЯ УРОКА В ДАННОЕ ВРЕМЯ ИЛИ РАСАПИСАНИЯ НА НУЖНЫЙ ДЕНЬ 
	system("cls");
	while (root != NULL) {//ТОЧКА ОСТНОВКИ
		if (number == root->group_number) {
			root->schedule.search_for_today();
			return;
		}
		if (number >= root->group_number) {
			return binary_for_current(root->right, number);
		}
		else {
			return binary_for_current(root->left, number);
		}
	}
	cout << "Selected groups are not in the schedule";//ЕСЛИ НУЖНОЙ ГРУППЫ НЕ НАШЛОСЬ
	Sleep(3000);
}

void group_list::Delete(int number, tree*&root) {//УДАЛЕНИЕ ДЛЯ ТРЕХ СЛУЧАЕВ ПОСТОРОЕНИЯ ДЕРЕВА(если удаляемый элмент не нашелся ничего не происходит)
	if (root == NULL) {//точка остнавки
		return;
	}
    if (root->group_number > number) {
		Delete(number, root->left);
	}
	else if(root->group_number<number) {
		Delete(number, root->right);
	}
	else {
		//----------------------ЗАКОММЕНТИРОВАТЬ В СЛУЧАЕ ВОЗНИКНОВЕНИЯ АВАРИЙНОЙ СИТУАЦИИ
		tree*help = root;
		tree*helpl = root->left;
		tree*helpr = root->right;
		if (!helpr) {
			root = root->left;
			delete help;
			return;
		}
		tree*min = minimum(helpr);
		min->right = delete_min(helpr);
		min->left = helpl;
		root = balance(min);
		return;
		//----------------------РАСКОММЕНТИРОВАТЬ В СЛУЧАЕ ВОЗНИКНОВЕНИЯ АВАРИЙНОЙ СИТУАЦИИ
		//tree*help = root;
		//if (root->right == NULL) {
		//	root = root->left;
		//	delete help;
		//}
		//else if (root->left == NULL) {
		//	root = root->right;
		//	delete help;
		//}
		//else {
		//	tree*r = root->right;
		//	if (r->left == NULL) {
		//		r->left = root->left;
		//		root = r;
		//		delete help;
		//	}
		//	else {
		//		tree*p = r->left;
		//		while (p->left != NULL) {
		//			p = p->left;
		//			r = r->left;
		//		}
		//		help->group_number = p->group_number;
		//		r->left = p->right;
		//		delete p;
		//	}
		//}
	}
	root = balance(root);//ЗАКОММЕНТИРОВАТЬ В СЛУЧАЕ ВОЗНИКНОВЕНИЯ АВАРИЙНОЙ СИТУАЦИИ
}

void group_list::delete_all(tree*&root) {//УДАЛЕНИЕ ВСЕГО ДЕРЕВА ПРОХОДОМ ЛКП
	if (root->left) {
		delete_all(root->left);
	}
	if (root->right) {
		delete_all(root->right);
	}
	delete root;
}

void group_list::Draw(tree*root, int lvl) {//РЕКУСРИВНАЯ ОТРИСОВКА ДЕРЕВА 
	if (root) {
		Draw(root->left, lvl + 1);
		for (int i = 0; i < lvl; i++) cout << "   ";
		cout << root->group_number << endl;
		Draw(root->right, lvl + 1);
	}
}

//void group_list::save_in_download(tree*root) {
//	if (root) {
//		save_in_download(root->left);
//		out2 << (root->group_number)<<"|";
//		root->schedule.print3_to_download();
//		out2 << '\n';
//		save_in_download(root->right);
//	}
//}

//НЕРЕКУРСИВНЫЕ ФУНКЦИИ GROUP_LIST ТИПА PUBLIC

void group_list::add_group(int number, week week) {//ДОБАВЛЕНИЕ ЭЛЕМЕНТА GROUP_LIST СО ЗНАЧЕНИЯМИ
	add(number, week, main_root);//вызов рекурсивной функции
}

void group_list::add_group() {//ДОБАВЛЕНИЕ ЭЛЕМЕНТА GROUP_LIST БЕЗ ЗНАЧЕНИЙ
	int number;
	cout << "Write a number for the new group: ";
	cin >> number;
	system("cls");
	week week;
	cout << "Do you want to add a schedule for the new group right now? " << '\n';//узнаем хочет ли пользователь сразу заполнить расписание для новой группы
	string help;
	cin >> help;
	while (help != "yes" && help != "no") {
		system("cls");
		cout << "Write the correct answer(yes or no)" << '\n';
		Sleep(500);
		system("cls");
		cout << "Do you want to add a schedule for the new group right now? " << '\n';
		string menu;
		cin >> menu;
		help = menu;
	}
	system("cls");
	if (help == "yes") {
		week.change_day();//если ответ "yes" вызов change_day(week) для изменения расписания
	}
	add(number, week, main_root);//вызов рекурсивной функции
}

void group_list::Delete(int number) {//УДАЛЕНИЕ ЭЛЕМЕНТА GROUP_LIST ПО НОМЕРУ ГРУППЫ
	Delete(number, main_root);//вызов рекурсивной функции
}

void group_list::print_all() {//ВЫВОД РАСПИСАНИЯ В ТАБЛИЧНОМ ВИДЕ
	cout<<"#    |"<< "Monday                   " << "|" << "Tuesday                  " << "|" << "Wednesday                " << "|" << "Thursday                 " << "|" << "Friday                   " << "|" << "Saturday                 " << "|" << "Sunday                   " << "|";
	cout << '\n';
	for (int i = 188; i > 0; i--) {
		cout << "-";
	}
	cout << '\n';
	print(main_root);//вызов рекурсивной функции
}

void group_list::result_file(){//ВЫВОДИТ РАСПИСАНИЕ В ТАБЛИЧНОМ ВИДЕ В ФАЙЛ
	out << "#    |" << "Monday                   " << "|" << "Tuesday                  " << "|" << "Wednesday                " << "|" << "Thursday                 " << "|" << "Friday                   " << "|" << "Saturday                 " << "|" << "Sunday                   " << "|";
	out << '\n';
	for (int i = 188; i > 0; i--) {
		out << "-";
	}
	out << '\n';
	result(main_root);//вызов рекурсивной функции
}

void group_list::binary_search_for_change(int number) {// БИНАРНЫЙ ПОИСК ДЛЯ ИЗМЕНИЯ РАСПИСАНИЯ НУЖНОЙ ГРУППЫ
	binary_for_change(main_root, number);//вызов рекурсивной функции
}

void group_list::binary_search_for_current(int number) {// БИНАРНЫЙ ПОИСКА ДЛЯ УРОКА В ДАННОЕ ВРЕМЯ ИЛИ РАСАПИСАНИЯ НА НУЖНЫЙ ДЕНЬ 
	binary_for_current(main_root, number);//вызов рекурсивной функции
}

void group_list::loading() {//ПОДГРУЗКА ДАННЫХ ИЗ ФАЙЛА, ПО УМОЛЧАНИЮ ДОБАВЛЯЕТ ДАННЫЕ УЖЕ К СОЗДАННОМУ РАСПИСАНИЮ
	while (!in.eof()) {//Считываем построчно. Одна строка - одна группы
		string a;
		getline(in, a);
		int i = 0;
		string help;
		int j = a.find('|');//ищем разделить основной информации "|" (номер группы|понедельник|вторник...|воскресенье|
		help = a.substr(i, j );//выделяем подстроку между "|" разделителями
		int group_number1=atoi(help.c_str());//считывем номер группы
		week b;
		int day = 0;
		for (i=j+1; i < a.size(); )//пока не конец первой строки
		{	
			day++;//cчетчик для добавления расписания в нужный день(1<=day<=7)
			lesson today;
			j = a.find('|',i);
			if (j == -1) {//по идее не нужно, т.к. каждая строка заканчивается разделителем, но без него работало некорректно, решил оставить
				help = a.substr(i, a.size() - i);
				break;
			}
			else
			{
				help = a.substr(i, j - i);//выделяем подстроку между "|" разделителями
				i = j + 1;
			}
			int I = 0;
			int J = help.find('/');//выделяем подстроку между "/" разделителями(т.е. ищем уроки в каждом дне
			if (J == -1) {//если урок всего один и разделителя "/" нет. Формат урока: время-имя_урока(номер_кабинета), соответственно в таком же порядке считываем 
				string lesson_name;
				int cabinet_number = 0;
				string cabinet;
				time now;
				string	TIME;
				int f = 0;
				while (help[f] != '-') {
					lesson_name += help[f];
					f++;
				}
				f++;
				while (help[f] != '-') {
					cabinet += help[f];
					f++;
				}
				f++;
				cabinet_number = atoi(cabinet.c_str());
				while (f < help.size()) {
					TIME += help[f];
					f++;
				}
				now.in(TIME);//вызов функции которая из string преобразует элемеyт класса time
				today.add_lesson(lesson_name, cabinet_number, now);//добавление урока в список уроков для текущего дня 
			}
			else {//аналогично начинаем считывать уроки(ЕСЛИ В ЭТОТ ДЕНЬ БОЛЬШЕ ЧЕМ ОДИН УРОК
				string help_for_help = help.substr(I, J);
				string lesson_name="";
				int cabinet_number = 0;
				string cabinet="";
				time now;
				string TIME="";
				int f = 0;
				while (help_for_help[f] != '-') {
					lesson_name += help_for_help[f];
					f++;
				}
				f++;
				while (help_for_help[f] != '-') {
					cabinet += help_for_help [f];
					f++;
				}
				f++;
				cabinet_number = atoi(cabinet.c_str());
				while (f < help_for_help.size()) {
					TIME += help_for_help[f];
					f++;
				}
				now.in(TIME);
				today.add_lesson(lesson_name, cabinet_number, now);
				for (int I=J+1; I < help.size();) {
					J = help.find('/', I);
					if (J == -1) {//если это последний урок(т.е. у него не существует разделителя "/"
						help_for_help = help.substr(I, help.size() - I);
						lesson_name = "";
						cabinet_number = 0;
						cabinet = "";
						TIME = "";
						time now1;
						int f = 0;
						while (help_for_help[f] != '-') {

							lesson_name += help_for_help[f];
							f++;
						}
						f++;
						while (help_for_help[f] != '-') {
							cabinet += help_for_help[f];
							f++;
						}
						f++;
						cabinet_number = atoi(cabinet.c_str());
						while (f < help_for_help.size()) {
							TIME += help_for_help[f];
							f++;
						}
						now1.in(TIME);
						today.add_lesson(lesson_name, cabinet_number, now1);
						break;//без этого не работает!
					}
					else {
						help_for_help = help.substr(I, J - I);
						I = J + 1;
						lesson_name = "";
						cabinet_number = 0;
						cabinet = "";
						TIME = "";
						time now1;
						int f = 0;
						while (help_for_help[f] != '-') {
							lesson_name += help_for_help[f];
							f++;
						}
						f++;
						while (help_for_help[f] != '-') {
							cabinet += help_for_help[f];
							f++;
						}
						f++;
						cabinet_number = atoi(cabinet.c_str());
						while (f < help_for_help.size()) {
							TIME += help_for_help[f];
							f++;
						}
						now1.in(TIME);
						today.add_lesson(lesson_name, cabinet_number, now1);
					}
				}
			}
			b.change_day(day,today);//изменяем класс week, добавлением дня недели с помощью day-счетчик и today-элемент класса lesson
		}
		add_group(group_number1, b);//добавляем группу в дерево( b-элемент класса week)
	}
	in.seekg(0, ios::beg);//ПЕРЕХОДИМ В НАЧАЛО ФАЙЛА, ДЛЯ ВОЗМОЖНОСТИ ПОВТОРНОГО КОРРЕКТНОГО ВЫЗОВА ФУНКЦИИ
}

void group_list::delete_all() {//УДАЛЕНИЕ ВСЕГО РАСПИСАНИЯ
	cout << "Are you sure that you want to delete the shedule?"<<'\n';//УЗНАЕМ У ПОЛЬЗОВАТЕЛЯ УВЕРЕН ЛИ ОН В СВОИХ ДЕЙСТВИЯХ
	string help;
	cin >> help;
	while (help != "yes" && help != "no") {
		system("cls");
		cout << "Write the correct answer(yes or no)" << '\n';
		Sleep(500);
		system("cls");
		cout << "Are you sure that you want to delete the shedule?" << '\n';
		string menu;
		cin >> menu;
		help = menu;
	}
	system("cls");
	if (help == "no") {
		return;
	}
	if (main_root != NULL) {//вызов рекурсивного удаления
		delete_all(main_root);
	}
}

void group_list::Draw() {
	/*Draw(main_root, 10);
	_getch();*/
	cout << main_root->group_number;
	_getch();
}

//void group_list::save_in_download() {
//	save_in_download(main_root);
//}

//MENU----------------------------------------------------------

void logo() {
	cout << '\n' << '\n' << '\n' << '\n'<<'\n' << '\n' << '\n' << '\n' << '\n' << '\n';
	cout << "                                  ";
	for (int i = 0; i < 65; i++) {
		cout << "=";
	}
	cout << '\n';
	cout << "                                  || ####    ####   ##  ##  #####   #####   ##  ##  ##      #####||"<<'\n';
	Sleep(200);
	cout << "                                  ||##      ##  ##  ##  ##  ##      ##  ##  ##  ##  ##      ##   ||" << '\n';
	Sleep(200);
	cout << "                                  || ####   ##      ######  ####    ##  ##  ##  ##  ##      #### ||" << '\n';
	Sleep(200);
	cout << "                                  ||    ##  ##  ##  ##  ##  ##      ##  ##  ##  ##  ##      ##   ||" << '\n';
	Sleep(200);
	cout << "                                  || ####    ####   ##  ##  #####   #####    ####   ######  #####||"<<'\n';
	Sleep(200);
	cout << "                                  ";
	for (int i = 0; i < 65; i++) {
		cout << "=";
	}
	cout << '\n';
	cout << "                                                                       Thanks for using our product." << '\n';
	cout << "                                                                                     version  1.1.a" << '\n';
	Sleep(2000);
	system("cls");
}

void menu1()	 {
	logo();
	group_list a;
	int i = 1;
	cout <<"                                                         <MENU>" << '\n' <<"========================================================================================================================" << '\n' << "-------------" << '\n' << "|1)Add group|" << '\n' << "-------------" << '\n' << " 2)Delete group" << '\n' << " 3)Change the schedule" << '\n' << " 4)Find the current lesson in your schedule" << '\n' << " 5)Print schedule'" << '\n' << " 6)Print schedule in file" << '\n' << " 7)Delete all schedule" << '\n'<<" 8)Download schedule from file" << '\n'<<" 9)Balance the tree" << '\n' << " 10)Exit";
	while (true) {
		char q = _getch();
		if (q == 13) {
			system("cls");
			switch (i) {
			case 1:a.add_group(); break;
			case 2:	
				int f;
				cout << "Write the number of the group you want to delete: " << '\n';
				cin >> f;
				a.Delete(f);
				break;
			case 3:
				int f1;
				cout << "Write the group number for which you want to change the schedule: " << '\n';
				cin >> f1;
				a.binary_search_for_change(f1); break;
			case 4:
				int f2;
				cout << "Write the number of the group you want to find: " << '\n';
				cin >> f2;
				a.binary_search_for_current(f2); break;
			case 5:	system("mode con cols=250 lines=250");
				a.print_all();
				_getch(); 
				system("mode con cols=120 lines=30");
				break;
			case 6:a.result_file(); break;
			case 7:a.delete_all(); a.Default(); break;
			case 8:a.loading(); break;
			case 9:a.Draw(); break;
			case 10:return;
			}
		}
		 else if (q == 72) {
			if (i==1) {
				i = 10;
			}
			else {
				i--;
			}
		}
		else if (q == 80) {
			if (i == 10) {
				i = 1;
			}
			else {
				i++;
			}
		}
		system("cls");
		switch (i) {
		case 1:cout << "                                                         <MENU>" << '\n' << "========================================================================================================================" << '\n' << "-------------" << '\n' << "|1)Add group|" << '\n' << "-------------" << '\n' << " 2)Delete group" << '\n' << " 3)Change the schedule" << '\n' << " 4)Find the current lesson in your schedule" << '\n' << " 5)Print schedule" << '\n' << " 6)Print schedule in file" << '\n' << " 7)Delete all schedule" << '\n' << " 8)Download schedule from file" << '\n' << " 9)Balance the tree" << '\n' << " 10)Exit"; break;
		case 2:cout << "                                                         <MENU>" << '\n' << "========================================================================================================================" << '\n' << " 1)Add group" << '\n' << "----------------" << '\n' << "|2)Delete group|" << '\n' << "----------------" << '\n' << " 3)Change the schedule" << '\n' << " 4)Find the current lesson in your schedule" << '\n' << " 5)Print schedule" << '\n' << " 6)Print schedule in file" << '\n' << " 7)Delete all schedule" << '\n' << " 8)Download schedule from file" << '\n' << " 9)Balance the tree" << '\n' << " 10)Exit"; break;
		case 3:cout << "                                                         <MENU>" << '\n' << "========================================================================================================================" << '\n' << " 1)Add group" << '\n' << " 2)Delete group" << '\n' << "-----------------------" << '\n' << "|3)Change the schedule|" << '\n' << "-----------------------" << '\n' << " 4)Find the current lesson in your schedule" << '\n' << " 5)Print schedule" << '\n' << " 6)Print schedule in file" << '\n' << " 7)Delete all schedule" << '\n' << " 8)Download schedule from file" << '\n' << " 9)Balance the tree" << '\n' << " 10)Exit"; break;
		case 4:cout << "                                                         <MENU>" << '\n' << "========================================================================================================================" << '\n' << " 1)Add group" << '\n' << " 2)Delete group" << '\n' << " 3)Change the schedule" << '\n' << "--------------------------------------------" << '\n' << "|4)Find the current lesson in your schedule|" << '\n' << "--------------------------------------------" << '\n' << " 5)Print schedule" << '\n' << " 6)Print schedule in file" << '\n' << " 7)Delete all schedule" << '\n' << " 8)Download schedule from file" << '\n' << " 9)Balance the tree" << '\n' << " 10)Exit"; break;
		case 5:cout << "                                                         <MENU>" << '\n' << "========================================================================================================================" << '\n' << " 1)Add group" << '\n' << " 2)Delete group" << '\n' << " 3)Change the schedule" << '\n' << " 4)Find the current lesson in your schedule" << '\n' << "------------------" << '\n' << "|5)Print schedule|" << '\n' << "------------------"<<'\n' << " 6)Print schedule in file" << '\n' << " 7)Delete all schedule" << '\n' << " 8)Download schedule from file" << '\n' << " 9)Balance the tree" << '\n' << " 10)Exit"; break;
		case 6:cout << "                                                         <MENU>" << '\n' << "========================================================================================================================" << '\n' << " 1)Add group" << '\n' << " 2)Delete group" << '\n' << " 3)Change the schedule" << '\n' << " 4)Find the current lesson in your schedule" << '\n' << " 5)Print schedule" << '\n' << "--------------------------" << '\n' << "|6)Print schedule in file|" << '\n' << "--------------------------"  << '\n' << " 7)Delete all schedule" << '\n' << " 8)Download schedule from file" << '\n' << " 9)Balance the tree" << '\n' << " 10)Exit"; break;
		case 7:cout << "                                                         <MENU>" << '\n' << "========================================================================================================================" << '\n' << " 1)Add group" << '\n' << " 2)Delete group" << '\n' << " 3)Change the schedule" << '\n' << " 4)Find the current lesson in your schedule" << '\n' << " 5)Print schedule" << '\n' << " 6)Print schedule in file" << '\n'<<"-----------------------" << '\n' << "|7)Delete all schedule|" << '\n' << "-----------------------" << '\n' << " 8)Download schedule from file" << '\n' << " 9)Balance the tree" << '\n' << " 10)Exit"; break;
		case 8:cout << "                                                         <MENU>" << '\n' << "========================================================================================================================" << '\n' << " 1)Add group" << '\n' << " 2)Delete group" << '\n' << " 3)Change the schedule" << '\n' << " 4)Find the current lesson in your schedule" << '\n' << " 5)Print schedule" << '\n' << " 6)Print schedule in file" << '\n' << " 7)Delete all schedule" << '\n' << "-------------------------------" <<'\n' << "|8)Download schedule from file|"<<'\n'<< "-------------------------------" << '\n' << " 9)Balance the tree" << '\n' << " 10)Exit"; break;
		case 9:cout << "                                                         <MENU>" << '\n' << "========================================================================================================================" << '\n' << " 1)Add group" << '\n' << " 2)Delete group" << '\n' << " 3)Change the schedule" << '\n' << " 4)Find the current lesson in your schedule" << '\n' << " 5)Print schedule" << '\n' << " 6)Print schedule in file" << '\n' << " 7)Delete all schedule" << '\n' << " 8)Download schedule from file" << '\n'<<"--------------------"<<'\n' << "|9)Balance the tree|" << '\n'<<"--------------------"<<'\n' << " 10)Exit"; break;
		case 10:cout << "                                                         <MENU>" << '\n' << "========================================================================================================================" << '\n' << " 1)Add group" << '\n' << " 2)Delete group" << '\n' << " 3)Change the schedule" << '\n' << " 4)Find the current lesson in your schedule" << '\n' << " 5)Print schedule" << '\n' << " 6)Print schedule in file" << '\n' << " 7)Delete all schedule" << '\n' << " 8)Download schedule from file" << '\n' << " 9)Balance the tree"  << '\n'<<"---------"<<'\n' << "|10)Exit|"<<'\n'<<"---------"; break;
		}
	}
}

int main() {
	menu1();
	return 0;
}