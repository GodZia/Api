/**
 * Project Zia
 */

#ifndef _CONTEXT_H
#define _CONTEXT_H

#include "ILogger.h"
#include "IConfigManager.h"
#include "IClient.h"

class Context
{
	public: 
		/**
		 * The ILogger instance.
		 */
		ILogger logger;
		/**
		 * The IConfigManager instance.
		 */
		IConfigManager configManager;
		/**
		 * The IClient instance.
		 */
		IClient client;
};

#endif //_CONTEXT_H