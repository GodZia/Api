/**
 * Project Zia
 */

#ifndef _ILOGGER_H
#define _ILOGGER_H

#include <LogLevel.h>

class ILogger
{
	public:
		
		/**
		 * Write the log with a log level.
		 * @param level The message level.
		 * @param msg The message.
		 */
		virtual void log(LogLevel level, std::string const& msg) = 0;
		
		/**
		 * Set the minimum log level.
		 * @param LogLevel The log level.
		 */
		virtual void setMinimumLog(LogLevel level) = 0;
};

#endif //_ILOGGER_H