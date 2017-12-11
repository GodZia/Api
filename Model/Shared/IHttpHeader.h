/**
 * Project Zia
 */

#ifndef _IHTTPHEADER_H
#define _IHTTPHEADER_H

#include <string>

#include "IHttpEntity.h"

class IHttpHeader
{
	public: 
		
		/**
		 * Get header value by name.
		 * @param name The field's name.
		 */
		virtual std::string const& getHeaderByName(std::string const& name) const = 0;
		
		/**
		 * Get header value by name.
		 * @param name The field's name.
		 * @param value The new value.
		 */
		virtual void setHeaderByName(std::string const& name, std::string const& value) = 0;
};

#endif //_IHTTPHEADER_H