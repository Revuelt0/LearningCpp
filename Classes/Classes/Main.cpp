#include <iostream>


class Log
{
public:
	//const int LogLevelError = 0;
	//const int LogLevelWarning = 1;	-	pøedìlat na enum
	//const int LogLevelInfo = 2;

	enum Level
	{
		LvlError, LvlWarning, LvlInfo
	};
private:
	Level m_LogLevel = LvlInfo;
public:
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}

	void Error(const char* message)
	{
		if(m_LogLevel >= LvlError)
			std::cout << "[_ERROR_]: " << message <<
				std::endl;
	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= LvlWarning)
			std::cout << "[WARNING]: " << message <<
				std::endl;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LvlInfo)
			std::cout << "[_INFO_]: " << message <<
				std::endl;
	}
};


int main()
{
	Log log;
	//log.SetLevel(log.LogLevelError);
	log.SetLevel(Log::LvlError);
	log.Warn("Danger to manifold!");
	log.Error("Eject'o seat'o cuh!");
	log.Info("Dude I almost had You!");
	std::cin.get();
}


