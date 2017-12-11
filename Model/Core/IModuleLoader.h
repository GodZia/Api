/**
 * Project Zia
 */

#ifndef _IMODULELOADER_H
#define _IMODULELOADER_H

#include <string>
#include "IModule.h"

class IModuleLoader
{
	public: 
		
		/**
		 * Load an IModule from its path.
		 * @param path The module's path.
		 */
		virtual IModule loadModuleInstance(std::string const& path) = 0;
};

#endif //_IMODULELOADER_H