#pragma once
#include <string>

class UManagedClass
{
public:
	UManagedClass(void);
	~UManagedClass(void);

	std::string getClassName();


private:
	std::string m_name;

	static const std::string staticStr;
};

