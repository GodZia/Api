/**
 * Project Zia
 */

#ifndef _ICONNECTION_H
#define _ICONNECTION_H

#include "IModule.h"
#include "IHttpResponse.h"

class IConnection: public IModule
{
	public: 
		
		/**
		 * Register itself on the OnFinishedHook.
		 */
		virtual void registerOnFinishedHook() = 0;
		
		/**
		 * Called when must response to client.
		 * @param resp The request's response.
		 */
		virtual void onFinishedCallback(IHttpResponse const& resp) = 0;
};

#endif //_ICONNECTION_H