#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Action`1<System.Int32Enum>
struct Action_1_tABA1E3BFA092E3309A0ECC53722E4F9826DCE983;
// System.Action`1<easyar.MotionTrackingStatus>
struct Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// easyar.WorldRootController
struct WorldRootController_t7D8656D3888137095BE12AC4739E76421C71FEA0;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m31F93652F8E07EDB096EF67300EBF841B608F31A_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t WorldRootController_OnTracking_m141C2865D0052703AE984D4E81D3C0B54D56A33B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldRootController_add_TrackingStatusChanged_m6F1B9471E4F9EF5EDB908A930453ECAD313DD793_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldRootController_remove_TrackingStatusChanged_m18AFAD4CE0411A790E782E881915A3B30D9E03A4_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Int32Enum
struct Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// easyar.MotionTrackingStatus
struct MotionTrackingStatus_t96F15D34CCD62E7BBFF0AE11BFEC290DFA89EC94 
{
public:
	// System.Int32 easyar.MotionTrackingStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MotionTrackingStatus_t96F15D34CCD62E7BBFF0AE11BFEC290DFA89EC94, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.VideoRecorder/VideoOrientation
struct VideoOrientation_t69DAB4165E44EA467337EFA4D222EFAE029093C1 
{
public:
	// System.Int32 easyar.VideoRecorder/VideoOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoOrientation_t69DAB4165E44EA467337EFA4D222EFAE029093C1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.VideoStatus
struct VideoStatus_t615E9FDD41FB6AA0EA0F66BC6A467089A6641585 
{
public:
	// System.Int32 easyar.VideoStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoStatus_t615E9FDD41FB6AA0EA0F66BC6A467089A6641585, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.VideoType
struct VideoType_t89CAC65C52FF6BC7AB7A02484BEDB95E8D52F2EF 
{
public:
	// System.Int32 easyar.VideoType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoType_t89CAC65C52FF6BC7AB7A02484BEDB95E8D52F2EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.WorldRootController/ActiveControlStrategy
struct ActiveControlStrategy_t6EF7E7C44F8C902C055077097FBC18FFEB22B604 
{
public:
	// System.Int32 easyar.WorldRootController/ActiveControlStrategy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ActiveControlStrategy_t6EF7E7C44F8C902C055077097FBC18FFEB22B604, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.WritablePathType
struct WritablePathType_tDA12BB0550A45F1509DD8D430F03155D34CC43AD 
{
public:
	// System.Int32 easyar.WritablePathType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WritablePathType_tDA12BB0550A45F1509DD8D430F03155D34CC43AD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// System.Action`1<easyar.MotionTrackingStatus>
struct Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// easyar.WorldRootController
struct WorldRootController_t7D8656D3888137095BE12AC4739E76421C71FEA0  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// easyar.WorldRootController/ActiveControlStrategy easyar.WorldRootController::ActiveControl
	int32_t ___ActiveControl_4;
	// System.Boolean easyar.WorldRootController::trackingStarted
	bool ___trackingStarted_5;
	// System.Action`1<easyar.MotionTrackingStatus> easyar.WorldRootController::TrackingStatusChanged
	Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * ___TrackingStatusChanged_6;
	// easyar.MotionTrackingStatus easyar.WorldRootController::<TrackingStatus>k__BackingField
	int32_t ___U3CTrackingStatusU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_ActiveControl_4() { return static_cast<int32_t>(offsetof(WorldRootController_t7D8656D3888137095BE12AC4739E76421C71FEA0, ___ActiveControl_4)); }
	inline int32_t get_ActiveControl_4() const { return ___ActiveControl_4; }
	inline int32_t* get_address_of_ActiveControl_4() { return &___ActiveControl_4; }
	inline void set_ActiveControl_4(int32_t value)
	{
		___ActiveControl_4 = value;
	}

	inline static int32_t get_offset_of_trackingStarted_5() { return static_cast<int32_t>(offsetof(WorldRootController_t7D8656D3888137095BE12AC4739E76421C71FEA0, ___trackingStarted_5)); }
	inline bool get_trackingStarted_5() const { return ___trackingStarted_5; }
	inline bool* get_address_of_trackingStarted_5() { return &___trackingStarted_5; }
	inline void set_trackingStarted_5(bool value)
	{
		___trackingStarted_5 = value;
	}

	inline static int32_t get_offset_of_TrackingStatusChanged_6() { return static_cast<int32_t>(offsetof(WorldRootController_t7D8656D3888137095BE12AC4739E76421C71FEA0, ___TrackingStatusChanged_6)); }
	inline Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * get_TrackingStatusChanged_6() const { return ___TrackingStatusChanged_6; }
	inline Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB ** get_address_of_TrackingStatusChanged_6() { return &___TrackingStatusChanged_6; }
	inline void set_TrackingStatusChanged_6(Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * value)
	{
		___TrackingStatusChanged_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackingStatusChanged_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrackingStatusU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(WorldRootController_t7D8656D3888137095BE12AC4739E76421C71FEA0, ___U3CTrackingStatusU3Ek__BackingField_7)); }
	inline int32_t get_U3CTrackingStatusU3Ek__BackingField_7() const { return ___U3CTrackingStatusU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CTrackingStatusU3Ek__BackingField_7() { return &___U3CTrackingStatusU3Ek__BackingField_7; }
	inline void set_U3CTrackingStatusU3Ek__BackingField_7(int32_t value)
	{
		___U3CTrackingStatusU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Action`1<System.Int32Enum>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m4DD49F027613D2A2A892F880C23BDFB6573E5C93_gshared (Action_1_tABA1E3BFA092E3309A0ECC53722E4F9826DCE983 * __this, int32_t ___obj0, const RuntimeMethod* method);

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// easyar.MotionTrackingStatus easyar.WorldRootController::get_TrackingStatus()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WorldRootController_get_TrackingStatus_m22353650C3442C983AB946AFEC1656FCE5223614_inline (WorldRootController_t7D8656D3888137095BE12AC4739E76421C71FEA0 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<easyar.MotionTrackingStatus>::Invoke(!0)
inline void Action_1_Invoke_m31F93652F8E07EDB096EF67300EBF841B608F31A (Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB *, int32_t, const RuntimeMethod*))Action_1_Invoke_m4DD49F027613D2A2A892F880C23BDFB6573E5C93_gshared)(__this, ___obj0, method);
}
// System.Void easyar.WorldRootController::set_TrackingStatus(easyar.MotionTrackingStatus)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WorldRootController_set_TrackingStatus_m524358EB94DD7AF47E462DCB4ED5ED5913A564DA_inline (WorldRootController_t7D8656D3888137095BE12AC4739E76421C71FEA0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void easyar.WorldRootController::add_TrackingStatusChanged(System.Action`1<easyar.MotionTrackingStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldRootController_add_TrackingStatusChanged_m6F1B9471E4F9EF5EDB908A930453ECAD313DD793 (WorldRootController_t7D8656D3888137095BE12AC4739E76421C71FEA0 * __this, Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldRootController_add_TrackingStatusChanged_m6F1B9471E4F9EF5EDB908A930453ECAD313DD793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * V_0 = NULL;
	Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * V_1 = NULL;
	Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * V_2 = NULL;
	{
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_0 = __this->get_TrackingStatusChanged_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_1 = V_0;
		V_1 = L_1;
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_2 = V_1;
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB *)CastclassSealed((RuntimeObject*)L_4, Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB_il2cpp_TypeInfo_var));
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB ** L_5 = __this->get_address_of_TrackingStatusChanged_6();
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_6 = V_2;
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_7 = V_1;
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_8 = InterlockedCompareExchangeImpl<Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB *>((Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_9 = V_0;
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB *)L_9) == ((RuntimeObject*)(Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void easyar.WorldRootController::remove_TrackingStatusChanged(System.Action`1<easyar.MotionTrackingStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldRootController_remove_TrackingStatusChanged_m18AFAD4CE0411A790E782E881915A3B30D9E03A4 (WorldRootController_t7D8656D3888137095BE12AC4739E76421C71FEA0 * __this, Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldRootController_remove_TrackingStatusChanged_m18AFAD4CE0411A790E782E881915A3B30D9E03A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * V_0 = NULL;
	Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * V_1 = NULL;
	Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * V_2 = NULL;
	{
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_0 = __this->get_TrackingStatusChanged_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_1 = V_0;
		V_1 = L_1;
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_2 = V_1;
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB *)CastclassSealed((RuntimeObject*)L_4, Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB_il2cpp_TypeInfo_var));
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB ** L_5 = __this->get_address_of_TrackingStatusChanged_6();
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_6 = V_2;
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_7 = V_1;
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_8 = InterlockedCompareExchangeImpl<Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB *>((Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_9 = V_0;
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB *)L_9) == ((RuntimeObject*)(Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// easyar.MotionTrackingStatus easyar.WorldRootController::get_TrackingStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorldRootController_get_TrackingStatus_m22353650C3442C983AB946AFEC1656FCE5223614 (WorldRootController_t7D8656D3888137095BE12AC4739E76421C71FEA0 * __this, const RuntimeMethod* method)
{
	{
		// get; private set;
		int32_t L_0 = __this->get_U3CTrackingStatusU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void easyar.WorldRootController::set_TrackingStatus(easyar.MotionTrackingStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldRootController_set_TrackingStatus_m524358EB94DD7AF47E462DCB4ED5ED5913A564DA (WorldRootController_t7D8656D3888137095BE12AC4739E76421C71FEA0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// get; private set;
		int32_t L_0 = ___value0;
		__this->set_U3CTrackingStatusU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void easyar.WorldRootController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldRootController_Start_m4DAE3EF6BFAA8CC4F731A2FC1E61D88CBBFE577A (WorldRootController_t7D8656D3888137095BE12AC4739E76421C71FEA0 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// if (TrackingStatus == MotionTrackingStatus.NotTracking && (ActiveControl == ActiveControlStrategy.HideBeforeTrackingStart || ActiveControl == ActiveControlStrategy.HideWhenNotTracking))
		int32_t L_0 = WorldRootController_get_TrackingStatus_m22353650C3442C983AB946AFEC1656FCE5223614_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = __this->get_ActiveControl_4();
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = __this->get_ActiveControl_4();
		G_B4_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B4_0 = 1;
	}

IL_001e:
	{
		G_B6_0 = G_B4_0;
		goto IL_0021;
	}

IL_0020:
	{
		G_B6_0 = 0;
	}

IL_0021:
	{
		V_0 = (bool)G_B6_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, (bool)0, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void easyar.WorldRootController::OnTracking(easyar.MotionTrackingStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldRootController_OnTracking_m141C2865D0052703AE984D4E81D3C0B54D56A33B (WorldRootController_t7D8656D3888137095BE12AC4739E76421C71FEA0 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldRootController_OnTracking_m141C2865D0052703AE984D4E81D3C0B54D56A33B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// if (TrackingStatus != status)
		int32_t L_0 = WorldRootController_get_TrackingStatus_m22353650C3442C983AB946AFEC1656FCE5223614_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___status0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0089;
		}
	}
	{
		// if (ActiveControl == ActiveControlStrategy.HideWhenNotTracking || (ActiveControl == ActiveControlStrategy.HideBeforeTrackingStart && !trackingStarted))
		int32_t L_3 = __this->get_ActiveControl_4();
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = __this->get_ActiveControl_4();
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002e;
		}
	}
	{
		bool L_5 = __this->get_trackingStarted_5();
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B5_0 = 0;
	}

IL_002f:
	{
		G_B7_0 = G_B5_0;
		goto IL_0032;
	}

IL_0031:
	{
		G_B7_0 = 1;
	}

IL_0032:
	{
		V_1 = (bool)G_B7_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		// gameObject.SetActive(!(status == MotionTrackingStatus.NotTracking));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		int32_t L_8 = ___status0;
		NullCheck(L_7);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)((!(((uint32_t)L_8) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0048:
	{
		// if (!trackingStarted && status != MotionTrackingStatus.NotTracking)
		bool L_9 = __this->get_trackingStarted_5();
		if (L_9)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_10 = ___status0;
		G_B12_0 = ((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B12_0 = 0;
	}

IL_0057:
	{
		V_2 = (bool)G_B12_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// trackingStarted = true;
		__this->set_trackingStarted_5((bool)1);
	}

IL_0064:
	{
		// if (TrackingStatusChanged != null)
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_12 = __this->get_TrackingStatusChanged_6();
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB *)L_12) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0080;
		}
	}
	{
		// TrackingStatusChanged(status);
		Action_1_tD96C598219D1E539D4DC15920DD8C4E42AB3E7AB * L_14 = __this->get_TrackingStatusChanged_6();
		int32_t L_15 = ___status0;
		NullCheck(L_14);
		Action_1_Invoke_m31F93652F8E07EDB096EF67300EBF841B608F31A(L_14, L_15, /*hidden argument*/Action_1_Invoke_m31F93652F8E07EDB096EF67300EBF841B608F31A_RuntimeMethod_var);
	}

IL_0080:
	{
		// TrackingStatus = status;
		int32_t L_16 = ___status0;
		WorldRootController_set_TrackingStatus_m524358EB94DD7AF47E462DCB4ED5ED5913A564DA_inline(__this, L_16, /*hidden argument*/NULL);
	}

IL_0089:
	{
		// }
		return;
	}
}
// System.Void easyar.WorldRootController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldRootController__ctor_m52CA89FDDF4EA49B1976B354224BF14442A817DC (WorldRootController_t7D8656D3888137095BE12AC4739E76421C71FEA0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WorldRootController_get_TrackingStatus_m22353650C3442C983AB946AFEC1656FCE5223614_inline (WorldRootController_t7D8656D3888137095BE12AC4739E76421C71FEA0 * __this, const RuntimeMethod* method)
{
	{
		// get; private set;
		int32_t L_0 = __this->get_U3CTrackingStatusU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WorldRootController_set_TrackingStatus_m524358EB94DD7AF47E462DCB4ED5ED5913A564DA_inline (WorldRootController_t7D8656D3888137095BE12AC4739E76421C71FEA0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// get; private set;
		int32_t L_0 = ___value0;
		__this->set_U3CTrackingStatusU3Ek__BackingField_7(L_0);
		return;
	}
}
