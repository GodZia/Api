/**
 * Project Zia
 */

#ifndef _INETWORK_H
#define _INETWORK_H

class INetwork
{
	public: 
		
		/**
		 * Start the network on a port.
		 * @param port The port.
		 */
		virtual void start(int port) = 0;
		
		/**
		 * Stop the network.
		 */
		virtual void stop() = 0;
		
		/**
		 * Restart the network.
		 */
		virtual void restart() = 0;
};

#endif //_INETWORK_H