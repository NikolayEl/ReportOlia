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
		exit(0);
	}

	string accrualDate[500], Type[500], numberOfDeparture[500], dateOfAdoption[500], shippingWarehouse[500], listSKU[500];
	string listArtikl[500], producrList[500], forSale[500], comission[1000], orderAssembly[500];
	string shipmentProcessing[500], highway[500], lastMile[500], returnLine[1000], returnProcessing[500];
	string processingOfCanceledGoods[500], processingOfUnpurchasedGoods[500], logistics[500], reversLogistics[500], total[500];


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
		getline(stream, Type[i], delimiter);
		getline(stream, numberOfDeparture[i], delimiter);
		getline(stream, dateOfAdoption[i], delimiter);
		getline(stream, shippingWarehouse[i], delimiter);
		getline(stream, listSKU[i], delimiter);
		getline(stream, listArtikl[i], delimiter);
		getline(stream, producrList[i], delimiter);
		getline(stream, forSale[i], delimiter);
		getline(stream, comission[i], delimiter);
		getline(stream, orderAssembly[i], delimiter);
		getline(stream, shipmentProcessing[i], delimiter);
		getline(stream, highway[i], delimiter);
		getline(stream, lastMile[i], delimiter);
		getline(stream, returnLine[i], delimiter);
		getline(stream, returnProcessing[i], delimiter);
		getline(stream, processingOfCanceledGoods[i], delimiter);
		getline(stream, processingOfUnpurchasedGoods[i], delimiter);
		getline(stream, logistics[i], delimiter);
		getline(stream, reversLogistics[i], delimiter);
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
		exit(0);
	}

	string tempLines[600], shippingDate[600], nameOfProduct[600], ozonId[600], finalCostOfGoods[600], quantity[600]; 


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

	//for (int i = 0; i < numberOfLines2; i++)
	//{
	//	cout << "Number - " << i << " ";
	//	cout << "Data - " << shippingDate[i] << "; ";
	//	cout << "Name - " << nameOfProduct[i] << "; ";
	//	cout << "Ozon ID - " << ozonId[i] << "; ";
	//	cout << "Cost - " << finalCostOfGoods[i] << endl;
	//}

	// Заполняем базу данных

// Заказ №3175878 - 803944569 Набор подростковый
// Заказ №3196946 - 803944569 
// Заказ №1947870 - 803944569
// Заказ №3284445 - 924089759 Искусственный жемчуг золото
// Заказ №3196775 - 924089759
// Заказ №1864474 - 924089759
// Заказ №3284487 - 924089702 Пусеты
// Заказ №3169751 - 924089702
// Заказ №1864424 - 924089702
// Заказ №3383120 - 977610629 Парные браслеты

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
	List_of_goods[2].order3 = "3383120";
	List_of_goods[2].ID = "924089702";

	List_of_goods[3].name = "Парные браслеты";
	List_of_goods[3].order1 = "3383120";
	List_of_goods[3].order2 = "3383120";
	List_of_goods[3].order3 = "3383120";
	List_of_goods[3].ID = "977610629";

	//-----------------------------------------------------------------------------------------------------------------------------------
// Список продаж
	cout << endl << endl << "Продажи по товарам: " << endl << endl;

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

	for (int i = 0; i < 4; i++) cout << List_of_goods[i].name << " " << List_of_goods[i].sumS << endl;

	//cout << floor(2.8) << endl;


	//---------------------------------------------------------------------------------------------------------------------------------
	// Список рекламы
	cout << endl <<"Затраты на рекламу: " << endl << endl;
	int all_sumR = 0;
	for (int i = 0; i < numberOfLines; i++)
	{
		if (producrList[i] != "" && producrList[i].substr(2, 5) == "Заказ") 
		{
			for (int j = 0; j < 4; j++)
			{
				if (producrList[i].substr(9, 7) == List_of_goods[j].order1 || producrList[i].substr(9, 7) == List_of_goods[j].order2 || producrList[i].substr(9, 7) == List_of_goods[j].order3)
				{
					List_of_goods[j].sumR += stoi(total[i]);
					List_of_goods[j].data = accrualDate[i];
					all_sumR += List_of_goods[j].sumR;
				}
			}
		}
	}
	
	for (int i = 0; i < 4; i++)
	{
		cout << List_of_goods[i].name << " " << List_of_goods[i].sumR;
		if (List_of_goods[i].sumS != 0 && List_of_goods[i].sumR != 0)
		{
			cout << " в процентах: " << round((double(List_of_goods[i].sumR * (-1)) / double(List_of_goods[i].sumS) * 100)*100)/100 << "%";
			List_of_goods[i].ddr = round((double(List_of_goods[i].sumR * (-1)) / double(List_of_goods[i].sumS) * 100) * 100) / 100;
		}
		cout << endl;
	}
	cout << "Итого затраты на рекламу: " << all_sumR << "руб." << endl;

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
	}

	file.close();
}