#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <sstream>
#include "class.h"

using namespace std;




void Number_Of_Lines(string file_name, int& numberOfLines)
{
	ifstream file(file_name);
	if (file)
	{
		string str;
		while (getline(file, str))
		{
			numberOfLines++;
		}
		file.close();
		//cout << "Lines - " << numberOfLines << endl;
	}
}

void main()
{
	setlocale(LC_ALL, "");

	// Задаем имя файла
	string file_name;
	string file_name2;
	string puth = "";
	cout << "Введите имя файла для загрузки рекламы без расширения (по умолчанию csv): "; cin >> file_name;
	cout << endl;
	cout << "Введите имя файла для загрузки продаж без расширения (по умолчанию csv): "; cin >> file_name2;
	file_name += ".csv";
	file_name2 += ".csv";

	//cout << file_name << endl; //Проверка имени файла

	int numberOfLines = 0;
	Number_Of_Lines(file_name, numberOfLines);
	numberOfLines--;
	ifstream work_file(file_name);
	string line;
	char delimiter = ';';
	getline(work_file, line);
	if (!work_file)
	{
		cout << "Файл - " << file_name << " не найден" << endl;
		system("PAUSE");
		exit(0);
	}

	string accrualDate[1000], producrList[1000], tempLines[1000], total[1000];
	//string listArtikl[500], forSale[500], comission[1000], orderAssembly[500], Type[500], numberOfDeparture[500], dateOfAdoption[500]; //Все переменные со всех столбцов
	//string shipmentProcessing[500], highway[500], lastMile[500], returnLine[1000], returnProcessing[500], shippingWarehouse[500];
	//string processingOfCanceledGoods[500], processingOfUnpurchasedGoods[500], logistics[500], reversLogistics[500], listSKU[500];


	// accrualDate - Дата начисления
	// Type - тип
	// numberOfDeparture - Номер отправления или идентификатор услуги
	// dateOfAdoption - Дата принятия заказа в обработку или оказания услуги
	// shippingWarehouse - Склад отгрузки
	// listSKU - Список SKU
	// listArtikl - Список артикулов
	// productList - Список товаров или название услуги
	// forSale - За продажу или возврат до вычета комиссий и услуг
	// comission - Комиссия за продажу
	// orderAssembly - Сборка заказа
	// shipmentProcessing - Обработка отправления (Drop-off/Pick-up)
	// highway - магистраль
	// lastMile - Последняя миля
	// returnLine - Обратная магистраль
	// returnProcessing - Обработка возврата
	// processingOfCanceledGoods - Обработка отмененного или невостребованного товара
	// processingOfUnpurchasedGoods - Обработка невыкупленного товара
	// logistics - логистика
	// reversLogistics - Обратная логистика
	// total - Итого
	int i = 0;
	while (getline(work_file, line))
	{
		stringstream stream(line);
		getline(stream, accrualDate[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, producrList[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, total[i], delimiter);

		i++;
	}

	work_file.close();

	int numberOfLines2 = 0;
	Number_Of_Lines(file_name2, numberOfLines2);
	numberOfLines2--;
	ifstream work_file2(file_name2);
	getline(work_file2, line);
	if (!work_file2) 
	{
		cout << "Файл - " << file_name2 << " не найден" << endl;
		system("PAUSE");
		exit(0);
	}

	string shippingDate[1000], nameOfProduct[1000], ozonId[1000], finalCostOfGoods[1000], quantity[1000]; 


	// tempLines[1000] - замена не нужного значения
	//shippingDate[1000] - дата отгрузки
	//nameOfProduct[1000] - наименование товара 
	//ozonId[1000] - его ID
	//finalCostOfGoods[1000] - итоговая стоимость

	i = 0;
	while (getline(work_file2, line))
	{
		stringstream stream(line);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, shippingDate[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, nameOfProduct[i], delimiter);
		getline(stream, ozonId[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, finalCostOfGoods[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, quantity[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);
		getline(stream, tempLines[i], delimiter);

		i++;
	}

	work_file2.close();

	listOfgoods  List_of_goods[4];
	List_of_goods[0].name = "Набор подростковый";
	List_of_goods[0].order1 = "3175878";
	List_of_goods[0].order2 = "3196946";
	List_of_goods[0].order3 = "1947870";
	List_of_goods[0].ID = "803944569";

	List_of_goods[1].name = "Искусственный жемчуг золото";
	List_of_goods[1].order1 = "3284445";
	List_of_goods[1].order2 = "3196775";
	List_of_goods[1].order3 = "1864474";
	List_of_goods[1].ID = "924089759";

	List_of_goods[2].name = "Пусеты";
	List_of_goods[2].order1 = "3284487";
	List_of_goods[2].order2 = "3169751";
	List_of_goods[2].order3 = "1864424";
	List_of_goods[2].ID = "924089702";

	List_of_goods[3].name = "Парные браслеты";
	List_of_goods[3].order1 = "3383120";
	List_of_goods[3].order2 = "3383120";
	List_of_goods[3].order3 = "3383120";
	List_of_goods[3].ID = "977610629";

	//-----------------------------------------------------------------------------------------------------------------------------------
// Список продаж

	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < numberOfLines2; i++)
		{
			if (List_of_goods[j].ID == ozonId[i] && quantity[i] != "")
			{
				List_of_goods[j].sumS += stoi(finalCostOfGoods[i]);
				List_of_goods[j].count_sale += stoi(quantity[i]);
			}
		}
	}

	//---------------------------------------------------------------------------------------------------------------------------------
	// Список рекламы
	for (int i = 0; i < numberOfLines; i++)
	{
		if (producrList[i] != "" && producrList[i].substr(1, 5) == "Заказ" || producrList[i] != "" && producrList[i].substr(2, 5) == "Заказ")
		{
			for (int j = 0; j < 4; j++)
			{
				if (producrList[i].substr(8, 7) == List_of_goods[j].order1 || producrList[i].substr(8, 7) == List_of_goods[j].order2 || producrList[i].substr(8, 7) == List_of_goods[j].order3 || producrList[i].substr(9, 7) == List_of_goods[j].order1 || producrList[i].substr(9, 7) == List_of_goods[j].order2 || producrList[i].substr(9, 7) == List_of_goods[j].order3)
				{
					List_of_goods[j].sumR += stoi(total[i]);
					List_of_goods[j].data = accrualDate[i];
					if(List_of_goods[j].sumR != 0 && List_of_goods[j].sumS != 0)List_of_goods[j].ddr = round(((double)(List_of_goods[j].sumR* (-1)) / (double)List_of_goods[j].sumS)*100);
				}
			}
		}
	}
	cout << "Продажи и затраты по товарам" << endl << endl;
	int all_sumR = 0, all_sumS = 0;
	for (int i = 0; i < 4; i++)
	{
		cout << "Дата \t\t\t\t\t" << List_of_goods[i].data << endl;
		cout << "Наименование \t\t\t" << List_of_goods[i].name << endl;
		cout << "ID\t\t\t\t" << List_of_goods[i].ID << endl;
		cout << "Сумма продаж\t\t\t" << List_of_goods[i].sumS << "руб." << endl;
		cout << "Количество продаж \t\t" << List_of_goods[i].count_sale << "шт." << endl;
		cout << "Сумма затрат на рекламу\t\t" << List_of_goods[i].sumR << "руб." << endl;
		cout << "ДДР \t\t\t\t" << List_of_goods[i].ddr << " % " << endl << endl;
		all_sumR += List_of_goods[i].sumR;
		all_sumS += List_of_goods[i].sumS;
	}
	cout << endl << "Общая сумма продаж:\t\t " << all_sumS << " руб." << endl;
	cout << endl << "Общая сумма затрат на рекламу:\t " << all_sumR << " руб." << endl;
	cout << endl << "Итоговый ДДР:\t\t\t " << round(((double)(all_sumR * (-1)) / (double)all_sumS) * 100) << "%" << endl;

	string file_output;
	cout << endl << "Перед сохранение в файл, если вы хотите дать имя уже существующего файла - обязательно убедитесь, что он закрыт, если нет то закройте его!" << endl;
	system("PAUSE");
	cout << endl << "Введите имя файла для сохранения (без расширения): "; cin >> file_output;
	file_output += ".txt";

	ofstream file;
	file.open(file_output);
	if (!file.is_open())
	{
		cout << "Файл не удалось создать или открыть - проверьте имя файла или закройте его" << endl;
	}
	else
	{
		file << "Продажи и затраты по товарам" << endl << endl;
		for (int i = 0; i < 4; i++)
		{
			file <<  "Дата \t\t\t\t\t" << List_of_goods[i].data << endl;
			file << "Наименование \t\t\t" << List_of_goods[i].name << endl;
			file << "ID\t\t\t\t\t\t" << List_of_goods[i].ID << endl;
			file << "Сумма продаж\t\t\t" << List_of_goods[i].sumS << "руб." << endl;
			file << "Количество продаж \t\t" << List_of_goods[i].count_sale << "шт." << endl;
			file << "Сумма затрат на рекламу\t" << List_of_goods[i].sumR << "руб." << endl;
			file << "ДДР \t\t\t\t\t" << List_of_goods[i].ddr << " % " << endl << endl;
		}
		file << endl << "Общая сумма продаж:\t\t\t\t " << all_sumS << " руб." << endl;
		file << endl << "Общая сумма затрат на рекламу:\t " << all_sumR << " руб." << endl;
		file << endl << "Итоговый ДДР:\t\t\t\t\t " << round(((double)(all_sumR * (-1)) / (double)all_sumS) * 100) << "%" << endl;
	}

	file.close();
}