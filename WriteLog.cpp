#include "WriteLog.h"

Logger* Logger::m_pInstance = NULL;

Logger* Logger::getInstance()
{
	if (!m_pInstance)
	{
		m_pInstance = new Logger;
	}
	return m_pInstance;
}

void Logger::WriteLog(string message)
{
	time_t     now = time(0);
	struct tm  tstruct;
	char       buf[80];
	tstruct = *localtime(&now);
	// for more information about date/time format
	strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
	string currentDateTime(buf);

	string szLog = currentDateTime + ":" + message;
	std::ofstream log_file("Logging.log", std::ios_base::out | std::ios_base::app);
	log_file << szLog <<endl;
}