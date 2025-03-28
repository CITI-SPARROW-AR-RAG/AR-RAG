#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct String_t;
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3;
struct IIterator_1_t3942F4C373CDC632F805299D29EA130D554E1BA6;
struct IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274;
struct IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE;;
struct IVectorView_1_t7990FC345A3FF19AE0DA89C84FB1853BBCE260EB;

struct UriU5BU5D_t95648338DE865E9517F36D1339C4D8DDFA4AAA2D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) = 0;
};
struct NOVTABLE IIterable_1_tDAF43A8656D285883F49B1AC15FE10F406CA1678 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE2B32F812EF3170E661B78DC8AEFA3AD57C51A99(IIterator_1_t3942F4C373CDC632F805299D29EA130D554E1BA6** comReturnValue) = 0;
};
struct NOVTABLE IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppIInspectable** ___1_items, uint32_t* comReturnValue) = 0;
};
struct NOVTABLE IVectorView_1_t7990FC345A3FF19AE0DA89C84FB1853BBCE260EB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m78739B8250EF077AF7EAFAC6CC1E099032030299(uint32_t ___0_index, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m47EAB94DB9E95F668D94496DE606B79AD87EBD66(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mC48E6CC10DCB5A09E69B664144F9FFD2226C8A14(IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE* ___0_value, uint32_t* ___1_index, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mA4A21408B081B4E2EBCCD9D6C970DCA36981CA71(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE** ___1_items, uint32_t* comReturnValue) = 0;
};
struct NOVTABLE IVector_1_t21E6092E472634866FEC92350AFEC017C3EFDED0 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m868A146C8C3C58321DF62F86A7507E013DE7D4E6(uint32_t ___0_index, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m49321ED524CE694E27D859E4F5163959C9CDAD12(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_mDA78E378C23308B9B5BCA112CC966EC81DDB2185(IVectorView_1_t7990FC345A3FF19AE0DA89C84FB1853BBCE260EB** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m0A1419314C7EC8190B88792F899765C6D03022F1(IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE* ___0_value, uint32_t* ___1_index, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_mC668D40AA53D5D2110B57CD807987DE432142BDA(uint32_t ___0_index, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE* ___1_value) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m2F3A5D6D9FF7E172AAF79FA285469A231DADAD16(uint32_t ___0_index, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE* ___1_value) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m363B9D978B627B83737C4C65C22589B42677C50A(uint32_t ___0_index) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m13DA6E266F2FCF8116BDB9AF95A90600A6CDA081(IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE* ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m1CD3B2A9CD68B69FA8001BCC9D03D5D68148041E() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m1AEFAF8A0438E49772E96E8E215F5146374D7888() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m24EF89DE07565B001A3C0C22BAAC83C70324FEE4(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE** ___1_items, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m9BC40C55764589898818D4496E7B3B24EFF83A5D(uint32_t ___0_itemsArraySize, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE** ___0_items) = 0;
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
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct UriIdnScope_t001CC97A6F977E9BB7DB855CC6BA415A7F47491F 
{
	int32_t ___value__;
};
struct Flags_t47CF4DB4036A6A539AFA6EE39C75F772E865E897 
{
	uint64_t ___value__;
};
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	String_t* ___m_String;
	String_t* ___m_originalUnicodeString;
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax;
	String_t* ___m_DnsSafeHost;
	uint64_t ___m_Flags;
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info;
	bool ___m_iriParsing;
};
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	String_t* ___UriSchemeFile;
	String_t* ___UriSchemeFtp;
	String_t* ___UriSchemeGopher;
	String_t* ___UriSchemeHttp;
	String_t* ___UriSchemeHttps;
	String_t* ___UriSchemeWs;
	String_t* ___UriSchemeWss;
	String_t* ___UriSchemeMailto;
	String_t* ___UriSchemeNews;
	String_t* ___UriSchemeNntp;
	String_t* ___UriSchemeNetTcp;
	String_t* ___UriSchemeNetPipe;
	String_t* ___SchemeDelimiter;
	bool ___s_ConfigInitialized;
	bool ___s_ConfigInitializing;
	int32_t ___s_IdnScope;
	bool ___s_IriParsing;
	bool ___useDotNetRelativeOrAbsolute;
	bool ___IsWindowsFileSystem;
	RuntimeObject* ___s_initLock;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct UriU5BU5D_t95648338DE865E9517F36D1339C4D8DDFA4AAA2D  : public RuntimeArray
{
	ALIGN_FIELD (8) Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* m_Items[1];

	inline Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

il2cpp_hresult_t IVector_1_GetAt_m868A146C8C3C58321DF62F86A7507E013DE7D4E6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE** comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_m49321ED524CE694E27D859E4F5163959C9CDAD12_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_mDA78E378C23308B9B5BCA112CC966EC81DDB2185_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t7990FC345A3FF19AE0DA89C84FB1853BBCE260EB** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_m0A1419314C7EC8190B88792F899765C6D03022F1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE* ___0_value, uint32_t* ___1_index, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_mC668D40AA53D5D2110B57CD807987DE432142BDA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE* ___1_value);
il2cpp_hresult_t IVector_1_InsertAt_m2F3A5D6D9FF7E172AAF79FA285469A231DADAD16_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE* ___1_value);
il2cpp_hresult_t IVector_1_RemoveAt_m363B9D978B627B83737C4C65C22589B42677C50A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index);
il2cpp_hresult_t IVector_1_Append_m13DA6E266F2FCF8116BDB9AF95A90600A6CDA081_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE* ___0_value);
il2cpp_hresult_t IVector_1_RemoveAtEnd_m1CD3B2A9CD68B69FA8001BCC9D03D5D68148041E_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_m1AEFAF8A0438E49772E96E8E215F5146374D7888_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_m24EF89DE07565B001A3C0C22BAAC83C70324FEE4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE** ___1_items, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_m9BC40C55764589898818D4496E7B3B24EFF83A5D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_itemsArraySize, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE** ___0_items);
il2cpp_hresult_t IIterable_1_First_mE2B32F812EF3170E661B78DC8AEFA3AD57C51A99_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t3942F4C373CDC632F805299D29EA130D554E1BA6** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m78739B8250EF077AF7EAFAC6CC1E099032030299_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m47EAB94DB9E95F668D94496DE606B79AD87EBD66_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_mC48E6CC10DCB5A09E69B664144F9FFD2226C8A14_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE* ___0_value, uint32_t* ___1_index, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_mA4A21408B081B4E2EBCCD9D6C970DCA36981CA71_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE** ___1_items, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppIInspectable** ___1_items, uint32_t* comReturnValue);
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



struct UriU5BU5D_t95648338DE865E9517F36D1339C4D8DDFA4AAA2D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<UriU5BU5D_t95648338DE865E9517F36D1339C4D8DDFA4AAA2D_ComCallableWrapper>, IVector_1_t21E6092E472634866FEC92350AFEC017C3EFDED0, IIterable_1_tDAF43A8656D285883F49B1AC15FE10F406CA1678, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IVectorView_1_t7990FC345A3FF19AE0DA89C84FB1853BBCE260EB, IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A
{
	inline UriU5BU5D_t95648338DE865E9517F36D1339C4D8DDFA4AAA2D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<UriU5BU5D_t95648338DE865E9517F36D1339C4D8DDFA4AAA2D_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IVector_1_t21E6092E472634866FEC92350AFEC017C3EFDED0::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_t21E6092E472634866FEC92350AFEC017C3EFDED0*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tDAF43A8656D285883F49B1AC15FE10F406CA1678::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tDAF43A8656D285883F49B1AC15FE10F406CA1678*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t7990FC345A3FF19AE0DA89C84FB1853BBCE260EB::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t7990FC345A3FF19AE0DA89C84FB1853BBCE260EB*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(7);
		interfaceIds[0] = IVector_1_t21E6092E472634866FEC92350AFEC017C3EFDED0::IID;
		interfaceIds[1] = IIterable_1_tDAF43A8656D285883F49B1AC15FE10F406CA1678::IID;
		interfaceIds[2] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[3] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[4] = IVectorView_1_t7990FC345A3FF19AE0DA89C84FB1853BBCE260EB::IID;
		interfaceIds[5] = IVectorView_1_t80C57016D46A1954BF56BD02FC3DAA7C0D85FFD6::IID;
		interfaceIds[6] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;

		*iidCount = 7;
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

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m868A146C8C3C58321DF62F86A7507E013DE7D4E6(uint32_t ___0_index, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_m868A146C8C3C58321DF62F86A7507E013DE7D4E6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m49321ED524CE694E27D859E4F5163959C9CDAD12(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_m49321ED524CE694E27D859E4F5163959C9CDAD12_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_mDA78E378C23308B9B5BCA112CC966EC81DDB2185(IVectorView_1_t7990FC345A3FF19AE0DA89C84FB1853BBCE260EB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_mDA78E378C23308B9B5BCA112CC966EC81DDB2185_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m0A1419314C7EC8190B88792F899765C6D03022F1(IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_m0A1419314C7EC8190B88792F899765C6D03022F1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_mC668D40AA53D5D2110B57CD807987DE432142BDA(uint32_t ___0_index, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE* ___1_value) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_mC668D40AA53D5D2110B57CD807987DE432142BDA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m2F3A5D6D9FF7E172AAF79FA285469A231DADAD16(uint32_t ___0_index, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE* ___1_value) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_m2F3A5D6D9FF7E172AAF79FA285469A231DADAD16_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, ___1_value);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m363B9D978B627B83737C4C65C22589B42677C50A(uint32_t ___0_index) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_m363B9D978B627B83737C4C65C22589B42677C50A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m13DA6E266F2FCF8116BDB9AF95A90600A6CDA081(IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE* ___0_value) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_m13DA6E266F2FCF8116BDB9AF95A90600A6CDA081_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m1CD3B2A9CD68B69FA8001BCC9D03D5D68148041E() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_m1CD3B2A9CD68B69FA8001BCC9D03D5D68148041E_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m1AEFAF8A0438E49772E96E8E215F5146374D7888() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_m1AEFAF8A0438E49772E96E8E215F5146374D7888_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m24EF89DE07565B001A3C0C22BAAC83C70324FEE4(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_m24EF89DE07565B001A3C0C22BAAC83C70324FEE4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m9BC40C55764589898818D4496E7B3B24EFF83A5D(uint32_t ___0_itemsArraySize, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE** ___0_items) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_m9BC40C55764589898818D4496E7B3B24EFF83A5D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_itemsArraySize, ___0_items);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE2B32F812EF3170E661B78DC8AEFA3AD57C51A99(IIterator_1_t3942F4C373CDC632F805299D29EA130D554E1BA6** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mE2B32F812EF3170E661B78DC8AEFA3AD57C51A99_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m78739B8250EF077AF7EAFAC6CC1E099032030299(uint32_t ___0_index, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m78739B8250EF077AF7EAFAC6CC1E099032030299_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m47EAB94DB9E95F668D94496DE606B79AD87EBD66(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m47EAB94DB9E95F668D94496DE606B79AD87EBD66_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mC48E6CC10DCB5A09E69B664144F9FFD2226C8A14(IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mC48E6CC10DCB5A09E69B664144F9FFD2226C8A14_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mA4A21408B081B4E2EBCCD9D6C970DCA36981CA71(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IUriRuntimeClass_t77131E3CF0A817225A9D0A86CD079B4BCA0B37AE** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_mA4A21408B081B4E2EBCCD9D6C970DCA36981CA71_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223(uint32_t ___0_index, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mDA227019DDF2A9D2861B27ED32C865B867604223_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m16DC683E3A92C0E6840B57EBFC92D3ADBF50202E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1(Il2CppIInspectable* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mD1B3ADF8F80828EF947882105A77BBC892263DA1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, Il2CppIInspectable** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m36C9D15C0138BF2C23D62E2457C09DC722A29DA9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_UriU5BU5D_t95648338DE865E9517F36D1339C4D8DDFA4AAA2D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(UriU5BU5D_t95648338DE865E9517F36D1339C4D8DDFA4AAA2D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) UriU5BU5D_t95648338DE865E9517F36D1339C4D8DDFA4AAA2D_ComCallableWrapper(obj));
}
