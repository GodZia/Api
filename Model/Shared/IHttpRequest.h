/**
 * Project Zia
 */

#ifndef _IHTTPREQUEST_H
#define _IHTTPREQUEST_H

#include <string>

#include "IHttpEntity.h"
#include "HttpMethod.h"

class IHttpRequest: public IHttpEntity
{
	public: 
		
		/**
		 * Get the request's http method.
		 */
		virtual HttpMethod const& getMethod() const = 0;
		
		/**
		 * Set the request's http method.
		 * @param method The method.
		 */
		virtual void setMethod(HttpMethod const& method) = 0;
		
		/**
		 * The the request's URI.
		 */
		virtual std::string const& getUri() const = 0;
		
		/**
		 * Set the request's URI.
		 * @param uri The new uri.
		 */
		virtual void setUri(std::string const& uri) = 0;
};

#endif //_IHTTPREQUEST_H