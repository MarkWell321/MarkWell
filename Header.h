#pragma once
#include<iostream>
#include<conio.h>
#include"Header.h"
#include <Windows.h>
#include <stdlib.h>
#include <string>

using namespace std;

class time {
	int hour;
	int minute;
public:
	time();
	time(int x, int y);
	void in(int x, int y);
	void in(string s);//используется для файла подгрузки
	void in();
	time(const time&b);
	void print_time();
	void print_time_file();
	int get_hour(){
		return hour;
	};
	int get_minute() {
		return minute;
	};
	//void print1_to_dowload();
};

class lesson {
	struct node_lesson {
		string lesson_name;
		int cabinet_number;
		time now;
		node_lesson*next;
	};
	node_lesson*head;
public:
	lesson();
	~lesson();
	lesson(const lesson&b);
	void add_lesson(string name, int number,time nw);
	void add_lesson();
	void day_lessons();
	void day_lesson_time(time tm);
	lesson operator =(const lesson&b);
	void delete_lesson (time tm);
	int print_just_one(int i);//выводит только i-ый предмет по счету
	int print_just_one_file(int i);
	//void print2_to_dowload();
};

class group_list;

class week {
	struct node_day {
		int day_name;
		lesson today;
		node_day*next;
	};
	node_day*head;
public:
	week();
	~week();
	week(const week&b);
	week operator =(const week&b);
	//void change_day(string day);
	void change_day(int i, lesson td);
	void change_day();
    void search_for_today();
	//void print3_to_download();
private:
	void group_schedule();
	void group_schedule_file();
	friend class group_list;
};

class group_list {
	struct tree {
		int height;
		int group_number;
		week schedule;
		tree*left;
		tree*right;
	};
	tree*main_root;
	void add(int number, week week, tree*&root);
	//tree*addd(int number, week week, tree*&root);
	void print(tree*root);
	void result(tree*root);
	void binary_for_change(tree*root, int number);
	void binary_for_current(tree*root, int number);
	void Delete(int number, tree*&root);
	void delete_all(tree*&root);
	void Draw(tree*root, int lvl);
	//balance
	int find_height(tree*root);
	void fix_height(tree*root);
	tree*rotateleft(tree*rootL);
	tree*rotateright(tree*rootR);
	tree*balance(tree*root);
	tree*minimum(tree*root);
	tree*delete_min(tree*root);
	void save_in_download(tree*root);
public:
	group_list();
	void add_group(int number, week week);
	void add_group();
	void Delete(int number);
	void print_all();
	void result_file();
	void binary_search_for_change(int number);
	void binary_search_for_current(int number);
	void loading();
	void delete_all();
	void Default();
	void Draw();
	void save_in_download();
};