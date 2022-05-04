#ifndef API_DLL_GLOBAL_H
#define API_DLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(API_DLL_LIBRARY)
#  define API_DLL_EXPORT Q_DECL_EXPORT
#else
#  define API_DLL_EXPORT Q_DECL_IMPORT
#endif

#endif // API_DLL_GLOBAL_H
