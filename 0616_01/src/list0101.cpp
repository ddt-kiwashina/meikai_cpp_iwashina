/*
 * list0101.cpp
 *
 *  Created on: 2021/06/16
 *      Author: iwahinkota
 */

//画面への出力を行うプログラム

//1-1 includeが欠如していると、その後の名前空間、ライブラリが使用できなくなる。（コンパイルエラー）
#include <iostream>

//標準ライブラリを使用する際の名前空間を定義して cout 定義せずに std::coutでも同じ。
using namespace std;


int main()
{
	//list 0101
	// cout 標準出力ストリーム 文字の挿入
	cout << "初めてのC＋＋プログラム \n"  ;
	cout << "画面に出力しています。 \n" ;

	//list 0102
	// 続けてかける。
	cout << "初めてのC＋＋プログラム \n画面に出力しています。 \n" ;

	//list 0103
	// 出力ストリームのcout　に対して複数の挿入子で先頭から出力できる。
	cout<<"\aはじめまして。" << "こんにちは\n" ;

	//list 0104
	//

}


