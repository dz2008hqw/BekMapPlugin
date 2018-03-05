

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __BekMapPluginidl_h__
#define __BekMapPluginidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DBekMapPlugin_FWD_DEFINED__
#define ___DBekMapPlugin_FWD_DEFINED__
typedef interface _DBekMapPlugin _DBekMapPlugin;

#endif 	/* ___DBekMapPlugin_FWD_DEFINED__ */


#ifndef ___DBekMapPluginEvents_FWD_DEFINED__
#define ___DBekMapPluginEvents_FWD_DEFINED__
typedef interface _DBekMapPluginEvents _DBekMapPluginEvents;

#endif 	/* ___DBekMapPluginEvents_FWD_DEFINED__ */


#ifndef __BekMapPlugin_FWD_DEFINED__
#define __BekMapPlugin_FWD_DEFINED__

#ifdef __cplusplus
typedef class BekMapPlugin BekMapPlugin;
#else
typedef struct BekMapPlugin BekMapPlugin;
#endif /* __cplusplus */

#endif 	/* __BekMapPlugin_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_BekMapPlugin_0000_0000 */
/* [local] */ 

#pragma once
#pragma region Desktop Family
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_BekMapPlugin_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_BekMapPlugin_0000_0000_v0_0_s_ifspec;


#ifndef __BekMapPluginLib_LIBRARY_DEFINED__
#define __BekMapPluginLib_LIBRARY_DEFINED__

/* library BekMapPluginLib */
/* [control][version][uuid] */ 


EXTERN_C const IID LIBID_BekMapPluginLib;

#ifndef ___DBekMapPlugin_DISPINTERFACE_DEFINED__
#define ___DBekMapPlugin_DISPINTERFACE_DEFINED__

/* dispinterface _DBekMapPlugin */
/* [uuid] */ 


EXTERN_C const IID DIID__DBekMapPlugin;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("45D6C6E4-52A0-4FA3-81FB-55A96FB8041A")
    _DBekMapPlugin : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DBekMapPluginVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DBekMapPlugin * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DBekMapPlugin * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DBekMapPlugin * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DBekMapPlugin * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DBekMapPlugin * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DBekMapPlugin * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DBekMapPlugin * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DBekMapPluginVtbl;

    interface _DBekMapPlugin
    {
        CONST_VTBL struct _DBekMapPluginVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DBekMapPlugin_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DBekMapPlugin_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DBekMapPlugin_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DBekMapPlugin_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DBekMapPlugin_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DBekMapPlugin_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DBekMapPlugin_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DBekMapPlugin_DISPINTERFACE_DEFINED__ */


#ifndef ___DBekMapPluginEvents_DISPINTERFACE_DEFINED__
#define ___DBekMapPluginEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DBekMapPluginEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__DBekMapPluginEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("BD60276B-7666-4C3B-876D-509E28DE8E73")
    _DBekMapPluginEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DBekMapPluginEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DBekMapPluginEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DBekMapPluginEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DBekMapPluginEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DBekMapPluginEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DBekMapPluginEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DBekMapPluginEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DBekMapPluginEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DBekMapPluginEventsVtbl;

    interface _DBekMapPluginEvents
    {
        CONST_VTBL struct _DBekMapPluginEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DBekMapPluginEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DBekMapPluginEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DBekMapPluginEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DBekMapPluginEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DBekMapPluginEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DBekMapPluginEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DBekMapPluginEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DBekMapPluginEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_BekMapPlugin;

#ifdef __cplusplus

class DECLSPEC_UUID("ABFF8B05-DDA5-467F-865A-95F00A326831")
BekMapPlugin;
#endif
#endif /* __BekMapPluginLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


