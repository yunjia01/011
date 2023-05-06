#include"head.h"

//void print(struct techers* tec)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		cout << tec[i].tname<<endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t"<<tec[i].stu[j].sname<<" "<<tec[i].stu[j].socre<<" ";
//		} 
//		cout << endl;
//	}
//	
//}

//void init(struct hero* heros,int len)
//{
//	string name = "lgzyd";
//	for (int i = 0; i < len; i++)
//	{
//		heros[i].age = i + 20;
//		heros[i].name = "hero_";
//		heros[i].name += name[i];
//		if (strcmp(heros[i].name.c_str(), "hero_d") == 0)
//		{
//			heros[i].sex="女";
//		}
//		else heros[i].sex = "男";
//	}
//}
//
//void print(struct hero* heros,int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << heros[i].name << "\t" << heros[i].age << " " <<
//			heros[i].sex << endl;
//	}
//}
//
//void dl(struct hero* heros, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		heros[i].age = rand() % 15 + 10;
//	}
//}
//
//void bubble(struct hero* heros, int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (heros[j].age > heros[j + 1].age)
//			{
//				struct hero aa;
//				aa = heros[j];
//				heros[j] = heros[j + 1];
//				heros[j + 1] = aa;
//			}
//		}
//	}
//}


void viewshow()
{
	cout << "********************" << endl;
	cout << "***  1、添加成员 ***" << endl;
	cout << "***  2、查看成员 ***" << endl;
	cout << "***  3、删除成员 ***" << endl;
	cout << "***  4、修改信息 ***" << endl;
	cout << "***  5、清空信息 ***" << endl;
	cout << "***  6、退出程序 ***" << endl;
	cout << "********************" << endl;
}

void add(struct glxt* hh)
{
	cout << "请输入姓名" << endl;
	cin >> hh->sz[hh->size].name;
	cout << "请输入年龄" << endl;
	cin>>hh->sz[hh->size].age;
	cout << "请输入性别" << endl;
	cin >> hh->sz[hh->size].sex;
	cout << "请输入手机号"<<endl;
	cin >> hh->sz[hh->size].ipone;
	cout << "请输入地址" << endl;
	cin >> hh->sz[hh->size].addrend;
	cout << "添加成功" << endl;
	hh->size++;

	system("cls");
}

void show(struct glxt* hh)
{
	cout << "姓名\t年纪\t性别\t手机号\t地址" << endl;
	int i = 0;
	for (i; i < hh->size; i++)
	{
		cout << hh->sz[i].name << "\t" << hh->sz[i].age << "\t" <<
			hh->sz[i].sex << "\t" << hh->sz[i].ipone << "\t" <<
			hh->sz[i].addrend << endl;
	}
	if (i == 0)
	{
		cout << "无信息" << endl;
	}
	system("pause");
	system("cls");

}


void del(struct glxt* hh)
{
	cout << "请输入要删除姓名"<<endl;
	string name;
	cin >> name;
	int i = 0;
	for (i; i < hh->size; i++)
	{
		if (strcmp(hh->sz[i].name.c_str(), name.c_str()) == 0)
		{
			for(int j=i+1;j<=hh->size;j++)
			{
				hh->sz[j - 1] = hh->sz[j];
			}
			hh->size--;
			cout << "删除成功" << endl;
			break;
		}
		else if (i == hh->size-1)
		{
			cout << "没有要删除的对象" << endl;
		}
	}
	
	system("pause");
	system("cls");
}

void xg(struct glxt* hh)
{
	cout << "请输入要修改的姓名"<<endl;
	string name;
	cin >> name;
	int i = 0;
	for (i; i < hh->size; i++)
	{
		if (strcmp(hh->sz[i].name.c_str(), name.c_str()) == 0)
		{
			cout << "请输入修改后姓名" << endl;
			cin >> hh->sz[i].name;
			cout << "请输入修改后年龄" << endl;
			cin >> hh->sz[i].age;
			cout << "请输入修改后性别" << endl;
			cin >> hh->sz[i].sex;
			cout << "请输入修改后手机号" << endl;
			cin >> hh->sz[i].ipone;
			cout << "请输入修改后地址" << endl;
			cin >> hh->sz[i].addrend;
			cout << "修改完成"<<endl;
			break;
		}
		else if (i == hh->size-1)
		{
			cout << "未找到对象" << endl;
		}
	}
	
	system("pause");
	system("cls");
}


void cls(struct glxt* hh)
{
	hh->size = 0;
	cout << "已清除" << endl;
	system("pause");
	system("cls");
}