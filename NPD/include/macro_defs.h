#ifndef __MACRO_DEFS_H__
#define __MACRO_DEFS_H__

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) if( p ) { delete p; p = nullptr; }
#endif

#ifndef SAFE_DELETE_ARRAY
#ifndef SAFE_DELETE_ARRAY if( p ) { delete []p; p = nullptr; }
#endif

#endif // __MACRO_DEFS_H__
