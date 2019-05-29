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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// Item
struct Item_t2953980098;
// Item[]
struct ItemU5BU5D_t583508471;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>
struct List_1_t3418373063;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Analytics.EventTrigger/OnTrigger
struct OnTrigger_t4184125570;
// UnityEngine.Analytics.TrackableField
struct TrackableField_t1772682203;
// UnityEngine.Analytics.TriggerListContainer
struct TriggerListContainer_t2032715483;
// UnityEngine.Analytics.TriggerMethod
struct TriggerMethod_t582536534;
// UnityEngine.Analytics.ValueProperty
struct ValueProperty_t1868393739;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Grid
struct Grid_t2789592072;
// UnityEngine.LineRenderer
struct LineRenderer_t3154350270;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;
// UnityEngine.ParticleSystem
struct ParticleSystem_t1800779281;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t3069227754;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Tilemaps.TileBase
struct TileBase_t3985733243;
// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t1578933799;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1113559212;
// qrTrackableEventHandler
struct qrTrackableEventHandler_t1288000993;




#ifndef U3CMODULEU3E_T692745553_H
#define U3CMODULEU3E_T692745553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745553 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745553_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ITEM_T2953980098_H
#define ITEM_T2953980098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Item
struct  Item_t2953980098  : public RuntimeObject
{
public:
	// System.String Item::item_Name
	String_t* ___item_Name_0;
	// System.Int32 Item::item_PosX
	int32_t ___item_PosX_1;
	// System.Int32 Item::item_PosY
	int32_t ___item_PosY_2;

public:
	inline static int32_t get_offset_of_item_Name_0() { return static_cast<int32_t>(offsetof(Item_t2953980098, ___item_Name_0)); }
	inline String_t* get_item_Name_0() const { return ___item_Name_0; }
	inline String_t** get_address_of_item_Name_0() { return &___item_Name_0; }
	inline void set_item_Name_0(String_t* value)
	{
		___item_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___item_Name_0), value);
	}

	inline static int32_t get_offset_of_item_PosX_1() { return static_cast<int32_t>(offsetof(Item_t2953980098, ___item_PosX_1)); }
	inline int32_t get_item_PosX_1() const { return ___item_PosX_1; }
	inline int32_t* get_address_of_item_PosX_1() { return &___item_PosX_1; }
	inline void set_item_PosX_1(int32_t value)
	{
		___item_PosX_1 = value;
	}

	inline static int32_t get_offset_of_item_PosY_2() { return static_cast<int32_t>(offsetof(Item_t2953980098, ___item_PosY_2)); }
	inline int32_t get_item_PosY_2() const { return ___item_PosY_2; }
	inline int32_t* get_address_of_item_PosY_2() { return &___item_PosY_2; }
	inline void set_item_PosY_2(int32_t value)
	{
		___item_PosY_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITEM_T2953980098_H
#ifndef ITEMLIST_T570330121_H
#define ITEMLIST_T570330121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ItemList
struct  ItemList_t570330121  : public RuntimeObject
{
public:
	// Item[] ItemList::items
	ItemU5BU5D_t583508471* ___items_0;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(ItemList_t570330121, ___items_0)); }
	inline ItemU5BU5D_t583508471* get_items_0() const { return ___items_0; }
	inline ItemU5BU5D_t583508471** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(ItemU5BU5D_t583508471* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((&___items_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITEMLIST_T570330121_H
#ifndef JSONFILEREADER_T4222435370_H
#define JSONFILEREADER_T4222435370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JsonFileReader
struct  JsonFileReader_t4222435370  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONFILEREADER_T4222435370_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef TRACKABLETRIGGER_T621205209_H
#define TRACKABLETRIGGER_T621205209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableTrigger
struct  TrackableTrigger_t621205209  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityEngine.Analytics.TrackableTrigger::m_Target
	GameObject_t1113636619 * ___m_Target_0;
	// System.String UnityEngine.Analytics.TrackableTrigger::m_MethodPath
	String_t* ___m_MethodPath_1;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TrackableTrigger_t621205209, ___m_Target_0)); }
	inline GameObject_t1113636619 * get_m_Target_0() const { return ___m_Target_0; }
	inline GameObject_t1113636619 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(GameObject_t1113636619 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodPath_1() { return static_cast<int32_t>(offsetof(TrackableTrigger_t621205209, ___m_MethodPath_1)); }
	inline String_t* get_m_MethodPath_1() const { return ___m_MethodPath_1; }
	inline String_t** get_address_of_m_MethodPath_1() { return &___m_MethodPath_1; }
	inline void set_m_MethodPath_1(String_t* value)
	{
		___m_MethodPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodPath_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLETRIGGER_T621205209_H
#ifndef TRIGGERLISTCONTAINER_T2032715483_H
#define TRIGGERLISTCONTAINER_T2032715483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerListContainer
struct  TriggerListContainer_t2032715483  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule> UnityEngine.Analytics.TriggerListContainer::m_Rules
	List_1_t3418373063 * ___m_Rules_0;

public:
	inline static int32_t get_offset_of_m_Rules_0() { return static_cast<int32_t>(offsetof(TriggerListContainer_t2032715483, ___m_Rules_0)); }
	inline List_1_t3418373063 * get_m_Rules_0() const { return ___m_Rules_0; }
	inline List_1_t3418373063 ** get_address_of_m_Rules_0() { return &___m_Rules_0; }
	inline void set_m_Rules_0(List_1_t3418373063 * value)
	{
		___m_Rules_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rules_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERLISTCONTAINER_T2032715483_H
#ifndef TRIGGERMETHOD_T582536534_H
#define TRIGGERMETHOD_T582536534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerMethod
struct  TriggerMethod_t582536534  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERMETHOD_T582536534_H
#ifndef U3CGETREQUESTU3EC__ITERATOR0_T1003195158_H
#define U3CGETREQUESTU3EC__ITERATOR0_T1003195158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebRequest/<GetRequest>c__Iterator0
struct  U3CGetRequestU3Ec__Iterator0_t1003195158  : public RuntimeObject
{
public:
	// UnityEngine.Networking.UnityWebRequest WebRequest/<GetRequest>c__Iterator0::<WebRequest_ins>__1
	UnityWebRequest_t463507806 * ___U3CWebRequest_insU3E__1_0;
	// System.String WebRequest/<GetRequest>c__Iterator0::uri
	String_t* ___uri_1;
	// System.Object WebRequest/<GetRequest>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean WebRequest/<GetRequest>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 WebRequest/<GetRequest>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CWebRequest_insU3E__1_0() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ec__Iterator0_t1003195158, ___U3CWebRequest_insU3E__1_0)); }
	inline UnityWebRequest_t463507806 * get_U3CWebRequest_insU3E__1_0() const { return ___U3CWebRequest_insU3E__1_0; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CWebRequest_insU3E__1_0() { return &___U3CWebRequest_insU3E__1_0; }
	inline void set_U3CWebRequest_insU3E__1_0(UnityWebRequest_t463507806 * value)
	{
		___U3CWebRequest_insU3E__1_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CWebRequest_insU3E__1_0), value);
	}

	inline static int32_t get_offset_of_uri_1() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ec__Iterator0_t1003195158, ___uri_1)); }
	inline String_t* get_uri_1() const { return ___uri_1; }
	inline String_t** get_address_of_uri_1() { return &___uri_1; }
	inline void set_uri_1(String_t* value)
	{
		___uri_1 = value;
		Il2CppCodeGenWriteBarrier((&___uri_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ec__Iterator0_t1003195158, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ec__Iterator0_t1003195158, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ec__Iterator0_t1003195158, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETREQUESTU3EC__ITERATOR0_T1003195158_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VECTOR3INT_T741115188_H
#define VECTOR3INT_T741115188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3Int
struct  Vector3Int_t741115188 
{
public:
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector3Int_t741115188, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector3Int_t741115188, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}

	inline static int32_t get_offset_of_m_Z_2() { return static_cast<int32_t>(offsetof(Vector3Int_t741115188, ___m_Z_2)); }
	inline int32_t get_m_Z_2() const { return ___m_Z_2; }
	inline int32_t* get_address_of_m_Z_2() { return &___m_Z_2; }
	inline void set_m_Z_2(int32_t value)
	{
		___m_Z_2 = value;
	}
};

struct Vector3Int_t741115188_StaticFields
{
public:
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t741115188  ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t741115188  ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t741115188  ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t741115188  ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t741115188  ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t741115188  ___s_Right_8;

public:
	inline static int32_t get_offset_of_s_Zero_3() { return static_cast<int32_t>(offsetof(Vector3Int_t741115188_StaticFields, ___s_Zero_3)); }
	inline Vector3Int_t741115188  get_s_Zero_3() const { return ___s_Zero_3; }
	inline Vector3Int_t741115188 * get_address_of_s_Zero_3() { return &___s_Zero_3; }
	inline void set_s_Zero_3(Vector3Int_t741115188  value)
	{
		___s_Zero_3 = value;
	}

	inline static int32_t get_offset_of_s_One_4() { return static_cast<int32_t>(offsetof(Vector3Int_t741115188_StaticFields, ___s_One_4)); }
	inline Vector3Int_t741115188  get_s_One_4() const { return ___s_One_4; }
	inline Vector3Int_t741115188 * get_address_of_s_One_4() { return &___s_One_4; }
	inline void set_s_One_4(Vector3Int_t741115188  value)
	{
		___s_One_4 = value;
	}

	inline static int32_t get_offset_of_s_Up_5() { return static_cast<int32_t>(offsetof(Vector3Int_t741115188_StaticFields, ___s_Up_5)); }
	inline Vector3Int_t741115188  get_s_Up_5() const { return ___s_Up_5; }
	inline Vector3Int_t741115188 * get_address_of_s_Up_5() { return &___s_Up_5; }
	inline void set_s_Up_5(Vector3Int_t741115188  value)
	{
		___s_Up_5 = value;
	}

	inline static int32_t get_offset_of_s_Down_6() { return static_cast<int32_t>(offsetof(Vector3Int_t741115188_StaticFields, ___s_Down_6)); }
	inline Vector3Int_t741115188  get_s_Down_6() const { return ___s_Down_6; }
	inline Vector3Int_t741115188 * get_address_of_s_Down_6() { return &___s_Down_6; }
	inline void set_s_Down_6(Vector3Int_t741115188  value)
	{
		___s_Down_6 = value;
	}

	inline static int32_t get_offset_of_s_Left_7() { return static_cast<int32_t>(offsetof(Vector3Int_t741115188_StaticFields, ___s_Left_7)); }
	inline Vector3Int_t741115188  get_s_Left_7() const { return ___s_Left_7; }
	inline Vector3Int_t741115188 * get_address_of_s_Left_7() { return &___s_Left_7; }
	inline void set_s_Left_7(Vector3Int_t741115188  value)
	{
		___s_Left_7 = value;
	}

	inline static int32_t get_offset_of_s_Right_8() { return static_cast<int32_t>(offsetof(Vector3Int_t741115188_StaticFields, ___s_Right_8)); }
	inline Vector3Int_t741115188  get_s_Right_8() const { return ___s_Right_8; }
	inline Vector3Int_t741115188 * get_address_of_s_Right_8() { return &___s_Right_8; }
	inline void set_s_Right_8(Vector3Int_t741115188  value)
	{
		___s_Right_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3INT_T741115188_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef TRIGGERBOOL_T501031542_H
#define TRIGGERBOOL_T501031542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerBool
struct  TriggerBool_t501031542 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerBool::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerBool_t501031542, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERBOOL_T501031542_H
#ifndef TRIGGERLIFECYCLEEVENT_T3193146760_H
#define TRIGGERLIFECYCLEEVENT_T3193146760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerLifecycleEvent
struct  TriggerLifecycleEvent_t3193146760 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerLifecycleEvent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerLifecycleEvent_t3193146760, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERLIFECYCLEEVENT_T3193146760_H
#ifndef TRIGGEROPERATOR_T3611898925_H
#define TRIGGEROPERATOR_T3611898925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerOperator
struct  TriggerOperator_t3611898925 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerOperator::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerOperator_t3611898925, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGEROPERATOR_T3611898925_H
#ifndef TRIGGERTYPE_T105272677_H
#define TRIGGERTYPE_T105272677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerType
struct  TriggerType_t105272677 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerType_t105272677, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERTYPE_T105272677_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef EVENTTRIGGER_T2527451695_H
#define EVENTTRIGGER_T2527451695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.EventTrigger
struct  EventTrigger_t2527451695  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Analytics.EventTrigger::m_IsTriggerExpanded
	bool ___m_IsTriggerExpanded_0;
	// UnityEngine.Analytics.TriggerType UnityEngine.Analytics.EventTrigger::m_Type
	int32_t ___m_Type_1;
	// UnityEngine.Analytics.TriggerLifecycleEvent UnityEngine.Analytics.EventTrigger::m_LifecycleEvent
	int32_t ___m_LifecycleEvent_2;
	// System.Boolean UnityEngine.Analytics.EventTrigger::m_ApplyRules
	bool ___m_ApplyRules_3;
	// UnityEngine.Analytics.TriggerListContainer UnityEngine.Analytics.EventTrigger::m_Rules
	TriggerListContainer_t2032715483 * ___m_Rules_4;
	// UnityEngine.Analytics.TriggerBool UnityEngine.Analytics.EventTrigger::m_TriggerBool
	int32_t ___m_TriggerBool_5;
	// System.Single UnityEngine.Analytics.EventTrigger::m_InitTime
	float ___m_InitTime_6;
	// System.Single UnityEngine.Analytics.EventTrigger::m_RepeatTime
	float ___m_RepeatTime_7;
	// System.Int32 UnityEngine.Analytics.EventTrigger::m_Repetitions
	int32_t ___m_Repetitions_8;
	// System.Int32 UnityEngine.Analytics.EventTrigger::repetitionCount
	int32_t ___repetitionCount_9;
	// UnityEngine.Analytics.EventTrigger/OnTrigger UnityEngine.Analytics.EventTrigger::m_TriggerFunction
	OnTrigger_t4184125570 * ___m_TriggerFunction_10;
	// UnityEngine.Analytics.TriggerMethod UnityEngine.Analytics.EventTrigger::m_Method
	TriggerMethod_t582536534 * ___m_Method_11;

public:
	inline static int32_t get_offset_of_m_IsTriggerExpanded_0() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_IsTriggerExpanded_0)); }
	inline bool get_m_IsTriggerExpanded_0() const { return ___m_IsTriggerExpanded_0; }
	inline bool* get_address_of_m_IsTriggerExpanded_0() { return &___m_IsTriggerExpanded_0; }
	inline void set_m_IsTriggerExpanded_0(bool value)
	{
		___m_IsTriggerExpanded_0 = value;
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_LifecycleEvent_2() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_LifecycleEvent_2)); }
	inline int32_t get_m_LifecycleEvent_2() const { return ___m_LifecycleEvent_2; }
	inline int32_t* get_address_of_m_LifecycleEvent_2() { return &___m_LifecycleEvent_2; }
	inline void set_m_LifecycleEvent_2(int32_t value)
	{
		___m_LifecycleEvent_2 = value;
	}

	inline static int32_t get_offset_of_m_ApplyRules_3() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_ApplyRules_3)); }
	inline bool get_m_ApplyRules_3() const { return ___m_ApplyRules_3; }
	inline bool* get_address_of_m_ApplyRules_3() { return &___m_ApplyRules_3; }
	inline void set_m_ApplyRules_3(bool value)
	{
		___m_ApplyRules_3 = value;
	}

	inline static int32_t get_offset_of_m_Rules_4() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Rules_4)); }
	inline TriggerListContainer_t2032715483 * get_m_Rules_4() const { return ___m_Rules_4; }
	inline TriggerListContainer_t2032715483 ** get_address_of_m_Rules_4() { return &___m_Rules_4; }
	inline void set_m_Rules_4(TriggerListContainer_t2032715483 * value)
	{
		___m_Rules_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rules_4), value);
	}

	inline static int32_t get_offset_of_m_TriggerBool_5() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_TriggerBool_5)); }
	inline int32_t get_m_TriggerBool_5() const { return ___m_TriggerBool_5; }
	inline int32_t* get_address_of_m_TriggerBool_5() { return &___m_TriggerBool_5; }
	inline void set_m_TriggerBool_5(int32_t value)
	{
		___m_TriggerBool_5 = value;
	}

	inline static int32_t get_offset_of_m_InitTime_6() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_InitTime_6)); }
	inline float get_m_InitTime_6() const { return ___m_InitTime_6; }
	inline float* get_address_of_m_InitTime_6() { return &___m_InitTime_6; }
	inline void set_m_InitTime_6(float value)
	{
		___m_InitTime_6 = value;
	}

	inline static int32_t get_offset_of_m_RepeatTime_7() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_RepeatTime_7)); }
	inline float get_m_RepeatTime_7() const { return ___m_RepeatTime_7; }
	inline float* get_address_of_m_RepeatTime_7() { return &___m_RepeatTime_7; }
	inline void set_m_RepeatTime_7(float value)
	{
		___m_RepeatTime_7 = value;
	}

	inline static int32_t get_offset_of_m_Repetitions_8() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Repetitions_8)); }
	inline int32_t get_m_Repetitions_8() const { return ___m_Repetitions_8; }
	inline int32_t* get_address_of_m_Repetitions_8() { return &___m_Repetitions_8; }
	inline void set_m_Repetitions_8(int32_t value)
	{
		___m_Repetitions_8 = value;
	}

	inline static int32_t get_offset_of_repetitionCount_9() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___repetitionCount_9)); }
	inline int32_t get_repetitionCount_9() const { return ___repetitionCount_9; }
	inline int32_t* get_address_of_repetitionCount_9() { return &___repetitionCount_9; }
	inline void set_repetitionCount_9(int32_t value)
	{
		___repetitionCount_9 = value;
	}

	inline static int32_t get_offset_of_m_TriggerFunction_10() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_TriggerFunction_10)); }
	inline OnTrigger_t4184125570 * get_m_TriggerFunction_10() const { return ___m_TriggerFunction_10; }
	inline OnTrigger_t4184125570 ** get_address_of_m_TriggerFunction_10() { return &___m_TriggerFunction_10; }
	inline void set_m_TriggerFunction_10(OnTrigger_t4184125570 * value)
	{
		___m_TriggerFunction_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_TriggerFunction_10), value);
	}

	inline static int32_t get_offset_of_m_Method_11() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Method_11)); }
	inline TriggerMethod_t582536534 * get_m_Method_11() const { return ___m_Method_11; }
	inline TriggerMethod_t582536534 ** get_address_of_m_Method_11() { return &___m_Method_11; }
	inline void set_m_Method_11(TriggerMethod_t582536534 * value)
	{
		___m_Method_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Method_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTTRIGGER_T2527451695_H
#ifndef TRIGGERRULE_T1946298321_H
#define TRIGGERRULE_T1946298321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerRule
struct  TriggerRule_t1946298321  : public RuntimeObject
{
public:
	// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.TriggerRule::m_Target
	TrackableField_t1772682203 * ___m_Target_0;
	// UnityEngine.Analytics.TriggerOperator UnityEngine.Analytics.TriggerRule::m_Operator
	int32_t ___m_Operator_1;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.TriggerRule::m_Value
	ValueProperty_t1868393739 * ___m_Value_2;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.TriggerRule::m_Value2
	ValueProperty_t1868393739 * ___m_Value2_3;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Target_0)); }
	inline TrackableField_t1772682203 * get_m_Target_0() const { return ___m_Target_0; }
	inline TrackableField_t1772682203 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(TrackableField_t1772682203 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_Operator_1() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Operator_1)); }
	inline int32_t get_m_Operator_1() const { return ___m_Operator_1; }
	inline int32_t* get_address_of_m_Operator_1() { return &___m_Operator_1; }
	inline void set_m_Operator_1(int32_t value)
	{
		___m_Operator_1 = value;
	}

	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Value_2)); }
	inline ValueProperty_t1868393739 * get_m_Value_2() const { return ___m_Value_2; }
	inline ValueProperty_t1868393739 ** get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(ValueProperty_t1868393739 * value)
	{
		___m_Value_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value_2), value);
	}

	inline static int32_t get_offset_of_m_Value2_3() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Value2_3)); }
	inline ValueProperty_t1868393739 * get_m_Value2_3() const { return ___m_Value2_3; }
	inline ValueProperty_t1868393739 ** get_address_of_m_Value2_3() { return &___m_Value2_3; }
	inline void set_m_Value2_3(ValueProperty_t1868393739 * value)
	{
		___m_Value2_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value2_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERRULE_T1946298321_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef ONTRIGGER_T4184125570_H
#define ONTRIGGER_T4184125570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.EventTrigger/OnTrigger
struct  OnTrigger_t4184125570  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONTRIGGER_T4184125570_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef DATALOADER_T2184678649_H
#define DATALOADER_T2184678649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DataLoader
struct  DataLoader_t2184678649  : public MonoBehaviour_t3962482529
{
public:
	// System.String DataLoader::gameDataFileName
	String_t* ___gameDataFileName_4;

public:
	inline static int32_t get_offset_of_gameDataFileName_4() { return static_cast<int32_t>(offsetof(DataLoader_t2184678649, ___gameDataFileName_4)); }
	inline String_t* get_gameDataFileName_4() const { return ___gameDataFileName_4; }
	inline String_t** get_address_of_gameDataFileName_4() { return &___gameDataFileName_4; }
	inline void set_gameDataFileName_4(String_t* value)
	{
		___gameDataFileName_4 = value;
		Il2CppCodeGenWriteBarrier((&___gameDataFileName_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATALOADER_T2184678649_H
#ifndef DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#define DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t1588957063  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.TrackableBehaviour DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1113559212 * ___mTrackableBehaviour_4;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_4() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___mTrackableBehaviour_4)); }
	inline TrackableBehaviour_t1113559212 * get_mTrackableBehaviour_4() const { return ___mTrackableBehaviour_4; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mTrackableBehaviour_4() { return &___mTrackableBehaviour_4; }
	inline void set_mTrackableBehaviour_4(TrackableBehaviour_t1113559212 * value)
	{
		___mTrackableBehaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifndef PATHS_T1421224263_H
#define PATHS_T1421224263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Paths
struct  Paths_t1421224263  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.LineRenderer Paths::linerender
	LineRenderer_t3154350270 * ___linerender_4;
	// UnityEngine.Vector3Int Paths::newcell
	Vector3Int_t741115188  ___newcell_5;
	// UnityEngine.Vector3[] Paths::waypoints
	Vector3U5BU5D_t1718750761* ___waypoints_6;
	// UnityEngine.Vector3 Paths::gridcenter
	Vector3_t3722313464  ___gridcenter_7;
	// UnityEngine.Grid Paths::gridWorld
	Grid_t2789592072 * ___gridWorld_8;
	// UnityEngine.GameObject Paths::targetObj
	GameObject_t1113636619 * ___targetObj_9;
	// qrTrackableEventHandler Paths::the_script
	qrTrackableEventHandler_t1288000993 * ___the_script_10;
	// System.Int32 Paths::seg
	int32_t ___seg_11;

public:
	inline static int32_t get_offset_of_linerender_4() { return static_cast<int32_t>(offsetof(Paths_t1421224263, ___linerender_4)); }
	inline LineRenderer_t3154350270 * get_linerender_4() const { return ___linerender_4; }
	inline LineRenderer_t3154350270 ** get_address_of_linerender_4() { return &___linerender_4; }
	inline void set_linerender_4(LineRenderer_t3154350270 * value)
	{
		___linerender_4 = value;
		Il2CppCodeGenWriteBarrier((&___linerender_4), value);
	}

	inline static int32_t get_offset_of_newcell_5() { return static_cast<int32_t>(offsetof(Paths_t1421224263, ___newcell_5)); }
	inline Vector3Int_t741115188  get_newcell_5() const { return ___newcell_5; }
	inline Vector3Int_t741115188 * get_address_of_newcell_5() { return &___newcell_5; }
	inline void set_newcell_5(Vector3Int_t741115188  value)
	{
		___newcell_5 = value;
	}

	inline static int32_t get_offset_of_waypoints_6() { return static_cast<int32_t>(offsetof(Paths_t1421224263, ___waypoints_6)); }
	inline Vector3U5BU5D_t1718750761* get_waypoints_6() const { return ___waypoints_6; }
	inline Vector3U5BU5D_t1718750761** get_address_of_waypoints_6() { return &___waypoints_6; }
	inline void set_waypoints_6(Vector3U5BU5D_t1718750761* value)
	{
		___waypoints_6 = value;
		Il2CppCodeGenWriteBarrier((&___waypoints_6), value);
	}

	inline static int32_t get_offset_of_gridcenter_7() { return static_cast<int32_t>(offsetof(Paths_t1421224263, ___gridcenter_7)); }
	inline Vector3_t3722313464  get_gridcenter_7() const { return ___gridcenter_7; }
	inline Vector3_t3722313464 * get_address_of_gridcenter_7() { return &___gridcenter_7; }
	inline void set_gridcenter_7(Vector3_t3722313464  value)
	{
		___gridcenter_7 = value;
	}

	inline static int32_t get_offset_of_gridWorld_8() { return static_cast<int32_t>(offsetof(Paths_t1421224263, ___gridWorld_8)); }
	inline Grid_t2789592072 * get_gridWorld_8() const { return ___gridWorld_8; }
	inline Grid_t2789592072 ** get_address_of_gridWorld_8() { return &___gridWorld_8; }
	inline void set_gridWorld_8(Grid_t2789592072 * value)
	{
		___gridWorld_8 = value;
		Il2CppCodeGenWriteBarrier((&___gridWorld_8), value);
	}

	inline static int32_t get_offset_of_targetObj_9() { return static_cast<int32_t>(offsetof(Paths_t1421224263, ___targetObj_9)); }
	inline GameObject_t1113636619 * get_targetObj_9() const { return ___targetObj_9; }
	inline GameObject_t1113636619 ** get_address_of_targetObj_9() { return &___targetObj_9; }
	inline void set_targetObj_9(GameObject_t1113636619 * value)
	{
		___targetObj_9 = value;
		Il2CppCodeGenWriteBarrier((&___targetObj_9), value);
	}

	inline static int32_t get_offset_of_the_script_10() { return static_cast<int32_t>(offsetof(Paths_t1421224263, ___the_script_10)); }
	inline qrTrackableEventHandler_t1288000993 * get_the_script_10() const { return ___the_script_10; }
	inline qrTrackableEventHandler_t1288000993 ** get_address_of_the_script_10() { return &___the_script_10; }
	inline void set_the_script_10(qrTrackableEventHandler_t1288000993 * value)
	{
		___the_script_10 = value;
		Il2CppCodeGenWriteBarrier((&___the_script_10), value);
	}

	inline static int32_t get_offset_of_seg_11() { return static_cast<int32_t>(offsetof(Paths_t1421224263, ___seg_11)); }
	inline int32_t get_seg_11() const { return ___seg_11; }
	inline int32_t* get_address_of_seg_11() { return &___seg_11; }
	inline void set_seg_11(int32_t value)
	{
		___seg_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATHS_T1421224263_H
#ifndef POPULATEGRID_T1025544505_H
#define POPULATEGRID_T1025544505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PopulateGrid
struct  PopulateGrid_t1025544505  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject PopulateGrid::prefab
	GameObject_t1113636619 * ___prefab_4;
	// System.Int32 PopulateGrid::numberToCreate
	int32_t ___numberToCreate_5;

public:
	inline static int32_t get_offset_of_prefab_4() { return static_cast<int32_t>(offsetof(PopulateGrid_t1025544505, ___prefab_4)); }
	inline GameObject_t1113636619 * get_prefab_4() const { return ___prefab_4; }
	inline GameObject_t1113636619 ** get_address_of_prefab_4() { return &___prefab_4; }
	inline void set_prefab_4(GameObject_t1113636619 * value)
	{
		___prefab_4 = value;
		Il2CppCodeGenWriteBarrier((&___prefab_4), value);
	}

	inline static int32_t get_offset_of_numberToCreate_5() { return static_cast<int32_t>(offsetof(PopulateGrid_t1025544505, ___numberToCreate_5)); }
	inline int32_t get_numberToCreate_5() const { return ___numberToCreate_5; }
	inline int32_t* get_address_of_numberToCreate_5() { return &___numberToCreate_5; }
	inline void set_numberToCreate_5(int32_t value)
	{
		___numberToCreate_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POPULATEGRID_T1025544505_H
#ifndef POPULATEMAP_T3291903936_H
#define POPULATEMAP_T3291903936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PopulateMap
struct  PopulateMap_t3291903936  : public MonoBehaviour_t3962482529
{
public:
	// Item PopulateMap::currItem
	Item_t2953980098 * ___currItem_4;
	// UnityEngine.Tilemaps.Tilemap PopulateMap::tileWorld
	Tilemap_t1578933799 * ___tileWorld_5;
	// UnityEngine.Tilemaps.TileBase PopulateMap::tileBase
	TileBase_t3985733243 * ___tileBase_6;
	// UnityEngine.Vector3Int PopulateMap::tilePosition
	Vector3Int_t741115188  ___tilePosition_7;

public:
	inline static int32_t get_offset_of_currItem_4() { return static_cast<int32_t>(offsetof(PopulateMap_t3291903936, ___currItem_4)); }
	inline Item_t2953980098 * get_currItem_4() const { return ___currItem_4; }
	inline Item_t2953980098 ** get_address_of_currItem_4() { return &___currItem_4; }
	inline void set_currItem_4(Item_t2953980098 * value)
	{
		___currItem_4 = value;
		Il2CppCodeGenWriteBarrier((&___currItem_4), value);
	}

	inline static int32_t get_offset_of_tileWorld_5() { return static_cast<int32_t>(offsetof(PopulateMap_t3291903936, ___tileWorld_5)); }
	inline Tilemap_t1578933799 * get_tileWorld_5() const { return ___tileWorld_5; }
	inline Tilemap_t1578933799 ** get_address_of_tileWorld_5() { return &___tileWorld_5; }
	inline void set_tileWorld_5(Tilemap_t1578933799 * value)
	{
		___tileWorld_5 = value;
		Il2CppCodeGenWriteBarrier((&___tileWorld_5), value);
	}

	inline static int32_t get_offset_of_tileBase_6() { return static_cast<int32_t>(offsetof(PopulateMap_t3291903936, ___tileBase_6)); }
	inline TileBase_t3985733243 * get_tileBase_6() const { return ___tileBase_6; }
	inline TileBase_t3985733243 ** get_address_of_tileBase_6() { return &___tileBase_6; }
	inline void set_tileBase_6(TileBase_t3985733243 * value)
	{
		___tileBase_6 = value;
		Il2CppCodeGenWriteBarrier((&___tileBase_6), value);
	}

	inline static int32_t get_offset_of_tilePosition_7() { return static_cast<int32_t>(offsetof(PopulateMap_t3291903936, ___tilePosition_7)); }
	inline Vector3Int_t741115188  get_tilePosition_7() const { return ___tilePosition_7; }
	inline Vector3Int_t741115188 * get_address_of_tilePosition_7() { return &___tilePosition_7; }
	inline void set_tilePosition_7(Vector3Int_t741115188  value)
	{
		___tilePosition_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POPULATEMAP_T3291903936_H
#ifndef VUFORIAMONOBEHAVIOUR_T1150221792_H
#define VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuforiaMonoBehaviour
struct  VuforiaMonoBehaviour_t1150221792  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifndef WEBREQUEST_T2130885875_H
#define WEBREQUEST_T2130885875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebRequest
struct  WebRequest_t2130885875  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUEST_T2130885875_H
#ifndef CONVERT_TO_JSON_T318161668_H
#define CONVERT_TO_JSON_T318161668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// convert_to_json
struct  convert_to_json_t318161668  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERT_TO_JSON_T318161668_H
#ifndef OUTSIDEPATHS_T501832232_H
#define OUTSIDEPATHS_T501832232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// outsidePaths
struct  outsidePaths_t501832232  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.LineRenderer outsidePaths::linerender
	LineRenderer_t3154350270 * ___linerender_4;
	// UnityEngine.Vector3Int outsidePaths::newcell
	Vector3Int_t741115188  ___newcell_5;
	// UnityEngine.Vector3 outsidePaths::newcell_pos
	Vector3_t3722313464  ___newcell_pos_6;
	// UnityEngine.Vector3[] outsidePaths::waypoints
	Vector3U5BU5D_t1718750761* ___waypoints_7;
	// UnityEngine.Vector3 outsidePaths::gridcenter
	Vector3_t3722313464  ___gridcenter_8;
	// UnityEngine.Grid outsidePaths::gridWorld
	Grid_t2789592072 * ___gridWorld_9;
	// System.Int32 outsidePaths::seg
	int32_t ___seg_10;

public:
	inline static int32_t get_offset_of_linerender_4() { return static_cast<int32_t>(offsetof(outsidePaths_t501832232, ___linerender_4)); }
	inline LineRenderer_t3154350270 * get_linerender_4() const { return ___linerender_4; }
	inline LineRenderer_t3154350270 ** get_address_of_linerender_4() { return &___linerender_4; }
	inline void set_linerender_4(LineRenderer_t3154350270 * value)
	{
		___linerender_4 = value;
		Il2CppCodeGenWriteBarrier((&___linerender_4), value);
	}

	inline static int32_t get_offset_of_newcell_5() { return static_cast<int32_t>(offsetof(outsidePaths_t501832232, ___newcell_5)); }
	inline Vector3Int_t741115188  get_newcell_5() const { return ___newcell_5; }
	inline Vector3Int_t741115188 * get_address_of_newcell_5() { return &___newcell_5; }
	inline void set_newcell_5(Vector3Int_t741115188  value)
	{
		___newcell_5 = value;
	}

	inline static int32_t get_offset_of_newcell_pos_6() { return static_cast<int32_t>(offsetof(outsidePaths_t501832232, ___newcell_pos_6)); }
	inline Vector3_t3722313464  get_newcell_pos_6() const { return ___newcell_pos_6; }
	inline Vector3_t3722313464 * get_address_of_newcell_pos_6() { return &___newcell_pos_6; }
	inline void set_newcell_pos_6(Vector3_t3722313464  value)
	{
		___newcell_pos_6 = value;
	}

	inline static int32_t get_offset_of_waypoints_7() { return static_cast<int32_t>(offsetof(outsidePaths_t501832232, ___waypoints_7)); }
	inline Vector3U5BU5D_t1718750761* get_waypoints_7() const { return ___waypoints_7; }
	inline Vector3U5BU5D_t1718750761** get_address_of_waypoints_7() { return &___waypoints_7; }
	inline void set_waypoints_7(Vector3U5BU5D_t1718750761* value)
	{
		___waypoints_7 = value;
		Il2CppCodeGenWriteBarrier((&___waypoints_7), value);
	}

	inline static int32_t get_offset_of_gridcenter_8() { return static_cast<int32_t>(offsetof(outsidePaths_t501832232, ___gridcenter_8)); }
	inline Vector3_t3722313464  get_gridcenter_8() const { return ___gridcenter_8; }
	inline Vector3_t3722313464 * get_address_of_gridcenter_8() { return &___gridcenter_8; }
	inline void set_gridcenter_8(Vector3_t3722313464  value)
	{
		___gridcenter_8 = value;
	}

	inline static int32_t get_offset_of_gridWorld_9() { return static_cast<int32_t>(offsetof(outsidePaths_t501832232, ___gridWorld_9)); }
	inline Grid_t2789592072 * get_gridWorld_9() const { return ___gridWorld_9; }
	inline Grid_t2789592072 ** get_address_of_gridWorld_9() { return &___gridWorld_9; }
	inline void set_gridWorld_9(Grid_t2789592072 * value)
	{
		___gridWorld_9 = value;
		Il2CppCodeGenWriteBarrier((&___gridWorld_9), value);
	}

	inline static int32_t get_offset_of_seg_10() { return static_cast<int32_t>(offsetof(outsidePaths_t501832232, ___seg_10)); }
	inline int32_t get_seg_10() const { return ___seg_10; }
	inline int32_t* get_address_of_seg_10() { return &___seg_10; }
	inline void set_seg_10(int32_t value)
	{
		___seg_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTSIDEPATHS_T501832232_H
#ifndef PATHTEST_T4029942181_H
#define PATHTEST_T4029942181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// pathtest
struct  pathtest_t4029942181  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.LineRenderer pathtest::linerender
	LineRenderer_t3154350270 * ___linerender_4;
	// UnityEngine.Vector3[] pathtest::waypoints
	Vector3U5BU5D_t1718750761* ___waypoints_5;
	// System.Int32 pathtest::seg
	int32_t ___seg_6;

public:
	inline static int32_t get_offset_of_linerender_4() { return static_cast<int32_t>(offsetof(pathtest_t4029942181, ___linerender_4)); }
	inline LineRenderer_t3154350270 * get_linerender_4() const { return ___linerender_4; }
	inline LineRenderer_t3154350270 ** get_address_of_linerender_4() { return &___linerender_4; }
	inline void set_linerender_4(LineRenderer_t3154350270 * value)
	{
		___linerender_4 = value;
		Il2CppCodeGenWriteBarrier((&___linerender_4), value);
	}

	inline static int32_t get_offset_of_waypoints_5() { return static_cast<int32_t>(offsetof(pathtest_t4029942181, ___waypoints_5)); }
	inline Vector3U5BU5D_t1718750761* get_waypoints_5() const { return ___waypoints_5; }
	inline Vector3U5BU5D_t1718750761** get_address_of_waypoints_5() { return &___waypoints_5; }
	inline void set_waypoints_5(Vector3U5BU5D_t1718750761* value)
	{
		___waypoints_5 = value;
		Il2CppCodeGenWriteBarrier((&___waypoints_5), value);
	}

	inline static int32_t get_offset_of_seg_6() { return static_cast<int32_t>(offsetof(pathtest_t4029942181, ___seg_6)); }
	inline int32_t get_seg_6() const { return ___seg_6; }
	inline int32_t* get_address_of_seg_6() { return &___seg_6; }
	inline void set_seg_6(int32_t value)
	{
		___seg_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATHTEST_T4029942181_H
#ifndef PROJECTOR_RAND_T3570896030_H
#define PROJECTOR_RAND_T3570896030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// projector_rand
struct  projector_rand_t3570896030  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.ParticleSystem projector_rand::mySystem
	ParticleSystem_t1800779281 * ___mySystem_4;
	// UnityEngine.ParticleSystem/Particle[] projector_rand::particles
	ParticleU5BU5D_t3069227754* ___particles_5;
	// System.Int32 projector_rand::numParticles
	int32_t ___numParticles_6;
	// System.Single projector_rand::start_time
	float ___start_time_7;
	// System.Single projector_rand::range_max
	float ___range_max_8;
	// System.Single projector_rand::range_min
	float ___range_min_9;
	// System.Single projector_rand::curr_max
	float ___curr_max_10;
	// System.Single projector_rand::curr_min
	float ___curr_min_11;

public:
	inline static int32_t get_offset_of_mySystem_4() { return static_cast<int32_t>(offsetof(projector_rand_t3570896030, ___mySystem_4)); }
	inline ParticleSystem_t1800779281 * get_mySystem_4() const { return ___mySystem_4; }
	inline ParticleSystem_t1800779281 ** get_address_of_mySystem_4() { return &___mySystem_4; }
	inline void set_mySystem_4(ParticleSystem_t1800779281 * value)
	{
		___mySystem_4 = value;
		Il2CppCodeGenWriteBarrier((&___mySystem_4), value);
	}

	inline static int32_t get_offset_of_particles_5() { return static_cast<int32_t>(offsetof(projector_rand_t3570896030, ___particles_5)); }
	inline ParticleU5BU5D_t3069227754* get_particles_5() const { return ___particles_5; }
	inline ParticleU5BU5D_t3069227754** get_address_of_particles_5() { return &___particles_5; }
	inline void set_particles_5(ParticleU5BU5D_t3069227754* value)
	{
		___particles_5 = value;
		Il2CppCodeGenWriteBarrier((&___particles_5), value);
	}

	inline static int32_t get_offset_of_numParticles_6() { return static_cast<int32_t>(offsetof(projector_rand_t3570896030, ___numParticles_6)); }
	inline int32_t get_numParticles_6() const { return ___numParticles_6; }
	inline int32_t* get_address_of_numParticles_6() { return &___numParticles_6; }
	inline void set_numParticles_6(int32_t value)
	{
		___numParticles_6 = value;
	}

	inline static int32_t get_offset_of_start_time_7() { return static_cast<int32_t>(offsetof(projector_rand_t3570896030, ___start_time_7)); }
	inline float get_start_time_7() const { return ___start_time_7; }
	inline float* get_address_of_start_time_7() { return &___start_time_7; }
	inline void set_start_time_7(float value)
	{
		___start_time_7 = value;
	}

	inline static int32_t get_offset_of_range_max_8() { return static_cast<int32_t>(offsetof(projector_rand_t3570896030, ___range_max_8)); }
	inline float get_range_max_8() const { return ___range_max_8; }
	inline float* get_address_of_range_max_8() { return &___range_max_8; }
	inline void set_range_max_8(float value)
	{
		___range_max_8 = value;
	}

	inline static int32_t get_offset_of_range_min_9() { return static_cast<int32_t>(offsetof(projector_rand_t3570896030, ___range_min_9)); }
	inline float get_range_min_9() const { return ___range_min_9; }
	inline float* get_address_of_range_min_9() { return &___range_min_9; }
	inline void set_range_min_9(float value)
	{
		___range_min_9 = value;
	}

	inline static int32_t get_offset_of_curr_max_10() { return static_cast<int32_t>(offsetof(projector_rand_t3570896030, ___curr_max_10)); }
	inline float get_curr_max_10() const { return ___curr_max_10; }
	inline float* get_address_of_curr_max_10() { return &___curr_max_10; }
	inline void set_curr_max_10(float value)
	{
		___curr_max_10 = value;
	}

	inline static int32_t get_offset_of_curr_min_11() { return static_cast<int32_t>(offsetof(projector_rand_t3570896030, ___curr_min_11)); }
	inline float get_curr_min_11() const { return ___curr_min_11; }
	inline float* get_address_of_curr_min_11() { return &___curr_min_11; }
	inline void set_curr_min_11(float value)
	{
		___curr_min_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROJECTOR_RAND_T3570896030_H
#ifndef QRTRACKABLEEVENTHANDLER_T1288000993_H
#define QRTRACKABLEEVENTHANDLER_T1288000993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// qrTrackableEventHandler
struct  qrTrackableEventHandler_t1288000993  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean qrTrackableEventHandler::isTracked
	bool ___isTracked_4;
	// System.Boolean qrTrackableEventHandler::isExtended
	bool ___isExtended_5;
	// Vuforia.TrackableBehaviour qrTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1113559212 * ___mTrackableBehaviour_6;

public:
	inline static int32_t get_offset_of_isTracked_4() { return static_cast<int32_t>(offsetof(qrTrackableEventHandler_t1288000993, ___isTracked_4)); }
	inline bool get_isTracked_4() const { return ___isTracked_4; }
	inline bool* get_address_of_isTracked_4() { return &___isTracked_4; }
	inline void set_isTracked_4(bool value)
	{
		___isTracked_4 = value;
	}

	inline static int32_t get_offset_of_isExtended_5() { return static_cast<int32_t>(offsetof(qrTrackableEventHandler_t1288000993, ___isExtended_5)); }
	inline bool get_isExtended_5() const { return ___isExtended_5; }
	inline bool* get_address_of_isExtended_5() { return &___isExtended_5; }
	inline void set_isExtended_5(bool value)
	{
		___isExtended_5 = value;
	}

	inline static int32_t get_offset_of_mTrackableBehaviour_6() { return static_cast<int32_t>(offsetof(qrTrackableEventHandler_t1288000993, ___mTrackableBehaviour_6)); }
	inline TrackableBehaviour_t1113559212 * get_mTrackableBehaviour_6() const { return ___mTrackableBehaviour_6; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mTrackableBehaviour_6() { return &___mTrackableBehaviour_6; }
	inline void set_mTrackableBehaviour_6(TrackableBehaviour_t1113559212 * value)
	{
		___mTrackableBehaviour_6 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QRTRACKABLEEVENTHANDLER_T1288000993_H
#ifndef QRSTATUS_T2619364882_H
#define QRSTATUS_T2619364882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// qrstatus
struct  qrstatus_t2619364882  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text qrstatus::statusText
	Text_t1901882714 * ___statusText_4;
	// qrTrackableEventHandler qrstatus::QRCode
	qrTrackableEventHandler_t1288000993 * ___QRCode_5;

public:
	inline static int32_t get_offset_of_statusText_4() { return static_cast<int32_t>(offsetof(qrstatus_t2619364882, ___statusText_4)); }
	inline Text_t1901882714 * get_statusText_4() const { return ___statusText_4; }
	inline Text_t1901882714 ** get_address_of_statusText_4() { return &___statusText_4; }
	inline void set_statusText_4(Text_t1901882714 * value)
	{
		___statusText_4 = value;
		Il2CppCodeGenWriteBarrier((&___statusText_4), value);
	}

	inline static int32_t get_offset_of_QRCode_5() { return static_cast<int32_t>(offsetof(qrstatus_t2619364882, ___QRCode_5)); }
	inline qrTrackableEventHandler_t1288000993 * get_QRCode_5() const { return ___QRCode_5; }
	inline qrTrackableEventHandler_t1288000993 ** get_address_of_QRCode_5() { return &___QRCode_5; }
	inline void set_QRCode_5(qrTrackableEventHandler_t1288000993 * value)
	{
		___QRCode_5 = value;
		Il2CppCodeGenWriteBarrier((&___QRCode_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QRSTATUS_T2619364882_H
#ifndef DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#define DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultInitializationErrorHandler
struct  DefaultInitializationErrorHandler_t3109936861  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// System.String DefaultInitializationErrorHandler::mErrorText
	String_t* ___mErrorText_4;
	// System.Boolean DefaultInitializationErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_5;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::bodyStyle
	GUIStyle_t3956901511 * ___bodyStyle_7;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::headerStyle
	GUIStyle_t3956901511 * ___headerStyle_8;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::footerStyle
	GUIStyle_t3956901511 * ___footerStyle_9;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::bodyTexture
	Texture2D_t3840446185 * ___bodyTexture_10;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::headerTexture
	Texture2D_t3840446185 * ___headerTexture_11;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::footerTexture
	Texture2D_t3840446185 * ___footerTexture_12;

public:
	inline static int32_t get_offset_of_mErrorText_4() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorText_4)); }
	inline String_t* get_mErrorText_4() const { return ___mErrorText_4; }
	inline String_t** get_address_of_mErrorText_4() { return &___mErrorText_4; }
	inline void set_mErrorText_4(String_t* value)
	{
		___mErrorText_4 = value;
		Il2CppCodeGenWriteBarrier((&___mErrorText_4), value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_5() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorOccurred_5)); }
	inline bool get_mErrorOccurred_5() const { return ___mErrorOccurred_5; }
	inline bool* get_address_of_mErrorOccurred_5() { return &___mErrorOccurred_5; }
	inline void set_mErrorOccurred_5(bool value)
	{
		___mErrorOccurred_5 = value;
	}

	inline static int32_t get_offset_of_bodyStyle_7() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyStyle_7)); }
	inline GUIStyle_t3956901511 * get_bodyStyle_7() const { return ___bodyStyle_7; }
	inline GUIStyle_t3956901511 ** get_address_of_bodyStyle_7() { return &___bodyStyle_7; }
	inline void set_bodyStyle_7(GUIStyle_t3956901511 * value)
	{
		___bodyStyle_7 = value;
		Il2CppCodeGenWriteBarrier((&___bodyStyle_7), value);
	}

	inline static int32_t get_offset_of_headerStyle_8() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerStyle_8)); }
	inline GUIStyle_t3956901511 * get_headerStyle_8() const { return ___headerStyle_8; }
	inline GUIStyle_t3956901511 ** get_address_of_headerStyle_8() { return &___headerStyle_8; }
	inline void set_headerStyle_8(GUIStyle_t3956901511 * value)
	{
		___headerStyle_8 = value;
		Il2CppCodeGenWriteBarrier((&___headerStyle_8), value);
	}

	inline static int32_t get_offset_of_footerStyle_9() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerStyle_9)); }
	inline GUIStyle_t3956901511 * get_footerStyle_9() const { return ___footerStyle_9; }
	inline GUIStyle_t3956901511 ** get_address_of_footerStyle_9() { return &___footerStyle_9; }
	inline void set_footerStyle_9(GUIStyle_t3956901511 * value)
	{
		___footerStyle_9 = value;
		Il2CppCodeGenWriteBarrier((&___footerStyle_9), value);
	}

	inline static int32_t get_offset_of_bodyTexture_10() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyTexture_10)); }
	inline Texture2D_t3840446185 * get_bodyTexture_10() const { return ___bodyTexture_10; }
	inline Texture2D_t3840446185 ** get_address_of_bodyTexture_10() { return &___bodyTexture_10; }
	inline void set_bodyTexture_10(Texture2D_t3840446185 * value)
	{
		___bodyTexture_10 = value;
		Il2CppCodeGenWriteBarrier((&___bodyTexture_10), value);
	}

	inline static int32_t get_offset_of_headerTexture_11() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerTexture_11)); }
	inline Texture2D_t3840446185 * get_headerTexture_11() const { return ___headerTexture_11; }
	inline Texture2D_t3840446185 ** get_address_of_headerTexture_11() { return &___headerTexture_11; }
	inline void set_headerTexture_11(Texture2D_t3840446185 * value)
	{
		___headerTexture_11 = value;
		Il2CppCodeGenWriteBarrier((&___headerTexture_11), value);
	}

	inline static int32_t get_offset_of_footerTexture_12() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerTexture_12)); }
	inline Texture2D_t3840446185 * get_footerTexture_12() const { return ___footerTexture_12; }
	inline Texture2D_t3840446185 ** get_address_of_footerTexture_12() { return &___footerTexture_12; }
	inline void set_footerTexture_12(Texture2D_t3840446185 * value)
	{
		___footerTexture_12 = value;
		Il2CppCodeGenWriteBarrier((&___footerTexture_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2500 = { sizeof (TriggerListContainer_t2032715483), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2500[1] = 
{
	TriggerListContainer_t2032715483::get_offset_of_m_Rules_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2501 = { sizeof (EventTrigger_t2527451695), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2501[12] = 
{
	EventTrigger_t2527451695::get_offset_of_m_IsTriggerExpanded_0(),
	EventTrigger_t2527451695::get_offset_of_m_Type_1(),
	EventTrigger_t2527451695::get_offset_of_m_LifecycleEvent_2(),
	EventTrigger_t2527451695::get_offset_of_m_ApplyRules_3(),
	EventTrigger_t2527451695::get_offset_of_m_Rules_4(),
	EventTrigger_t2527451695::get_offset_of_m_TriggerBool_5(),
	EventTrigger_t2527451695::get_offset_of_m_InitTime_6(),
	EventTrigger_t2527451695::get_offset_of_m_RepeatTime_7(),
	EventTrigger_t2527451695::get_offset_of_m_Repetitions_8(),
	EventTrigger_t2527451695::get_offset_of_repetitionCount_9(),
	EventTrigger_t2527451695::get_offset_of_m_TriggerFunction_10(),
	EventTrigger_t2527451695::get_offset_of_m_Method_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2502 = { sizeof (OnTrigger_t4184125570), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2503 = { sizeof (TrackableTrigger_t621205209), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2503[2] = 
{
	TrackableTrigger_t621205209::get_offset_of_m_Target_0(),
	TrackableTrigger_t621205209::get_offset_of_m_MethodPath_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2504 = { sizeof (TriggerMethod_t582536534), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2505 = { sizeof (TriggerRule_t1946298321), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2505[4] = 
{
	TriggerRule_t1946298321::get_offset_of_m_Target_0(),
	TriggerRule_t1946298321::get_offset_of_m_Operator_1(),
	TriggerRule_t1946298321::get_offset_of_m_Value_2(),
	TriggerRule_t1946298321::get_offset_of_m_Value2_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2506 = { sizeof (U3CModuleU3E_t692745553), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2507 = { sizeof (convert_to_json_t318161668), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2508 = { sizeof (Item_t2953980098), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2508[3] = 
{
	Item_t2953980098::get_offset_of_item_Name_0(),
	Item_t2953980098::get_offset_of_item_PosX_1(),
	Item_t2953980098::get_offset_of_item_PosY_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2509 = { sizeof (ItemList_t570330121), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2509[1] = 
{
	ItemList_t570330121::get_offset_of_items_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2510 = { sizeof (JsonFileReader_t4222435370), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2511 = { sizeof (outsidePaths_t501832232), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2511[7] = 
{
	outsidePaths_t501832232::get_offset_of_linerender_4(),
	outsidePaths_t501832232::get_offset_of_newcell_5(),
	outsidePaths_t501832232::get_offset_of_newcell_pos_6(),
	outsidePaths_t501832232::get_offset_of_waypoints_7(),
	outsidePaths_t501832232::get_offset_of_gridcenter_8(),
	outsidePaths_t501832232::get_offset_of_gridWorld_9(),
	outsidePaths_t501832232::get_offset_of_seg_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2512 = { sizeof (Paths_t1421224263), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2512[8] = 
{
	Paths_t1421224263::get_offset_of_linerender_4(),
	Paths_t1421224263::get_offset_of_newcell_5(),
	Paths_t1421224263::get_offset_of_waypoints_6(),
	Paths_t1421224263::get_offset_of_gridcenter_7(),
	Paths_t1421224263::get_offset_of_gridWorld_8(),
	Paths_t1421224263::get_offset_of_targetObj_9(),
	Paths_t1421224263::get_offset_of_the_script_10(),
	Paths_t1421224263::get_offset_of_seg_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2513 = { sizeof (pathtest_t4029942181), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2513[3] = 
{
	pathtest_t4029942181::get_offset_of_linerender_4(),
	pathtest_t4029942181::get_offset_of_waypoints_5(),
	pathtest_t4029942181::get_offset_of_seg_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2514 = { sizeof (PopulateGrid_t1025544505), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2514[2] = 
{
	PopulateGrid_t1025544505::get_offset_of_prefab_4(),
	PopulateGrid_t1025544505::get_offset_of_numberToCreate_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2515 = { sizeof (PopulateMap_t3291903936), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2515[4] = 
{
	PopulateMap_t3291903936::get_offset_of_currItem_4(),
	PopulateMap_t3291903936::get_offset_of_tileWorld_5(),
	PopulateMap_t3291903936::get_offset_of_tileBase_6(),
	PopulateMap_t3291903936::get_offset_of_tilePosition_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2516 = { sizeof (DataLoader_t2184678649), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2516[1] = 
{
	DataLoader_t2184678649::get_offset_of_gameDataFileName_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2517 = { sizeof (projector_rand_t3570896030), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2517[8] = 
{
	projector_rand_t3570896030::get_offset_of_mySystem_4(),
	projector_rand_t3570896030::get_offset_of_particles_5(),
	projector_rand_t3570896030::get_offset_of_numParticles_6(),
	projector_rand_t3570896030::get_offset_of_start_time_7(),
	projector_rand_t3570896030::get_offset_of_range_max_8(),
	projector_rand_t3570896030::get_offset_of_range_min_9(),
	projector_rand_t3570896030::get_offset_of_curr_max_10(),
	projector_rand_t3570896030::get_offset_of_curr_min_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2518 = { sizeof (qrstatus_t2619364882), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2518[2] = 
{
	qrstatus_t2619364882::get_offset_of_statusText_4(),
	qrstatus_t2619364882::get_offset_of_QRCode_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2519 = { sizeof (qrTrackableEventHandler_t1288000993), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2519[3] = 
{
	qrTrackableEventHandler_t1288000993::get_offset_of_isTracked_4(),
	qrTrackableEventHandler_t1288000993::get_offset_of_isExtended_5(),
	qrTrackableEventHandler_t1288000993::get_offset_of_mTrackableBehaviour_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2520 = { sizeof (WebRequest_t2130885875), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2521 = { sizeof (U3CGetRequestU3Ec__Iterator0_t1003195158), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2521[5] = 
{
	U3CGetRequestU3Ec__Iterator0_t1003195158::get_offset_of_U3CWebRequest_insU3E__1_0(),
	U3CGetRequestU3Ec__Iterator0_t1003195158::get_offset_of_uri_1(),
	U3CGetRequestU3Ec__Iterator0_t1003195158::get_offset_of_U24current_2(),
	U3CGetRequestU3Ec__Iterator0_t1003195158::get_offset_of_U24disposing_3(),
	U3CGetRequestU3Ec__Iterator0_t1003195158::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2522 = { sizeof (DefaultInitializationErrorHandler_t3109936861), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2522[9] = 
{
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_mErrorText_4(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_mErrorOccurred_5(),
	0,
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_bodyStyle_7(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_headerStyle_8(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_footerStyle_9(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_bodyTexture_10(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_headerTexture_11(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_footerTexture_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2523 = { sizeof (DefaultTrackableEventHandler_t1588957063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2523[1] = 
{
	DefaultTrackableEventHandler_t1588957063::get_offset_of_mTrackableBehaviour_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
