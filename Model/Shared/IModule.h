/**
 * Project Zia
 */

#ifndef _IMODULE_H
#define _IMODULE_H

#include <string>

#include "IHookManager.h"

class IModule
{
	public: 
		
		/**
		 * Load a module.
		 */
		virtual void load() = 0;
		
		/**
		 * Reload a module.
		 */
		virtual void reload() = 0;
		
		/**
		 * Register itself on the IHookManager.
		 * @param hookManager The hook manager.
		 */
		virtual void registerHooks(IHookManager const& hookManager) = 0;
		
		/**
		 * Get the module name.
		 */
		virtual std::string const& getName() const = 0;
		
		/**
		 * Get the module version.
		 */
		virtual std::string const& getVersion() const = 0;
};

#endif //_IMODULE_H