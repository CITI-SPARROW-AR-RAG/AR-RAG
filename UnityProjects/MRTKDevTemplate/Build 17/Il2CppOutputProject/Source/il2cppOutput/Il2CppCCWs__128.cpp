﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE;
struct IDtdDefaultAttributeInfoU5BU5D_t12F6BBCB685260A9D90FBF06F817D999FFE30545;
struct IEffectU5BU5D_t3329ED00FEBFD9340E08D47D3DF35449BB44B540;
struct IEventBindingU5BU5D_tAB1BEC9D22448BDCC4596A5AF238BAD5571811FE;
struct IEventDispatchingStrategyU5BU5D_tFA34355B1D26B7562068B4D394A28C62295EBD97;
struct IEventHandlerU5BU5D_t8B5095152BCB4F52D8AB93DF0B3DD76B0ED1B97D;
struct IGazeInteractorU5BU5D_t481873A89C9E21234D73CEE2402FF6DECE3C6AEE;
struct IGazePinchInteractorU5BU5D_t6C0B3468931874EB62FCCBA32D74139F4178DD95;
struct IGrabInteractorU5BU5D_t3AA5BB34A0B4A39ADDC2E7A862BBA47C815DE68E;
struct IGroupBoxOptionU5BU5D_t19E3F4422566FEE1EBF7F4E74DF8FAD1491A1FAC;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3;
struct IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301;
struct IIterator_1_t6D3C39C75DBE16D2237EC9A0B3E17DA9E379F427;
struct IVectorView_1_t1FD766F622AFD5FAD43C6156FF7B0723964D242E;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_t67964498FC286EEC97D421764DAB3BBD44749B54 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mA2A1BF30512E655012F26A62FAB85081231FC1D9(IIterator_1_t6D3C39C75DBE16D2237EC9A0B3E17DA9E379F427** comReturnValue) = 0;
};
struct NOVTABLE IVectorView_1_t1FD766F622AFD5FAD43C6156FF7B0723964D242E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m750977B15207B4A735FAD7F65F63E72451EA583A(uint32_t ___0_index, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3D90E08327E4B9EF0CA6242FF577B955D63DD926(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1694744B5FD45296B4D110F4A5AC21F64327527A(IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301* ___0_value, uint32_t* ___1_index, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6D30998AC06146B7D89840C01429A5A699C49783(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** ___1_items, uint32_t* comReturnValue) = 0;
};
struct NOVTABLE IVector_1_tE9EC0C4D9F5FEAFF341EDFD095455FAE50ACB722 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m06E74CAE6C393CE12A02AB3D778C7F95BBBCF64B(uint32_t ___0_index, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m29834B3DA7642A833DCE239532253B4CB1DA55DF(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_mE6FDB183F60FBF1B859915F86C7991B2CF44B209(IVectorView_1_t1FD766F622AFD5FAD43C6156FF7B0723964D242E** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m68287533842CCDBE65010747E7CDE03DEA51AF7E(IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301* ___0_value, uint32_t* ___1_index, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m244E3DC7CFA4D888325FC632A7CF2C382284333A(uint32_t ___0_index, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301* ___1_value) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m2733A9A801DD58AB4A50DDF68F7818F39747DB7E(uint32_t ___0_index, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301* ___1_value) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m2DF699F3D4078D8E7A14566F0BA9D3419A99D000(uint32_t ___0_index) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m3A90C2F48594888777689852516B28994D1CF9D7(IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301* ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m81487B9D0C4A408B52ABEC5DD76BE40E5DE9C3B2() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m282D7B045629FEB9F686AF8AF923B629B6E74552() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_mDC54F67ED1F7C72F30F2B552964474EABB52BCE7(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** ___1_items, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mBC6924EC293E471E9D656CC83EEEBC304B2A4FBF(uint32_t ___0_itemsArraySize, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** ___0_items) = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct NOVTABLE IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() = 0;
};
struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05  : public RuntimeObject
{
	IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tF7608B82384542DEB200F8E211D9D36AE02EAB58  : public RuntimeObject
{
	IDtdDefaultAttributeInfoU5BU5D_t12F6BBCB685260A9D90FBF06F817D999FFE30545* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tF5BB8001A746C1218E94B112568A22C77FEAA9F8  : public RuntimeObject
{
	IEffectU5BU5D_t3329ED00FEBFD9340E08D47D3DF35449BB44B540* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t60791FB9179CEFADA93C6B032DED2E65CB5DA58F  : public RuntimeObject
{
	IEventBindingU5BU5D_tAB1BEC9D22448BDCC4596A5AF238BAD5571811FE* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t2F690D65CDFD8A655A39952668F912C3F99B0434  : public RuntimeObject
{
	IEventDispatchingStrategyU5BU5D_tFA34355B1D26B7562068B4D394A28C62295EBD97* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3  : public RuntimeObject
{
	IEventHandlerU5BU5D_t8B5095152BCB4F52D8AB93DF0B3DD76B0ED1B97D* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t88C2B498E1A9DDACDBAC9D19E9FA82F251A39EF5  : public RuntimeObject
{
	IGazeInteractorU5BU5D_t481873A89C9E21234D73CEE2402FF6DECE3C6AEE* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tC8E43CFEE45D260F5AE5F604CFBF26BCE2CA9F96  : public RuntimeObject
{
	IGazePinchInteractorU5BU5D_t6C0B3468931874EB62FCCBA32D74139F4178DD95* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t04E509203B35ADE010A7D8074C73A53C4FEDED2E  : public RuntimeObject
{
	IGrabInteractorU5BU5D_t3AA5BB34A0B4A39ADDC2E7A862BBA47C815DE68E* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA4AD03C94B5D6110E0839034F4906B6B022EF941  : public RuntimeObject
{
	IGroupBoxOptionU5BU5D_t19E3F4422566FEE1EBF7F4E74DF8FAD1491A1FAC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05_StaticFields
{
	IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* ___s_emptyArray;
};
struct List_1_tF7608B82384542DEB200F8E211D9D36AE02EAB58_StaticFields
{
	IDtdDefaultAttributeInfoU5BU5D_t12F6BBCB685260A9D90FBF06F817D999FFE30545* ___s_emptyArray;
};
struct List_1_tF5BB8001A746C1218E94B112568A22C77FEAA9F8_StaticFields
{
	IEffectU5BU5D_t3329ED00FEBFD9340E08D47D3DF35449BB44B540* ___s_emptyArray;
};
struct List_1_t60791FB9179CEFADA93C6B032DED2E65CB5DA58F_StaticFields
{
	IEventBindingU5BU5D_tAB1BEC9D22448BDCC4596A5AF238BAD5571811FE* ___s_emptyArray;
};
struct List_1_t2F690D65CDFD8A655A39952668F912C3F99B0434_StaticFields
{
	IEventDispatchingStrategyU5BU5D_tFA34355B1D26B7562068B4D394A28C62295EBD97* ___s_emptyArray;
};
struct List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3_StaticFields
{
	IEventHandlerU5BU5D_t8B5095152BCB4F52D8AB93DF0B3DD76B0ED1B97D* ___s_emptyArray;
};
struct List_1_t88C2B498E1A9DDACDBAC9D19E9FA82F251A39EF5_StaticFields
{
	IGazeInteractorU5BU5D_t481873A89C9E21234D73CEE2402FF6DECE3C6AEE* ___s_emptyArray;
};
struct List_1_tC8E43CFEE45D260F5AE5F604CFBF26BCE2CA9F96_StaticFields
{
	IGazePinchInteractorU5BU5D_t6C0B3468931874EB62FCCBA32D74139F4178DD95* ___s_emptyArray;
};
struct List_1_t04E509203B35ADE010A7D8074C73A53C4FEDED2E_StaticFields
{
	IGrabInteractorU5BU5D_t3AA5BB34A0B4A39ADDC2E7A862BBA47C815DE68E* ___s_emptyArray;
};
struct List_1_tA4AD03C94B5D6110E0839034F4906B6B022EF941_StaticFields
{
	IGroupBoxOptionU5BU5D_t19E3F4422566FEE1EBF7F4E74DF8FAD1491A1FAC* ___s_emptyArray;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IVector_1_GetAt_m06E74CAE6C393CE12A02AB3D778C7F95BBBCF64B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_m29834B3DA7642A833DCE239532253B4CB1DA55DF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_mE6FDB183F60FBF1B859915F86C7991B2CF44B209_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t1FD766F622AFD5FAD43C6156FF7B0723964D242E** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_m68287533842CCDBE65010747E7CDE03DEA51AF7E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301* ___0_value, uint32_t* ___1_index, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_m244E3DC7CFA4D888325FC632A7CF2C382284333A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301* ___1_value);
il2cpp_hresult_t IVector_1_InsertAt_m2733A9A801DD58AB4A50DDF68F7818F39747DB7E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301* ___1_value);
il2cpp_hresult_t IVector_1_RemoveAt_m2DF699F3D4078D8E7A14566F0BA9D3419A99D000_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index);
il2cpp_hresult_t IVector_1_Append_m3A90C2F48594888777689852516B28994D1CF9D7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301* ___0_value);
il2cpp_hresult_t IVector_1_RemoveAtEnd_m81487B9D0C4A408B52ABEC5DD76BE40E5DE9C3B2_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_m282D7B045629FEB9F686AF8AF923B629B6E74552_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_mDC54F67ED1F7C72F30F2B552964474EABB52BCE7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** ___1_items, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_mBC6924EC293E471E9D656CC83EEEBC304B2A4FBF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_itemsArraySize, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** ___0_items);
il2cpp_hresult_t IIterable_1_First_mA2A1BF30512E655012F26A62FAB85081231FC1D9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6D3C39C75DBE16D2237EC9A0B3E17DA9E379F427** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, Il2CppIInspectable* ___1_value);
il2cpp_hresult_t IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, Il2CppIInspectable* ___1_value);
il2cpp_hresult_t IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index);
il2cpp_hresult_t IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_value);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVectorView_1_GetAt_m750977B15207B4A735FAD7F65F63E72451EA583A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m3D90E08327E4B9EF0CA6242FF577B955D63DD926_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m1694744B5FD45296B4D110F4A5AC21F64327527A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301* ___0_value, uint32_t* ___1_index, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m6D30998AC06146B7D89840C01429A5A699C49783_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** ___1_items, uint32_t* comReturnValue);



struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05_ComCallableWrapper>, IVector_1_tE9EC0C4D9F5FEAFF341EDFD095455FAE50ACB722, IIterable_1_t67964498FC286EEC97D421764DAB3BBD44749B54, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A, IVectorView_1_t1FD766F622AFD5FAD43C6156FF7B0723964D242E
{
	inline List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVector_1_tE9EC0C4D9F5FEAFF341EDFD095455FAE50ACB722::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_tE9EC0C4D9F5FEAFF341EDFD095455FAE50ACB722*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t67964498FC286EEC97D421764DAB3BBD44749B54::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t67964498FC286EEC97D421764DAB3BBD44749B54*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t1FD766F622AFD5FAD43C6156FF7B0723964D242E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t1FD766F622AFD5FAD43C6156FF7B0723964D242E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(5);
		interfaceIds[0] = IVector_1_tE9EC0C4D9F5FEAFF341EDFD095455FAE50ACB722::IID;
		interfaceIds[1] = IIterable_1_t67964498FC286EEC97D421764DAB3BBD44749B54::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;
		interfaceIds[4] = IVectorView_1_t1FD766F622AFD5FAD43C6156FF7B0723964D242E::IID;

		*iidCount = 5;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m06E74CAE6C393CE12A02AB3D778C7F95BBBCF64B(uint32_t ___0_index, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_m06E74CAE6C393CE12A02AB3D778C7F95BBBCF64B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m29834B3DA7642A833DCE239532253B4CB1DA55DF(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_m29834B3DA7642A833DCE239532253B4CB1DA55DF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_mE6FDB183F60FBF1B859915F86C7991B2CF44B209(IVectorView_1_t1FD766F622AFD5FAD43C6156FF7B0723964D242E** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_mE6FDB183F60FBF1B859915F86C7991B2CF44B209_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m68287533842CCDBE65010747E7CDE03DEA51AF7E(IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_m68287533842CCDBE65010747E7CDE03DEA51AF7E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m244E3DC7CFA4D888325FC632A7CF2C382284333A(uint32_t ___0_index, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301* ___1_value) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_m244E3DC7CFA4D888325FC632A7CF2C382284333A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m2733A9A801DD58AB4A50DDF68F7818F39747DB7E(uint32_t ___0_index, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301* ___1_value) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_m2733A9A801DD58AB4A50DDF68F7818F39747DB7E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m2DF699F3D4078D8E7A14566F0BA9D3419A99D000(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_m2DF699F3D4078D8E7A14566F0BA9D3419A99D000_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m3A90C2F48594888777689852516B28994D1CF9D7(IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301* ___0_value) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_m3A90C2F48594888777689852516B28994D1CF9D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m81487B9D0C4A408B52ABEC5DD76BE40E5DE9C3B2() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_m81487B9D0C4A408B52ABEC5DD76BE40E5DE9C3B2_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m282D7B045629FEB9F686AF8AF923B629B6E74552() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_m282D7B045629FEB9F686AF8AF923B629B6E74552_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_mDC54F67ED1F7C72F30F2B552964474EABB52BCE7(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_mDC54F67ED1F7C72F30F2B552964474EABB52BCE7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mBC6924EC293E471E9D656CC83EEEBC304B2A4FBF(uint32_t ___0_itemsArraySize, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** ___0_items) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_mBC6924EC293E471E9D656CC83EEEBC304B2A4FBF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_itemsArraySize, ___0_items);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mA2A1BF30512E655012F26A62FAB85081231FC1D9(IIterator_1_t6D3C39C75DBE16D2237EC9A0B3E17DA9E379F427** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mA2A1BF30512E655012F26A62FAB85081231FC1D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m750977B15207B4A735FAD7F65F63E72451EA583A(uint32_t ___0_index, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m750977B15207B4A735FAD7F65F63E72451EA583A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3D90E08327E4B9EF0CA6242FF577B955D63DD926(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m3D90E08327E4B9EF0CA6242FF577B955D63DD926_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1694744B5FD45296B4D110F4A5AC21F64327527A(IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m1694744B5FD45296B4D110F4A5AC21F64327527A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6D30998AC06146B7D89840C01429A5A699C49783(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6D30998AC06146B7D89840C01429A5A699C49783_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05_ComCallableWrapper(obj));
}

struct List_1_tF7608B82384542DEB200F8E211D9D36AE02EAB58_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_tF7608B82384542DEB200F8E211D9D36AE02EAB58_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline List_1_tF7608B82384542DEB200F8E211D9D36AE02EAB58_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_tF7608B82384542DEB200F8E211D9D36AE02EAB58_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_tF7608B82384542DEB200F8E211D9D36AE02EAB58(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_tF7608B82384542DEB200F8E211D9D36AE02EAB58_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_tF7608B82384542DEB200F8E211D9D36AE02EAB58_ComCallableWrapper(obj));
}

struct List_1_tF5BB8001A746C1218E94B112568A22C77FEAA9F8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_tF5BB8001A746C1218E94B112568A22C77FEAA9F8_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline List_1_tF5BB8001A746C1218E94B112568A22C77FEAA9F8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_tF5BB8001A746C1218E94B112568A22C77FEAA9F8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_tF5BB8001A746C1218E94B112568A22C77FEAA9F8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_tF5BB8001A746C1218E94B112568A22C77FEAA9F8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_tF5BB8001A746C1218E94B112568A22C77FEAA9F8_ComCallableWrapper(obj));
}

struct List_1_t60791FB9179CEFADA93C6B032DED2E65CB5DA58F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_t60791FB9179CEFADA93C6B032DED2E65CB5DA58F_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline List_1_t60791FB9179CEFADA93C6B032DED2E65CB5DA58F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_t60791FB9179CEFADA93C6B032DED2E65CB5DA58F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_t60791FB9179CEFADA93C6B032DED2E65CB5DA58F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_t60791FB9179CEFADA93C6B032DED2E65CB5DA58F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_t60791FB9179CEFADA93C6B032DED2E65CB5DA58F_ComCallableWrapper(obj));
}

struct List_1_t2F690D65CDFD8A655A39952668F912C3F99B0434_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_t2F690D65CDFD8A655A39952668F912C3F99B0434_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline List_1_t2F690D65CDFD8A655A39952668F912C3F99B0434_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_t2F690D65CDFD8A655A39952668F912C3F99B0434_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_t2F690D65CDFD8A655A39952668F912C3F99B0434(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_t2F690D65CDFD8A655A39952668F912C3F99B0434_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_t2F690D65CDFD8A655A39952668F912C3F99B0434_ComCallableWrapper(obj));
}

struct List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3_ComCallableWrapper(obj));
}

struct List_1_t88C2B498E1A9DDACDBAC9D19E9FA82F251A39EF5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_t88C2B498E1A9DDACDBAC9D19E9FA82F251A39EF5_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline List_1_t88C2B498E1A9DDACDBAC9D19E9FA82F251A39EF5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_t88C2B498E1A9DDACDBAC9D19E9FA82F251A39EF5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_t88C2B498E1A9DDACDBAC9D19E9FA82F251A39EF5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_t88C2B498E1A9DDACDBAC9D19E9FA82F251A39EF5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_t88C2B498E1A9DDACDBAC9D19E9FA82F251A39EF5_ComCallableWrapper(obj));
}

struct List_1_tC8E43CFEE45D260F5AE5F604CFBF26BCE2CA9F96_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_tC8E43CFEE45D260F5AE5F604CFBF26BCE2CA9F96_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline List_1_tC8E43CFEE45D260F5AE5F604CFBF26BCE2CA9F96_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_tC8E43CFEE45D260F5AE5F604CFBF26BCE2CA9F96_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_tC8E43CFEE45D260F5AE5F604CFBF26BCE2CA9F96(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_tC8E43CFEE45D260F5AE5F604CFBF26BCE2CA9F96_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_tC8E43CFEE45D260F5AE5F604CFBF26BCE2CA9F96_ComCallableWrapper(obj));
}

struct List_1_t04E509203B35ADE010A7D8074C73A53C4FEDED2E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_t04E509203B35ADE010A7D8074C73A53C4FEDED2E_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline List_1_t04E509203B35ADE010A7D8074C73A53C4FEDED2E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_t04E509203B35ADE010A7D8074C73A53C4FEDED2E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_t04E509203B35ADE010A7D8074C73A53C4FEDED2E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_t04E509203B35ADE010A7D8074C73A53C4FEDED2E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_t04E509203B35ADE010A7D8074C73A53C4FEDED2E_ComCallableWrapper(obj));
}

struct List_1_tA4AD03C94B5D6110E0839034F4906B6B022EF941_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_tA4AD03C94B5D6110E0839034F4906B6B022EF941_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline List_1_tA4AD03C94B5D6110E0839034F4906B6B022EF941_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_tA4AD03C94B5D6110E0839034F4906B6B022EF941_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_mBCD1ADF8844CDBB36A56C8CD9391067180851BD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m835757C5C2780FB18C73A2D34B0C74CB9C24FAC6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F(IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m0EDD4048AE0A3404A66AD7202161F560DEE9D87F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m6EA6FC052533AB43E049ECDFE20789943A798907_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m288413F2AE9C2F853898187EF0F0E5087FD934D0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431(uint32_t ___0_index, Il2CppIInspectable* ___1_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m919BCD142F2F5F1CBD4ABCB9E94113B65C79D431_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m54B727C7320AF1552F630DD4E98DCD7D3CB04538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E(Il2CppIInspectable* ___0_value) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mAC3F455B05DB32D9681767CD442DEACE2EE7348E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mD4F1D0442F5A0A74C29E5DBCAFB1BFF14E40FC71_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_m3353A716402EE8270D6D3F2A02863714D7787B7C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_tA4AD03C94B5D6110E0839034F4906B6B022EF941(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_tA4AD03C94B5D6110E0839034F4906B6B022EF941_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_tA4AD03C94B5D6110E0839034F4906B6B022EF941_ComCallableWrapper(obj));
}
