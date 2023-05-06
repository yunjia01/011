#pragma once
#include<iostream>
#include<string>
#include<ctime>
using namespace std;

//struct student
//{
//	string sname;
//	int socre;
//
//};
//
//struct techers
//{
//	string tname;
//	struct student stu[5];
//};
//
//void print(struct techers*);


//struct hero
//{
//	string name;
//	int age;
//	string sex;
//};
//
//void init(struct hero*,int len);
//void print(struct hero*,int len);
//void bubble(struct hero* heros, int len);
//void dl(struct hero* heros, int len);





void viewshow();
#define MAX 100
struct person
{
	string name;
	int age;
	string sex;
	string ipone;
	string addrend;
};

struct glxt
{
	int size;
	struct person sz[MAX];
};

void add(struct glxt* hh);
void show(struct glxt* hh);
void del(struct glxt* hh);
void xg(struct glxt* hh);
void cls(struct glxt* hh);