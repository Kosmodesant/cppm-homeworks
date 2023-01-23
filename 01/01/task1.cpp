#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {

	int M;
	int N;

	std::ifstream fin("in.txt");
	std::ofstream fout("out.txt");

	fin >> M; // достаем из файла количество элементов первого массива

	int* arr = new int[M]; //заполняем первый массив
	for (int i = 0; i < M; i++) {

		fin >> arr[i];

	}

	fin >> N; // достаем из файла количество элементов второго массива

	int* arr2 = new int[N]; //заполняем второй массив
	for (int i = 0; i < N; i++) {

		fin >> arr2[i];
	}

	fout << N << '\n';  //записываем в файл число элементов второго массива

	int last = arr2[N - 1];//смещаем вправо второй массив
	for (int i = N - 2; i > -1; i--)
		arr2[i + 1] = arr2[i];
	arr2[0] = last;

	for (int i = 0; i < N; i++)//записываем в файл второй массив
		fout << arr2[i] << "  ";

	fout << '\n';

	fout << M << '\n';//записываем в файл число элементов первого массива

	int first = arr[0];//смещаем влево первый массив
	for (int i = 1; i < M; ++i)
		arr[i - 1] = arr[i];
	arr[M - 1] = first;

	for (int i = 0; i < M; i++) //записываем в файл первый массив
		fout << arr[i] << "  ";

	delete[] arr;
	delete[] arr2;

	fin.close();
	fout.close();

}
