/**
 * Project Zia
 */

#ifndef _IHOOKMANAGER_H
#define _IHOOKMANAGER_H

#include "ICore.h"
#include "HookType.h"

class IHookManager
{
	public: 
		
		/**
		 * Return the IHookManager instance.
		 */
		virtual static IHookManager& getInstance() = 0;
		
		/**
		 * Add a method to a hooks list.
		 * @param type The hook type.
		 * @param function The function to call when triggered.
		 * @param priority The call priority.
		 */
		virtual void addHook(HookType type, function<> function, float priority) = 0;
		
		/**
		 * Trigger pipeline on a new connection.
		 * @param context The request context.
		 * @param connection The connection.
		 */
		virtual void triggerPipeline(IContext const& context, IConnection const& connection) = 0;
};

#endif //_IHOOKMANAGER_H