#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct AsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D;
struct AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C;
struct AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5;
struct AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE;
struct AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D;
struct AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F;
struct AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78;
struct IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8;
struct IAsyncOperationWithProgress_2_tBF19993F9020707D84ABE40140A24DA51AD604E1;
struct IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C;
struct IAsyncOperation_1_t50A58D0301216E48B895B9B3D76A687CB3861740;
struct IEqualityComparer_1_t87776E75BE5CAC515E2BEA35263A59279E57E972;
struct IEqualityComparer_1_t6AFBDAD61899EC8E72EE5704032C72F5BA86C4AA;
struct IEqualityComparer_1_t735A9E7EADBF1195179CC6C43A408BBF6F38A7EF;
struct IEqualityComparer_1_tA3FC0FC8360493A07079DBD227771F0F9845D988;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct IList_1_tECD5AD48FBB4676C794EF59DEDFF454DA8588FB7;
struct Tables_t232F49F68D3E6642F250795C6A94C4A1453C466C;
struct Tables_t60489ADA5CDDDF0F891AF81ECF10DDD2EB6A4315;
struct Tables_t91446EFFF179D2449B741A2871A07303AF867B03;
struct Tables_t7CC52B0B809ECBEB3E80F53572999FA7AAB12C7B;
struct Tables_tD2D6CD6E8312A398C14FF9C317E0B475FA7C6D2C;
struct Tables_t474ACACEA5286DDAD444AF371F16E5EF802CFD03;
struct ThreadLocal_1_t1C08D112C2096C4DA679700B673ADA6EDD7C761D;
struct WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1;
struct KeyValuePair_2U5BU5D_t996EEA720019339FA75CC1E9044156E6FA8002E3;
struct KeyValuePair_2U5BU5D_tC07BA613A58A51D934ADC90E8DE39001899194B1;
struct KeyValuePair_2U5BU5D_tA81EC07CE65B18CEB6CD4B5FFF721CA560D10F20;
struct KeyValuePair_2U5BU5D_t381022C065FAE6EEC51E95BAD9847D9812A7217C;
struct KeyValuePair_2U5BU5D_t6C755EC1059EDF72A5338ACB00A494CF2EA5E456;
struct KeyValuePair_2U5BU5D_t6528B71EF7445862FA5C05ABCA451FD9B76D4D3F;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct MethodInfo_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8;
struct IAsyncOperationWithProgress_2_tBF19993F9020707D84ABE40140A24DA51AD604E1;
struct IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C;
struct IAsyncOperation_1_t50A58D0301216E48B895B9B3D76A687CB3861740;
struct IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C;
struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IBindableVectorView_tCB96F9780FD45A9A323C8212A53608C8A13784B3;
struct IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127;
struct IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D;
struct IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95;
struct IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m78372DBE4F177F35DC3DF46F37BBEB79AF797324(IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper* ___0_handler) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m78D1DF310E63719722F86C83A512DCF35728D4F2(IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m71DB6DDEDCC8DB4230CCAF913BA6ECAAA9ABF6D4(IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper* ___0_handler) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mBCA3BB43C118936A44B20F8A8F83F1CAB59E7DB4(IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_mD7DFCC1D0421F836CB3B4499AAEB89D5DAA229F5(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127** comReturnValue) = 0;
};
struct NOVTABLE IAsyncOperationWithProgress_2_tBF19993F9020707D84ABE40140A24DA51AD604E1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m144F445B49DE06124C428E1C4892BD758678D4B7(IAsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper* ___0_handler) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m7438C62D19F0A943D127BCDFF4E8D49081BA1160(IAsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m3E96CE9D6D9453DDA29BA2C3066BFC6018417BB7(IAsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper* ___0_handler) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mFD76F23D19D10A8CDF2C3B71590540A15597538A(IAsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_mBF8E709760AED181E92B245F49EAD29DB1A178CB(Il2CppIInspectable** comReturnValue) = 0;
};
struct NOVTABLE IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m9F67F4B3AA2396D2CDE6EE93B3D3B1B1F2D99685(IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper* ___0_handler) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_mA7040C532ABD06DCBC2B397B09EB32EC4A9AF5EB(IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m79A0FBC05E913306F00FE582D6AEF52CB4F6F0D6(IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper* ___0_handler) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m9D9F6AE5C27EC4CEB0A3CC17C83048A39994C5F0(IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m259594E576D8DE8D92DBA9A4EC9321BFA9006BCD(uint32_t* comReturnValue) = 0;
};
struct NOVTABLE IAsyncOperation_1_t50A58D0301216E48B895B9B3D76A687CB3861740 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_mDD0472C84642F258A529BC1A8BE797ABFB7291AA(IAsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D_ComCallableWrapper* ___0_handler) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mCF303DD089A08C51654DF53BE4DF4C749F275360(IAsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_mCF1E416F95C041681356B05DA780D849FF361759(uint32_t* comReturnValue) = 0;
};
struct NOVTABLE IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8(IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue) = 0;
};
struct NOVTABLE IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) = 0;
};
struct NOVTABLE IVectorView_1_t6EDCE424096E28130649128636A6024123308D88 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m32FC71FD585FDD369252498A4FDCB73EA138EE5C(uint32_t ___0_index, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m34FDF89DC67D64448E95FBF97ECD13CEA8F16726(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m91E2776BFDFC5258358725C5C37E7E8CC0CAF085(IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D* ___0_value, uint32_t* ___1_index, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m526298F07E0DFF07D2E2D6EF2C7F9BA937D1B68C(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D** ___1_items, uint32_t* comReturnValue) = 0;
};
struct NOVTABLE IVectorView_1_t91894C0D092A62A157244C0713F8CBAC8F256779 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m06FA29E1FCF7FDBC7162840F5A85668754386CA7(uint32_t ___0_index, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m49A5F54ECEA3A530A946EAE88BF6DE88D5252FC5(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m4213C724A06255A3007BD30AC38AB2101AF79E4D(IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C* ___0_value, uint32_t* ___1_index, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4B7A5DDAD65F19B19716F5602968E3CACF383ADE(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C** ___1_items, uint32_t* comReturnValue) = 0;
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
struct Collection_1_t96B79EEBF0D089ECAF287214CCC0E4A426AFF50F  : public RuntimeObject
{
	RuntimeObject* ___items;
};
struct ConcurrentBag_1_t93C765DFB644C1382E444BE39CE2EB8C610D7566  : public RuntimeObject
{
	ThreadLocal_1_t1C08D112C2096C4DA679700B673ADA6EDD7C761D* ____locals;
	WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* ____workStealingQueues;
	int64_t ____emptyToNonEmptyListTransitionCount;
};
struct ConcurrentDictionary_2_t6553E8F57A500F679C67863C02D94ECDFA489C33  : public RuntimeObject
{
	Tables_t232F49F68D3E6642F250795C6A94C4A1453C466C* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t996EEA720019339FA75CC1E9044156E6FA8002E3* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t72691F75B6C45685845A39BBFE01D1B70992B54E  : public RuntimeObject
{
	Tables_t60489ADA5CDDDF0F891AF81ECF10DDD2EB6A4315* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_tC07BA613A58A51D934ADC90E8DE39001899194B1* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t0A6BCCBCD2F7139BB7805897FF13E3E6AF27F6C3  : public RuntimeObject
{
	Tables_t91446EFFF179D2449B741A2871A07303AF867B03* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_tA81EC07CE65B18CEB6CD4B5FFF721CA560D10F20* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t116040BFA78C1B2242B84D8AA7BFA6B49D9CFE38  : public RuntimeObject
{
	Tables_t7CC52B0B809ECBEB3E80F53572999FA7AAB12C7B* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t381022C065FAE6EEC51E95BAD9847D9812A7217C* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t7EB768F649B16C2B5E69459B06007FF5C3DEFD93  : public RuntimeObject
{
	Tables_tD2D6CD6E8312A398C14FF9C317E0B475FA7C6D2C* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t6C755EC1059EDF72A5338ACB00A494CF2EA5E456* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_tB10C4C3EC351E8C9B79705E8D31FA67925B91612  : public RuntimeObject
{
	Tables_t474ACACEA5286DDAD444AF371F16E5EF802CFD03* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t6528B71EF7445862FA5C05ABCA451FD9B76D4D3F* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct IntPtr_t 
{
	void* ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct AsyncStatus_t114EA3046F41C449FF4F9D471EB7027D47705E72 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct AsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D  : public MulticastDelegate_t
{
};
struct IAsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t50A58D0301216E48B895B9B3D76A687CB3861740* ___0_asyncInfo, int32_t ___1_asyncStatus) = 0;
};

struct AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C  : public MulticastDelegate_t
{
};
struct IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8* ___0_asyncInfo, uint32_t ___1_progressInfo) = 0;
};

struct AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5  : public MulticastDelegate_t
{
};
struct IAsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tBF19993F9020707D84ABE40140A24DA51AD604E1* ___0_asyncInfo, uint32_t ___1_progressInfo) = 0;
};

struct AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE  : public MulticastDelegate_t
{
};
struct IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C* ___0_asyncInfo, uint32_t ___1_progressInfo) = 0;
};

struct AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D  : public MulticastDelegate_t
{
};
struct IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8* ___0_asyncInfo, int32_t ___1_asyncStatus) = 0;
};

struct AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F  : public MulticastDelegate_t
{
};
struct IAsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tBF19993F9020707D84ABE40140A24DA51AD604E1* ___0_asyncInfo, int32_t ___1_asyncStatus) = 0;
};

struct AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78  : public MulticastDelegate_t
{
};
struct IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C* ___0_asyncInfo, int32_t ___1_asyncStatus) = 0;
};

struct ConcurrentDictionary_2_t6553E8F57A500F679C67863C02D94ECDFA489C33_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t72691F75B6C45685845A39BBFE01D1B70992B54E_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t0A6BCCBCD2F7139BB7805897FF13E3E6AF27F6C3_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t116040BFA78C1B2242B84D8AA7BFA6B49D9CFE38_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t7EB768F649B16C2B5E69459B06007FF5C3DEFD93_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_tB10C4C3EC351E8C9B79705E8D31FA67925B91612_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue);
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
il2cpp_hresult_t IVectorView_1_GetAt_m32FC71FD585FDD369252498A4FDCB73EA138EE5C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m34FDF89DC67D64448E95FBF97ECD13CEA8F16726_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m91E2776BFDFC5258358725C5C37E7E8CC0CAF085_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D* ___0_value, uint32_t* ___1_index, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m526298F07E0DFF07D2E2D6EF2C7F9BA937D1B68C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D** ___1_items, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m06FA29E1FCF7FDBC7162840F5A85668754386CA7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_index, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m49A5F54ECEA3A530A946EAE88BF6DE88D5252FC5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m4213C724A06255A3007BD30AC38AB2101AF79E4D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C* ___0_value, uint32_t* ___1_index, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m4B7A5DDAD65F19B19716F5602968E3CACF383ADE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C** ___1_items, uint32_t* comReturnValue);

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1_Invoke_m13AC4B1EA6F4D22364D8E2BFE1E75DB7639F49C1_gshared_inline (AsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D* __this, RuntimeObject* ___0_asyncInfo, int32_t ___1_asyncStatus, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationProgressHandler_2_Invoke_m9E8B5F6657DA246618AB7CCD7B346A078F72A15C_gshared_inline (AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5* __this, RuntimeObject* ___0_asyncInfo, uint32_t ___1_progressInfo, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_gshared_inline (AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* __this, RuntimeObject* ___0_asyncInfo, uint32_t ___1_progressInfo, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2_Invoke_mB12B518CFC6AC5EE713ECE1BF73F5DF1688B7C98_gshared_inline (AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F* __this, RuntimeObject* ___0_asyncInfo, int32_t ___1_asyncStatus, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_gshared_inline (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* __this, RuntimeObject* ___0_asyncInfo, int32_t ___1_asyncStatus, const RuntimeMethod* method) ;

inline void AsyncOperationCompletedHandler_1_Invoke_m13AC4B1EA6F4D22364D8E2BFE1E75DB7639F49C1_inline (AsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D* __this, RuntimeObject* ___0_asyncInfo, int32_t ___1_asyncStatus, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D*, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_m13AC4B1EA6F4D22364D8E2BFE1E75DB7639F49C1_gshared_inline)(__this, ___0_asyncInfo, ___1_asyncStatus, method);
}
inline void AsyncOperationProgressHandler_2_Invoke_mD3262133D1A7957B53DB2D1C63F79605073807E0_inline (AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C* __this, RuntimeObject* ___0_asyncInfo, uint32_t ___1_progressInfo, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C*, RuntimeObject*, uint32_t, const RuntimeMethod*))AsyncOperationProgressHandler_2_Invoke_m9E8B5F6657DA246618AB7CCD7B346A078F72A15C_gshared_inline)(__this, ___0_asyncInfo, ___1_progressInfo, method);
}
inline void AsyncOperationProgressHandler_2_Invoke_m9E8B5F6657DA246618AB7CCD7B346A078F72A15C_inline (AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5* __this, RuntimeObject* ___0_asyncInfo, uint32_t ___1_progressInfo, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5*, RuntimeObject*, uint32_t, const RuntimeMethod*))AsyncOperationProgressHandler_2_Invoke_m9E8B5F6657DA246618AB7CCD7B346A078F72A15C_gshared_inline)(__this, ___0_asyncInfo, ___1_progressInfo, method);
}
inline void AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_inline (AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* __this, RuntimeObject* ___0_asyncInfo, uint32_t ___1_progressInfo, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE*, RuntimeObject*, uint32_t, const RuntimeMethod*))AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_gshared_inline)(__this, ___0_asyncInfo, ___1_progressInfo, method);
}
inline void AsyncOperationWithProgressCompletedHandler_2_Invoke_mBA3D164EDE154F2001AF119223C69BDD00A57EF3_inline (AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* __this, RuntimeObject* ___0_asyncInfo, int32_t ___1_asyncStatus, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D*, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2_Invoke_mB12B518CFC6AC5EE713ECE1BF73F5DF1688B7C98_gshared_inline)(__this, ___0_asyncInfo, ___1_asyncStatus, method);
}
inline void AsyncOperationWithProgressCompletedHandler_2_Invoke_mB12B518CFC6AC5EE713ECE1BF73F5DF1688B7C98_inline (AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F* __this, RuntimeObject* ___0_asyncInfo, int32_t ___1_asyncStatus, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F*, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2_Invoke_mB12B518CFC6AC5EE713ECE1BF73F5DF1688B7C98_gshared_inline)(__this, ___0_asyncInfo, ___1_asyncStatus, method);
}
inline void AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_inline (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* __this, RuntimeObject* ___0_asyncInfo, int32_t ___1_asyncStatus, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78*, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_gshared_inline)(__this, ___0_asyncInfo, ___1_asyncStatus, method);
}

struct AsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D_ComCallableWrapper*>(this);
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

	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t50A58D0301216E48B895B9B3D76A687CB3861740* ___0_asyncInfo, int32_t ___1_asyncStatus) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		RuntimeObject* ____0_asyncInfo_unmarshaled = NULL;
		if (___0_asyncInfo != NULL)
		{
			____0_asyncInfo_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___0_asyncInfo, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____0_asyncInfo_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____0_asyncInfo_unmarshaled), IAsyncOperation_1_t50A58D0301216E48B895B9B3D76A687CB3861740::IID, ___0_asyncInfo);
			}
		}
		else
		{
			____0_asyncInfo_unmarshaled = NULL;
		}

		try
		{
			AsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D* __thisValue = (AsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D*)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_m13AC4B1EA6F4D22364D8E2BFE1E75DB7639F49C1_inline(__thisValue, ____0_asyncInfo_unmarshaled, ___1_asyncStatus, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D_ComCallableWrapper(obj));
}

struct AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper>, IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper
{
	inline AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper*>(this);
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

	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8* ___0_asyncInfo, uint32_t ___1_progressInfo) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		RuntimeObject* ____0_asyncInfo_unmarshaled = NULL;
		if (___0_asyncInfo != NULL)
		{
			____0_asyncInfo_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___0_asyncInfo, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____0_asyncInfo_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____0_asyncInfo_unmarshaled), IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8::IID, ___0_asyncInfo);
			}
		}
		else
		{
			____0_asyncInfo_unmarshaled = NULL;
		}

		try
		{
			AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C* __thisValue = (AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C*)GetManagedObjectInline();
			AsyncOperationProgressHandler_2_Invoke_mD3262133D1A7957B53DB2D1C63F79605073807E0_inline(__thisValue, ____0_asyncInfo_unmarshaled, ___1_progressInfo, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper(obj));
}

struct AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper>, IAsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper
{
	inline AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IAsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper*>(this);
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

	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tBF19993F9020707D84ABE40140A24DA51AD604E1* ___0_asyncInfo, uint32_t ___1_progressInfo) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		RuntimeObject* ____0_asyncInfo_unmarshaled = NULL;
		if (___0_asyncInfo != NULL)
		{
			____0_asyncInfo_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___0_asyncInfo, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____0_asyncInfo_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____0_asyncInfo_unmarshaled), IAsyncOperationWithProgress_2_tBF19993F9020707D84ABE40140A24DA51AD604E1::IID, ___0_asyncInfo);
			}
		}
		else
		{
			____0_asyncInfo_unmarshaled = NULL;
		}

		try
		{
			AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5* __thisValue = (AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5*)GetManagedObjectInline();
			AsyncOperationProgressHandler_2_Invoke_m9E8B5F6657DA246618AB7CCD7B346A078F72A15C_inline(__thisValue, ____0_asyncInfo_unmarshaled, ___1_progressInfo, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5_ComCallableWrapper(obj));
}

struct AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper>, IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper
{
	inline AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper*>(this);
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

	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C* ___0_asyncInfo, uint32_t ___1_progressInfo) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		RuntimeObject* ____0_asyncInfo_unmarshaled = NULL;
		if (___0_asyncInfo != NULL)
		{
			____0_asyncInfo_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___0_asyncInfo, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____0_asyncInfo_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____0_asyncInfo_unmarshaled), IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C::IID, ___0_asyncInfo);
			}
		}
		else
		{
			____0_asyncInfo_unmarshaled = NULL;
		}

		try
		{
			AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* __thisValue = (AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE*)GetManagedObjectInline();
			AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_inline(__thisValue, ____0_asyncInfo_unmarshaled, ___1_progressInfo, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper(obj));
}

struct AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper>, IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper
{
	inline AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper*>(this);
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

	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8* ___0_asyncInfo, int32_t ___1_asyncStatus) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		RuntimeObject* ____0_asyncInfo_unmarshaled = NULL;
		if (___0_asyncInfo != NULL)
		{
			____0_asyncInfo_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___0_asyncInfo, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____0_asyncInfo_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____0_asyncInfo_unmarshaled), IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8::IID, ___0_asyncInfo);
			}
		}
		else
		{
			____0_asyncInfo_unmarshaled = NULL;
		}

		try
		{
			AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* __thisValue = (AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D*)GetManagedObjectInline();
			AsyncOperationWithProgressCompletedHandler_2_Invoke_mBA3D164EDE154F2001AF119223C69BDD00A57EF3_inline(__thisValue, ____0_asyncInfo_unmarshaled, ___1_asyncStatus, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper(obj));
}

struct AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper>, IAsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper
{
	inline AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IAsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper*>(this);
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

	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tBF19993F9020707D84ABE40140A24DA51AD604E1* ___0_asyncInfo, int32_t ___1_asyncStatus) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		RuntimeObject* ____0_asyncInfo_unmarshaled = NULL;
		if (___0_asyncInfo != NULL)
		{
			____0_asyncInfo_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___0_asyncInfo, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____0_asyncInfo_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____0_asyncInfo_unmarshaled), IAsyncOperationWithProgress_2_tBF19993F9020707D84ABE40140A24DA51AD604E1::IID, ___0_asyncInfo);
			}
		}
		else
		{
			____0_asyncInfo_unmarshaled = NULL;
		}

		try
		{
			AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F* __thisValue = (AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F*)GetManagedObjectInline();
			AsyncOperationWithProgressCompletedHandler_2_Invoke_mB12B518CFC6AC5EE713ECE1BF73F5DF1688B7C98_inline(__thisValue, ____0_asyncInfo_unmarshaled, ___1_asyncStatus, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F_ComCallableWrapper(obj));
}

struct AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper>, IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper
{
	inline AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper*>(this);
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

	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C* ___0_asyncInfo, int32_t ___1_asyncStatus) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		RuntimeObject* ____0_asyncInfo_unmarshaled = NULL;
		if (___0_asyncInfo != NULL)
		{
			____0_asyncInfo_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___0_asyncInfo, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____0_asyncInfo_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____0_asyncInfo_unmarshaled), IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C::IID, ___0_asyncInfo);
			}
		}
		else
		{
			____0_asyncInfo_unmarshaled = NULL;
		}

		try
		{
			AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* __thisValue = (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78*)GetManagedObjectInline();
			AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_inline(__thisValue, ____0_asyncInfo_unmarshaled, ___1_asyncStatus, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper(obj));
}

struct Collection_1_t96B79EEBF0D089ECAF287214CCC0E4A426AFF50F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Collection_1_t96B79EEBF0D089ECAF287214CCC0E4A426AFF50F_ComCallableWrapper>, IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A, IVectorView_1_t6EDCE424096E28130649128636A6024123308D88, IVectorView_1_t91894C0D092A62A157244C0713F8CBAC8F256779
{
	inline Collection_1_t96B79EEBF0D089ECAF287214CCC0E4A426AFF50F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Collection_1_t96B79EEBF0D089ECAF287214CCC0E4A426AFF50F_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
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

		if (::memcmp(&iid, &IVectorView_1_t6EDCE424096E28130649128636A6024123308D88::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t6EDCE424096E28130649128636A6024123308D88*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t91894C0D092A62A157244C0713F8CBAC8F256779::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t91894C0D092A62A157244C0713F8CBAC8F256779*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID;
		interfaceIds[1] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IBindableVector_tAE2FC72291BFE4E2FE6FCE88670236BBA429833A::IID;
		interfaceIds[4] = IVectorView_1_t6EDCE424096E28130649128636A6024123308D88::IID;
		interfaceIds[5] = IVectorView_1_t91894C0D092A62A157244C0713F8CBAC8F256779::IID;

		*iidCount = 6;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8(IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
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

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m32FC71FD585FDD369252498A4FDCB73EA138EE5C(uint32_t ___0_index, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m32FC71FD585FDD369252498A4FDCB73EA138EE5C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m34FDF89DC67D64448E95FBF97ECD13CEA8F16726(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m34FDF89DC67D64448E95FBF97ECD13CEA8F16726_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m91E2776BFDFC5258358725C5C37E7E8CC0CAF085(IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m91E2776BFDFC5258358725C5C37E7E8CC0CAF085_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m526298F07E0DFF07D2E2D6EF2C7F9BA937D1B68C(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m526298F07E0DFF07D2E2D6EF2C7F9BA937D1B68C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m06FA29E1FCF7FDBC7162840F5A85668754386CA7(uint32_t ___0_index, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m06FA29E1FCF7FDBC7162840F5A85668754386CA7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m49A5F54ECEA3A530A946EAE88BF6DE88D5252FC5(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m49A5F54ECEA3A530A946EAE88BF6DE88D5252FC5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m4213C724A06255A3007BD30AC38AB2101AF79E4D(IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C* ___0_value, uint32_t* ___1_index, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m4213C724A06255A3007BD30AC38AB2101AF79E4D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_value, ___1_index, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4B7A5DDAD65F19B19716F5602968E3CACF383ADE(uint32_t ___0_startIndex, uint32_t ___1_itemsArraySize, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C** ___1_items, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m4B7A5DDAD65F19B19716F5602968E3CACF383ADE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_startIndex, ___1_itemsArraySize, ___1_items, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Collection_1_t96B79EEBF0D089ECAF287214CCC0E4A426AFF50F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Collection_1_t96B79EEBF0D089ECAF287214CCC0E4A426AFF50F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Collection_1_t96B79EEBF0D089ECAF287214CCC0E4A426AFF50F_ComCallableWrapper(obj));
}

struct ConcurrentBag_1_t93C765DFB644C1382E444BE39CE2EB8C610D7566_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentBag_1_t93C765DFB644C1382E444BE39CE2EB8C610D7566_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConcurrentBag_1_t93C765DFB644C1382E444BE39CE2EB8C610D7566_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentBag_1_t93C765DFB644C1382E444BE39CE2EB8C610D7566_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentBag_1_t93C765DFB644C1382E444BE39CE2EB8C610D7566(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentBag_1_t93C765DFB644C1382E444BE39CE2EB8C610D7566_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentBag_1_t93C765DFB644C1382E444BE39CE2EB8C610D7566_ComCallableWrapper(obj));
}

struct ConcurrentDictionary_2_t6553E8F57A500F679C67863C02D94ECDFA489C33_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t6553E8F57A500F679C67863C02D94ECDFA489C33_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConcurrentDictionary_2_t6553E8F57A500F679C67863C02D94ECDFA489C33_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t6553E8F57A500F679C67863C02D94ECDFA489C33_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t6553E8F57A500F679C67863C02D94ECDFA489C33(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t6553E8F57A500F679C67863C02D94ECDFA489C33_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t6553E8F57A500F679C67863C02D94ECDFA489C33_ComCallableWrapper(obj));
}

struct ConcurrentDictionary_2_t72691F75B6C45685845A39BBFE01D1B70992B54E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t72691F75B6C45685845A39BBFE01D1B70992B54E_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConcurrentDictionary_2_t72691F75B6C45685845A39BBFE01D1B70992B54E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t72691F75B6C45685845A39BBFE01D1B70992B54E_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t72691F75B6C45685845A39BBFE01D1B70992B54E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t72691F75B6C45685845A39BBFE01D1B70992B54E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t72691F75B6C45685845A39BBFE01D1B70992B54E_ComCallableWrapper(obj));
}

struct ConcurrentDictionary_2_t0A6BCCBCD2F7139BB7805897FF13E3E6AF27F6C3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t0A6BCCBCD2F7139BB7805897FF13E3E6AF27F6C3_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConcurrentDictionary_2_t0A6BCCBCD2F7139BB7805897FF13E3E6AF27F6C3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t0A6BCCBCD2F7139BB7805897FF13E3E6AF27F6C3_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t0A6BCCBCD2F7139BB7805897FF13E3E6AF27F6C3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t0A6BCCBCD2F7139BB7805897FF13E3E6AF27F6C3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t0A6BCCBCD2F7139BB7805897FF13E3E6AF27F6C3_ComCallableWrapper(obj));
}

struct ConcurrentDictionary_2_t116040BFA78C1B2242B84D8AA7BFA6B49D9CFE38_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t116040BFA78C1B2242B84D8AA7BFA6B49D9CFE38_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConcurrentDictionary_2_t116040BFA78C1B2242B84D8AA7BFA6B49D9CFE38_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t116040BFA78C1B2242B84D8AA7BFA6B49D9CFE38_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t116040BFA78C1B2242B84D8AA7BFA6B49D9CFE38(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t116040BFA78C1B2242B84D8AA7BFA6B49D9CFE38_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t116040BFA78C1B2242B84D8AA7BFA6B49D9CFE38_ComCallableWrapper(obj));
}

struct ConcurrentDictionary_2_t7EB768F649B16C2B5E69459B06007FF5C3DEFD93_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t7EB768F649B16C2B5E69459B06007FF5C3DEFD93_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConcurrentDictionary_2_t7EB768F649B16C2B5E69459B06007FF5C3DEFD93_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_t7EB768F649B16C2B5E69459B06007FF5C3DEFD93_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_t7EB768F649B16C2B5E69459B06007FF5C3DEFD93(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_t7EB768F649B16C2B5E69459B06007FF5C3DEFD93_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_t7EB768F649B16C2B5E69459B06007FF5C3DEFD93_ComCallableWrapper(obj));
}

struct ConcurrentDictionary_2_tB10C4C3EC351E8C9B79705E8D31FA67925B91612_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tB10C4C3EC351E8C9B79705E8D31FA67925B91612_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ConcurrentDictionary_2_tB10C4C3EC351E8C9B79705E8D31FA67925B91612_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ConcurrentDictionary_2_tB10C4C3EC351E8C9B79705E8D31FA67925B91612_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
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
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ConcurrentDictionary_2_tB10C4C3EC351E8C9B79705E8D31FA67925B91612(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ConcurrentDictionary_2_tB10C4C3EC351E8C9B79705E8D31FA67925B91612_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ConcurrentDictionary_2_tB10C4C3EC351E8C9B79705E8D31FA67925B91612_ComCallableWrapper(obj));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1_Invoke_m13AC4B1EA6F4D22364D8E2BFE1E75DB7639F49C1_gshared_inline (AsyncOperationCompletedHandler_1_tC82ADECE478607DF880A7C7D20A698205871676D* __this, RuntimeObject* ___0_asyncInfo, int32_t ___1_asyncStatus, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_asyncInfo, ___1_asyncStatus, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationProgressHandler_2_Invoke_m9E8B5F6657DA246618AB7CCD7B346A078F72A15C_gshared_inline (AsyncOperationProgressHandler_2_t37CBA7E8870557BF45CF7FD247B43A4B7859B1F5* __this, RuntimeObject* ___0_asyncInfo, uint32_t ___1_progressInfo, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_asyncInfo, ___1_progressInfo, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationProgressHandler_2_Invoke_m5E84C046BFDEEDF7AE6852942773B83B20CDB3E0_gshared_inline (AsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE* __this, RuntimeObject* ___0_asyncInfo, uint32_t ___1_progressInfo, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_asyncInfo, ___1_progressInfo, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2_Invoke_mB12B518CFC6AC5EE713ECE1BF73F5DF1688B7C98_gshared_inline (AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F* __this, RuntimeObject* ___0_asyncInfo, int32_t ___1_asyncStatus, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_asyncInfo, ___1_asyncStatus, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2_Invoke_m4391C99B82AB31E1C0B76F5C63BEE69E08F24AE5_gshared_inline (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* __this, RuntimeObject* ___0_asyncInfo, int32_t ___1_asyncStatus, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_asyncInfo, ___1_asyncStatus, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
