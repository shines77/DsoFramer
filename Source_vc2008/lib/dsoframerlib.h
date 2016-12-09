

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Fri Dec 09 15:51:58 2016
 */
/* Compiler settings for .\lib\dsoframer.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

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


#ifndef __dsoframerlib_h__
#define __dsoframerlib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___FramerControl_FWD_DEFINED__
#define ___FramerControl_FWD_DEFINED__
typedef interface _FramerControl _FramerControl;
#endif 	/* ___FramerControl_FWD_DEFINED__ */


#ifndef ___DFramerCtlEvents_FWD_DEFINED__
#define ___DFramerCtlEvents_FWD_DEFINED__
typedef interface _DFramerCtlEvents _DFramerCtlEvents;
#endif 	/* ___DFramerCtlEvents_FWD_DEFINED__ */


#ifndef __FramerControl_FWD_DEFINED__
#define __FramerControl_FWD_DEFINED__

#ifdef __cplusplus
typedef class FramerControl FramerControl;
#else
typedef struct FramerControl FramerControl;
#endif /* __cplusplus */

#endif 	/* __FramerControl_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __DSOFramer_LIBRARY_DEFINED__
#define __DSOFramer_LIBRARY_DEFINED__

/* library DSOFramer */
/* [control][lcid][version][helpstring][uuid] */ 

typedef 
enum dsoBorderStyle
    {	dsoBorderNone	= 0,
	dsoBorderFlat	= ( dsoBorderNone + 1 ) ,
	dsoBorder3D	= ( dsoBorderFlat + 1 ) ,
	dsoBorder3DThin	= ( dsoBorder3D + 1 ) 
    } 	dsoBorderStyle;

typedef 
enum dsoShowDialogType
    {	dsoDialogNew	= 0,
	dsoDialogOpen	= ( dsoDialogNew + 1 ) ,
	dsoDialogSave	= ( dsoDialogOpen + 1 ) ,
	dsoDialogSaveCopy	= ( dsoDialogSave + 1 ) ,
	dsoDialogPrint	= ( dsoDialogSaveCopy + 1 ) ,
	dsoDialogPageSetup	= ( dsoDialogPrint + 1 ) ,
	dsoDialogProperties	= ( dsoDialogPageSetup + 1 ) 
    } 	dsoShowDialogType;

typedef 
enum dsoFileCommandType
    {	dsoFileNew	= 0,
	dsoFileOpen	= ( dsoFileNew + 1 ) ,
	dsoFileClose	= ( dsoFileOpen + 1 ) ,
	dsoFileSave	= ( dsoFileClose + 1 ) ,
	dsoFileSaveAs	= ( dsoFileSave + 1 ) ,
	dsoFilePrint	= ( dsoFileSaveAs + 1 ) ,
	dsoFilePageSetup	= ( dsoFilePrint + 1 ) ,
	dsoFileProperties	= ( dsoFilePageSetup + 1 ) ,
	dsoFilePrintPreview	= ( dsoFileProperties + 1 ) 
    } 	dsoFileCommandType;

typedef 
enum dsoFrameHookPolicy
    {	dsoNormalBehavior	= 0,
	dsoSetOnFirstOpen	= ( dsoNormalBehavior + 1 ) ,
	dsoResetNow	= ( dsoSetOnFirstOpen + 1 ) ,
	dsoDisableHook	= 0xffffffff
    } 	dsoFrameHookPolicy;

typedef 
enum dsoActivationPolicy
    {	dsoDefaultBehavior	= 0,
	dsoKeepUIActiveOnAppDeactive	= 0x1,
	dsoCompDeactivateOnLostFocus	= 0x2,
	dsoIPDeactivateOnCompDeactive	= 0x4
    } 	dsoActivationPolicy;


DEFINE_GUID(LIBID_DSOFramer,0x00460180,0x9E5E,0x11d5,0xB7,0xC8,0xB8,0x26,0x90,0x41,0xDD,0x57);

#ifndef ___FramerControl_INTERFACE_DEFINED__
#define ___FramerControl_INTERFACE_DEFINED__

/* interface _FramerControl */
/* [object][oleautomation][dual][version][hidden][uuid] */ 


DEFINE_GUID(IID__FramerControl,0x00460181,0x9E5E,0x11d5,0xB7,0xC8,0xB8,0x26,0x90,0x41,0xDD,0x57);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00460181-9E5E-11d5-B7C8-B8269041DD57")
    _FramerControl : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Activate( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveDocument( 
            /* [retval][out] */ IDispatch **ppdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateNew( 
            /* [in] */ BSTR ProgIdOrTemplate) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ VARIANT Document,
            /* [optional][in] */ VARIANT ReadOnly,
            /* [optional][in] */ VARIANT ProgId,
            /* [optional][in] */ VARIANT WebUsername,
            /* [optional][in] */ VARIANT WebPassword) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( 
            /* [optional][in] */ VARIANT SaveAsDocument,
            /* [optional][in] */ VARIANT OverwriteExisting,
            /* [optional][in] */ VARIANT WebUsername,
            /* [optional][in] */ VARIANT WebPassword) = 0;
        
        virtual /* [hidden][id] */ HRESULT STDMETHODCALLTYPE _PrintOutOld( 
            /* [optional][in] */ VARIANT PromptToSelectPrinter) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Caption( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Caption( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Titlebar( 
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Titlebar( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Toolbars( 
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Toolbars( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][id][nonbrowsable][propput] */ HRESULT STDMETHODCALLTYPE put_ModalState( 
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][nonbrowsable][propget] */ HRESULT STDMETHODCALLTYPE get_ModalState( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShowDialog( 
            /* [in] */ dsoShowDialogType DlgType) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableFileCommand( 
            /* [in] */ dsoFileCommandType Item,
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableFileCommand( 
            /* [in] */ dsoFileCommandType Item,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BorderStyle( 
            /* [in] */ dsoBorderStyle style) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BorderStyle( 
            /* [retval][out] */ dsoBorderStyle *pstyle) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BorderColor( 
            /* [in] */ /* external definition not present */ OLE_COLOR clr) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BorderColor( 
            /* [retval][out] */ /* external definition not present */ OLE_COLOR *pclr) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BackColor( 
            /* [in] */ /* external definition not present */ OLE_COLOR clr) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BackColor( 
            /* [retval][out] */ /* external definition not present */ OLE_COLOR *pclr) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ForeColor( 
            /* [in] */ /* external definition not present */ OLE_COLOR clr) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ForeColor( 
            /* [retval][out] */ /* external definition not present */ OLE_COLOR *pclr) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TitlebarColor( 
            /* [in] */ /* external definition not present */ OLE_COLOR clr) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TitlebarColor( 
            /* [retval][out] */ /* external definition not present */ OLE_COLOR *pclr) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TitlebarTextColor( 
            /* [in] */ /* external definition not present */ OLE_COLOR clr) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TitlebarTextColor( 
            /* [retval][out] */ /* external definition not present */ OLE_COLOR *pclr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExecOleCommand( 
            /* [in] */ LONG OLECMDID,
            /* [optional][in] */ VARIANT Options,
            /* [optional][in] */ VARIANT *vInParam,
            /* [optional][out][in] */ VARIANT *vInOutParam) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Menubar( 
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Menubar( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HostName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HostName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DocumentFullName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PrintOut( 
            /* [optional][in] */ VARIANT PromptUser,
            /* [optional][in] */ VARIANT PrinterName,
            /* [optional][in] */ VARIANT Copies,
            /* [optional][in] */ VARIANT FromPage,
            /* [optional][in] */ VARIANT ToPage,
            /* [optional][in] */ VARIANT OutputFile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PrintPreview( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PrintPreviewExit( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsReadOnly( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsDirty( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LockServer( 
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LockServer( 
            /* [retval][out] */ VARIANT_BOOL *pvbool) = 0;
        
        virtual /* [helpstring][nonbrowsable][id] */ HRESULT STDMETHODCALLTYPE GetDataObjectContent( 
            /* [in] */ VARIANT ClipFormatNameOrNumber,
            /* [retval][out] */ VARIANT *pvResults) = 0;
        
        virtual /* [helpstring][nonbrowsable][id] */ HRESULT STDMETHODCALLTYPE SetDataObjectContent( 
            /* [in] */ VARIANT ClipFormatNameOrNumber,
            /* [in] */ VARIANT DataByteArray) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ActivationPolicy( 
            /* [in] */ enum dsoActivationPolicy lPolicy) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ActivationPolicy( 
            /* [retval][out] */ enum dsoActivationPolicy *plPolicy) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FrameHookPolicy( 
            /* [in] */ enum dsoFrameHookPolicy lPolicy) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FrameHookPolicy( 
            /* [retval][out] */ enum dsoFrameHookPolicy *plPolicy) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MenuAccelerators( 
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MenuAccelerators( 
            /* [retval][out] */ VARIANT_BOOL *pvbool) = 0;
        
        virtual /* [helpstring][id][nonbrowsable][propput] */ HRESULT STDMETHODCALLTYPE put_EventsEnabled( 
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][nonbrowsable][propget] */ HRESULT STDMETHODCALLTYPE get_EventsEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pvbool) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DocumentName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct _FramerControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _FramerControl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _FramerControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _FramerControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _FramerControl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _FramerControl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _FramerControl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _FramerControl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            _FramerControl * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveDocument )( 
            _FramerControl * This,
            /* [retval][out] */ IDispatch **ppdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateNew )( 
            _FramerControl * This,
            /* [in] */ BSTR ProgIdOrTemplate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            _FramerControl * This,
            /* [in] */ VARIANT Document,
            /* [optional][in] */ VARIANT ReadOnly,
            /* [optional][in] */ VARIANT ProgId,
            /* [optional][in] */ VARIANT WebUsername,
            /* [optional][in] */ VARIANT WebPassword);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            _FramerControl * This,
            /* [optional][in] */ VARIANT SaveAsDocument,
            /* [optional][in] */ VARIANT OverwriteExisting,
            /* [optional][in] */ VARIANT WebUsername,
            /* [optional][in] */ VARIANT WebPassword);
        
        /* [hidden][id] */ HRESULT ( STDMETHODCALLTYPE *_PrintOutOld )( 
            _FramerControl * This,
            /* [optional][in] */ VARIANT PromptToSelectPrinter);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            _FramerControl * This);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Caption )( 
            _FramerControl * This,
            /* [in] */ BSTR bstr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Caption )( 
            _FramerControl * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Titlebar )( 
            _FramerControl * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Titlebar )( 
            _FramerControl * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Toolbars )( 
            _FramerControl * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Toolbars )( 
            _FramerControl * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        /* [helpstring][id][nonbrowsable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ModalState )( 
            _FramerControl * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][nonbrowsable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ModalState )( 
            _FramerControl * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowDialog )( 
            _FramerControl * This,
            /* [in] */ dsoShowDialogType DlgType);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableFileCommand )( 
            _FramerControl * This,
            /* [in] */ dsoFileCommandType Item,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableFileCommand )( 
            _FramerControl * This,
            /* [in] */ dsoFileCommandType Item,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BorderStyle )( 
            _FramerControl * This,
            /* [in] */ dsoBorderStyle style);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BorderStyle )( 
            _FramerControl * This,
            /* [retval][out] */ dsoBorderStyle *pstyle);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BorderColor )( 
            _FramerControl * This,
            /* [in] */ /* external definition not present */ OLE_COLOR clr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BorderColor )( 
            _FramerControl * This,
            /* [retval][out] */ /* external definition not present */ OLE_COLOR *pclr);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackColor )( 
            _FramerControl * This,
            /* [in] */ /* external definition not present */ OLE_COLOR clr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackColor )( 
            _FramerControl * This,
            /* [retval][out] */ /* external definition not present */ OLE_COLOR *pclr);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ForeColor )( 
            _FramerControl * This,
            /* [in] */ /* external definition not present */ OLE_COLOR clr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ForeColor )( 
            _FramerControl * This,
            /* [retval][out] */ /* external definition not present */ OLE_COLOR *pclr);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TitlebarColor )( 
            _FramerControl * This,
            /* [in] */ /* external definition not present */ OLE_COLOR clr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TitlebarColor )( 
            _FramerControl * This,
            /* [retval][out] */ /* external definition not present */ OLE_COLOR *pclr);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TitlebarTextColor )( 
            _FramerControl * This,
            /* [in] */ /* external definition not present */ OLE_COLOR clr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TitlebarTextColor )( 
            _FramerControl * This,
            /* [retval][out] */ /* external definition not present */ OLE_COLOR *pclr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExecOleCommand )( 
            _FramerControl * This,
            /* [in] */ LONG OLECMDID,
            /* [optional][in] */ VARIANT Options,
            /* [optional][in] */ VARIANT *vInParam,
            /* [optional][out][in] */ VARIANT *vInOutParam);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Menubar )( 
            _FramerControl * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Menubar )( 
            _FramerControl * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HostName )( 
            _FramerControl * This,
            /* [in] */ BSTR bstr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HostName )( 
            _FramerControl * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DocumentFullName )( 
            _FramerControl * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PrintOut )( 
            _FramerControl * This,
            /* [optional][in] */ VARIANT PromptUser,
            /* [optional][in] */ VARIANT PrinterName,
            /* [optional][in] */ VARIANT Copies,
            /* [optional][in] */ VARIANT FromPage,
            /* [optional][in] */ VARIANT ToPage,
            /* [optional][in] */ VARIANT OutputFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PrintPreview )( 
            _FramerControl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PrintPreviewExit )( 
            _FramerControl * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsReadOnly )( 
            _FramerControl * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDirty )( 
            _FramerControl * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LockServer )( 
            _FramerControl * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LockServer )( 
            _FramerControl * This,
            /* [retval][out] */ VARIANT_BOOL *pvbool);
        
        /* [helpstring][nonbrowsable][id] */ HRESULT ( STDMETHODCALLTYPE *GetDataObjectContent )( 
            _FramerControl * This,
            /* [in] */ VARIANT ClipFormatNameOrNumber,
            /* [retval][out] */ VARIANT *pvResults);
        
        /* [helpstring][nonbrowsable][id] */ HRESULT ( STDMETHODCALLTYPE *SetDataObjectContent )( 
            _FramerControl * This,
            /* [in] */ VARIANT ClipFormatNameOrNumber,
            /* [in] */ VARIANT DataByteArray);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActivationPolicy )( 
            _FramerControl * This,
            /* [in] */ enum dsoActivationPolicy lPolicy);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActivationPolicy )( 
            _FramerControl * This,
            /* [retval][out] */ enum dsoActivationPolicy *plPolicy);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FrameHookPolicy )( 
            _FramerControl * This,
            /* [in] */ enum dsoFrameHookPolicy lPolicy);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FrameHookPolicy )( 
            _FramerControl * This,
            /* [retval][out] */ enum dsoFrameHookPolicy *plPolicy);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MenuAccelerators )( 
            _FramerControl * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MenuAccelerators )( 
            _FramerControl * This,
            /* [retval][out] */ VARIANT_BOOL *pvbool);
        
        /* [helpstring][id][nonbrowsable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EventsEnabled )( 
            _FramerControl * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][nonbrowsable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EventsEnabled )( 
            _FramerControl * This,
            /* [retval][out] */ VARIANT_BOOL *pvbool);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DocumentName )( 
            _FramerControl * This,
            /* [retval][out] */ BSTR *pbstr);
        
        END_INTERFACE
    } _FramerControlVtbl;

    interface _FramerControl
    {
        CONST_VTBL struct _FramerControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _FramerControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _FramerControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _FramerControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _FramerControl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _FramerControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _FramerControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _FramerControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _FramerControl_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define _FramerControl_get_ActiveDocument(This,ppdisp)	\
    ( (This)->lpVtbl -> get_ActiveDocument(This,ppdisp) ) 

#define _FramerControl_CreateNew(This,ProgIdOrTemplate)	\
    ( (This)->lpVtbl -> CreateNew(This,ProgIdOrTemplate) ) 

#define _FramerControl_Open(This,Document,ReadOnly,ProgId,WebUsername,WebPassword)	\
    ( (This)->lpVtbl -> Open(This,Document,ReadOnly,ProgId,WebUsername,WebPassword) ) 

#define _FramerControl_Save(This,SaveAsDocument,OverwriteExisting,WebUsername,WebPassword)	\
    ( (This)->lpVtbl -> Save(This,SaveAsDocument,OverwriteExisting,WebUsername,WebPassword) ) 

#define _FramerControl__PrintOutOld(This,PromptToSelectPrinter)	\
    ( (This)->lpVtbl -> _PrintOutOld(This,PromptToSelectPrinter) ) 

#define _FramerControl_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define _FramerControl_put_Caption(This,bstr)	\
    ( (This)->lpVtbl -> put_Caption(This,bstr) ) 

#define _FramerControl_get_Caption(This,pbstr)	\
    ( (This)->lpVtbl -> get_Caption(This,pbstr) ) 

#define _FramerControl_put_Titlebar(This,vbool)	\
    ( (This)->lpVtbl -> put_Titlebar(This,vbool) ) 

#define _FramerControl_get_Titlebar(This,pbool)	\
    ( (This)->lpVtbl -> get_Titlebar(This,pbool) ) 

#define _FramerControl_put_Toolbars(This,vbool)	\
    ( (This)->lpVtbl -> put_Toolbars(This,vbool) ) 

#define _FramerControl_get_Toolbars(This,pbool)	\
    ( (This)->lpVtbl -> get_Toolbars(This,pbool) ) 

#define _FramerControl_put_ModalState(This,vbool)	\
    ( (This)->lpVtbl -> put_ModalState(This,vbool) ) 

#define _FramerControl_get_ModalState(This,pbool)	\
    ( (This)->lpVtbl -> get_ModalState(This,pbool) ) 

#define _FramerControl_ShowDialog(This,DlgType)	\
    ( (This)->lpVtbl -> ShowDialog(This,DlgType) ) 

#define _FramerControl_put_EnableFileCommand(This,Item,vbool)	\
    ( (This)->lpVtbl -> put_EnableFileCommand(This,Item,vbool) ) 

#define _FramerControl_get_EnableFileCommand(This,Item,pbool)	\
    ( (This)->lpVtbl -> get_EnableFileCommand(This,Item,pbool) ) 

#define _FramerControl_put_BorderStyle(This,style)	\
    ( (This)->lpVtbl -> put_BorderStyle(This,style) ) 

#define _FramerControl_get_BorderStyle(This,pstyle)	\
    ( (This)->lpVtbl -> get_BorderStyle(This,pstyle) ) 

#define _FramerControl_put_BorderColor(This,clr)	\
    ( (This)->lpVtbl -> put_BorderColor(This,clr) ) 

#define _FramerControl_get_BorderColor(This,pclr)	\
    ( (This)->lpVtbl -> get_BorderColor(This,pclr) ) 

#define _FramerControl_put_BackColor(This,clr)	\
    ( (This)->lpVtbl -> put_BackColor(This,clr) ) 

#define _FramerControl_get_BackColor(This,pclr)	\
    ( (This)->lpVtbl -> get_BackColor(This,pclr) ) 

#define _FramerControl_put_ForeColor(This,clr)	\
    ( (This)->lpVtbl -> put_ForeColor(This,clr) ) 

#define _FramerControl_get_ForeColor(This,pclr)	\
    ( (This)->lpVtbl -> get_ForeColor(This,pclr) ) 

#define _FramerControl_put_TitlebarColor(This,clr)	\
    ( (This)->lpVtbl -> put_TitlebarColor(This,clr) ) 

#define _FramerControl_get_TitlebarColor(This,pclr)	\
    ( (This)->lpVtbl -> get_TitlebarColor(This,pclr) ) 

#define _FramerControl_put_TitlebarTextColor(This,clr)	\
    ( (This)->lpVtbl -> put_TitlebarTextColor(This,clr) ) 

#define _FramerControl_get_TitlebarTextColor(This,pclr)	\
    ( (This)->lpVtbl -> get_TitlebarTextColor(This,pclr) ) 

#define _FramerControl_ExecOleCommand(This,OLECMDID,Options,vInParam,vInOutParam)	\
    ( (This)->lpVtbl -> ExecOleCommand(This,OLECMDID,Options,vInParam,vInOutParam) ) 

#define _FramerControl_put_Menubar(This,vbool)	\
    ( (This)->lpVtbl -> put_Menubar(This,vbool) ) 

#define _FramerControl_get_Menubar(This,pbool)	\
    ( (This)->lpVtbl -> get_Menubar(This,pbool) ) 

#define _FramerControl_put_HostName(This,bstr)	\
    ( (This)->lpVtbl -> put_HostName(This,bstr) ) 

#define _FramerControl_get_HostName(This,pbstr)	\
    ( (This)->lpVtbl -> get_HostName(This,pbstr) ) 

#define _FramerControl_get_DocumentFullName(This,pbstr)	\
    ( (This)->lpVtbl -> get_DocumentFullName(This,pbstr) ) 

#define _FramerControl_PrintOut(This,PromptUser,PrinterName,Copies,FromPage,ToPage,OutputFile)	\
    ( (This)->lpVtbl -> PrintOut(This,PromptUser,PrinterName,Copies,FromPage,ToPage,OutputFile) ) 

#define _FramerControl_PrintPreview(This)	\
    ( (This)->lpVtbl -> PrintPreview(This) ) 

#define _FramerControl_PrintPreviewExit(This)	\
    ( (This)->lpVtbl -> PrintPreviewExit(This) ) 

#define _FramerControl_get_IsReadOnly(This,pbool)	\
    ( (This)->lpVtbl -> get_IsReadOnly(This,pbool) ) 

#define _FramerControl_get_IsDirty(This,pbool)	\
    ( (This)->lpVtbl -> get_IsDirty(This,pbool) ) 

#define _FramerControl_put_LockServer(This,vbool)	\
    ( (This)->lpVtbl -> put_LockServer(This,vbool) ) 

#define _FramerControl_get_LockServer(This,pvbool)	\
    ( (This)->lpVtbl -> get_LockServer(This,pvbool) ) 

#define _FramerControl_GetDataObjectContent(This,ClipFormatNameOrNumber,pvResults)	\
    ( (This)->lpVtbl -> GetDataObjectContent(This,ClipFormatNameOrNumber,pvResults) ) 

#define _FramerControl_SetDataObjectContent(This,ClipFormatNameOrNumber,DataByteArray)	\
    ( (This)->lpVtbl -> SetDataObjectContent(This,ClipFormatNameOrNumber,DataByteArray) ) 

#define _FramerControl_put_ActivationPolicy(This,lPolicy)	\
    ( (This)->lpVtbl -> put_ActivationPolicy(This,lPolicy) ) 

#define _FramerControl_get_ActivationPolicy(This,plPolicy)	\
    ( (This)->lpVtbl -> get_ActivationPolicy(This,plPolicy) ) 

#define _FramerControl_put_FrameHookPolicy(This,lPolicy)	\
    ( (This)->lpVtbl -> put_FrameHookPolicy(This,lPolicy) ) 

#define _FramerControl_get_FrameHookPolicy(This,plPolicy)	\
    ( (This)->lpVtbl -> get_FrameHookPolicy(This,plPolicy) ) 

#define _FramerControl_put_MenuAccelerators(This,vbool)	\
    ( (This)->lpVtbl -> put_MenuAccelerators(This,vbool) ) 

#define _FramerControl_get_MenuAccelerators(This,pvbool)	\
    ( (This)->lpVtbl -> get_MenuAccelerators(This,pvbool) ) 

#define _FramerControl_put_EventsEnabled(This,vbool)	\
    ( (This)->lpVtbl -> put_EventsEnabled(This,vbool) ) 

#define _FramerControl_get_EventsEnabled(This,pvbool)	\
    ( (This)->lpVtbl -> get_EventsEnabled(This,pvbool) ) 

#define _FramerControl_get_DocumentName(This,pbstr)	\
    ( (This)->lpVtbl -> get_DocumentName(This,pbstr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___FramerControl_INTERFACE_DEFINED__ */


#ifndef ___DFramerCtlEvents_DISPINTERFACE_DEFINED__
#define ___DFramerCtlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DFramerCtlEvents */
/* [hidden][uuid] */ 


DEFINE_GUID(DIID__DFramerCtlEvents,0x00460185,0x9E5E,0x11d5,0xB7,0xC8,0xB8,0x26,0x90,0x41,0xDD,0x57);

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("00460185-9E5E-11d5-B7C8-B8269041DD57")
    _DFramerCtlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DFramerCtlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DFramerCtlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DFramerCtlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DFramerCtlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DFramerCtlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DFramerCtlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DFramerCtlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DFramerCtlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DFramerCtlEventsVtbl;

    interface _DFramerCtlEvents
    {
        CONST_VTBL struct _DFramerCtlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DFramerCtlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DFramerCtlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DFramerCtlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DFramerCtlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DFramerCtlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DFramerCtlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DFramerCtlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DFramerCtlEvents_DISPINTERFACE_DEFINED__ */


DEFINE_GUID(CLSID_FramerControl,0x00460182,0x9E5E,0x11d5,0xB7,0xC8,0xB8,0x26,0x90,0x41,0xDD,0x57);

#ifdef __cplusplus

class DECLSPEC_UUID("00460182-9E5E-11d5-B7C8-B8269041DD57")
FramerControl;
#endif
#endif /* __DSOFramer_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


