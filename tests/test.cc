#include <iostream>
#include "../server_tm/log.h"

int main(int argc, char** argv) {
	server_tm::Logger::ptr(new server_tm::Logger);
	Logger->addAppender(server_tm::LogAppender::ptr(new server_tm::StdoutLogAppender));
	server_tm::LogEvent::ptr event(new server_tm::LogEvent(__FILE__, __LINE__, 0, 1, 2, time(0)));

	Logger->log(server_tm::LogLevel::DEBUG, event);
	std::cout << "hello world" << std::endl;

	return 0;
}