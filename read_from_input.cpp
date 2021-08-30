// Written by Felix @kimzaf (Twitter handle)
//

#include <iostream>
#include<fstream>



int main()
{
	std::fstream file;

	file.open("text.txt", std::ios::out | std::ios::binary);

	if (file.is_open())
	{
		char c;
		do
		{
			c = std::cin.get();
			file.put(c);

		} while (c!='.');
	}
	else
	{
		std::cout << "Cannot open the file" << std::endl;
	}

}

