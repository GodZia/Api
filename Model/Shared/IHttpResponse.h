/**
 * Project Zia
 */

#ifndef _IHTTPRESPONSE_H
#define _IHTTPRESPONSE_H

#include <string>

#include "IHttpEntity.h"

class IHttpResponse: public IHttpEntity
{
	public: 
		
		/**
		 * Get the http response status code.
		 */
		virtual int getStatusCode() const = 0;
		
		/**
		 * Set the http response status code.
		 * @param code The response status code.
		 */
		virtual void setStatusCode(int code) = 0;
		
		/**
		 * Get the http response reason.
		 */
		virtual std::string const& getReason() const = 0;
		
		/**
		 * Get the http response reason.
		 * @param reason The new reason.
		 */
		virtual void setReason(std::string const& reason) = 0;
};

#endif //_IHTTPRESPONSE_H