/**
 * Project Zia
 */

#ifndef _IHTTPBODY_H
#define _IHTTPBODY_H

#include <string>

#include "IHttpEntity.h"

class IHttpBody
{
	public: 
		
		/**
		 * Get the body as string.
		 */
		virtual std::string const& getBodyAsString() const = 0;
		
		/**
		 * Set the body as string.
		 * @param body The new body.
		 */
		virtual void setBody(std::string const& body) = 0;
};

#endif //_IHTTPBODY_H