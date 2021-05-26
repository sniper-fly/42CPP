#include "Replace.hpp"
#include <string>
#include <iostream>
#include <fstream>

void Replace::ft_sed(std::string file_name, std::string replaced, std::string dest)
{
	std::ifstream ifs = get_inputstream(file_name);
	std::string ofile;
	std::string buf;

	while (true) {
		std::getline(ifs, buf);
		buf = replace_str(buf, replaced, dest);
		ofile += buf;
		if (ifs.eof()) {
			break;
		}
		ofile += "\n";
	}
	std::cout << ofile;
}

std::ifstream Replace::get_inputstream(std::string file_name)
{
	std::ifstream ifs(file_name);
	if (!ifs) {
		std::cout << "Error: Failed to open the file" << std::endl;
		exit (1);
	}
	return (ifs);
}

std::string Replace::replace_str(std::string buf, std::string replaced, std::string dest)
{
	std::string::size_type pos;
	std::string::size_type len = replaced.length();

	pos = buf.find(replaced);
	while (pos != std::string::npos) {
		buf.erase(pos, len);
		buf.insert(pos, dest);
		pos = buf.find(replaced);
	}
	return (buf);
}
