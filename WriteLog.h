#pragma once
#include <iostream>    
#include <fstream>
#include <string>
#include <stdio.h>
#include <time.h>
using namespace std;
class Logger
{
public:
	static Logger* getInstance();
	void WriteLog(string message);
private:
	Logger() {};
	Logger(Logger const&) {};
	static Logger* m_pInstance;
};

