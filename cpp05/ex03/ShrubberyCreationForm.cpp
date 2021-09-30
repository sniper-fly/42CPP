#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() { }

ShrubberyCreationForm::~ShrubberyCreationForm() { }

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
    Form("ShrubberyCreationForm", 145, 137, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other):
    Form("ShrubberyCreationForm", 145, 137, other.getName())
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
    (void)other;
    return *this;
}

void        ShrubberyCreationForm::action()
{
    std::string tree =
"                                    */#//(/                        \n"
"                    ,*(#(/(%%#%#**(#&//(###(((/                    \n"
"                   (#%##&%%%%##%&%%(#/#@&&%%&&&%##(/.              \n"
"              *(#%%%#&&@@&(#&%&%%&&@#@&%%#(##(&&%%@##/             \n"
"          ,((%#(%%#%(#&&&#%&&@&%@&%#@%@@%&&@&#&%@&&&&#(            \n"
"          *#&#&&%&@&@@@#%#&%&&##%%%&&@%%%%#%&#&%%%&&%#(            \n"
"          ,/%&@&#%%@@&&%@&%&(%#&@@&/&&@%&%@&&(((%@&%@%&%/          \n"
"       *%(##%@&@@%%%&%&##&&%&&@@&%&&&&&@@@&&&%@%&%&%#&@#%(         \n"
"       .%@@#%&&&@&@&##%&&&%@&@%%%@#%%&&&@&&@&@&&%%#%%((##%#%#.     \n"
"  .(###%&@&%%%%@&&&&&@@@@&@@&&%%%&&&(##%%%&&&&&%%#&@%&&&&@&@##(.   \n"
"   %#((&&&(%&@#&&%&%&&@@@&&&&&&&%##(#&&@%&&@@&&#&&&%&%%&##%&(&%/   \n"
"      %%##( #&& *%*//&&#&@&@& *%#.&&&&&(*,#&..**/&%#&&&&%&#%(%     \n"
"                   *##** ., .%%&&&&  %   (     (,*&@/((#(,%%(,     \n"
"                                %&%%           . .                 \n"
"                                %%%                                \n"
"                                #%%                                \n"
"                              ,(%%##.                              \n";

    std::string file_name = getTarget() + "_shrubbery";
    std::ofstream ofs(file_name);
    if (!ofs) {
        throw std::runtime_error("File open failed.");
    }
    ofs << tree;
    std::cout << file_name << " created." << std::endl;
}
