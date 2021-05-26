#include "Replace.hpp"
#include <string>
#include <iostream>

int		main(int argc, char **argv)
{
	enum : const int {
		FILE_NAME = 1,
		REPLACED,
		DEST
	};
	// if (argc != 4) {
	// 	std::cout << "Error: Invalid number of argument";
	// 	return (1);
	// }
	std::string str = Replace::replace_str("hello,world,hey!world,chuchu,yeah,wor", "world", "dragon");
	std::cout << str << std::endl;
	// EOFまで
	// 	オープンしたファイルを１行ずつ読み取る
	// 		argv[2]と同じ文字列を見つけたらargv[3]と置換
	// 	１行をstreamにためていく
	// できた文字列をargv[1]を使ってファイルに書き込み。
	

	//
	(void)argc; (void)argv;
	//
	return (0);
}
