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
//			heros[i].sex="Ů";
//		}
//		else heros[i].sex = "��";
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
	cout << "***  1����ӳ�Ա ***" << endl;
	cout << "***  2���鿴��Ա ***" << endl;
	cout << "***  3��ɾ����Ա ***" << endl;
	cout << "***  4���޸���Ϣ ***" << endl;
	cout << "***  5�������Ϣ ***" << endl;
	cout << "***  6���˳����� ***" << endl;
	cout << "********************" << endl;
}

void add(struct glxt* hh)
{
	cout << "����������" << endl;
	cin >> hh->sz[hh->size].name;
	cout << "����������" << endl;
	cin>>hh->sz[hh->size].age;
	cout << "�������Ա�" << endl;
	cin >> hh->sz[hh->size].sex;
	cout << "�������ֻ���"<<endl;
	cin >> hh->sz[hh->size].ipone;
	cout << "�������ַ" << endl;
	cin >> hh->sz[hh->size].addrend;
	cout << "��ӳɹ�" << endl;
	hh->size++;

	system("cls");
}

void show(struct glxt* hh)
{
	cout << "����\t���\t�Ա�\t�ֻ���\t��ַ" << endl;
	int i = 0;
	for (i; i < hh->size; i++)
	{
		cout << hh->sz[i].name << "\t" << hh->sz[i].age << "\t" <<
			hh->sz[i].sex << "\t" << hh->sz[i].ipone << "\t" <<
			hh->sz[i].addrend << endl;
	}
	if (i == 0)
	{
		cout << "����Ϣ" << endl;
	}
	system("pause");
	system("cls");

}


void del(struct glxt* hh)
{
	cout << "������Ҫɾ������"<<endl;
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
			cout << "ɾ���ɹ�" << endl;
			break;
		}
		else if (i == hh->size-1)
		{
			cout << "û��Ҫɾ���Ķ���" << endl;
		}
	}
	
	system("pause");
	system("cls");
}

void xg(struct glxt* hh)
{
	cout << "������Ҫ�޸ĵ�����"<<endl;
	string name;
	cin >> name;
	int i = 0;
	for (i; i < hh->size; i++)
	{
		if (strcmp(hh->sz[i].name.c_str(), name.c_str()) == 0)
		{
			cout << "�������޸ĺ�����" << endl;
			cin >> hh->sz[i].name;
			cout << "�������޸ĺ�����" << endl;
			cin >> hh->sz[i].age;
			cout << "�������޸ĺ��Ա�" << endl;
			cin >> hh->sz[i].sex;
			cout << "�������޸ĺ��ֻ���" << endl;
			cin >> hh->sz[i].ipone;
			cout << "�������޸ĺ��ַ" << endl;
			cin >> hh->sz[i].addrend;
			cout << "�޸����"<<endl;
			break;
		}
		else if (i == hh->size-1)
		{
			cout << "δ�ҵ�����" << endl;
		}
	}
	
	system("pause");
	system("cls");
}


void cls(struct glxt* hh)
{
	hh->size = 0;
	cout << "�����" << endl;
	system("pause");
	system("cls");
}