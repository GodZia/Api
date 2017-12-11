/**
 * Project Zia
 */

#ifndef _IHTTPENTITY_H
#define _IHTTPENTITY_H

#include "IHttpRequest.h"
#include "IHttpResponse.h"
#include "IHttpHeader.h"
#include "IHttpBody.h"

class IHttpEntity
{
	public: 
		
		/**
		 * Get the HttpEntity header.
		 */
		virtual IHttpHeader const& getHeader() const = 0;
		
		/**
		 * Set the HttpEntity header.
		 * @param header The new header.
		 */
		virtual void setHeader(IHttpHeader const& header) = 0;;
		
		/**
		 * Get the HttpEntity body.
		 */
		virtual IHttpBody const& getBody() const = 0;
		
		/**
		 * Get the HttpEntity body.
		 * @param body The new body.
		 */
		virtual void setBody(IHttpBody const& body) = 0;
};

#endif //_IHTTPENTITY_H