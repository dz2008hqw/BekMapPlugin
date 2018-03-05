

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Mar 05 09:14:23 2018
 */
/* Compiler settings for BekMapPlugin.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_BekMapPluginLib,0xF01C9F8D,0xFD97,0x4E32,0xA1,0xE4,0xF9,0x25,0x48,0x1D,0x83,0xBF);


MIDL_DEFINE_GUID(IID, DIID__DBekMapPlugin,0x45D6C6E4,0x52A0,0x4FA3,0x81,0xFB,0x55,0xA9,0x6F,0xB8,0x04,0x1A);


MIDL_DEFINE_GUID(IID, DIID__DBekMapPluginEvents,0xBD60276B,0x7666,0x4C3B,0x87,0x6D,0x50,0x9E,0x28,0xDE,0x8E,0x73);


MIDL_DEFINE_GUID(CLSID, CLSID_BekMapPlugin,0xABFF8B05,0xDDA5,0x467F,0x86,0x5A,0x95,0xF0,0x0A,0x32,0x68,0x31);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



