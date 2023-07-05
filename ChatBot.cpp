// Simple chat bot to open applications 

#include <iostream>
#include <algorithm>
#include <ctype.h>
// #include<string>


int main() {
  std::string userCommand;
  std::cout << "Welcome Boss, give me a command: \n";

  while (true) {
    std::cout << "user >> ";
    getline(std::cin, userCommand);
    transform(userCommand.begin(), userCommand.end(), userCommand.begin(),::tolower);
    
	if (userCommand == ""){
      std::cout << "input a command \n"
                << "Are you thinking how to start \n"
                << "just say hi ! \n";
    }
    else if (userCommand.compare("hi") == 0) {
      	std::cout << "Bot >> Hi Boss\n";
    }

    else if (userCommand.compare("exit") == 0 || userCommand.compare("bye") == 0 ) {
      	std::cout << "Bot >> Ok bye Boss \n";
      	break;
    } 
    
    else if (userCommand.compare("chrome") == 0) {
      	std::cout << "Okay Boss, opening chrome Browser \n";
      	system("start https://www.chrome.com");
    }
    
     else if (userCommand.compare("notepad") == 0) {
      	std::cout << "Okay Boss, opening Notepad editor \n";
      	system("start notepad");
    }
    
    else if (userCommand.compare("cmd") == 0) {
      	std::cout << "Okay Boss, opening cmd terminal \n";
      	system("start cmd");
    }
    
    else if (userCommand.compare("youtube") == 0) {
      	std::cout << "Okay Boss, opening youtube \n";
      	system("start https://www.youtube.com");
    } 
    
    else {
      std::cout << "Sorry Boss, I didn't get that. Try another command.\n";
    }
  
  }

  return 0;
}
