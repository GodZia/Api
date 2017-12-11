/**
 * Project Zia
 */

#ifndef _ICONFIGMANAGER_H
#define _ICONFIGMANAGER_H

#include <string>

class IConfigManager
{
	public: 
	
		/**
		 * Get config value from key.
		 * @param key The key.
		 */
		virtual IConfigValue const& getValueFromKey(std::string const& key) const = 0;
};

#endif //_ICONFIGMANAGER_H