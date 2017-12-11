/**
 * Project Zia
 */

#ifndef _HOOKTYPE_H
#define _HOOKTYPE_H

enum HookType
{
    OnConnectionHook,
    OnPreParsingHook,
    OnParsingHook,
    OnPostParsingHook,
    OnPreContentHook,
    OnContentHook,
    OnPostContentHook,
    OnPreTransformHook,
    OnTransformHook,
    OnPostTransformHook,
    OnFinishedHook
};

#endif //_HOOKTYPE_H