/**
 * Project Zia
 */

#ifndef _ICLIENT_H
#define _ICLIENT_H

#include <string>

class IClient
{
	public:
		
		/**
		 * Get the client's IP.
		 */
		virtual std::string const& getIp() const = 0;
		
		/**
		 * Set the client's IP.
		 * @param ip The new client's IP
		 */
		virtual void setIp(std::string const& ip) = 0;
		
		/**
		 * Get the client's port.
		 */
		virtual int const& getPort() const = 0;
		
		/**
		 * Set the client's port.
		 * @param port The new client's port.
		 */
		virtual void setPort(int port) = 0;
};

#endif //_ICLIENT_H