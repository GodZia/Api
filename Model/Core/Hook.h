/**
 * Project Zia
 */

 #ifndef HOOKS_H_
 #define HOOKS_H_

#include <functional>
#include "IHttpRequest.h"
#include "IHttpResponse.h"


typedef std::function<void(IHttpRequest&, IHttpResponse&)> Hook;

 #endif