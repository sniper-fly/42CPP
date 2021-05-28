#include "Replace.hpp"
#include <string>
#include <iostream>
#include <fstream>

void Replace::ft_sed(std::string file_name, std::string replaced, std::string dest)
{
	std::ifstream ifs = get_inputstream(file_name);
	std::ofstream ofs = get_outputstream(file_name);
	std::string buf;

	while (true) {
		std::getline(ifs, buf);
		buf = replace_str(buf, replaced, dest);
		ofs << buf;
		if (ifs.eof()) {
			break;
		}
		ofs << std::endl;
	}
	ifs.close();
	ofs.close();
}

std::ofstream Replace::get_outputstream(std::string file_name)
{
	file_name += ".replace";
	std::ofstream ofs(file_name);
	if (!ofs) {
		std::cout << "Error: Failed to create the file: " << file_name << std::endl;
		exit(2);
	}
	return (ofs);
}

std::ifstream Replace::get_inputstream(std::string file_name)
{
	std::ifstream ifs(file_name);
	if (!ifs) {
		std::cout << "Error: Failed to open the file: " << file_name << std::endl;
		exit (3);
	}
	return (ifs);
}

std::string Replace::replace_str(std::string buf, std::string replaced, std::string dest)
{
	std::string::size_type pos;
	std::string::size_type replen = replaced.length();
	std::string::size_type dstlen = dest.length();

	pos = buf.find(replaced);
	while (pos != std::string::npos) {
		buf.replace(pos, replen, dest);
		pos += dstlen;
		pos = buf.find(replaced, pos);
	}
	return (buf);
}
