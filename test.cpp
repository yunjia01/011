#include"head.h"
//int main()
//{
//	int arr[3][3] = {0};
//	int arr1[3] = {0};
//	int j = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cin >> arr[i][j];
//			cout << arr[i][j]<<" ";
//			arr1[i] += arr[i][j];
//		}
//		cout << arr1[i];
//		cout << endl;
//	}
//}

//
//void init(struct techers* tec,int len)
//{
//	
//	string names = "ABCDE";
//	for (int i = 0; i < len; i++)
//	{
//		tec[i].tname = "techers_";
//		tec[i].tname += names[i];
//		for (int j = 0; j < 5; j++)
//		{
//			
//			tec[i].stu[j].sname = "student_";
//			tec[i].stu[j].sname += names[j];
//			int random = rand() % 61 + 40;
//			tec[i].stu[j].socre = random;
//		} 
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	techers tec[3];
//	int len = sizeof(tec) / sizeof(tec[0]);
//	init(tec,len);
//	print(tec);
//}






//int main()
//{
//	srand((unsigned int)time(NULL));
//	struct hero heros[5];
//	int len = sizeof(heros) / sizeof(heros[1]);
//	init(heros,len);
//	print(heros,len);
//	dl(heros,len);
//	cout << "hh" << endl;
//	print(heros, len);
//
//	bubble(heros,len);
//	cout << "hh" << endl;
//	print(heros, len);
//
//}


int main()
{
	
	struct glxt hh;
	hh.size = 0;
	while (1)
	{
		viewshow();
		cout << "请选择操作" << endl;
		int select;
		cin >> select;
		switch (select)
		{
		case 1:add(&hh);
			break;
		case 2:show(&hh);
			break;
		case 3:del(&hh);
			break;
		case 4:xg(&hh);
			break;
		case 5:cls(&hh);
			break;
		case 6:cout << "欢迎再次选择" << endl; return 0;
		default:cout << "错误输入请重新" << endl; break;
		}
	}

}