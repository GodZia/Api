/**
 * Project Zia
 */

#ifndef _ICONFIGVALUE_H
#define _ICONFIGVALUE_H

#include <string>

class IConfigValue
{
	public: 
		
		/**
		 * Get the IConfigValue key.
		 */
		virtual std::string const& getKey() const = 0;
		
		/**
		 * Get the IConfigValue value.
		 */
		virtual std::string const& getValue() const = 0;
};

#endif //_ICONFIGVALUE_H