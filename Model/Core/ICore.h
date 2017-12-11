/**
 * Project Zia
 */

#ifndef _ICORE_H
#define _ICORE_H

class ICore
{
	public: 
		
		/**
		 * Load the Core from the configuration file.
		 */
		virtual void load() = 0;
		
		/**
		 * Load the Core from the configuration file.
		 */
		virtual void reload() = 0;
		
		/**
		 * Start the server.
		 */
		virtual void start() = 0;
		
		/**
		 * Stop the server.
		 */
		virtual void stop() = 0;
		
		/**
		 * Restart the server.
		 */
		virtual void restart() = 0;
};

#endif //_ICORE_H