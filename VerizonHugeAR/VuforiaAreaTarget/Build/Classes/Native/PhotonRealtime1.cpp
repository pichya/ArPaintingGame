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

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_t8846FF549F5B694BD2BAD400ACC3C3CCD225833B;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_tF041550115288ED3D9A4C067F1CA506A52B85E79;
// ExitGames.Client.Photon.ITrafficRecorder
struct ITrafficRecorder_tD8FF26B9EB05F370CC9ED716E94B39E5E21A0C8A;
// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object>
struct NonAllocDictionary_2_t2891BBDB1720D30C03FB43FCFC84AE05F1A59159;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t9EDDF7A2BDA98009C3FC81DA1D23CA0C24B717DD;
// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_t6BDDC6005682A8AB09CDBD829E398C3D88FC6F41;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_tE0F68A068C5E57F7C36039C1710C78B525E1D3BC;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086;
// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary>
struct Pool_1_tAF5728DD41ED11A1F14BF65B4FE684F7B70E6741;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPools
struct StructWrapperPools_tF52BF26FAA0ED104D56CDBA79C1C80CDFCD02BED;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t3CC99BFE1076E4F86EAEA8353C0286023837C0F6;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_tA46FAA3934F96CE8B900A61729B51EF887B8552E;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942;
// Photon.Realtime.ErrorInfo
struct ErrorInfo_t829D1EA10BBE2538E288DC9FAFFCBE91874225D9;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22;
// Photon.Realtime.FriendInfo[]
struct FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71;
// Photon.Realtime.IInRoomCallbacks[]
struct IInRoomCallbacksU5BU5D_tA44F743A73A485A9F88F600650D809BC2E633339;
// Photon.Realtime.IWebRpcCallback
struct IWebRpcCallback_t8E22E34D48A3C7550F423A92483771438C1B7D25;
// Photon.Realtime.IWebRpcCallback[]
struct IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3;
// Photon.Realtime.Player
struct Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202;
// Photon.Realtime.Region
struct Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99;
// Photon.Realtime.RegionHandler
struct RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF;
// Photon.Realtime.Room
struct Room_t5DFC39DD6736A2641374564EC6C31352BE33000D;
// Photon.Realtime.RoomInfo
struct RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2;
// Photon.Realtime.RoomInfo[]
struct RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9;
// Photon.Realtime.RoomOptions
struct RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906;
// Photon.Realtime.SupportLogger
struct SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA;
// Photon.Realtime.TypedLobby
struct TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5;
// Photon.Realtime.TypedLobbyInfo
struct TypedLobbyInfo_t4ADAD96C3E4BD40D2ADEA6AF8741EB96983D76E3;
// Photon.Realtime.TypedLobbyInfo[]
struct TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971;
// Photon.Realtime.WebFlags
struct WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895;
// Photon.Realtime.WebRpcResponse
struct WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422;
// System.Action`1<ExitGames.Client.Photon.DisconnectMessage>
struct Action_1_t07A37F07DE05E2F1ED2CA43E340063115C836940;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t778BF51CF0443A7016B1B82EF5B0BC87A0E015BD;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_tC711FD021E3507C267115C54B885A81211F5065D;
// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_tD4F07FC3F0B08A4BE3D400AB1E3553E633312299;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Photon.Realtime.Player>[]
struct EntryU5BU5D_tC520F7CD1339B3935A14ACDE518D4EBF77D59946;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tDAD53056B3CDE7B3CCD3851C341DE8D219292C82;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Photon.Realtime.Player>
struct KeyCollection_t29AA70B21E4FC9A80ACC4C46DCD7E802522BC4A9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Photon.Realtime.Player>
struct ValueCollection_t51F7F5342E0A00B2D85F9359151EACC268651583;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t67E22D878E5B98265B0F173CEF85BAF130DA890C;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_t652C2E3209DBB853F7F2883A35038007DE9796FC;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662;
// System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>
struct List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6;
// System.Collections.Generic.List`1<Photon.Realtime.Region>
struct List_1_tB57A7A42B7678B54F23F1B6112A0973D90CF4A59;
// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>
struct List_1_t54699F3EEDF9AFE6DB103B0349A2C451C05C30A2;
// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_t2DF167EE7F886C6E1CE292988624D5634AF12DE2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.Stopwatch
struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;

IL2CPP_EXTERN_C RuntimeClass* AuthModeOption_tD09E4DA95C4EC0B4CC7EFC735D512F177EC4F829_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomAuthenticationType_t911A058D44AC5F98005B9297CFCDB1EE853AE2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisconnectCause_t8A969EFEB0FE2E4ABD5824250D4C9F7941F2650F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncryptionMode_t5BA959815A4DD1ABC4458E9951E81CB988CBE1F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Extensions_t17EF958E5F2414F822246B79B7D985713AACE5CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebRpcCallback_t8E22E34D48A3C7550F423A92483771438C1B7D25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LobbyType_tC10229382E36CFEC2718583263A711F1C1F35305_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_tFCCF848578539B219B5F60389AB2C730F14273C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetFrameworks_t34C34F5EFFC27A4D9A6230FE2258976262663F31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral031E1E51C21ED3E865BC483E1AB65FD236DAE901;
IL2CPP_EXTERN_C String_t* _stringLiteral08D2E98E6754AF941484848930CCBADDFEFE13D6;
IL2CPP_EXTERN_C String_t* _stringLiteral0BCAE45D8ADAB414DB38EA02F9292623B445C753;
IL2CPP_EXTERN_C String_t* _stringLiteral0E181279FE55F2E332C77E81D9AD00F5486D04F9;
IL2CPP_EXTERN_C String_t* _stringLiteral0E894D3036F153E19CBC956B6A5AB40E5B46BFE2;
IL2CPP_EXTERN_C String_t* _stringLiteral10081B2796EBDFF80CF5904ABFDA3DFF44F1D24D;
IL2CPP_EXTERN_C String_t* _stringLiteral1D3E5829ED7DE70BD79558BB321D57CF75539526;
IL2CPP_EXTERN_C String_t* _stringLiteral223883960405D6589D6CD37F175C73B073C4180F;
IL2CPP_EXTERN_C String_t* _stringLiteral237C3911F834CBF9FAC59D4A04E783842A1D3CD6;
IL2CPP_EXTERN_C String_t* _stringLiteral263A15B4E3E9E2F4C3E8221AC828274306B13855;
IL2CPP_EXTERN_C String_t* _stringLiteral32664F9AA6498F4C645EF8CFF0ECD74680727FE7;
IL2CPP_EXTERN_C String_t* _stringLiteral342CA6CAFC4C39E17B7E56F6FF13F6FED12AB1E3;
IL2CPP_EXTERN_C String_t* _stringLiteral36C3EAA0E1E290F41E2810BAE8D9502C785E92D9;
IL2CPP_EXTERN_C String_t* _stringLiteral3850EA0BD3AE76F6C25B67DC9BD76AD54ED52547;
IL2CPP_EXTERN_C String_t* _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8;
IL2CPP_EXTERN_C String_t* _stringLiteral449A6A793E79A809F30A8DF7B94A45F51C03EAA7;
IL2CPP_EXTERN_C String_t* _stringLiteral4510F0D9271E0DB7D04EB79129742314C93163A9;
IL2CPP_EXTERN_C String_t* _stringLiteral479EC88E55FF68914417B71890F19067E031CF95;
IL2CPP_EXTERN_C String_t* _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808;
IL2CPP_EXTERN_C String_t* _stringLiteral5E0956988995BA9D8AD545060593EC7593A248E9;
IL2CPP_EXTERN_C String_t* _stringLiteral5EBA78122894069C857A70206B4375C6198B3192;
IL2CPP_EXTERN_C String_t* _stringLiteral5FC7E38BFFE00CA46ADD89145464A2EAF759D5C2;
IL2CPP_EXTERN_C String_t* _stringLiteral601FC93C20392B20EEB3C9F37859C622C0D151DF;
IL2CPP_EXTERN_C String_t* _stringLiteral6124202FE8A86D323B1C5BC98700503825D454C2;
IL2CPP_EXTERN_C String_t* _stringLiteral6225D10150959CD938D74A90F50B22692B0A017E;
IL2CPP_EXTERN_C String_t* _stringLiteral63B3DB3EDFFE8E5BD1C358E6F9795D27086FEA91;
IL2CPP_EXTERN_C String_t* _stringLiteral65B5AA8DFF1B2E90A2D050D4B6B198EFD82D674E;
IL2CPP_EXTERN_C String_t* _stringLiteral6936221DCE707D23499D1653D6EE7D2BADFFBAA9;
IL2CPP_EXTERN_C String_t* _stringLiteral6C8EE3675EEC14F86A361B84718313E2562E573C;
IL2CPP_EXTERN_C String_t* _stringLiteral6E7819832982A4FC237916272FB49CFFA9624FE3;
IL2CPP_EXTERN_C String_t* _stringLiteral6ED81047DEAE3CCB5B374374798282C7FA029B8E;
IL2CPP_EXTERN_C String_t* _stringLiteral736FF8E5B8E1C7958551256FA5E5146C75A31C7B;
IL2CPP_EXTERN_C String_t* _stringLiteral747F36852E16310ED684572F30D34B6FF654D27C;
IL2CPP_EXTERN_C String_t* _stringLiteral78A99AC35589D8FC77F6FEB59EE7E55956BB35AE;
IL2CPP_EXTERN_C String_t* _stringLiteral7CEE29B46B3ED2F432C4A7B3A8DE12CAEB5D44D7;
IL2CPP_EXTERN_C String_t* _stringLiteral7D53C873D226A601A9783CBEBEB7B758ABE2D2C7;
IL2CPP_EXTERN_C String_t* _stringLiteral810A4EA841E283333EDA34AE9D91F1789F061216;
IL2CPP_EXTERN_C String_t* _stringLiteral8227CC0BECA58310D819DA015E3EE6A267F9F559;
IL2CPP_EXTERN_C String_t* _stringLiteral8BA5EF7D138B70C6CE8ACA51A43081AB53BB3ABD;
IL2CPP_EXTERN_C String_t* _stringLiteral9011E4E84DD86E01B4E886AF91734474A9DB3E2E;
IL2CPP_EXTERN_C String_t* _stringLiteral97CBBD581FE6B5A33E6750E4AAF42F61118114AE;
IL2CPP_EXTERN_C String_t* _stringLiteral98D82A5FBE2C48A4BA7D23C09B325D465EC799DC;
IL2CPP_EXTERN_C String_t* _stringLiteral99D72C7FC3E2E145870BEAB37C0B70E343EA9C3B;
IL2CPP_EXTERN_C String_t* _stringLiteral9E226BDBF405B6893314BBDA5DF5D6DA548FA202;
IL2CPP_EXTERN_C String_t* _stringLiteralAF2F0CEF3FB17E9F3FFB6676C1CF10F475D85565;
IL2CPP_EXTERN_C String_t* _stringLiteralB32938589EB53DCC2BAD4055BB5EEBD4496BF09A;
IL2CPP_EXTERN_C String_t* _stringLiteralC114B6A8C4FCA0FA33B6A8678C504A97A63EBC26;
IL2CPP_EXTERN_C String_t* _stringLiteralC42A1C0FCB9F3B03AFF049A971ECB58EF1666A5B;
IL2CPP_EXTERN_C String_t* _stringLiteralC5958D312E5DCB60470B5CABD9A95E5F86B42BCB;
IL2CPP_EXTERN_C String_t* _stringLiteralCA3FE080FB4F6BC100872F3199B8E39886FCEB68;
IL2CPP_EXTERN_C String_t* _stringLiteralCEB032786FD44DA7017F3BA777F0F12B63B3BE37;
IL2CPP_EXTERN_C String_t* _stringLiteralD017C5EA410EE280D7562FF84CE6D01E2D440ED1;
IL2CPP_EXTERN_C String_t* _stringLiteralD1DBE50E93BA588346E8642DECF71D0109C9A902;
IL2CPP_EXTERN_C String_t* _stringLiteralD235E051250AE16885534E940FDD36CA13FD2D20;
IL2CPP_EXTERN_C String_t* _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
IL2CPP_EXTERN_C String_t* _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2;
IL2CPP_EXTERN_C String_t* _stringLiteralEA88FBAA99B73225752E2EF67593F775848160AD;
IL2CPP_EXTERN_C String_t* _stringLiteralF7068A42680648970601D75B7A3926C9C04E462B;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m59731793525CCBBC9E9B90D5525CF64AEE514A88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mFD433C2EA94FECAA77A8B0C9671D05785AEADDC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m455754A717B442E70D030785AC1B14A99FF61CFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m244556ED1F00995D5917656BB415FE0B73CD4B18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m8CB03A975FCA9FEE89F222E357EA52AEF7C44F1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m47F4BA1976FB2F13ECF4FE6A55DA6ACB42720F75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC7FFB79B44AF60DEF8ECB7E95469108B1A131FDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m50709063468E77F299D9B15A5224FC5B8770F948_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA50C178A90B3A62136BA22B44CE8D3AA0B549911_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3DC15E45F109EA8ED752BBF8669EF7D6199CF358_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8998D7682A2B5B6B47F0837987B6598904297BAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE495502B9607C6FB122449BE5BCE1231C1A205A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1A59BC22EE5CA9B605AA85BF87051308A8EFE204_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t RoomInfo_Equals_mA1F83E98B362D4DAF441D42C360164E18057BECC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RoomInfo_InternalCacheProperties_m58BA57D991C784FD56431FD965FC0329FE4AA039_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RoomInfo_ToStringFull_mE676F4200194103F85618888DE0790156EF89768_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RoomInfo_ToString_m47D9484C51886F87648BA365109134FB53CD933A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RoomInfo__ctor_m800A5C45B677469300338E4F51B4D71C04168685_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RoomOptions__ctor_m254044C6ACFBFED793E00A41DF8E76F953EE16CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_AddPlayer_m563868E24D9EF0C9DAE29389430F2F07F3FFB147_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_ClearExpectedUsers_mE4627419E610BE7C3CF9D8AA81E24F88F6042D47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_GetPlayer_m49DF1E5FE3CB10AE1AD5F1B7D1CD96583CAD5E2C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_RemovePlayer_m238395556BB7C376C19ADE84074EA4D3C043B215_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_SetCustomProperties_m3F5677F72E2D47B08F0D632D8D8073F2466EE6E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_SetExpectedUsers_m624198ABE37038AC8C49F4570053F0E57340A865_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_SetExpectedUsers_m78E6BFFC65FB7F6044661409EBBAC2F107BD368C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_SetMasterClient_m332177B7EA4EBF00CABB88FA984B651954CFA21C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_SetPropertiesListedInLobby_mECC17F1937DC2405E339FB401C653AEE0A1C1367_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_StorePlayer_m12DAA94744AE461D74B16FDB01A71F6FEE3325CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_ToStringFull_m94133A3D76BCF79806886BBFCBEA1B6699BF0579_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_ToString_mEFDF611A6369048A0F0471689A43585AD19D76BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room__ctor_mD644FF2C795EC5BBD50438BAB949C2414A873CB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_get_PlayerCount_mCBF32BA967FF797861D5E9C2B26C3A6BDACA2E99_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_set_EmptyRoomTtl_mA79AEB412F560A793F95EF26DDDFF53367D5E8FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_set_IsOpen_m9BF3D27C133879A9EF88E4EEB553878DC88AB4A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_set_IsVisible_m5506840C476AFB8F2FF510C8A3320EC19042C010_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_set_MaxPlayers_mA500CB2E9F2F4A3E498FA8707B1409247BE790EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Room_set_PlayerTtl_mDC5CA1C7F2790DD26EDB6D8FD7FCFE723E60C55E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_LogBasics_m1DD18EAF9701CABB4D230E939DC67A471B2C4B13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_LogStats_m420DC4631D59DCE0F7D33C3146C8688D08C54F94_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnApplicationPause_m394AE8B8288BFCE03DD16287100911E4D922E01B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnConnectedToMaster_mF52A4381DCC7C6CE19F3451D539020E39B2A11C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnConnected_mA89BCA9B3319032CF17DEB3BE76B87AA54C06C76_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnCreateRoomFailed_mE38FC7667E7002A91626809317BECD47D71FDCCF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnCreatedRoom_mF35AB68837976AC88555409F51F24C21C4A8C2F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnCustomAuthenticationFailed_m63D26B6876F0FD3409FD609D7354B59DCA6B6648_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnCustomAuthenticationResponse_mF5F844DB7163FEE64FB92021F75C644C44D2CF35_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnDisconnected_mDE77493509B7A736D17258EABD0BD827843C9950_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnErrorInfo_m20D7E6C6F87BF2BA88711037EEC5F34871B55C8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnFriendListUpdate_mB422AD317F908DDCA99272016652A88A22FBAF47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnJoinRandomFailed_mAE5ECBF451C6E4FDFE2F85E0DC30F525319D12F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnJoinRoomFailed_m3488EE58BF74437B2142A96EBF18DCB6B4B2C48C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnJoinedLobby_m3F1EFC503B05CA5A2410C4B5FF08405E6A4ECB2C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnJoinedRoom_mB37EE4EAB942E5A6A8890C6FA4E1EB6740E16B82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnLeftLobby_m33D2D8A6305BA65C80658D8B0AC3DADB7FAEC419_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnLeftRoom_m05D5834FFADC1CCD590D7606819AA48399A3C76F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnLobbyStatisticsUpdate_m9224062BC0172E2FE07283717A658EF01153EB68_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnMasterClientSwitched_m3658AC3899549A5D3788B25BD338CDDA9C842F8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnPlayerEnteredRoom_m154F337E9EB056F73C076F87B3D79F7C60203933_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnPlayerLeftRoom_m341B83040EF40500E395885DEE61E6EF45B7FD31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnPlayerPropertiesUpdate_mC18A647DD91E6378CB5D20FD5CC9E7769F0EEEF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnRegionListReceived_mC0CEDEA1F7A9B6376FAF45AFEB99FE7F0B36A720_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnRoomListUpdate_m8268A931B26BA87B2F0B52F6F21A02B76CF7E2F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnRoomPropertiesUpdate_m9222F2B2957516181B236A28EF37CA57425344EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_StartLogStats_m973A1BFAAB04C8F0F9568E1A281C6EE553384610_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_StartTrackValues_mCCA9284BFA342F2822E786C069773B61ED626F55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_Start_m1198B8A81F90188616E5942DCA38D0D79A8C7479_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_StopLogStats_m5EA95B7B9DD9BEB62FCB674FBDED85DB910C3B06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_StopTrackValues_m0806BA608466711C295BC23883AFAF6AEE153CB4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedLobbyInfo_ToString_m5C7AB7E7308A8603657D1621D9AA98C027BD467C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedLobbyInfo__ctor_m608A819C4E7B3D755880CBBE88AD68B11447F76B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedLobby_ToString_mA56D3E449966F9879512DB3400679974B80DB5AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedLobby__cctor_m9A3C3621A62B5E941CBC71894D7318FA30EE84B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebFlags__cctor_m98EB282DAF4EDC93CC587315D2B06E55CB86DDE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRpcCallbacksContainer_OnWebRpcResponse_mCBCDEF2F034B32C9C0FAF84B205E7AF6F0D92780_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRpcCallbacksContainer__ctor_mC0E65E12EA20C9F14D401D8F08FDB85E806176AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRpcResponse_ToStringFull_mD16B7B3F985553A86DC907BC3836B249EC84F203_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRpcResponse__ctor_m978C21F8095562921B1D549E5EFDCC2B6B0A5C66_MetadataUsageId;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t9EDDF7A2BDA98009C3FC81DA1D23CA0C24B717DD  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.OperationResponse::OperationCode
	uint8_t ___OperationCode_0;
	// System.Int16 ExitGames.Client.Photon.OperationResponse::ReturnCode
	int16_t ___ReturnCode_1;
	// System.String ExitGames.Client.Photon.OperationResponse::DebugMessage
	String_t* ___DebugMessage_2;
	// ExitGames.Client.Photon.ParameterDictionary ExitGames.Client.Photon.OperationResponse::Parameters
	ParameterDictionary_t6BDDC6005682A8AB09CDBD829E398C3D88FC6F41 * ___Parameters_3;

public:
	inline static int32_t get_offset_of_OperationCode_0() { return static_cast<int32_t>(offsetof(OperationResponse_t9EDDF7A2BDA98009C3FC81DA1D23CA0C24B717DD, ___OperationCode_0)); }
	inline uint8_t get_OperationCode_0() const { return ___OperationCode_0; }
	inline uint8_t* get_address_of_OperationCode_0() { return &___OperationCode_0; }
	inline void set_OperationCode_0(uint8_t value)
	{
		___OperationCode_0 = value;
	}

	inline static int32_t get_offset_of_ReturnCode_1() { return static_cast<int32_t>(offsetof(OperationResponse_t9EDDF7A2BDA98009C3FC81DA1D23CA0C24B717DD, ___ReturnCode_1)); }
	inline int16_t get_ReturnCode_1() const { return ___ReturnCode_1; }
	inline int16_t* get_address_of_ReturnCode_1() { return &___ReturnCode_1; }
	inline void set_ReturnCode_1(int16_t value)
	{
		___ReturnCode_1 = value;
	}

	inline static int32_t get_offset_of_DebugMessage_2() { return static_cast<int32_t>(offsetof(OperationResponse_t9EDDF7A2BDA98009C3FC81DA1D23CA0C24B717DD, ___DebugMessage_2)); }
	inline String_t* get_DebugMessage_2() const { return ___DebugMessage_2; }
	inline String_t** get_address_of_DebugMessage_2() { return &___DebugMessage_2; }
	inline void set_DebugMessage_2(String_t* value)
	{
		___DebugMessage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugMessage_2), (void*)value);
	}

	inline static int32_t get_offset_of_Parameters_3() { return static_cast<int32_t>(offsetof(OperationResponse_t9EDDF7A2BDA98009C3FC81DA1D23CA0C24B717DD, ___Parameters_3)); }
	inline ParameterDictionary_t6BDDC6005682A8AB09CDBD829E398C3D88FC6F41 * get_Parameters_3() const { return ___Parameters_3; }
	inline ParameterDictionary_t6BDDC6005682A8AB09CDBD829E398C3D88FC6F41 ** get_address_of_Parameters_3() { return &___Parameters_3; }
	inline void set_Parameters_3(ParameterDictionary_t6BDDC6005682A8AB09CDBD829E398C3D88FC6F41 * value)
	{
		___Parameters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parameters_3), (void*)value);
	}
};


// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_t6BDDC6005682A8AB09CDBD829E398C3D88FC6F41  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.ParameterDictionary::paramDict
	NonAllocDictionary_2_t2891BBDB1720D30C03FB43FCFC84AE05F1A59159 * ___paramDict_0;
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPools ExitGames.Client.Photon.ParameterDictionary::wrapperPools
	StructWrapperPools_tF52BF26FAA0ED104D56CDBA79C1C80CDFCD02BED * ___wrapperPools_1;

public:
	inline static int32_t get_offset_of_paramDict_0() { return static_cast<int32_t>(offsetof(ParameterDictionary_t6BDDC6005682A8AB09CDBD829E398C3D88FC6F41, ___paramDict_0)); }
	inline NonAllocDictionary_2_t2891BBDB1720D30C03FB43FCFC84AE05F1A59159 * get_paramDict_0() const { return ___paramDict_0; }
	inline NonAllocDictionary_2_t2891BBDB1720D30C03FB43FCFC84AE05F1A59159 ** get_address_of_paramDict_0() { return &___paramDict_0; }
	inline void set_paramDict_0(NonAllocDictionary_2_t2891BBDB1720D30C03FB43FCFC84AE05F1A59159 * value)
	{
		___paramDict_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paramDict_0), (void*)value);
	}

	inline static int32_t get_offset_of_wrapperPools_1() { return static_cast<int32_t>(offsetof(ParameterDictionary_t6BDDC6005682A8AB09CDBD829E398C3D88FC6F41, ___wrapperPools_1)); }
	inline StructWrapperPools_tF52BF26FAA0ED104D56CDBA79C1C80CDFCD02BED * get_wrapperPools_1() const { return ___wrapperPools_1; }
	inline StructWrapperPools_tF52BF26FAA0ED104D56CDBA79C1C80CDFCD02BED ** get_address_of_wrapperPools_1() { return &___wrapperPools_1; }
	inline void set_wrapperPools_1(StructWrapperPools_tF52BF26FAA0ED104D56CDBA79C1C80CDFCD02BED * value)
	{
		___wrapperPools_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wrapperPools_1), (void*)value);
	}
};


// Photon.Realtime.ErrorInfo
struct ErrorInfo_t829D1EA10BBE2538E288DC9FAFFCBE91874225D9  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.ErrorInfo::Info
	String_t* ___Info_0;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(ErrorInfo_t829D1EA10BBE2538E288DC9FAFFCBE91874225D9, ___Info_0)); }
	inline String_t* get_Info_0() const { return ___Info_0; }
	inline String_t** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(String_t* value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Info_0), (void*)value);
	}
};


// Photon.Realtime.Player
struct Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202  : public RuntimeObject
{
public:
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.Boolean Photon.Realtime.Player::<HasRejoined>k__BackingField
	bool ___U3CHasRejoinedU3Ek__BackingField_3;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_4;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_5;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_6;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * ___U3CCustomPropertiesU3Ek__BackingField_7;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject * ___TagObject_8;

public:
	inline static int32_t get_offset_of_U3CRoomReferenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___U3CRoomReferenceU3Ek__BackingField_0)); }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * get_U3CRoomReferenceU3Ek__BackingField_0() const { return ___U3CRoomReferenceU3Ek__BackingField_0; }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D ** get_address_of_U3CRoomReferenceU3Ek__BackingField_0() { return &___U3CRoomReferenceU3Ek__BackingField_0; }
	inline void set_U3CRoomReferenceU3Ek__BackingField_0(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * value)
	{
		___U3CRoomReferenceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRoomReferenceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_actorNumber_1() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___actorNumber_1)); }
	inline int32_t get_actorNumber_1() const { return ___actorNumber_1; }
	inline int32_t* get_address_of_actorNumber_1() { return &___actorNumber_1; }
	inline void set_actorNumber_1(int32_t value)
	{
		___actorNumber_1 = value;
	}

	inline static int32_t get_offset_of_IsLocal_2() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___IsLocal_2)); }
	inline bool get_IsLocal_2() const { return ___IsLocal_2; }
	inline bool* get_address_of_IsLocal_2() { return &___IsLocal_2; }
	inline void set_IsLocal_2(bool value)
	{
		___IsLocal_2 = value;
	}

	inline static int32_t get_offset_of_U3CHasRejoinedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___U3CHasRejoinedU3Ek__BackingField_3)); }
	inline bool get_U3CHasRejoinedU3Ek__BackingField_3() const { return ___U3CHasRejoinedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CHasRejoinedU3Ek__BackingField_3() { return &___U3CHasRejoinedU3Ek__BackingField_3; }
	inline void set_U3CHasRejoinedU3Ek__BackingField_3(bool value)
	{
		___U3CHasRejoinedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_nickName_4() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___nickName_4)); }
	inline String_t* get_nickName_4() const { return ___nickName_4; }
	inline String_t** get_address_of_nickName_4() { return &___nickName_4; }
	inline void set_nickName_4(String_t* value)
	{
		___nickName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nickName_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___U3CUserIdU3Ek__BackingField_5)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_5() const { return ___U3CUserIdU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_5() { return &___U3CUserIdU3Ek__BackingField_5; }
	inline void set_U3CUserIdU3Ek__BackingField_5(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsInactiveU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___U3CIsInactiveU3Ek__BackingField_6)); }
	inline bool get_U3CIsInactiveU3Ek__BackingField_6() const { return ___U3CIsInactiveU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsInactiveU3Ek__BackingField_6() { return &___U3CIsInactiveU3Ek__BackingField_6; }
	inline void set_U3CIsInactiveU3Ek__BackingField_6(bool value)
	{
		___U3CIsInactiveU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCustomPropertiesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___U3CCustomPropertiesU3Ek__BackingField_7)); }
	inline Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * get_U3CCustomPropertiesU3Ek__BackingField_7() const { return ___U3CCustomPropertiesU3Ek__BackingField_7; }
	inline Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 ** get_address_of_U3CCustomPropertiesU3Ek__BackingField_7() { return &___U3CCustomPropertiesU3Ek__BackingField_7; }
	inline void set_U3CCustomPropertiesU3Ek__BackingField_7(Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * value)
	{
		___U3CCustomPropertiesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomPropertiesU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_TagObject_8() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___TagObject_8)); }
	inline RuntimeObject * get_TagObject_8() const { return ___TagObject_8; }
	inline RuntimeObject ** get_address_of_TagObject_8() { return &___TagObject_8; }
	inline void set_TagObject_8(RuntimeObject * value)
	{
		___TagObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TagObject_8), (void*)value);
	}
};


// Photon.Realtime.RegionHandler
struct RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Photon.Realtime.Region> Photon.Realtime.RegionHandler::<EnabledRegions>k__BackingField
	List_1_tB57A7A42B7678B54F23F1B6112A0973D90CF4A59 * ___U3CEnabledRegionsU3Ek__BackingField_1;
	// System.String Photon.Realtime.RegionHandler::availableRegionCodes
	String_t* ___availableRegionCodes_2;
	// Photon.Realtime.Region Photon.Realtime.RegionHandler::bestRegionCache
	Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 * ___bestRegionCache_3;
	// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger> Photon.Realtime.RegionHandler::pingerList
	List_1_t54699F3EEDF9AFE6DB103B0349A2C451C05C30A2 * ___pingerList_4;
	// System.Action`1<Photon.Realtime.RegionHandler> Photon.Realtime.RegionHandler::onCompleteCall
	Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A * ___onCompleteCall_5;
	// System.Int32 Photon.Realtime.RegionHandler::previousPing
	int32_t ___previousPing_6;
	// System.Boolean Photon.Realtime.RegionHandler::<IsPinging>k__BackingField
	bool ___U3CIsPingingU3Ek__BackingField_7;
	// System.String Photon.Realtime.RegionHandler::previousSummaryProvided
	String_t* ___previousSummaryProvided_8;

public:
	inline static int32_t get_offset_of_U3CEnabledRegionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___U3CEnabledRegionsU3Ek__BackingField_1)); }
	inline List_1_tB57A7A42B7678B54F23F1B6112A0973D90CF4A59 * get_U3CEnabledRegionsU3Ek__BackingField_1() const { return ___U3CEnabledRegionsU3Ek__BackingField_1; }
	inline List_1_tB57A7A42B7678B54F23F1B6112A0973D90CF4A59 ** get_address_of_U3CEnabledRegionsU3Ek__BackingField_1() { return &___U3CEnabledRegionsU3Ek__BackingField_1; }
	inline void set_U3CEnabledRegionsU3Ek__BackingField_1(List_1_tB57A7A42B7678B54F23F1B6112A0973D90CF4A59 * value)
	{
		___U3CEnabledRegionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEnabledRegionsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_availableRegionCodes_2() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___availableRegionCodes_2)); }
	inline String_t* get_availableRegionCodes_2() const { return ___availableRegionCodes_2; }
	inline String_t** get_address_of_availableRegionCodes_2() { return &___availableRegionCodes_2; }
	inline void set_availableRegionCodes_2(String_t* value)
	{
		___availableRegionCodes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___availableRegionCodes_2), (void*)value);
	}

	inline static int32_t get_offset_of_bestRegionCache_3() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___bestRegionCache_3)); }
	inline Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 * get_bestRegionCache_3() const { return ___bestRegionCache_3; }
	inline Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 ** get_address_of_bestRegionCache_3() { return &___bestRegionCache_3; }
	inline void set_bestRegionCache_3(Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 * value)
	{
		___bestRegionCache_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bestRegionCache_3), (void*)value);
	}

	inline static int32_t get_offset_of_pingerList_4() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___pingerList_4)); }
	inline List_1_t54699F3EEDF9AFE6DB103B0349A2C451C05C30A2 * get_pingerList_4() const { return ___pingerList_4; }
	inline List_1_t54699F3EEDF9AFE6DB103B0349A2C451C05C30A2 ** get_address_of_pingerList_4() { return &___pingerList_4; }
	inline void set_pingerList_4(List_1_t54699F3EEDF9AFE6DB103B0349A2C451C05C30A2 * value)
	{
		___pingerList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pingerList_4), (void*)value);
	}

	inline static int32_t get_offset_of_onCompleteCall_5() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___onCompleteCall_5)); }
	inline Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A * get_onCompleteCall_5() const { return ___onCompleteCall_5; }
	inline Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A ** get_address_of_onCompleteCall_5() { return &___onCompleteCall_5; }
	inline void set_onCompleteCall_5(Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A * value)
	{
		___onCompleteCall_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCompleteCall_5), (void*)value);
	}

	inline static int32_t get_offset_of_previousPing_6() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___previousPing_6)); }
	inline int32_t get_previousPing_6() const { return ___previousPing_6; }
	inline int32_t* get_address_of_previousPing_6() { return &___previousPing_6; }
	inline void set_previousPing_6(int32_t value)
	{
		___previousPing_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsPingingU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___U3CIsPingingU3Ek__BackingField_7)); }
	inline bool get_U3CIsPingingU3Ek__BackingField_7() const { return ___U3CIsPingingU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsPingingU3Ek__BackingField_7() { return &___U3CIsPingingU3Ek__BackingField_7; }
	inline void set_U3CIsPingingU3Ek__BackingField_7(bool value)
	{
		___U3CIsPingingU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_previousSummaryProvided_8() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___previousSummaryProvided_8)); }
	inline String_t* get_previousSummaryProvided_8() const { return ___previousSummaryProvided_8; }
	inline String_t** get_address_of_previousSummaryProvided_8() { return &___previousSummaryProvided_8; }
	inline void set_previousSummaryProvided_8(String_t* value)
	{
		___previousSummaryProvided_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousSummaryProvided_8), (void*)value);
	}
};

struct RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF_StaticFields
{
public:
	// System.Type Photon.Realtime.RegionHandler::PingImplementation
	Type_t * ___PingImplementation_0;
	// System.UInt16 Photon.Realtime.RegionHandler::PortToPingOverride
	uint16_t ___PortToPingOverride_9;

public:
	inline static int32_t get_offset_of_PingImplementation_0() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF_StaticFields, ___PingImplementation_0)); }
	inline Type_t * get_PingImplementation_0() const { return ___PingImplementation_0; }
	inline Type_t ** get_address_of_PingImplementation_0() { return &___PingImplementation_0; }
	inline void set_PingImplementation_0(Type_t * value)
	{
		___PingImplementation_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PingImplementation_0), (void*)value);
	}

	inline static int32_t get_offset_of_PortToPingOverride_9() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF_StaticFields, ___PortToPingOverride_9)); }
	inline uint16_t get_PortToPingOverride_9() const { return ___PortToPingOverride_9; }
	inline uint16_t* get_address_of_PortToPingOverride_9() { return &___PortToPingOverride_9; }
	inline void set_PortToPingOverride_9(uint16_t value)
	{
		___PortToPingOverride_9 = value;
	}
};


// Photon.Realtime.RoomInfo
struct RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2  : public RuntimeObject
{
public:
	// System.Boolean Photon.Realtime.RoomInfo::RemovedFromList
	bool ___RemovedFromList_0;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::customProperties
	Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * ___customProperties_1;
	// System.Byte Photon.Realtime.RoomInfo::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Int32 Photon.Realtime.RoomInfo::emptyRoomTtl
	int32_t ___emptyRoomTtl_3;
	// System.Int32 Photon.Realtime.RoomInfo::playerTtl
	int32_t ___playerTtl_4;
	// System.String[] Photon.Realtime.RoomInfo::expectedUsers
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___expectedUsers_5;
	// System.Boolean Photon.Realtime.RoomInfo::isOpen
	bool ___isOpen_6;
	// System.Boolean Photon.Realtime.RoomInfo::isVisible
	bool ___isVisible_7;
	// System.Boolean Photon.Realtime.RoomInfo::autoCleanUp
	bool ___autoCleanUp_8;
	// System.String Photon.Realtime.RoomInfo::name
	String_t* ___name_9;
	// System.Int32 Photon.Realtime.RoomInfo::masterClientId
	int32_t ___masterClientId_10;
	// System.String[] Photon.Realtime.RoomInfo::propertiesListedInLobby
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___propertiesListedInLobby_11;
	// System.Int32 Photon.Realtime.RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_RemovedFromList_0() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___RemovedFromList_0)); }
	inline bool get_RemovedFromList_0() const { return ___RemovedFromList_0; }
	inline bool* get_address_of_RemovedFromList_0() { return &___RemovedFromList_0; }
	inline void set_RemovedFromList_0(bool value)
	{
		___RemovedFromList_0 = value;
	}

	inline static int32_t get_offset_of_customProperties_1() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___customProperties_1)); }
	inline Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * get_customProperties_1() const { return ___customProperties_1; }
	inline Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 ** get_address_of_customProperties_1() { return &___customProperties_1; }
	inline void set_customProperties_1(Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * value)
	{
		___customProperties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customProperties_1), (void*)value);
	}

	inline static int32_t get_offset_of_maxPlayers_2() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___maxPlayers_2)); }
	inline uint8_t get_maxPlayers_2() const { return ___maxPlayers_2; }
	inline uint8_t* get_address_of_maxPlayers_2() { return &___maxPlayers_2; }
	inline void set_maxPlayers_2(uint8_t value)
	{
		___maxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_emptyRoomTtl_3() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___emptyRoomTtl_3)); }
	inline int32_t get_emptyRoomTtl_3() const { return ___emptyRoomTtl_3; }
	inline int32_t* get_address_of_emptyRoomTtl_3() { return &___emptyRoomTtl_3; }
	inline void set_emptyRoomTtl_3(int32_t value)
	{
		___emptyRoomTtl_3 = value;
	}

	inline static int32_t get_offset_of_playerTtl_4() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___playerTtl_4)); }
	inline int32_t get_playerTtl_4() const { return ___playerTtl_4; }
	inline int32_t* get_address_of_playerTtl_4() { return &___playerTtl_4; }
	inline void set_playerTtl_4(int32_t value)
	{
		___playerTtl_4 = value;
	}

	inline static int32_t get_offset_of_expectedUsers_5() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___expectedUsers_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_expectedUsers_5() const { return ___expectedUsers_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_expectedUsers_5() { return &___expectedUsers_5; }
	inline void set_expectedUsers_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___expectedUsers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expectedUsers_5), (void*)value);
	}

	inline static int32_t get_offset_of_isOpen_6() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___isOpen_6)); }
	inline bool get_isOpen_6() const { return ___isOpen_6; }
	inline bool* get_address_of_isOpen_6() { return &___isOpen_6; }
	inline void set_isOpen_6(bool value)
	{
		___isOpen_6 = value;
	}

	inline static int32_t get_offset_of_isVisible_7() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___isVisible_7)); }
	inline bool get_isVisible_7() const { return ___isVisible_7; }
	inline bool* get_address_of_isVisible_7() { return &___isVisible_7; }
	inline void set_isVisible_7(bool value)
	{
		___isVisible_7 = value;
	}

	inline static int32_t get_offset_of_autoCleanUp_8() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___autoCleanUp_8)); }
	inline bool get_autoCleanUp_8() const { return ___autoCleanUp_8; }
	inline bool* get_address_of_autoCleanUp_8() { return &___autoCleanUp_8; }
	inline void set_autoCleanUp_8(bool value)
	{
		___autoCleanUp_8 = value;
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_masterClientId_10() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___masterClientId_10)); }
	inline int32_t get_masterClientId_10() const { return ___masterClientId_10; }
	inline int32_t* get_address_of_masterClientId_10() { return &___masterClientId_10; }
	inline void set_masterClientId_10(int32_t value)
	{
		___masterClientId_10 = value;
	}

	inline static int32_t get_offset_of_propertiesListedInLobby_11() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___propertiesListedInLobby_11)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_propertiesListedInLobby_11() const { return ___propertiesListedInLobby_11; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_propertiesListedInLobby_11() { return &___propertiesListedInLobby_11; }
	inline void set_propertiesListedInLobby_11(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___propertiesListedInLobby_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertiesListedInLobby_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayerCountU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___U3CPlayerCountU3Ek__BackingField_12)); }
	inline int32_t get_U3CPlayerCountU3Ek__BackingField_12() const { return ___U3CPlayerCountU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CPlayerCountU3Ek__BackingField_12() { return &___U3CPlayerCountU3Ek__BackingField_12; }
	inline void set_U3CPlayerCountU3Ek__BackingField_12(int32_t value)
	{
		___U3CPlayerCountU3Ek__BackingField_12 = value;
	}
};


// Photon.Realtime.RoomOptions
struct RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906  : public RuntimeObject
{
public:
	// System.Boolean Photon.Realtime.RoomOptions::isVisible
	bool ___isVisible_0;
	// System.Boolean Photon.Realtime.RoomOptions::isOpen
	bool ___isOpen_1;
	// System.Byte Photon.Realtime.RoomOptions::MaxPlayers
	uint8_t ___MaxPlayers_2;
	// System.Int32 Photon.Realtime.RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Int32 Photon.Realtime.RoomOptions::EmptyRoomTtl
	int32_t ___EmptyRoomTtl_4;
	// System.Boolean Photon.Realtime.RoomOptions::cleanupCacheOnLeave
	bool ___cleanupCacheOnLeave_5;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomOptions::CustomRoomProperties
	Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * ___CustomRoomProperties_6;
	// System.String[] Photon.Realtime.RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___CustomRoomPropertiesForLobby_7;
	// System.String[] Photon.Realtime.RoomOptions::Plugins
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___Plugins_8;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_9;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.RoomOptions::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_11;
	// System.Boolean Photon.Realtime.RoomOptions::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_12;
	// System.Boolean Photon.Realtime.RoomOptions::broadcastPropsChangeToAll
	bool ___broadcastPropsChangeToAll_13;

public:
	inline static int32_t get_offset_of_isVisible_0() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___isVisible_0)); }
	inline bool get_isVisible_0() const { return ___isVisible_0; }
	inline bool* get_address_of_isVisible_0() { return &___isVisible_0; }
	inline void set_isVisible_0(bool value)
	{
		___isVisible_0 = value;
	}

	inline static int32_t get_offset_of_isOpen_1() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___isOpen_1)); }
	inline bool get_isOpen_1() const { return ___isOpen_1; }
	inline bool* get_address_of_isOpen_1() { return &___isOpen_1; }
	inline void set_isOpen_1(bool value)
	{
		___isOpen_1 = value;
	}

	inline static int32_t get_offset_of_MaxPlayers_2() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___MaxPlayers_2)); }
	inline uint8_t get_MaxPlayers_2() const { return ___MaxPlayers_2; }
	inline uint8_t* get_address_of_MaxPlayers_2() { return &___MaxPlayers_2; }
	inline void set_MaxPlayers_2(uint8_t value)
	{
		___MaxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_PlayerTtl_3() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___PlayerTtl_3)); }
	inline int32_t get_PlayerTtl_3() const { return ___PlayerTtl_3; }
	inline int32_t* get_address_of_PlayerTtl_3() { return &___PlayerTtl_3; }
	inline void set_PlayerTtl_3(int32_t value)
	{
		___PlayerTtl_3 = value;
	}

	inline static int32_t get_offset_of_EmptyRoomTtl_4() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___EmptyRoomTtl_4)); }
	inline int32_t get_EmptyRoomTtl_4() const { return ___EmptyRoomTtl_4; }
	inline int32_t* get_address_of_EmptyRoomTtl_4() { return &___EmptyRoomTtl_4; }
	inline void set_EmptyRoomTtl_4(int32_t value)
	{
		___EmptyRoomTtl_4 = value;
	}

	inline static int32_t get_offset_of_cleanupCacheOnLeave_5() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___cleanupCacheOnLeave_5)); }
	inline bool get_cleanupCacheOnLeave_5() const { return ___cleanupCacheOnLeave_5; }
	inline bool* get_address_of_cleanupCacheOnLeave_5() { return &___cleanupCacheOnLeave_5; }
	inline void set_cleanupCacheOnLeave_5(bool value)
	{
		___cleanupCacheOnLeave_5 = value;
	}

	inline static int32_t get_offset_of_CustomRoomProperties_6() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___CustomRoomProperties_6)); }
	inline Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * get_CustomRoomProperties_6() const { return ___CustomRoomProperties_6; }
	inline Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 ** get_address_of_CustomRoomProperties_6() { return &___CustomRoomProperties_6; }
	inline void set_CustomRoomProperties_6(Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * value)
	{
		___CustomRoomProperties_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomRoomProperties_6), (void*)value);
	}

	inline static int32_t get_offset_of_CustomRoomPropertiesForLobby_7() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___CustomRoomPropertiesForLobby_7)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_CustomRoomPropertiesForLobby_7() const { return ___CustomRoomPropertiesForLobby_7; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_CustomRoomPropertiesForLobby_7() { return &___CustomRoomPropertiesForLobby_7; }
	inline void set_CustomRoomPropertiesForLobby_7(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___CustomRoomPropertiesForLobby_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomRoomPropertiesForLobby_7), (void*)value);
	}

	inline static int32_t get_offset_of_Plugins_8() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___Plugins_8)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_Plugins_8() const { return ___Plugins_8; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_Plugins_8() { return &___Plugins_8; }
	inline void set_Plugins_8(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___Plugins_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Plugins_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSuppressRoomEventsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___U3CSuppressRoomEventsU3Ek__BackingField_9)); }
	inline bool get_U3CSuppressRoomEventsU3Ek__BackingField_9() const { return ___U3CSuppressRoomEventsU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CSuppressRoomEventsU3Ek__BackingField_9() { return &___U3CSuppressRoomEventsU3Ek__BackingField_9; }
	inline void set_U3CSuppressRoomEventsU3Ek__BackingField_9(bool value)
	{
		___U3CSuppressRoomEventsU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressPlayerInfoU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___U3CSuppressPlayerInfoU3Ek__BackingField_10)); }
	inline bool get_U3CSuppressPlayerInfoU3Ek__BackingField_10() const { return ___U3CSuppressPlayerInfoU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CSuppressPlayerInfoU3Ek__BackingField_10() { return &___U3CSuppressPlayerInfoU3Ek__BackingField_10; }
	inline void set_U3CSuppressPlayerInfoU3Ek__BackingField_10(bool value)
	{
		___U3CSuppressPlayerInfoU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CPublishUserIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___U3CPublishUserIdU3Ek__BackingField_11)); }
	inline bool get_U3CPublishUserIdU3Ek__BackingField_11() const { return ___U3CPublishUserIdU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CPublishUserIdU3Ek__BackingField_11() { return &___U3CPublishUserIdU3Ek__BackingField_11; }
	inline void set_U3CPublishUserIdU3Ek__BackingField_11(bool value)
	{
		___U3CPublishUserIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CDeleteNullPropertiesU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___U3CDeleteNullPropertiesU3Ek__BackingField_12)); }
	inline bool get_U3CDeleteNullPropertiesU3Ek__BackingField_12() const { return ___U3CDeleteNullPropertiesU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CDeleteNullPropertiesU3Ek__BackingField_12() { return &___U3CDeleteNullPropertiesU3Ek__BackingField_12; }
	inline void set_U3CDeleteNullPropertiesU3Ek__BackingField_12(bool value)
	{
		___U3CDeleteNullPropertiesU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_broadcastPropsChangeToAll_13() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___broadcastPropsChangeToAll_13)); }
	inline bool get_broadcastPropsChangeToAll_13() const { return ___broadcastPropsChangeToAll_13; }
	inline bool* get_address_of_broadcastPropsChangeToAll_13() { return &___broadcastPropsChangeToAll_13; }
	inline void set_broadcastPropsChangeToAll_13(bool value)
	{
		___broadcastPropsChangeToAll_13 = value;
	}
};


// Photon.Realtime.WebFlags
struct WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE  : public RuntimeObject
{
public:
	// System.Byte Photon.Realtime.WebFlags::WebhookFlags
	uint8_t ___WebhookFlags_1;

public:
	inline static int32_t get_offset_of_WebhookFlags_1() { return static_cast<int32_t>(offsetof(WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE, ___WebhookFlags_1)); }
	inline uint8_t get_WebhookFlags_1() const { return ___WebhookFlags_1; }
	inline uint8_t* get_address_of_WebhookFlags_1() { return &___WebhookFlags_1; }
	inline void set_WebhookFlags_1(uint8_t value)
	{
		___WebhookFlags_1 = value;
	}
};

struct WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE_StaticFields
{
public:
	// Photon.Realtime.WebFlags Photon.Realtime.WebFlags::Default
	WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE_StaticFields, ___Default_0)); }
	inline WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * get_Default_0() const { return ___Default_0; }
	inline WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// Photon.Realtime.WebRpcResponse
struct WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.WebRpcResponse::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.WebRpcResponse::<ResultCode>k__BackingField
	int32_t ___U3CResultCodeU3Ek__BackingField_1;
	// System.String Photon.Realtime.WebRpcResponse::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::<Parameters>k__BackingField
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___U3CParametersU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422, ___U3CResultCodeU3Ek__BackingField_1)); }
	inline int32_t get_U3CResultCodeU3Ek__BackingField_1() const { return ___U3CResultCodeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CResultCodeU3Ek__BackingField_1() { return &___U3CResultCodeU3Ek__BackingField_1; }
	inline void set_U3CResultCodeU3Ek__BackingField_1(int32_t value)
	{
		___U3CResultCodeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422, ___U3CMessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_2() const { return ___U3CMessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_2() { return &___U3CMessageU3Ek__BackingField_2; }
	inline void set_U3CMessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParametersU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422, ___U3CParametersU3Ek__BackingField_3)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_U3CParametersU3Ek__BackingField_3() const { return ___U3CParametersU3Ek__BackingField_3; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_U3CParametersU3Ek__BackingField_3() { return &___U3CParametersU3Ek__BackingField_3; }
	inline void set_U3CParametersU3Ek__BackingField_3(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___U3CParametersU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParametersU3Ek__BackingField_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC520F7CD1339B3935A14ACDE518D4EBF77D59946* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t29AA70B21E4FC9A80ACC4C46DCD7E802522BC4A9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t51F7F5342E0A00B2D85F9359151EACC268651583 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346, ___entries_1)); }
	inline EntryU5BU5D_tC520F7CD1339B3935A14ACDE518D4EBF77D59946* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC520F7CD1339B3935A14ACDE518D4EBF77D59946** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC520F7CD1339B3935A14ACDE518D4EBF77D59946* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346, ___keys_7)); }
	inline KeyCollection_t29AA70B21E4FC9A80ACC4C46DCD7E802522BC4A9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t29AA70B21E4FC9A80ACC4C46DCD7E802522BC4A9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t29AA70B21E4FC9A80ACC4C46DCD7E802522BC4A9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346, ___values_8)); }
	inline ValueCollection_t51F7F5342E0A00B2D85F9359151EACC268651583 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t51F7F5342E0A00B2D85F9359151EACC268651583 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t51F7F5342E0A00B2D85F9359151EACC268651583 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDAD53056B3CDE7B3CCD3851C341DE8D219292C82* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___entries_1)); }
	inline EntryU5BU5D_tDAD53056B3CDE7B3CCD3851C341DE8D219292C82* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDAD53056B3CDE7B3CCD3851C341DE8D219292C82** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDAD53056B3CDE7B3CCD3851C341DE8D219292C82* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___keys_7)); }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___values_8)); }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___entries_1)); }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___keys_7)); }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___values_8)); }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662, ____items_1)); }
	inline FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* get__items_1() const { return ____items_1; }
	inline FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662_StaticFields, ____emptyArray_5)); }
	inline FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.IInRoomCallbacks>
struct List_1_t432975EAEF2E71D58CA0866B695D0FF0CCC36434  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IInRoomCallbacksU5BU5D_tA44F743A73A485A9F88F600650D809BC2E633339* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t432975EAEF2E71D58CA0866B695D0FF0CCC36434, ____items_1)); }
	inline IInRoomCallbacksU5BU5D_tA44F743A73A485A9F88F600650D809BC2E633339* get__items_1() const { return ____items_1; }
	inline IInRoomCallbacksU5BU5D_tA44F743A73A485A9F88F600650D809BC2E633339** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IInRoomCallbacksU5BU5D_tA44F743A73A485A9F88F600650D809BC2E633339* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t432975EAEF2E71D58CA0866B695D0FF0CCC36434, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t432975EAEF2E71D58CA0866B695D0FF0CCC36434, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t432975EAEF2E71D58CA0866B695D0FF0CCC36434, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t432975EAEF2E71D58CA0866B695D0FF0CCC36434_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IInRoomCallbacksU5BU5D_tA44F743A73A485A9F88F600650D809BC2E633339* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t432975EAEF2E71D58CA0866B695D0FF0CCC36434_StaticFields, ____emptyArray_5)); }
	inline IInRoomCallbacksU5BU5D_tA44F743A73A485A9F88F600650D809BC2E633339* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IInRoomCallbacksU5BU5D_tA44F743A73A485A9F88F600650D809BC2E633339** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IInRoomCallbacksU5BU5D_tA44F743A73A485A9F88F600650D809BC2E633339* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>
struct List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6, ____items_1)); }
	inline IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3* get__items_1() const { return ____items_1; }
	inline IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6_StaticFields, ____emptyArray_5)); }
	inline IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28, ____items_1)); }
	inline RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* get__items_1() const { return ____items_1; }
	inline RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28_StaticFields, ____emptyArray_5)); }
	inline RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459, ____items_1)); }
	inline TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* get__items_1() const { return ____items_1; }
	inline TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459_StaticFields, ____emptyArray_5)); }
	inline TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Diagnostics.Stopwatch
struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


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

// ExitGames.Client.Photon.Hashtable
struct Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329  : public Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA
{
public:

public:
};

struct Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329_StaticFields
{
public:
	// System.Object[] ExitGames.Client.Photon.Hashtable::boxedByte
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___boxedByte_14;

public:
	inline static int32_t get_offset_of_boxedByte_14() { return static_cast<int32_t>(offsetof(Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329_StaticFields, ___boxedByte_14)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_boxedByte_14() const { return ___boxedByte_14; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_boxedByte_14() { return &___boxedByte_14; }
	inline void set_boxedByte_14(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___boxedByte_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxedByte_14), (void*)value);
	}
};


// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D  : public List_1_t432975EAEF2E71D58CA0866B695D0FF0CCC36434
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.InRoomCallbacksContainer::client
	LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___client_6;

public:
	inline static int32_t get_offset_of_client_6() { return static_cast<int32_t>(offsetof(InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D, ___client_6)); }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * get_client_6() const { return ___client_6; }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A ** get_address_of_client_6() { return &___client_6; }
	inline void set_client_6(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * value)
	{
		___client_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_6), (void*)value);
	}
};


// Photon.Realtime.PhotonPortDefinition
struct PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F 
{
public:
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::NameServerPort
	uint16_t ___NameServerPort_1;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::MasterServerPort
	uint16_t ___MasterServerPort_2;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::GameServerPort
	uint16_t ___GameServerPort_3;

public:
	inline static int32_t get_offset_of_NameServerPort_1() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F, ___NameServerPort_1)); }
	inline uint16_t get_NameServerPort_1() const { return ___NameServerPort_1; }
	inline uint16_t* get_address_of_NameServerPort_1() { return &___NameServerPort_1; }
	inline void set_NameServerPort_1(uint16_t value)
	{
		___NameServerPort_1 = value;
	}

	inline static int32_t get_offset_of_MasterServerPort_2() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F, ___MasterServerPort_2)); }
	inline uint16_t get_MasterServerPort_2() const { return ___MasterServerPort_2; }
	inline uint16_t* get_address_of_MasterServerPort_2() { return &___MasterServerPort_2; }
	inline void set_MasterServerPort_2(uint16_t value)
	{
		___MasterServerPort_2 = value;
	}

	inline static int32_t get_offset_of_GameServerPort_3() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F, ___GameServerPort_3)); }
	inline uint16_t get_GameServerPort_3() const { return ___GameServerPort_3; }
	inline uint16_t* get_address_of_GameServerPort_3() { return &___GameServerPort_3; }
	inline void set_GameServerPort_3(uint16_t value)
	{
		___GameServerPort_3 = value;
	}
};

struct PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F_StaticFields
{
public:
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.PhotonPortDefinition::AlternativeUdpPorts
	PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F  ___AlternativeUdpPorts_0;

public:
	inline static int32_t get_offset_of_AlternativeUdpPorts_0() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F_StaticFields, ___AlternativeUdpPorts_0)); }
	inline PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F  get_AlternativeUdpPorts_0() const { return ___AlternativeUdpPorts_0; }
	inline PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F * get_address_of_AlternativeUdpPorts_0() { return &___AlternativeUdpPorts_0; }
	inline void set_AlternativeUdpPorts_0(PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F  value)
	{
		___AlternativeUdpPorts_0 = value;
	}
};


// Photon.Realtime.Room
struct Room_t5DFC39DD6736A2641374564EC6C31352BE33000D  : public RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::<LoadBalancingClient>k__BackingField
	LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___U3CLoadBalancingClientU3Ek__BackingField_13;
	// System.Boolean Photon.Realtime.Room::isOffline
	bool ___isOffline_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::players
	Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * ___players_15;
	// System.Boolean Photon.Realtime.Room::<BroadcastPropertiesChangeToAll>k__BackingField
	bool ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16;
	// System.Boolean Photon.Realtime.Room::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_17;
	// System.Boolean Photon.Realtime.Room::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_18;
	// System.Boolean Photon.Realtime.Room::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_19;
	// System.Boolean Photon.Realtime.Room::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CLoadBalancingClientU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___U3CLoadBalancingClientU3Ek__BackingField_13)); }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * get_U3CLoadBalancingClientU3Ek__BackingField_13() const { return ___U3CLoadBalancingClientU3Ek__BackingField_13; }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A ** get_address_of_U3CLoadBalancingClientU3Ek__BackingField_13() { return &___U3CLoadBalancingClientU3Ek__BackingField_13; }
	inline void set_U3CLoadBalancingClientU3Ek__BackingField_13(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * value)
	{
		___U3CLoadBalancingClientU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadBalancingClientU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_isOffline_14() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___isOffline_14)); }
	inline bool get_isOffline_14() const { return ___isOffline_14; }
	inline bool* get_address_of_isOffline_14() { return &___isOffline_14; }
	inline void set_isOffline_14(bool value)
	{
		___isOffline_14 = value;
	}

	inline static int32_t get_offset_of_players_15() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___players_15)); }
	inline Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * get_players_15() const { return ___players_15; }
	inline Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 ** get_address_of_players_15() { return &___players_15; }
	inline void set_players_15(Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * value)
	{
		___players_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___players_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16)); }
	inline bool get_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() const { return ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() { return &___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16; }
	inline void set_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16(bool value)
	{
		___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressRoomEventsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___U3CSuppressRoomEventsU3Ek__BackingField_17)); }
	inline bool get_U3CSuppressRoomEventsU3Ek__BackingField_17() const { return ___U3CSuppressRoomEventsU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CSuppressRoomEventsU3Ek__BackingField_17() { return &___U3CSuppressRoomEventsU3Ek__BackingField_17; }
	inline void set_U3CSuppressRoomEventsU3Ek__BackingField_17(bool value)
	{
		___U3CSuppressRoomEventsU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressPlayerInfoU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___U3CSuppressPlayerInfoU3Ek__BackingField_18)); }
	inline bool get_U3CSuppressPlayerInfoU3Ek__BackingField_18() const { return ___U3CSuppressPlayerInfoU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CSuppressPlayerInfoU3Ek__BackingField_18() { return &___U3CSuppressPlayerInfoU3Ek__BackingField_18; }
	inline void set_U3CSuppressPlayerInfoU3Ek__BackingField_18(bool value)
	{
		___U3CSuppressPlayerInfoU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CPublishUserIdU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___U3CPublishUserIdU3Ek__BackingField_19)); }
	inline bool get_U3CPublishUserIdU3Ek__BackingField_19() const { return ___U3CPublishUserIdU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CPublishUserIdU3Ek__BackingField_19() { return &___U3CPublishUserIdU3Ek__BackingField_19; }
	inline void set_U3CPublishUserIdU3Ek__BackingField_19(bool value)
	{
		___U3CPublishUserIdU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CDeleteNullPropertiesU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___U3CDeleteNullPropertiesU3Ek__BackingField_20)); }
	inline bool get_U3CDeleteNullPropertiesU3Ek__BackingField_20() const { return ___U3CDeleteNullPropertiesU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CDeleteNullPropertiesU3Ek__BackingField_20() { return &___U3CDeleteNullPropertiesU3Ek__BackingField_20; }
	inline void set_U3CDeleteNullPropertiesU3Ek__BackingField_20(bool value)
	{
		___U3CDeleteNullPropertiesU3Ek__BackingField_20 = value;
	}
};


// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895  : public List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.WebRpcCallbacksContainer::client
	LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___client_6;

public:
	inline static int32_t get_offset_of_client_6() { return static_cast<int32_t>(offsetof(WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895, ___client_6)); }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * get_client_6() const { return ___client_6; }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A ** get_address_of_client_6() { return &___client_6; }
	inline void set_client_6(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * value)
	{
		___client_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_6), (void*)value);
	}
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


// System.Byte
struct Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<Photon.Realtime.IWebRpcCallback>
struct Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909, ___list_0)); }
	inline List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6 * get_list_0() const { return ___list_0; }
	inline List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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

// System.Int16
struct Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
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


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
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


// ExitGames.Client.Photon.ConnectionProtocol
struct ConnectionProtocol_t88B2B021398B4216F2003812C4C98B7DACCE44CC 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_t88B2B021398B4216F2003812C4C98B7DACCE44CC, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DebugLevel
struct DebugLevel_tF8732733CF190FEA90DF4E025072AF78777E7282 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_tF8732733CF190FEA90DF4E025072AF78777E7282, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.SerializationProtocol
struct SerializationProtocol_tF37FEF9388552F166C837AC93ACBF042CF23E0D5 
{
public:
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationProtocol_tF37FEF9388552F166C837AC93ACBF042CF23E0D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.TargetFrameworks
struct TargetFrameworks_t34C34F5EFFC27A4D9A6230FE2258976262663F31 
{
public:
	// System.Int32 ExitGames.Client.Photon.TargetFrameworks::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TargetFrameworks_t34C34F5EFFC27A4D9A6230FE2258976262663F31, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.AuthModeOption
struct AuthModeOption_tD09E4DA95C4EC0B4CC7EFC735D512F177EC4F829 
{
public:
	// System.Int32 Photon.Realtime.AuthModeOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthModeOption_tD09E4DA95C4EC0B4CC7EFC735D512F177EC4F829, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ClientAppType
struct ClientAppType_t194842D64A89864BC481D3A2659881A7EFD38C0B 
{
public:
	// System.Int32 Photon.Realtime.ClientAppType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClientAppType_t194842D64A89864BC481D3A2659881A7EFD38C0B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ClientState
struct ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282 
{
public:
	// System.Int32 Photon.Realtime.ClientState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.CustomAuthenticationType
struct CustomAuthenticationType_t911A058D44AC5F98005B9297CFCDB1EE853AE2F5 
{
public:
	// System.Byte Photon.Realtime.CustomAuthenticationType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CustomAuthenticationType_t911A058D44AC5F98005B9297CFCDB1EE853AE2F5, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.DisconnectCause
struct DisconnectCause_t8A969EFEB0FE2E4ABD5824250D4C9F7941F2650F 
{
public:
	// System.Int32 Photon.Realtime.DisconnectCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisconnectCause_t8A969EFEB0FE2E4ABD5824250D4C9F7941F2650F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.EncryptionMode
struct EncryptionMode_t5BA959815A4DD1ABC4458E9951E81CB988CBE1F3 
{
public:
	// System.Int32 Photon.Realtime.EncryptionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EncryptionMode_t5BA959815A4DD1ABC4458E9951E81CB988CBE1F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.JoinType
struct JoinType_t7BE6E5A9E95DEC68F63C8255504A5B53342028E0 
{
public:
	// System.Int32 Photon.Realtime.JoinType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoinType_t7BE6E5A9E95DEC68F63C8255504A5B53342028E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.LobbyType
struct LobbyType_tC10229382E36CFEC2718583263A711F1C1F35305 
{
public:
	// System.Byte Photon.Realtime.LobbyType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LobbyType_tC10229382E36CFEC2718583263A711F1C1F35305, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.RoomOptionBit
struct RoomOptionBit_t651750BA2A7E08AAE25A72C3A2CDA7B90ABAF8A5 
{
public:
	// System.Int32 Photon.Realtime.RoomOptionBit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RoomOptionBit_t651750BA2A7E08AAE25A72C3A2CDA7B90ABAF8A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ServerConnection
struct ServerConnection_t5E49560AE3E1B85523C39B5EAB7EA09FE5363F68 
{
public:
	// System.Int32 Photon.Realtime.ServerConnection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServerConnection_t5E49560AE3E1B85523C39B5EAB7EA09FE5363F68, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
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

// UnityEngine.RuntimePlatform
struct RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::CommandLogSize
	int32_t ___CommandLogSize_4;
	// ExitGames.Client.Photon.TargetFrameworks ExitGames.Client.Photon.PhotonPeer::TargetFramework
	int32_t ___TargetFramework_8;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RemoveAppIdFromWebSocketPath
	bool ___RemoveAppIdFromWebSocketPath_10;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_11;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::UseInitV3
	bool ___UseInitV3_17;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_18;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_t652C2E3209DBB853F7F2883A35038007DE9796FC * ___SocketImplementationConfig_19;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t * ___U3CSocketImplementationU3Ek__BackingField_20;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_21;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_22;
	// System.Action`1<ExitGames.Client.Photon.DisconnectMessage> ExitGames.Client.Photon.PhotonPeer::OnDisconnectMessage
	Action_1_t07A37F07DE05E2F1ED2CA43E340063115C836940 * ___OnDisconnectMessage_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useByteArraySlicePoolForEvents
	bool ___useByteArraySlicePoolForEvents_25;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::wrapIncomingStructs
	bool ___wrapIncomingStructs_26;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendInCreationOrder
	bool ___SendInCreationOrder_27;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SequenceDeltaLimitResends
	int32_t ___SequenceDeltaLimitResends_28;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SequenceDeltaLimitSends
	int32_t ___SequenceDeltaLimitSends_29;
	// ExitGames.Client.Photon.ITrafficRecorder ExitGames.Client.Photon.PhotonPeer::TrafficRecorder
	RuntimeObject* ___TrafficRecorder_30;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_31;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_32;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_33;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::EnableEncryptedFlag
	bool ___EnableEncryptedFlag_34;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_35;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_36;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::InitialResendTimeMax
	int32_t ___InitialResendTimeMax_37;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_38;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::disconnectTimeout
	int32_t ___disconnectTimeout_39;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_40;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_42;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_43;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_45;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___RandomizedSequenceNumbers_46;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::GcmDatagramEncryption
	bool ___GcmDatagramEncryption_47;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_t3CC99BFE1076E4F86EAEA8353C0286023837C0F6 * ___U3CTrafficStatsIncomingU3Ek__BackingField_48;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_t3CC99BFE1076E4F86EAEA8353C0286023837C0F6 * ___U3CTrafficStatsOutgoingU3Ek__BackingField_49;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_tA46FAA3934F96CE8B900A61729B51EF887B8552E * ___U3CTrafficStatsGameLevelU3Ek__BackingField_50;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___trafficStatsStopwatch_51;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_52;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_tE0F68A068C5E57F7C36039C1710C78B525E1D3BC * ___peerBase_53;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject * ___SendOutgoingLockObject_54;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject * ___DispatchLockObject_55;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject * ___EnqueueLock_56;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___PayloadEncryptionSecret_57;
	// System.Type ExitGames.Client.Photon.PhotonPeer::encryptorType
	Type_t * ___encryptorType_58;
	// ExitGames.Client.Photon.Encryption.IPhotonEncryptor ExitGames.Client.Photon.PhotonPeer::Encryptor
	RuntimeObject* ___Encryptor_59;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CountDiscarded>k__BackingField
	int32_t ___U3CCountDiscardedU3Ek__BackingField_60;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<DeltaUnreliableNumber>k__BackingField
	int32_t ___U3CDeltaUnreliableNumberU3Ek__BackingField_61;

public:
	inline static int32_t get_offset_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___U3CCommandBufferSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCommandBufferSizeU3Ek__BackingField_0() const { return ___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return &___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline void set_U3CCommandBufferSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCommandBufferSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1)); }
	inline int32_t get_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() const { return ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return &___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline void set_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1(int32_t value)
	{
		___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_WarningSize_2() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___WarningSize_2)); }
	inline int32_t get_WarningSize_2() const { return ___WarningSize_2; }
	inline int32_t* get_address_of_WarningSize_2() { return &___WarningSize_2; }
	inline void set_WarningSize_2(int32_t value)
	{
		___WarningSize_2 = value;
	}

	inline static int32_t get_offset_of_CommandLogSize_4() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___CommandLogSize_4)); }
	inline int32_t get_CommandLogSize_4() const { return ___CommandLogSize_4; }
	inline int32_t* get_address_of_CommandLogSize_4() { return &___CommandLogSize_4; }
	inline void set_CommandLogSize_4(int32_t value)
	{
		___CommandLogSize_4 = value;
	}

	inline static int32_t get_offset_of_TargetFramework_8() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___TargetFramework_8)); }
	inline int32_t get_TargetFramework_8() const { return ___TargetFramework_8; }
	inline int32_t* get_address_of_TargetFramework_8() { return &___TargetFramework_8; }
	inline void set_TargetFramework_8(int32_t value)
	{
		___TargetFramework_8 = value;
	}

	inline static int32_t get_offset_of_RemoveAppIdFromWebSocketPath_10() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___RemoveAppIdFromWebSocketPath_10)); }
	inline bool get_RemoveAppIdFromWebSocketPath_10() const { return ___RemoveAppIdFromWebSocketPath_10; }
	inline bool* get_address_of_RemoveAppIdFromWebSocketPath_10() { return &___RemoveAppIdFromWebSocketPath_10; }
	inline void set_RemoveAppIdFromWebSocketPath_10(bool value)
	{
		___RemoveAppIdFromWebSocketPath_10 = value;
	}

	inline static int32_t get_offset_of_ClientSdkId_11() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___ClientSdkId_11)); }
	inline uint8_t get_ClientSdkId_11() const { return ___ClientSdkId_11; }
	inline uint8_t* get_address_of_ClientSdkId_11() { return &___ClientSdkId_11; }
	inline void set_ClientSdkId_11(uint8_t value)
	{
		___ClientSdkId_11 = value;
	}

	inline static int32_t get_offset_of_UseInitV3_17() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___UseInitV3_17)); }
	inline bool get_UseInitV3_17() const { return ___UseInitV3_17; }
	inline bool* get_address_of_UseInitV3_17() { return &___UseInitV3_17; }
	inline void set_UseInitV3_17(bool value)
	{
		___UseInitV3_17 = value;
	}

	inline static int32_t get_offset_of_U3CSerializationProtocolTypeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___U3CSerializationProtocolTypeU3Ek__BackingField_18)); }
	inline int32_t get_U3CSerializationProtocolTypeU3Ek__BackingField_18() const { return ___U3CSerializationProtocolTypeU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CSerializationProtocolTypeU3Ek__BackingField_18() { return &___U3CSerializationProtocolTypeU3Ek__BackingField_18; }
	inline void set_U3CSerializationProtocolTypeU3Ek__BackingField_18(int32_t value)
	{
		___U3CSerializationProtocolTypeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_SocketImplementationConfig_19() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___SocketImplementationConfig_19)); }
	inline Dictionary_2_t652C2E3209DBB853F7F2883A35038007DE9796FC * get_SocketImplementationConfig_19() const { return ___SocketImplementationConfig_19; }
	inline Dictionary_2_t652C2E3209DBB853F7F2883A35038007DE9796FC ** get_address_of_SocketImplementationConfig_19() { return &___SocketImplementationConfig_19; }
	inline void set_SocketImplementationConfig_19(Dictionary_2_t652C2E3209DBB853F7F2883A35038007DE9796FC * value)
	{
		___SocketImplementationConfig_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SocketImplementationConfig_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSocketImplementationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___U3CSocketImplementationU3Ek__BackingField_20)); }
	inline Type_t * get_U3CSocketImplementationU3Ek__BackingField_20() const { return ___U3CSocketImplementationU3Ek__BackingField_20; }
	inline Type_t ** get_address_of_U3CSocketImplementationU3Ek__BackingField_20() { return &___U3CSocketImplementationU3Ek__BackingField_20; }
	inline void set_U3CSocketImplementationU3Ek__BackingField_20(Type_t * value)
	{
		___U3CSocketImplementationU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSocketImplementationU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_DebugOut_21() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___DebugOut_21)); }
	inline uint8_t get_DebugOut_21() const { return ___DebugOut_21; }
	inline uint8_t* get_address_of_DebugOut_21() { return &___DebugOut_21; }
	inline void set_DebugOut_21(uint8_t value)
	{
		___DebugOut_21 = value;
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___U3CListenerU3Ek__BackingField_22)); }
	inline RuntimeObject* get_U3CListenerU3Ek__BackingField_22() const { return ___U3CListenerU3Ek__BackingField_22; }
	inline RuntimeObject** get_address_of_U3CListenerU3Ek__BackingField_22() { return &___U3CListenerU3Ek__BackingField_22; }
	inline void set_U3CListenerU3Ek__BackingField_22(RuntimeObject* value)
	{
		___U3CListenerU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CListenerU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnectMessage_23() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___OnDisconnectMessage_23)); }
	inline Action_1_t07A37F07DE05E2F1ED2CA43E340063115C836940 * get_OnDisconnectMessage_23() const { return ___OnDisconnectMessage_23; }
	inline Action_1_t07A37F07DE05E2F1ED2CA43E340063115C836940 ** get_address_of_OnDisconnectMessage_23() { return &___OnDisconnectMessage_23; }
	inline void set_OnDisconnectMessage_23(Action_1_t07A37F07DE05E2F1ED2CA43E340063115C836940 * value)
	{
		___OnDisconnectMessage_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnectMessage_23), (void*)value);
	}

	inline static int32_t get_offset_of_reuseEventInstance_24() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___reuseEventInstance_24)); }
	inline bool get_reuseEventInstance_24() const { return ___reuseEventInstance_24; }
	inline bool* get_address_of_reuseEventInstance_24() { return &___reuseEventInstance_24; }
	inline void set_reuseEventInstance_24(bool value)
	{
		___reuseEventInstance_24 = value;
	}

	inline static int32_t get_offset_of_useByteArraySlicePoolForEvents_25() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___useByteArraySlicePoolForEvents_25)); }
	inline bool get_useByteArraySlicePoolForEvents_25() const { return ___useByteArraySlicePoolForEvents_25; }
	inline bool* get_address_of_useByteArraySlicePoolForEvents_25() { return &___useByteArraySlicePoolForEvents_25; }
	inline void set_useByteArraySlicePoolForEvents_25(bool value)
	{
		___useByteArraySlicePoolForEvents_25 = value;
	}

	inline static int32_t get_offset_of_wrapIncomingStructs_26() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___wrapIncomingStructs_26)); }
	inline bool get_wrapIncomingStructs_26() const { return ___wrapIncomingStructs_26; }
	inline bool* get_address_of_wrapIncomingStructs_26() { return &___wrapIncomingStructs_26; }
	inline void set_wrapIncomingStructs_26(bool value)
	{
		___wrapIncomingStructs_26 = value;
	}

	inline static int32_t get_offset_of_SendInCreationOrder_27() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___SendInCreationOrder_27)); }
	inline bool get_SendInCreationOrder_27() const { return ___SendInCreationOrder_27; }
	inline bool* get_address_of_SendInCreationOrder_27() { return &___SendInCreationOrder_27; }
	inline void set_SendInCreationOrder_27(bool value)
	{
		___SendInCreationOrder_27 = value;
	}

	inline static int32_t get_offset_of_SequenceDeltaLimitResends_28() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___SequenceDeltaLimitResends_28)); }
	inline int32_t get_SequenceDeltaLimitResends_28() const { return ___SequenceDeltaLimitResends_28; }
	inline int32_t* get_address_of_SequenceDeltaLimitResends_28() { return &___SequenceDeltaLimitResends_28; }
	inline void set_SequenceDeltaLimitResends_28(int32_t value)
	{
		___SequenceDeltaLimitResends_28 = value;
	}

	inline static int32_t get_offset_of_SequenceDeltaLimitSends_29() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___SequenceDeltaLimitSends_29)); }
	inline int32_t get_SequenceDeltaLimitSends_29() const { return ___SequenceDeltaLimitSends_29; }
	inline int32_t* get_address_of_SequenceDeltaLimitSends_29() { return &___SequenceDeltaLimitSends_29; }
	inline void set_SequenceDeltaLimitSends_29(int32_t value)
	{
		___SequenceDeltaLimitSends_29 = value;
	}

	inline static int32_t get_offset_of_TrafficRecorder_30() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___TrafficRecorder_30)); }
	inline RuntimeObject* get_TrafficRecorder_30() const { return ___TrafficRecorder_30; }
	inline RuntimeObject** get_address_of_TrafficRecorder_30() { return &___TrafficRecorder_30; }
	inline void set_TrafficRecorder_30(RuntimeObject* value)
	{
		___TrafficRecorder_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrafficRecorder_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnableServerTracingU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___U3CEnableServerTracingU3Ek__BackingField_31)); }
	inline bool get_U3CEnableServerTracingU3Ek__BackingField_31() const { return ___U3CEnableServerTracingU3Ek__BackingField_31; }
	inline bool* get_address_of_U3CEnableServerTracingU3Ek__BackingField_31() { return &___U3CEnableServerTracingU3Ek__BackingField_31; }
	inline void set_U3CEnableServerTracingU3Ek__BackingField_31(bool value)
	{
		___U3CEnableServerTracingU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_quickResendAttempts_32() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___quickResendAttempts_32)); }
	inline uint8_t get_quickResendAttempts_32() const { return ___quickResendAttempts_32; }
	inline uint8_t* get_address_of_quickResendAttempts_32() { return &___quickResendAttempts_32; }
	inline void set_quickResendAttempts_32(uint8_t value)
	{
		___quickResendAttempts_32 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_33() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___ChannelCount_33)); }
	inline uint8_t get_ChannelCount_33() const { return ___ChannelCount_33; }
	inline uint8_t* get_address_of_ChannelCount_33() { return &___ChannelCount_33; }
	inline void set_ChannelCount_33(uint8_t value)
	{
		___ChannelCount_33 = value;
	}

	inline static int32_t get_offset_of_EnableEncryptedFlag_34() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___EnableEncryptedFlag_34)); }
	inline bool get_EnableEncryptedFlag_34() const { return ___EnableEncryptedFlag_34; }
	inline bool* get_address_of_EnableEncryptedFlag_34() { return &___EnableEncryptedFlag_34; }
	inline void set_EnableEncryptedFlag_34(bool value)
	{
		___EnableEncryptedFlag_34 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_35() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___crcEnabled_35)); }
	inline bool get_crcEnabled_35() const { return ___crcEnabled_35; }
	inline bool* get_address_of_crcEnabled_35() { return &___crcEnabled_35; }
	inline void set_crcEnabled_35(bool value)
	{
		___crcEnabled_35 = value;
	}

	inline static int32_t get_offset_of_SentCountAllowance_36() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___SentCountAllowance_36)); }
	inline int32_t get_SentCountAllowance_36() const { return ___SentCountAllowance_36; }
	inline int32_t* get_address_of_SentCountAllowance_36() { return &___SentCountAllowance_36; }
	inline void set_SentCountAllowance_36(int32_t value)
	{
		___SentCountAllowance_36 = value;
	}

	inline static int32_t get_offset_of_InitialResendTimeMax_37() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___InitialResendTimeMax_37)); }
	inline int32_t get_InitialResendTimeMax_37() const { return ___InitialResendTimeMax_37; }
	inline int32_t* get_address_of_InitialResendTimeMax_37() { return &___InitialResendTimeMax_37; }
	inline void set_InitialResendTimeMax_37(int32_t value)
	{
		___InitialResendTimeMax_37 = value;
	}

	inline static int32_t get_offset_of_TimePingInterval_38() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___TimePingInterval_38)); }
	inline int32_t get_TimePingInterval_38() const { return ___TimePingInterval_38; }
	inline int32_t* get_address_of_TimePingInterval_38() { return &___TimePingInterval_38; }
	inline void set_TimePingInterval_38(int32_t value)
	{
		___TimePingInterval_38 = value;
	}

	inline static int32_t get_offset_of_disconnectTimeout_39() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___disconnectTimeout_39)); }
	inline int32_t get_disconnectTimeout_39() const { return ___disconnectTimeout_39; }
	inline int32_t* get_address_of_disconnectTimeout_39() { return &___disconnectTimeout_39; }
	inline void set_disconnectTimeout_39(int32_t value)
	{
		___disconnectTimeout_39 = value;
	}

	inline static int32_t get_offset_of_U3CTransportProtocolU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___U3CTransportProtocolU3Ek__BackingField_40)); }
	inline uint8_t get_U3CTransportProtocolU3Ek__BackingField_40() const { return ___U3CTransportProtocolU3Ek__BackingField_40; }
	inline uint8_t* get_address_of_U3CTransportProtocolU3Ek__BackingField_40() { return &___U3CTransportProtocolU3Ek__BackingField_40; }
	inline void set_U3CTransportProtocolU3Ek__BackingField_40(uint8_t value)
	{
		___U3CTransportProtocolU3Ek__BackingField_40 = value;
	}

	inline static int32_t get_offset_of_mtu_42() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___mtu_42)); }
	inline int32_t get_mtu_42() const { return ___mtu_42; }
	inline int32_t* get_address_of_mtu_42() { return &___mtu_42; }
	inline void set_mtu_42(int32_t value)
	{
		___mtu_42 = value;
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___U3CIsSendingOnlyAcksU3Ek__BackingField_43)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_43() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_43; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_43() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_43; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_43(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_43 = value;
	}

	inline static int32_t get_offset_of_RandomizeSequenceNumbers_45() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___RandomizeSequenceNumbers_45)); }
	inline bool get_RandomizeSequenceNumbers_45() const { return ___RandomizeSequenceNumbers_45; }
	inline bool* get_address_of_RandomizeSequenceNumbers_45() { return &___RandomizeSequenceNumbers_45; }
	inline void set_RandomizeSequenceNumbers_45(bool value)
	{
		___RandomizeSequenceNumbers_45 = value;
	}

	inline static int32_t get_offset_of_RandomizedSequenceNumbers_46() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___RandomizedSequenceNumbers_46)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_RandomizedSequenceNumbers_46() const { return ___RandomizedSequenceNumbers_46; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_RandomizedSequenceNumbers_46() { return &___RandomizedSequenceNumbers_46; }
	inline void set_RandomizedSequenceNumbers_46(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___RandomizedSequenceNumbers_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomizedSequenceNumbers_46), (void*)value);
	}

	inline static int32_t get_offset_of_GcmDatagramEncryption_47() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___GcmDatagramEncryption_47)); }
	inline bool get_GcmDatagramEncryption_47() const { return ___GcmDatagramEncryption_47; }
	inline bool* get_address_of_GcmDatagramEncryption_47() { return &___GcmDatagramEncryption_47; }
	inline void set_GcmDatagramEncryption_47(bool value)
	{
		___GcmDatagramEncryption_47 = value;
	}

	inline static int32_t get_offset_of_U3CTrafficStatsIncomingU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___U3CTrafficStatsIncomingU3Ek__BackingField_48)); }
	inline TrafficStats_t3CC99BFE1076E4F86EAEA8353C0286023837C0F6 * get_U3CTrafficStatsIncomingU3Ek__BackingField_48() const { return ___U3CTrafficStatsIncomingU3Ek__BackingField_48; }
	inline TrafficStats_t3CC99BFE1076E4F86EAEA8353C0286023837C0F6 ** get_address_of_U3CTrafficStatsIncomingU3Ek__BackingField_48() { return &___U3CTrafficStatsIncomingU3Ek__BackingField_48; }
	inline void set_U3CTrafficStatsIncomingU3Ek__BackingField_48(TrafficStats_t3CC99BFE1076E4F86EAEA8353C0286023837C0F6 * value)
	{
		___U3CTrafficStatsIncomingU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsIncomingU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsOutgoingU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___U3CTrafficStatsOutgoingU3Ek__BackingField_49)); }
	inline TrafficStats_t3CC99BFE1076E4F86EAEA8353C0286023837C0F6 * get_U3CTrafficStatsOutgoingU3Ek__BackingField_49() const { return ___U3CTrafficStatsOutgoingU3Ek__BackingField_49; }
	inline TrafficStats_t3CC99BFE1076E4F86EAEA8353C0286023837C0F6 ** get_address_of_U3CTrafficStatsOutgoingU3Ek__BackingField_49() { return &___U3CTrafficStatsOutgoingU3Ek__BackingField_49; }
	inline void set_U3CTrafficStatsOutgoingU3Ek__BackingField_49(TrafficStats_t3CC99BFE1076E4F86EAEA8353C0286023837C0F6 * value)
	{
		___U3CTrafficStatsOutgoingU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsOutgoingU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsGameLevelU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___U3CTrafficStatsGameLevelU3Ek__BackingField_50)); }
	inline TrafficStatsGameLevel_tA46FAA3934F96CE8B900A61729B51EF887B8552E * get_U3CTrafficStatsGameLevelU3Ek__BackingField_50() const { return ___U3CTrafficStatsGameLevelU3Ek__BackingField_50; }
	inline TrafficStatsGameLevel_tA46FAA3934F96CE8B900A61729B51EF887B8552E ** get_address_of_U3CTrafficStatsGameLevelU3Ek__BackingField_50() { return &___U3CTrafficStatsGameLevelU3Ek__BackingField_50; }
	inline void set_U3CTrafficStatsGameLevelU3Ek__BackingField_50(TrafficStatsGameLevel_tA46FAA3934F96CE8B900A61729B51EF887B8552E * value)
	{
		___U3CTrafficStatsGameLevelU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsGameLevelU3Ek__BackingField_50), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsStopwatch_51() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___trafficStatsStopwatch_51)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_trafficStatsStopwatch_51() const { return ___trafficStatsStopwatch_51; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_trafficStatsStopwatch_51() { return &___trafficStatsStopwatch_51; }
	inline void set_trafficStatsStopwatch_51(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___trafficStatsStopwatch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trafficStatsStopwatch_51), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_52() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___trafficStatsEnabled_52)); }
	inline bool get_trafficStatsEnabled_52() const { return ___trafficStatsEnabled_52; }
	inline bool* get_address_of_trafficStatsEnabled_52() { return &___trafficStatsEnabled_52; }
	inline void set_trafficStatsEnabled_52(bool value)
	{
		___trafficStatsEnabled_52 = value;
	}

	inline static int32_t get_offset_of_peerBase_53() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___peerBase_53)); }
	inline PeerBase_tE0F68A068C5E57F7C36039C1710C78B525E1D3BC * get_peerBase_53() const { return ___peerBase_53; }
	inline PeerBase_tE0F68A068C5E57F7C36039C1710C78B525E1D3BC ** get_address_of_peerBase_53() { return &___peerBase_53; }
	inline void set_peerBase_53(PeerBase_tE0F68A068C5E57F7C36039C1710C78B525E1D3BC * value)
	{
		___peerBase_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_53), (void*)value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_54() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___SendOutgoingLockObject_54)); }
	inline RuntimeObject * get_SendOutgoingLockObject_54() const { return ___SendOutgoingLockObject_54; }
	inline RuntimeObject ** get_address_of_SendOutgoingLockObject_54() { return &___SendOutgoingLockObject_54; }
	inline void set_SendOutgoingLockObject_54(RuntimeObject * value)
	{
		___SendOutgoingLockObject_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendOutgoingLockObject_54), (void*)value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_55() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___DispatchLockObject_55)); }
	inline RuntimeObject * get_DispatchLockObject_55() const { return ___DispatchLockObject_55; }
	inline RuntimeObject ** get_address_of_DispatchLockObject_55() { return &___DispatchLockObject_55; }
	inline void set_DispatchLockObject_55(RuntimeObject * value)
	{
		___DispatchLockObject_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DispatchLockObject_55), (void*)value);
	}

	inline static int32_t get_offset_of_EnqueueLock_56() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___EnqueueLock_56)); }
	inline RuntimeObject * get_EnqueueLock_56() const { return ___EnqueueLock_56; }
	inline RuntimeObject ** get_address_of_EnqueueLock_56() { return &___EnqueueLock_56; }
	inline void set_EnqueueLock_56(RuntimeObject * value)
	{
		___EnqueueLock_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnqueueLock_56), (void*)value);
	}

	inline static int32_t get_offset_of_PayloadEncryptionSecret_57() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___PayloadEncryptionSecret_57)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_PayloadEncryptionSecret_57() const { return ___PayloadEncryptionSecret_57; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_PayloadEncryptionSecret_57() { return &___PayloadEncryptionSecret_57; }
	inline void set_PayloadEncryptionSecret_57(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___PayloadEncryptionSecret_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PayloadEncryptionSecret_57), (void*)value);
	}

	inline static int32_t get_offset_of_encryptorType_58() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___encryptorType_58)); }
	inline Type_t * get_encryptorType_58() const { return ___encryptorType_58; }
	inline Type_t ** get_address_of_encryptorType_58() { return &___encryptorType_58; }
	inline void set_encryptorType_58(Type_t * value)
	{
		___encryptorType_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encryptorType_58), (void*)value);
	}

	inline static int32_t get_offset_of_Encryptor_59() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___Encryptor_59)); }
	inline RuntimeObject* get_Encryptor_59() const { return ___Encryptor_59; }
	inline RuntimeObject** get_address_of_Encryptor_59() { return &___Encryptor_59; }
	inline void set_Encryptor_59(RuntimeObject* value)
	{
		___Encryptor_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Encryptor_59), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountDiscardedU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___U3CCountDiscardedU3Ek__BackingField_60)); }
	inline int32_t get_U3CCountDiscardedU3Ek__BackingField_60() const { return ___U3CCountDiscardedU3Ek__BackingField_60; }
	inline int32_t* get_address_of_U3CCountDiscardedU3Ek__BackingField_60() { return &___U3CCountDiscardedU3Ek__BackingField_60; }
	inline void set_U3CCountDiscardedU3Ek__BackingField_60(int32_t value)
	{
		___U3CCountDiscardedU3Ek__BackingField_60 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaUnreliableNumberU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086, ___U3CDeltaUnreliableNumberU3Ek__BackingField_61)); }
	inline int32_t get_U3CDeltaUnreliableNumberU3Ek__BackingField_61() const { return ___U3CDeltaUnreliableNumberU3Ek__BackingField_61; }
	inline int32_t* get_address_of_U3CDeltaUnreliableNumberU3Ek__BackingField_61() { return &___U3CDeltaUnreliableNumberU3Ek__BackingField_61; }
	inline void set_U3CDeltaUnreliableNumberU3Ek__BackingField_61(int32_t value)
	{
		___U3CDeltaUnreliableNumberU3Ek__BackingField_61 = value;
	}
};

struct PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086_StaticFields
{
public:
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NoNativeCallbacks
	bool ___NoNativeCallbacks_9;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_12;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::checkedNativeLibs
	bool ___checkedNativeLibs_13;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useSocketNative
	bool ___useSocketNative_14;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useDiffieHellmanCryptoProvider
	bool ___useDiffieHellmanCryptoProvider_15;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useEncryptorNative
	bool ___useEncryptorNative_16;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_41;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_44;

public:
	inline static int32_t get_offset_of_NoNativeCallbacks_9() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086_StaticFields, ___NoNativeCallbacks_9)); }
	inline bool get_NoNativeCallbacks_9() const { return ___NoNativeCallbacks_9; }
	inline bool* get_address_of_NoNativeCallbacks_9() { return &___NoNativeCallbacks_9; }
	inline void set_NoNativeCallbacks_9(bool value)
	{
		___NoNativeCallbacks_9 = value;
	}

	inline static int32_t get_offset_of_clientVersion_12() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086_StaticFields, ___clientVersion_12)); }
	inline String_t* get_clientVersion_12() const { return ___clientVersion_12; }
	inline String_t** get_address_of_clientVersion_12() { return &___clientVersion_12; }
	inline void set_clientVersion_12(String_t* value)
	{
		___clientVersion_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientVersion_12), (void*)value);
	}

	inline static int32_t get_offset_of_checkedNativeLibs_13() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086_StaticFields, ___checkedNativeLibs_13)); }
	inline bool get_checkedNativeLibs_13() const { return ___checkedNativeLibs_13; }
	inline bool* get_address_of_checkedNativeLibs_13() { return &___checkedNativeLibs_13; }
	inline void set_checkedNativeLibs_13(bool value)
	{
		___checkedNativeLibs_13 = value;
	}

	inline static int32_t get_offset_of_useSocketNative_14() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086_StaticFields, ___useSocketNative_14)); }
	inline bool get_useSocketNative_14() const { return ___useSocketNative_14; }
	inline bool* get_address_of_useSocketNative_14() { return &___useSocketNative_14; }
	inline void set_useSocketNative_14(bool value)
	{
		___useSocketNative_14 = value;
	}

	inline static int32_t get_offset_of_useDiffieHellmanCryptoProvider_15() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086_StaticFields, ___useDiffieHellmanCryptoProvider_15)); }
	inline bool get_useDiffieHellmanCryptoProvider_15() const { return ___useDiffieHellmanCryptoProvider_15; }
	inline bool* get_address_of_useDiffieHellmanCryptoProvider_15() { return &___useDiffieHellmanCryptoProvider_15; }
	inline void set_useDiffieHellmanCryptoProvider_15(bool value)
	{
		___useDiffieHellmanCryptoProvider_15 = value;
	}

	inline static int32_t get_offset_of_useEncryptorNative_16() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086_StaticFields, ___useEncryptorNative_16)); }
	inline bool get_useEncryptorNative_16() const { return ___useEncryptorNative_16; }
	inline bool* get_address_of_useEncryptorNative_16() { return &___useEncryptorNative_16; }
	inline void set_useEncryptorNative_16(bool value)
	{
		___useEncryptorNative_16 = value;
	}

	inline static int32_t get_offset_of_OutgoingStreamBufferSize_41() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086_StaticFields, ___OutgoingStreamBufferSize_41)); }
	inline int32_t get_OutgoingStreamBufferSize_41() const { return ___OutgoingStreamBufferSize_41; }
	inline int32_t* get_address_of_OutgoingStreamBufferSize_41() { return &___OutgoingStreamBufferSize_41; }
	inline void set_OutgoingStreamBufferSize_41(int32_t value)
	{
		___OutgoingStreamBufferSize_41 = value;
	}

	inline static int32_t get_offset_of_AsyncKeyExchange_44() { return static_cast<int32_t>(offsetof(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086_StaticFields, ___AsyncKeyExchange_44)); }
	inline bool get_AsyncKeyExchange_44() const { return ___AsyncKeyExchange_44; }
	inline bool* get_address_of_AsyncKeyExchange_44() { return &___AsyncKeyExchange_44; }
	inline void set_AsyncKeyExchange_44(bool value)
	{
		___AsyncKeyExchange_44 = value;
	}
};


// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13  : public RuntimeObject
{
public:
	// Photon.Realtime.CustomAuthenticationType Photon.Realtime.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Photon.Realtime.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Photon.Realtime.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject * ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.Object Photon.Realtime.AuthenticationValues::<Token>k__BackingField
	RuntimeObject * ___U3CTokenU3Ek__BackingField_3;
	// System.String Photon.Realtime.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_authType_0() { return static_cast<int32_t>(offsetof(AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13, ___authType_0)); }
	inline uint8_t get_authType_0() const { return ___authType_0; }
	inline uint8_t* get_address_of_authType_0() { return &___authType_0; }
	inline void set_authType_0(uint8_t value)
	{
		___authType_0 = value;
	}

	inline static int32_t get_offset_of_U3CAuthGetParametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13, ___U3CAuthGetParametersU3Ek__BackingField_1)); }
	inline String_t* get_U3CAuthGetParametersU3Ek__BackingField_1() const { return ___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAuthGetParametersU3Ek__BackingField_1() { return &___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline void set_U3CAuthGetParametersU3Ek__BackingField_1(String_t* value)
	{
		___U3CAuthGetParametersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthGetParametersU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthPostDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13, ___U3CAuthPostDataU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CAuthPostDataU3Ek__BackingField_2() const { return ___U3CAuthPostDataU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CAuthPostDataU3Ek__BackingField_2() { return &___U3CAuthPostDataU3Ek__BackingField_2; }
	inline void set_U3CAuthPostDataU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CAuthPostDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthPostDataU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13, ___U3CTokenU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CTokenU3Ek__BackingField_3() const { return ___U3CTokenU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CTokenU3Ek__BackingField_3() { return &___U3CTokenU3Ek__BackingField_3; }
	inline void set_U3CTokenU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13, ___U3CUserIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_4() const { return ___U3CUserIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_4() { return &___U3CUserIdU3Ek__BackingField_4; }
	inline void set_U3CUserIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_4), (void*)value);
	}
};


// Photon.Realtime.TypedLobby
struct TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.TypedLobby::Name
	String_t* ___Name_0;
	// Photon.Realtime.LobbyType Photon.Realtime.TypedLobby::Type
	uint8_t ___Type_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5, ___Type_1)); }
	inline uint8_t get_Type_1() const { return ___Type_1; }
	inline uint8_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(uint8_t value)
	{
		___Type_1 = value;
	}
};

struct TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_StaticFields
{
public:
	// Photon.Realtime.TypedLobby Photon.Realtime.TypedLobby::Default
	TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * ___Default_2;

public:
	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_StaticFields, ___Default_2)); }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * get_Default_2() const { return ___Default_2; }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_2), (void*)value);
	}
};


// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>
struct Nullable_1_t1795FE4CEDBFD7603A39B08FEF5BD9201329784D 
{
public:
	// T System.Nullable`1::value
	uint8_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1795FE4CEDBFD7603A39B08FEF5BD9201329784D, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1795FE4CEDBFD7603A39B08FEF5BD9201329784D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A  : public RuntimeObject
{
public:
	// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::<LoadBalancingPeer>k__BackingField
	LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * ___U3CLoadBalancingPeerU3Ek__BackingField_0;
	// System.String Photon.Realtime.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String Photon.Realtime.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// Photon.Realtime.ClientAppType Photon.Realtime.LoadBalancingClient::<ClientType>k__BackingField
	int32_t ___U3CClientTypeU3Ek__BackingField_3;
	// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * ___U3CAuthValuesU3Ek__BackingField_4;
	// Photon.Realtime.AuthModeOption Photon.Realtime.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_5;
	// Photon.Realtime.EncryptionMode Photon.Realtime.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_6;
	// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol> Photon.Realtime.LoadBalancingClient::<ExpectedProtocol>k__BackingField
	Nullable_1_t1795FE4CEDBFD7603A39B08FEF5BD9201329784D  ___U3CExpectedProtocolU3Ek__BackingField_7;
	// System.Object Photon.Realtime.LoadBalancingClient::tokenCache
	RuntimeObject * ___tokenCache_8;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_9;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_10;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12;
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.LoadBalancingClient::ServerPortOverrides
	PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F  ___ServerPortOverrides_13;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_14;
	// System.String Photon.Realtime.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_15;
	// System.String Photon.Realtime.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_16;
	// Photon.Realtime.ServerConnection Photon.Realtime.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_17;
	// System.String Photon.Realtime.LoadBalancingClient::ProxyServerAddress
	String_t* ___ProxyServerAddress_18;
	// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::state
	int32_t ___state_19;
	// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState> Photon.Realtime.LoadBalancingClient::StateChanged
	Action_2_tD4F07FC3F0B08A4BE3D400AB1E3553E633312299 * ___StateChanged_20;
	// System.Action`1<ExitGames.Client.Photon.EventData> Photon.Realtime.LoadBalancingClient::EventReceived
	Action_1_t778BF51CF0443A7016B1B82EF5B0BC87A0E015BD * ___EventReceived_21;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_tC711FD021E3507C267115C54B885A81211F5065D * ___OpResponseReceived_22;
	// Photon.Realtime.ConnectionCallbacksContainer Photon.Realtime.LoadBalancingClient::ConnectionCallbackTargets
	ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 * ___ConnectionCallbackTargets_23;
	// Photon.Realtime.MatchMakingCallbacksContainer Photon.Realtime.LoadBalancingClient::MatchMakingCallbackTargets
	MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 * ___MatchMakingCallbackTargets_24;
	// Photon.Realtime.InRoomCallbacksContainer Photon.Realtime.LoadBalancingClient::InRoomCallbackTargets
	InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D * ___InRoomCallbackTargets_25;
	// Photon.Realtime.LobbyCallbacksContainer Photon.Realtime.LoadBalancingClient::LobbyCallbackTargets
	LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 * ___LobbyCallbackTargets_26;
	// Photon.Realtime.WebRpcCallbacksContainer Photon.Realtime.LoadBalancingClient::WebRpcCallbackTargets
	WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * ___WebRpcCallbackTargets_27;
	// Photon.Realtime.ErrorInfoCallbacksContainer Photon.Realtime.LoadBalancingClient::ErrorInfoCallbackTargets
	ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 * ___ErrorInfoCallbackTargets_28;
	// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_29;
	// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * ___U3CCurrentLobbyU3Ek__BackingField_30;
	// System.Boolean Photon.Realtime.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_31;
	// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo> Photon.Realtime.LoadBalancingClient::lobbyStatistics
	List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459 * ___lobbyStatistics_32;
	// Photon.Realtime.Player Photon.Realtime.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___U3CLocalPlayerU3Ek__BackingField_33;
	// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::<CurrentRoom>k__BackingField
	Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * ___U3CCurrentRoomU3Ek__BackingField_34;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_35;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_36;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_37;
	// Photon.Realtime.JoinType Photon.Realtime.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_38;
	// Photon.Realtime.EnterRoomParams Photon.Realtime.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * ___enterRoomParamsCache_39;
	// ExitGames.Client.Photon.OperationResponse Photon.Realtime.LoadBalancingClient::failedRoomEntryOperation
	OperationResponse_t9EDDF7A2BDA98009C3FC81DA1D23CA0C24B717DD * ___failedRoomEntryOperation_40;
	// System.String[] Photon.Realtime.LoadBalancingClient::friendListRequested
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___friendListRequested_42;
	// System.String Photon.Realtime.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_43;
	// System.String Photon.Realtime.LoadBalancingClient::<CurrentCluster>k__BackingField
	String_t* ___U3CCurrentClusterU3Ek__BackingField_44;
	// Photon.Realtime.RegionHandler Photon.Realtime.LoadBalancingClient::RegionHandler
	RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * ___RegionHandler_45;
	// System.String Photon.Realtime.LoadBalancingClient::bestRegionSummaryFromStorage
	String_t* ___bestRegionSummaryFromStorage_46;
	// System.String Photon.Realtime.LoadBalancingClient::SummaryToCache
	String_t* ___SummaryToCache_47;
	// System.Boolean Photon.Realtime.LoadBalancingClient::connectToBestRegion
	bool ___connectToBestRegion_48;
	// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange> Photon.Realtime.LoadBalancingClient::callbackTargetChanges
	Queue_1_t2DF167EE7F886C6E1CE292988624D5634AF12DE2 * ___callbackTargetChanges_49;
	// System.Collections.Generic.HashSet`1<System.Object> Photon.Realtime.LoadBalancingClient::callbackTargets
	HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * ___callbackTargets_50;
	// System.Int32 Photon.Realtime.LoadBalancingClient::NameServerPortInAppSettings
	int32_t ___NameServerPortInAppSettings_51;

public:
	inline static int32_t get_offset_of_U3CLoadBalancingPeerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CLoadBalancingPeerU3Ek__BackingField_0)); }
	inline LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * get_U3CLoadBalancingPeerU3Ek__BackingField_0() const { return ___U3CLoadBalancingPeerU3Ek__BackingField_0; }
	inline LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 ** get_address_of_U3CLoadBalancingPeerU3Ek__BackingField_0() { return &___U3CLoadBalancingPeerU3Ek__BackingField_0; }
	inline void set_U3CLoadBalancingPeerU3Ek__BackingField_0(LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * value)
	{
		___U3CLoadBalancingPeerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadBalancingPeerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CAppVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_1() const { return ___U3CAppVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_1() { return &___U3CAppVersionU3Ek__BackingField_1; }
	inline void set_U3CAppVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CAppIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_2() const { return ___U3CAppIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_2() { return &___U3CAppIdU3Ek__BackingField_2; }
	inline void set_U3CAppIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppIdU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClientTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CClientTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CClientTypeU3Ek__BackingField_3() const { return ___U3CClientTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CClientTypeU3Ek__BackingField_3() { return &___U3CClientTypeU3Ek__BackingField_3; }
	inline void set_U3CClientTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CClientTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CAuthValuesU3Ek__BackingField_4)); }
	inline AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * get_U3CAuthValuesU3Ek__BackingField_4() const { return ___U3CAuthValuesU3Ek__BackingField_4; }
	inline AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 ** get_address_of_U3CAuthValuesU3Ek__BackingField_4() { return &___U3CAuthValuesU3Ek__BackingField_4; }
	inline void set_U3CAuthValuesU3Ek__BackingField_4(AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * value)
	{
		___U3CAuthValuesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthValuesU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_AuthMode_5() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___AuthMode_5)); }
	inline int32_t get_AuthMode_5() const { return ___AuthMode_5; }
	inline int32_t* get_address_of_AuthMode_5() { return &___AuthMode_5; }
	inline void set_AuthMode_5(int32_t value)
	{
		___AuthMode_5 = value;
	}

	inline static int32_t get_offset_of_EncryptionMode_6() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___EncryptionMode_6)); }
	inline int32_t get_EncryptionMode_6() const { return ___EncryptionMode_6; }
	inline int32_t* get_address_of_EncryptionMode_6() { return &___EncryptionMode_6; }
	inline void set_EncryptionMode_6(int32_t value)
	{
		___EncryptionMode_6 = value;
	}

	inline static int32_t get_offset_of_U3CExpectedProtocolU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CExpectedProtocolU3Ek__BackingField_7)); }
	inline Nullable_1_t1795FE4CEDBFD7603A39B08FEF5BD9201329784D  get_U3CExpectedProtocolU3Ek__BackingField_7() const { return ___U3CExpectedProtocolU3Ek__BackingField_7; }
	inline Nullable_1_t1795FE4CEDBFD7603A39B08FEF5BD9201329784D * get_address_of_U3CExpectedProtocolU3Ek__BackingField_7() { return &___U3CExpectedProtocolU3Ek__BackingField_7; }
	inline void set_U3CExpectedProtocolU3Ek__BackingField_7(Nullable_1_t1795FE4CEDBFD7603A39B08FEF5BD9201329784D  value)
	{
		___U3CExpectedProtocolU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_tokenCache_8() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___tokenCache_8)); }
	inline RuntimeObject * get_tokenCache_8() const { return ___tokenCache_8; }
	inline RuntimeObject ** get_address_of_tokenCache_8() { return &___tokenCache_8; }
	inline void set_tokenCache_8(RuntimeObject * value)
	{
		___tokenCache_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenCache_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsUsingNameServerU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CIsUsingNameServerU3Ek__BackingField_9)); }
	inline bool get_U3CIsUsingNameServerU3Ek__BackingField_9() const { return ___U3CIsUsingNameServerU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsUsingNameServerU3Ek__BackingField_9() { return &___U3CIsUsingNameServerU3Ek__BackingField_9; }
	inline void set_U3CIsUsingNameServerU3Ek__BackingField_9(bool value)
	{
		___U3CIsUsingNameServerU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_NameServerHost_10() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___NameServerHost_10)); }
	inline String_t* get_NameServerHost_10() const { return ___NameServerHost_10; }
	inline String_t** get_address_of_NameServerHost_10() { return &___NameServerHost_10; }
	inline void set_NameServerHost_10(String_t* value)
	{
		___NameServerHost_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameServerHost_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12)); }
	inline bool get_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() const { return ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() { return &___U3CUseAlternativeUdpPortsU3Ek__BackingField_12; }
	inline void set_U3CUseAlternativeUdpPortsU3Ek__BackingField_12(bool value)
	{
		___U3CUseAlternativeUdpPortsU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_ServerPortOverrides_13() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___ServerPortOverrides_13)); }
	inline PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F  get_ServerPortOverrides_13() const { return ___ServerPortOverrides_13; }
	inline PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F * get_address_of_ServerPortOverrides_13() { return &___ServerPortOverrides_13; }
	inline void set_ServerPortOverrides_13(PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F  value)
	{
		___ServerPortOverrides_13 = value;
	}

	inline static int32_t get_offset_of_U3CEnableProtocolFallbackU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CEnableProtocolFallbackU3Ek__BackingField_14)); }
	inline bool get_U3CEnableProtocolFallbackU3Ek__BackingField_14() const { return ___U3CEnableProtocolFallbackU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CEnableProtocolFallbackU3Ek__BackingField_14() { return &___U3CEnableProtocolFallbackU3Ek__BackingField_14; }
	inline void set_U3CEnableProtocolFallbackU3Ek__BackingField_14(bool value)
	{
		___U3CEnableProtocolFallbackU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CMasterServerAddressU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CMasterServerAddressU3Ek__BackingField_15)); }
	inline String_t* get_U3CMasterServerAddressU3Ek__BackingField_15() const { return ___U3CMasterServerAddressU3Ek__BackingField_15; }
	inline String_t** get_address_of_U3CMasterServerAddressU3Ek__BackingField_15() { return &___U3CMasterServerAddressU3Ek__BackingField_15; }
	inline void set_U3CMasterServerAddressU3Ek__BackingField_15(String_t* value)
	{
		___U3CMasterServerAddressU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMasterServerAddressU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameServerAddressU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CGameServerAddressU3Ek__BackingField_16)); }
	inline String_t* get_U3CGameServerAddressU3Ek__BackingField_16() const { return ___U3CGameServerAddressU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CGameServerAddressU3Ek__BackingField_16() { return &___U3CGameServerAddressU3Ek__BackingField_16; }
	inline void set_U3CGameServerAddressU3Ek__BackingField_16(String_t* value)
	{
		___U3CGameServerAddressU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameServerAddressU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CServerU3Ek__BackingField_17)); }
	inline int32_t get_U3CServerU3Ek__BackingField_17() const { return ___U3CServerU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CServerU3Ek__BackingField_17() { return &___U3CServerU3Ek__BackingField_17; }
	inline void set_U3CServerU3Ek__BackingField_17(int32_t value)
	{
		___U3CServerU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_ProxyServerAddress_18() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___ProxyServerAddress_18)); }
	inline String_t* get_ProxyServerAddress_18() const { return ___ProxyServerAddress_18; }
	inline String_t** get_address_of_ProxyServerAddress_18() { return &___ProxyServerAddress_18; }
	inline void set_ProxyServerAddress_18(String_t* value)
	{
		___ProxyServerAddress_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProxyServerAddress_18), (void*)value);
	}

	inline static int32_t get_offset_of_state_19() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___state_19)); }
	inline int32_t get_state_19() const { return ___state_19; }
	inline int32_t* get_address_of_state_19() { return &___state_19; }
	inline void set_state_19(int32_t value)
	{
		___state_19 = value;
	}

	inline static int32_t get_offset_of_StateChanged_20() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___StateChanged_20)); }
	inline Action_2_tD4F07FC3F0B08A4BE3D400AB1E3553E633312299 * get_StateChanged_20() const { return ___StateChanged_20; }
	inline Action_2_tD4F07FC3F0B08A4BE3D400AB1E3553E633312299 ** get_address_of_StateChanged_20() { return &___StateChanged_20; }
	inline void set_StateChanged_20(Action_2_tD4F07FC3F0B08A4BE3D400AB1E3553E633312299 * value)
	{
		___StateChanged_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateChanged_20), (void*)value);
	}

	inline static int32_t get_offset_of_EventReceived_21() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___EventReceived_21)); }
	inline Action_1_t778BF51CF0443A7016B1B82EF5B0BC87A0E015BD * get_EventReceived_21() const { return ___EventReceived_21; }
	inline Action_1_t778BF51CF0443A7016B1B82EF5B0BC87A0E015BD ** get_address_of_EventReceived_21() { return &___EventReceived_21; }
	inline void set_EventReceived_21(Action_1_t778BF51CF0443A7016B1B82EF5B0BC87A0E015BD * value)
	{
		___EventReceived_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventReceived_21), (void*)value);
	}

	inline static int32_t get_offset_of_OpResponseReceived_22() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___OpResponseReceived_22)); }
	inline Action_1_tC711FD021E3507C267115C54B885A81211F5065D * get_OpResponseReceived_22() const { return ___OpResponseReceived_22; }
	inline Action_1_tC711FD021E3507C267115C54B885A81211F5065D ** get_address_of_OpResponseReceived_22() { return &___OpResponseReceived_22; }
	inline void set_OpResponseReceived_22(Action_1_tC711FD021E3507C267115C54B885A81211F5065D * value)
	{
		___OpResponseReceived_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OpResponseReceived_22), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectionCallbackTargets_23() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___ConnectionCallbackTargets_23)); }
	inline ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 * get_ConnectionCallbackTargets_23() const { return ___ConnectionCallbackTargets_23; }
	inline ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 ** get_address_of_ConnectionCallbackTargets_23() { return &___ConnectionCallbackTargets_23; }
	inline void set_ConnectionCallbackTargets_23(ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 * value)
	{
		___ConnectionCallbackTargets_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionCallbackTargets_23), (void*)value);
	}

	inline static int32_t get_offset_of_MatchMakingCallbackTargets_24() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___MatchMakingCallbackTargets_24)); }
	inline MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 * get_MatchMakingCallbackTargets_24() const { return ___MatchMakingCallbackTargets_24; }
	inline MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 ** get_address_of_MatchMakingCallbackTargets_24() { return &___MatchMakingCallbackTargets_24; }
	inline void set_MatchMakingCallbackTargets_24(MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 * value)
	{
		___MatchMakingCallbackTargets_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MatchMakingCallbackTargets_24), (void*)value);
	}

	inline static int32_t get_offset_of_InRoomCallbackTargets_25() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___InRoomCallbackTargets_25)); }
	inline InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D * get_InRoomCallbackTargets_25() const { return ___InRoomCallbackTargets_25; }
	inline InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D ** get_address_of_InRoomCallbackTargets_25() { return &___InRoomCallbackTargets_25; }
	inline void set_InRoomCallbackTargets_25(InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D * value)
	{
		___InRoomCallbackTargets_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InRoomCallbackTargets_25), (void*)value);
	}

	inline static int32_t get_offset_of_LobbyCallbackTargets_26() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___LobbyCallbackTargets_26)); }
	inline LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 * get_LobbyCallbackTargets_26() const { return ___LobbyCallbackTargets_26; }
	inline LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 ** get_address_of_LobbyCallbackTargets_26() { return &___LobbyCallbackTargets_26; }
	inline void set_LobbyCallbackTargets_26(LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 * value)
	{
		___LobbyCallbackTargets_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LobbyCallbackTargets_26), (void*)value);
	}

	inline static int32_t get_offset_of_WebRpcCallbackTargets_27() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___WebRpcCallbackTargets_27)); }
	inline WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * get_WebRpcCallbackTargets_27() const { return ___WebRpcCallbackTargets_27; }
	inline WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 ** get_address_of_WebRpcCallbackTargets_27() { return &___WebRpcCallbackTargets_27; }
	inline void set_WebRpcCallbackTargets_27(WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * value)
	{
		___WebRpcCallbackTargets_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WebRpcCallbackTargets_27), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorInfoCallbackTargets_28() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___ErrorInfoCallbackTargets_28)); }
	inline ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 * get_ErrorInfoCallbackTargets_28() const { return ___ErrorInfoCallbackTargets_28; }
	inline ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 ** get_address_of_ErrorInfoCallbackTargets_28() { return &___ErrorInfoCallbackTargets_28; }
	inline void set_ErrorInfoCallbackTargets_28(ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 * value)
	{
		___ErrorInfoCallbackTargets_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorInfoCallbackTargets_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CDisconnectedCauseU3Ek__BackingField_29)); }
	inline int32_t get_U3CDisconnectedCauseU3Ek__BackingField_29() const { return ___U3CDisconnectedCauseU3Ek__BackingField_29; }
	inline int32_t* get_address_of_U3CDisconnectedCauseU3Ek__BackingField_29() { return &___U3CDisconnectedCauseU3Ek__BackingField_29; }
	inline void set_U3CDisconnectedCauseU3Ek__BackingField_29(int32_t value)
	{
		___U3CDisconnectedCauseU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentLobbyU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCurrentLobbyU3Ek__BackingField_30)); }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * get_U3CCurrentLobbyU3Ek__BackingField_30() const { return ___U3CCurrentLobbyU3Ek__BackingField_30; }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 ** get_address_of_U3CCurrentLobbyU3Ek__BackingField_30() { return &___U3CCurrentLobbyU3Ek__BackingField_30; }
	inline void set_U3CCurrentLobbyU3Ek__BackingField_30(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * value)
	{
		___U3CCurrentLobbyU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentLobbyU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_EnableLobbyStatistics_31() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___EnableLobbyStatistics_31)); }
	inline bool get_EnableLobbyStatistics_31() const { return ___EnableLobbyStatistics_31; }
	inline bool* get_address_of_EnableLobbyStatistics_31() { return &___EnableLobbyStatistics_31; }
	inline void set_EnableLobbyStatistics_31(bool value)
	{
		___EnableLobbyStatistics_31 = value;
	}

	inline static int32_t get_offset_of_lobbyStatistics_32() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___lobbyStatistics_32)); }
	inline List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459 * get_lobbyStatistics_32() const { return ___lobbyStatistics_32; }
	inline List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459 ** get_address_of_lobbyStatistics_32() { return &___lobbyStatistics_32; }
	inline void set_lobbyStatistics_32(List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459 * value)
	{
		___lobbyStatistics_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lobbyStatistics_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocalPlayerU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CLocalPlayerU3Ek__BackingField_33)); }
	inline Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * get_U3CLocalPlayerU3Ek__BackingField_33() const { return ___U3CLocalPlayerU3Ek__BackingField_33; }
	inline Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 ** get_address_of_U3CLocalPlayerU3Ek__BackingField_33() { return &___U3CLocalPlayerU3Ek__BackingField_33; }
	inline void set_U3CLocalPlayerU3Ek__BackingField_33(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * value)
	{
		___U3CLocalPlayerU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalPlayerU3Ek__BackingField_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentRoomU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCurrentRoomU3Ek__BackingField_34)); }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * get_U3CCurrentRoomU3Ek__BackingField_34() const { return ___U3CCurrentRoomU3Ek__BackingField_34; }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D ** get_address_of_U3CCurrentRoomU3Ek__BackingField_34() { return &___U3CCurrentRoomU3Ek__BackingField_34; }
	inline void set_U3CCurrentRoomU3Ek__BackingField_34(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * value)
	{
		___U3CCurrentRoomU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentRoomU3Ek__BackingField_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayersOnMasterCountU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CPlayersOnMasterCountU3Ek__BackingField_35)); }
	inline int32_t get_U3CPlayersOnMasterCountU3Ek__BackingField_35() const { return ___U3CPlayersOnMasterCountU3Ek__BackingField_35; }
	inline int32_t* get_address_of_U3CPlayersOnMasterCountU3Ek__BackingField_35() { return &___U3CPlayersOnMasterCountU3Ek__BackingField_35; }
	inline void set_U3CPlayersOnMasterCountU3Ek__BackingField_35(int32_t value)
	{
		___U3CPlayersOnMasterCountU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CPlayersInRoomsCountU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CPlayersInRoomsCountU3Ek__BackingField_36)); }
	inline int32_t get_U3CPlayersInRoomsCountU3Ek__BackingField_36() const { return ___U3CPlayersInRoomsCountU3Ek__BackingField_36; }
	inline int32_t* get_address_of_U3CPlayersInRoomsCountU3Ek__BackingField_36() { return &___U3CPlayersInRoomsCountU3Ek__BackingField_36; }
	inline void set_U3CPlayersInRoomsCountU3Ek__BackingField_36(int32_t value)
	{
		___U3CPlayersInRoomsCountU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CRoomsCountU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CRoomsCountU3Ek__BackingField_37)); }
	inline int32_t get_U3CRoomsCountU3Ek__BackingField_37() const { return ___U3CRoomsCountU3Ek__BackingField_37; }
	inline int32_t* get_address_of_U3CRoomsCountU3Ek__BackingField_37() { return &___U3CRoomsCountU3Ek__BackingField_37; }
	inline void set_U3CRoomsCountU3Ek__BackingField_37(int32_t value)
	{
		___U3CRoomsCountU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_lastJoinType_38() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___lastJoinType_38)); }
	inline int32_t get_lastJoinType_38() const { return ___lastJoinType_38; }
	inline int32_t* get_address_of_lastJoinType_38() { return &___lastJoinType_38; }
	inline void set_lastJoinType_38(int32_t value)
	{
		___lastJoinType_38 = value;
	}

	inline static int32_t get_offset_of_enterRoomParamsCache_39() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___enterRoomParamsCache_39)); }
	inline EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * get_enterRoomParamsCache_39() const { return ___enterRoomParamsCache_39; }
	inline EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 ** get_address_of_enterRoomParamsCache_39() { return &___enterRoomParamsCache_39; }
	inline void set_enterRoomParamsCache_39(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * value)
	{
		___enterRoomParamsCache_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enterRoomParamsCache_39), (void*)value);
	}

	inline static int32_t get_offset_of_failedRoomEntryOperation_40() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___failedRoomEntryOperation_40)); }
	inline OperationResponse_t9EDDF7A2BDA98009C3FC81DA1D23CA0C24B717DD * get_failedRoomEntryOperation_40() const { return ___failedRoomEntryOperation_40; }
	inline OperationResponse_t9EDDF7A2BDA98009C3FC81DA1D23CA0C24B717DD ** get_address_of_failedRoomEntryOperation_40() { return &___failedRoomEntryOperation_40; }
	inline void set_failedRoomEntryOperation_40(OperationResponse_t9EDDF7A2BDA98009C3FC81DA1D23CA0C24B717DD * value)
	{
		___failedRoomEntryOperation_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___failedRoomEntryOperation_40), (void*)value);
	}

	inline static int32_t get_offset_of_friendListRequested_42() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___friendListRequested_42)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_friendListRequested_42() const { return ___friendListRequested_42; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_friendListRequested_42() { return &___friendListRequested_42; }
	inline void set_friendListRequested_42(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___friendListRequested_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___friendListRequested_42), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloudRegionU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCloudRegionU3Ek__BackingField_43)); }
	inline String_t* get_U3CCloudRegionU3Ek__BackingField_43() const { return ___U3CCloudRegionU3Ek__BackingField_43; }
	inline String_t** get_address_of_U3CCloudRegionU3Ek__BackingField_43() { return &___U3CCloudRegionU3Ek__BackingField_43; }
	inline void set_U3CCloudRegionU3Ek__BackingField_43(String_t* value)
	{
		___U3CCloudRegionU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCloudRegionU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentClusterU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCurrentClusterU3Ek__BackingField_44)); }
	inline String_t* get_U3CCurrentClusterU3Ek__BackingField_44() const { return ___U3CCurrentClusterU3Ek__BackingField_44; }
	inline String_t** get_address_of_U3CCurrentClusterU3Ek__BackingField_44() { return &___U3CCurrentClusterU3Ek__BackingField_44; }
	inline void set_U3CCurrentClusterU3Ek__BackingField_44(String_t* value)
	{
		___U3CCurrentClusterU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentClusterU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_RegionHandler_45() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___RegionHandler_45)); }
	inline RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * get_RegionHandler_45() const { return ___RegionHandler_45; }
	inline RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF ** get_address_of_RegionHandler_45() { return &___RegionHandler_45; }
	inline void set_RegionHandler_45(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * value)
	{
		___RegionHandler_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RegionHandler_45), (void*)value);
	}

	inline static int32_t get_offset_of_bestRegionSummaryFromStorage_46() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___bestRegionSummaryFromStorage_46)); }
	inline String_t* get_bestRegionSummaryFromStorage_46() const { return ___bestRegionSummaryFromStorage_46; }
	inline String_t** get_address_of_bestRegionSummaryFromStorage_46() { return &___bestRegionSummaryFromStorage_46; }
	inline void set_bestRegionSummaryFromStorage_46(String_t* value)
	{
		___bestRegionSummaryFromStorage_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bestRegionSummaryFromStorage_46), (void*)value);
	}

	inline static int32_t get_offset_of_SummaryToCache_47() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___SummaryToCache_47)); }
	inline String_t* get_SummaryToCache_47() const { return ___SummaryToCache_47; }
	inline String_t** get_address_of_SummaryToCache_47() { return &___SummaryToCache_47; }
	inline void set_SummaryToCache_47(String_t* value)
	{
		___SummaryToCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SummaryToCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_connectToBestRegion_48() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___connectToBestRegion_48)); }
	inline bool get_connectToBestRegion_48() const { return ___connectToBestRegion_48; }
	inline bool* get_address_of_connectToBestRegion_48() { return &___connectToBestRegion_48; }
	inline void set_connectToBestRegion_48(bool value)
	{
		___connectToBestRegion_48 = value;
	}

	inline static int32_t get_offset_of_callbackTargetChanges_49() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___callbackTargetChanges_49)); }
	inline Queue_1_t2DF167EE7F886C6E1CE292988624D5634AF12DE2 * get_callbackTargetChanges_49() const { return ___callbackTargetChanges_49; }
	inline Queue_1_t2DF167EE7F886C6E1CE292988624D5634AF12DE2 ** get_address_of_callbackTargetChanges_49() { return &___callbackTargetChanges_49; }
	inline void set_callbackTargetChanges_49(Queue_1_t2DF167EE7F886C6E1CE292988624D5634AF12DE2 * value)
	{
		___callbackTargetChanges_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackTargetChanges_49), (void*)value);
	}

	inline static int32_t get_offset_of_callbackTargets_50() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___callbackTargets_50)); }
	inline HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * get_callbackTargets_50() const { return ___callbackTargets_50; }
	inline HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 ** get_address_of_callbackTargets_50() { return &___callbackTargets_50; }
	inline void set_callbackTargets_50(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * value)
	{
		___callbackTargets_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackTargets_50), (void*)value);
	}

	inline static int32_t get_offset_of_NameServerPortInAppSettings_51() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___NameServerPortInAppSettings_51)); }
	inline int32_t get_NameServerPortInAppSettings_51() const { return ___NameServerPortInAppSettings_51; }
	inline int32_t* get_address_of_NameServerPortInAppSettings_51() { return &___NameServerPortInAppSettings_51; }
	inline void set_NameServerPortInAppSettings_51(int32_t value)
	{
		___NameServerPortInAppSettings_51 = value;
	}
};

struct LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_t67E22D878E5B98265B0F173CEF85BAF130DA890C * ___ProtocolToNameServerPort_11;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_11() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A_StaticFields, ___ProtocolToNameServerPort_11)); }
	inline Dictionary_2_t67E22D878E5B98265B0F173CEF85BAF130DA890C * get_ProtocolToNameServerPort_11() const { return ___ProtocolToNameServerPort_11; }
	inline Dictionary_2_t67E22D878E5B98265B0F173CEF85BAF130DA890C ** get_address_of_ProtocolToNameServerPort_11() { return &___ProtocolToNameServerPort_11; }
	inline void set_ProtocolToNameServerPort_11(Dictionary_2_t67E22D878E5B98265B0F173CEF85BAF130DA890C * value)
	{
		___ProtocolToNameServerPort_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProtocolToNameServerPort_11), (void*)value);
	}
};


// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14  : public PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086
{
public:
	// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary> Photon.Realtime.LoadBalancingPeer::paramDictionaryPool
	Pool_1_tAF5728DD41ED11A1F14BF65B4FE684F7B70E6741 * ___paramDictionaryPool_62;

public:
	inline static int32_t get_offset_of_paramDictionaryPool_62() { return static_cast<int32_t>(offsetof(LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14, ___paramDictionaryPool_62)); }
	inline Pool_1_tAF5728DD41ED11A1F14BF65B4FE684F7B70E6741 * get_paramDictionaryPool_62() const { return ___paramDictionaryPool_62; }
	inline Pool_1_tAF5728DD41ED11A1F14BF65B4FE684F7B70E6741 ** get_address_of_paramDictionaryPool_62() { return &___paramDictionaryPool_62; }
	inline void set_paramDictionaryPool_62(Pool_1_tAF5728DD41ED11A1F14BF65B4FE684F7B70E6741 * value)
	{
		___paramDictionaryPool_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paramDictionaryPool_62), (void*)value);
	}
};


// Photon.Realtime.TypedLobbyInfo
struct TypedLobbyInfo_t4ADAD96C3E4BD40D2ADEA6AF8741EB96983D76E3  : public TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5
{
public:
	// System.Int32 Photon.Realtime.TypedLobbyInfo::PlayerCount
	int32_t ___PlayerCount_3;
	// System.Int32 Photon.Realtime.TypedLobbyInfo::RoomCount
	int32_t ___RoomCount_4;

public:
	inline static int32_t get_offset_of_PlayerCount_3() { return static_cast<int32_t>(offsetof(TypedLobbyInfo_t4ADAD96C3E4BD40D2ADEA6AF8741EB96983D76E3, ___PlayerCount_3)); }
	inline int32_t get_PlayerCount_3() const { return ___PlayerCount_3; }
	inline int32_t* get_address_of_PlayerCount_3() { return &___PlayerCount_3; }
	inline void set_PlayerCount_3(int32_t value)
	{
		___PlayerCount_3 = value;
	}

	inline static int32_t get_offset_of_RoomCount_4() { return static_cast<int32_t>(offsetof(TypedLobbyInfo_t4ADAD96C3E4BD40D2ADEA6AF8741EB96983D76E3, ___RoomCount_4)); }
	inline int32_t get_RoomCount_4() const { return ___RoomCount_4; }
	inline int32_t* get_address_of_RoomCount_4() { return &___RoomCount_4; }
	inline void set_RoomCount_4(int32_t value)
	{
		___RoomCount_4 = value;
	}
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


// Photon.Realtime.SupportLogger
struct SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Photon.Realtime.SupportLogger::LogTrafficStats
	bool ___LogTrafficStats_4;
	// System.Boolean Photon.Realtime.SupportLogger::loggedStillOfflineMessage
	bool ___loggedStillOfflineMessage_5;
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.SupportLogger::client
	LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___client_6;
	// System.Diagnostics.Stopwatch Photon.Realtime.SupportLogger::startStopwatch
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___startStopwatch_7;
	// System.Int32 Photon.Realtime.SupportLogger::pingMax
	int32_t ___pingMax_8;
	// System.Int32 Photon.Realtime.SupportLogger::pingMin
	int32_t ___pingMin_9;

public:
	inline static int32_t get_offset_of_LogTrafficStats_4() { return static_cast<int32_t>(offsetof(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA, ___LogTrafficStats_4)); }
	inline bool get_LogTrafficStats_4() const { return ___LogTrafficStats_4; }
	inline bool* get_address_of_LogTrafficStats_4() { return &___LogTrafficStats_4; }
	inline void set_LogTrafficStats_4(bool value)
	{
		___LogTrafficStats_4 = value;
	}

	inline static int32_t get_offset_of_loggedStillOfflineMessage_5() { return static_cast<int32_t>(offsetof(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA, ___loggedStillOfflineMessage_5)); }
	inline bool get_loggedStillOfflineMessage_5() const { return ___loggedStillOfflineMessage_5; }
	inline bool* get_address_of_loggedStillOfflineMessage_5() { return &___loggedStillOfflineMessage_5; }
	inline void set_loggedStillOfflineMessage_5(bool value)
	{
		___loggedStillOfflineMessage_5 = value;
	}

	inline static int32_t get_offset_of_client_6() { return static_cast<int32_t>(offsetof(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA, ___client_6)); }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * get_client_6() const { return ___client_6; }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A ** get_address_of_client_6() { return &___client_6; }
	inline void set_client_6(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * value)
	{
		___client_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_6), (void*)value);
	}

	inline static int32_t get_offset_of_startStopwatch_7() { return static_cast<int32_t>(offsetof(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA, ___startStopwatch_7)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_startStopwatch_7() const { return ___startStopwatch_7; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_startStopwatch_7() { return &___startStopwatch_7; }
	inline void set_startStopwatch_7(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___startStopwatch_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startStopwatch_7), (void*)value);
	}

	inline static int32_t get_offset_of_pingMax_8() { return static_cast<int32_t>(offsetof(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA, ___pingMax_8)); }
	inline int32_t get_pingMax_8() const { return ___pingMax_8; }
	inline int32_t* get_address_of_pingMax_8() { return &___pingMax_8; }
	inline void set_pingMax_8(int32_t value)
	{
		___pingMax_8 = value;
	}

	inline static int32_t get_offset_of_pingMin_9() { return static_cast<int32_t>(offsetof(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA, ___pingMin_9)); }
	inline int32_t get_pingMin_9() const { return ___pingMin_9; }
	inline int32_t* get_address_of_pingMin_9() { return &___pingMin_9; }
	inline void set_pingMin_9(int32_t value)
	{
		___pingMin_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m69345D9DEE55AA0CE574D19CB7C430AC638C01A9_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mDA40BF5B34B9FC13EC60102D92D1C35B30BBD60C_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mEE468B81D8E7C140F567D10FF7F5894A50EEEA57_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);

// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::get_LoadBalancingClient()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * Room_get_LoadBalancingClient_m352E09ADBA5592B3FC0F1432CE9F5D7D0FACC52B_inline (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m78B777F53B9A2618F58674C3F080642FA6761373 (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Hashtable::Add(System.Byte,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_Add_mF054E7D9E8639FDA5C9F9BF1DAC5A46AC7CE72F0 (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * __this, uint8_t ___k0, RuntimeObject * ___v1, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::OpSetPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,Photon.Realtime.WebFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpSetPropertiesOfRoom_m6AA0375D775D2CE6F940AAB8BD024524E0C56324 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * ___gameProperties0, Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * ___expectedProperties1, WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * ___webFlags2, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::get_Players()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * Room_get_Players_m8F39EA784277611D7051C8A37EE813FFF4BCDDD7_inline (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>::get_Count()
inline int32_t Dictionary_2_get_Count_m8CB03A975FCA9FEE89F222E357EA52AEF7C44F1D (Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 *, const RuntimeMethod*))Dictionary_2_get_Count_m69345D9DEE55AA0CE574D19CB7C430AC638C01A9_gshared)(__this, method);
}
// System.Boolean Photon.Realtime.LoadBalancingClient::OpSetPropertyOfRoom(System.Byte,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpSetPropertyOfRoom_mCB8F1CBD88BB217EB1C85388CA3532FE79B0A337 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, uint8_t ___propCode0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>::.ctor()
inline void Dictionary_2__ctor_m244556ED1F00995D5917656BB415FE0B73CD4B18 (Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Void Photon.Realtime.RoomInfo::.ctor(System.String,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo__ctor_m800A5C45B677469300338E4F51B4D71C04168685 (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, String_t* ___roomName0, Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * ___roomProperties1, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.RoomOptions::get_IsVisible()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool RoomOptions_get_IsVisible_mEBC48A6E7D7A0422A0CEA3A4AD339EA8B7061976_inline (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.RoomOptions::get_IsOpen()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool RoomOptions_get_IsOpen_m63600C2FCC2227779869060317764624F9536147_inline (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.Room::set_BroadcastPropertiesChangeToAll(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Room_set_BroadcastPropertiesChangeToAll_m79D02C344D870A92D087EB3233E577563360E021_inline (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.Room::set_SuppressRoomEvents(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Room_set_SuppressRoomEvents_m84A6C9E46183C568A6AD0B271F32E5DF9EE2B9F7_inline (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.Room::set_SuppressPlayerInfo(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Room_set_SuppressPlayerInfo_m78EE1EB24A13ED90994E739920D93AF6EF223319_inline (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.Room::set_PublishUserId(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Room_set_PublishUserId_m1C47BF951F408DF84828102A363AE15E5AD967E5_inline (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.Room::set_DeleteNullProperties(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Room_set_DeleteNullProperties_m5E70B831ED71C7754374BA6A595C4FB59B012B86_inline (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo_InternalCacheProperties_m58BA57D991C784FD56431FD965FC0329FE4AA039 (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * ___propertiesToCache0, const RuntimeMethod* method);
// System.Void Photon.Realtime.InRoomCallbacksContainer::OnMasterClientSwitched(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InRoomCallbacksContainer_OnMasterClientSwitched_mDE73A982F91D03B67103CD7083734A37ED3CB07D (InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D * __this, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___newMasterClient0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_gshared)(__this, method);
}
// ExitGames.Client.Photon.Hashtable Photon.Realtime.Extensions::StripToStringKeys(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * Extensions_StripToStringKeys_m454D6DC3FB3CFF93EC1C2C069DD6CABCEEFAE3F4 (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * ___original0, const RuntimeMethod* method);
// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::get_CustomProperties()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * RoomInfo_get_CustomProperties_mEC71BB3F58EBE417B3CC9085AB26DA07D1644F07_inline (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.Extensions::Merge(System.Collections.IDictionary,System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_Merge_mE5A42AF13B84826877703729DB671E74D15D5AC9 (RuntimeObject* ___target0, RuntimeObject* ___addHash1, const RuntimeMethod* method);
// System.Void Photon.Realtime.Extensions::StripKeysWithNullValues(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_StripKeysWithNullValues_m6143A9F1A4D7B67174FC0FDCF01A7203A9E5F332 (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * ___original0, const RuntimeMethod* method);
// System.Void Photon.Realtime.InRoomCallbacksContainer::OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InRoomCallbacksContainer_OnRoomPropertiesUpdate_m1FF01A10E624127EB6D51B87B7CC50432ACA8A86 (InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D * __this, Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * ___propertiesThatChanged0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Hashtable::set_Item(System.Byte,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_set_Item_m9214433A9DD40E31FDF83FA43B7C5EC3AAA6E5E5 (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 Photon.Realtime.Player::get_ActorNumber()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Player_get_ActorNumber_m02157560C558C6007C8146F1FCDA7E759AD0CF1D_inline (Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>::Remove(!0)
inline bool Dictionary_2_Remove_mFD433C2EA94FECAA77A8B0C9671D05785AEADDC1 (Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared)(__this, ___key0, method);
}
// System.Void Photon.Realtime.Player::set_RoomReference(Photon.Realtime.Room)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Player_set_RoomReference_m94972048535DB91480569BC5E3B463A89CB12A91_inline (Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * __this, Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * ___value0, const RuntimeMethod* method);
// System.Int32 Photon.Realtime.Room::get_MasterClientId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Room_get_MasterClientId_m1F799A66FDFD9D1BCB2F32B0F2327BF8CDF5075E_inline (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m59731793525CCBBC9E9B90D5525CF64AEE514A88 (Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mDA40BF5B34B9FC13EC60102D92D1C35B30BBD60C_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m47F4BA1976FB2F13ECF4FE6A55DA6ACB42720F75 (Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * __this, int32_t ___key0, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 *, int32_t, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 *, const RuntimeMethod*))Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m455754A717B442E70D030785AC1B14A99FF61CFD (Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * __this, int32_t ___key0, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 *, int32_t, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared)(__this, ___key0, ___value1, method);
}
// System.String[] Photon.Realtime.Room::get_ExpectedUsers()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Room_get_ExpectedUsers_mF6928B3A5B8CD93A75882BDDB08A2E759D4C565F_inline (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.Room::SetExpectedUsers(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_SetExpectedUsers_m624198ABE37038AC8C49F4570053F0E57340A865 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___newExpectedUsers0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___oldExpectedUsers1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.Hashtable::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m915025220A74BB84F3FC9CF1063A3A5B767FE8B8 (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * __this, int32_t ___x0, const RuntimeMethod* method);
// System.Byte Photon.Realtime.Room::get_PlayerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Room_get_PlayerCount_mCBF32BA967FF797861D5E9C2B26C3A6BDACA2E99 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.String Photon.Realtime.Extensions::ToStringFull(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_ToStringFull_m7D5DC29B4341359CC4354664509068EF620E9DCC (RuntimeObject* ___origin0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.RoomInfo::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RoomInfo_get_Name_m24C3CFCDD6E862D5E0EA27A0B2736E09D72843DA_inline (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 Photon.Realtime.RoomInfo::get_PlayerCount()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_m6E97FB80FDADD5A3B15ED2D51F071B3F343C1CC1_inline (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.Hashtable::ContainsKey(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hashtable_ContainsKey_mB35F90B41D0093E4AFB031B2B60789F768CB3252 (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Object ExitGames.Client.Photon.Hashtable::get_Item(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Hashtable_get_Item_m098DDEBFA01852E9CB2D142664C3C5995D870B92 (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Void Photon.Realtime.RoomInfo::set_PlayerCount(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RoomInfo_set_PlayerCount_m406E55A69DFEB12E15AEB7B8DDF0B0C8F704911F_inline (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.Extensions::MergeStringKeys(System.Collections.IDictionary,System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_MergeStringKeys_mDCDF6621E96473D5021BFCEC97B22804F387951A (RuntimeObject* ___target0, RuntimeObject* ___addHash1, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::RemoveCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_RemoveCallbackTarget_mA166E163D02518ED621B80E8F07B31FFE79507A0 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::AddCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_AddCallbackTarget_m17553A4C53D4BC96DF74BD3DFE8D8487E3B52565 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::LogBasics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogBasics_m1DD18EAF9701CABB4D230E939DC67A471B2C4B13 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::set_Client(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_set_Client_m166B9D97ABDFAA4A8E7792F8C8861BE4C7193976 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___value0, const RuntimeMethod* method);
// System.String Photon.Realtime.SupportLogger::GetFormattedTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301 (bool* __this, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_get_IsConnected_m90DAE8B064E99BA87DC5CDAC811D38647D468C2C (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_m6ACF5FC83F8FE5A6E744CE1E83A94CB3B0A8B7EF (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_m99F21547D281B3F835745B681E5472F070E7E593 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_mDD95225EF4DFBB8C00B865468DE8AFEB5D30490F (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  Stopwatch_get_Elapsed_m6735B32BFB466FC4F52112AC3493D37404D184BB (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Minutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Minutes_mCABF9EE7E7F78368DA0F825F5922C06238DD0F22 (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Seconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Seconds_m33764DE0DB67C2D1A2654BEE31E379A13571EED8 (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Milliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Milliseconds_m03218976DBB2BBDFB8B7F8A7F9452C19096312CA (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::get_LoadBalancingPeer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonPeer_get_RoundTripTime_mDEEE3B7774DB5D2F014B77A1A6FEAF5214186CBD (PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086 * __this, const RuntimeMethod* method);
// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::get_State()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_mDCC22D02A85973C68623C764C96BE9A862C8BD11_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::VitalStatsToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_VitalStatsToString_m230B20CE3B83C2D312814263718B776EADB9BE65 (PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086 * __this, bool ___all0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_mE495502B9607C6FB122449BE5BCE1231C1A205A4 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, const RuntimeMethod*))List_1__ctor_mEE468B81D8E7C140F567D10FF7F5894A50EEEA57_gshared)(__this, ___capacity0, method);
}
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_mC66901DE17E8F4F5BCA46CF3A4DCB34AF245CF99 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672 (const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_AppId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppId_m49A1261CC79356CABF9A709AAC4674B406ECA1DD_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_AppVersion()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_m2D816CED5CD4B71B47C03B33D2C5DFAE08997B9D_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_Version_m8BA341A3A76F1F018248F88782367D9B30FFA94B (const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared)(__this, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4 (String_t* ___separator0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___value1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m23742FE1E3C60341F37C243EB6BEE06AE444C774 (StringBuilder_t * __this, String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Type ExitGames.Client.Photon.PhotonPeer::get_SocketImplementation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * PhotonPeer_get_SocketImplementation_mB351931E3AD33A2EEB0866215358D2D0A20E3556_inline (PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_UserId_mE44D3E9907F0B72F57E8D6CBF3A0E80B07064AA8 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::get_AuthValues()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * LoadBalancingClient_get_AuthValues_mE56B5ADE8CC0EBB1CB9C5DFA64913AC5B36B7F02_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// Photon.Realtime.CustomAuthenticationType Photon.Realtime.AuthenticationValues::get_AuthType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_m7644167D1D9D4B1EB47E98BF5FDA05D1B3F1770A_inline (AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::get_PeerID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_PeerID_m6D746100DE276D694D2C62099B1C11955523296B (PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086 * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_CurrentServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CurrentServerAddress_m617D5473B405AA52AA10EBC3FB8CEC4E65252A02 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerIpAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_ServerIpAddress_mC3A104C2821543B2E4F64BF5287C12EF32DBF373 (PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086 * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_CloudRegion()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CloudRegion_m0AAC37B5520321CC88C90C625E56EBEC822C3DEB_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPeer_set_TrafficStatsEnabled_mB05E6958B3B788D3F8A75DAA10D91A5DFDBE713E (PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StartLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartLogStats_m973A1BFAAB04C8F0F9568E1A281C6EE553384610 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StartTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartTrackValues_mCCA9284BFA342F2822E786C069773B61ED626F55 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::get_CurrentLobby()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * LoadBalancingClient_get_CurrentLobby_mA012C41E1DF7DF53F0CF4A024C9E0FABDDDC2456_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::get_CurrentRoom()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * LoadBalancingClient_get_CurrentRoom_mA294529AE11CDDF17597FADE478A392B8B534002_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_GameServerAddress()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_GameServerAddress_m572210F250D42394A3E6E0FAB7E15DBD6EE78E05_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StopLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopLogStats_m5EA95B7B9DD9BEB62FCB674FBDED85DB910C3B06 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StopTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopTrackValues_m0806BA608466711C295BC23883AFAF6AEE153CB4 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::LogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogStats_m420DC4631D59DCE0F7D33C3146C8688D08C54F94 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>::get_Count()
inline int32_t List_1_get_Count_m1A59BC22EE5CA9B605AA85BF87051308A8EFE204_inline (List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.TypedLobby::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__ctor_m00923523872B0E50E15357CBBED9A08D5F944586 (TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebFlags::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__ctor_mF30D282AD9F1D728C06672D22FCB7E108BCB1993 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, uint8_t ___webhookFlags0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>::.ctor()
inline void List_1__ctor_m8998D7682A2B5B6B47F0837987B6598904297BAF (List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void Photon.Realtime.LoadBalancingClient::UpdateCallbackTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_UpdateCallbackTargets_m4F0C56B00E0DC74B26294FA61A83186A710DBFFA (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>::GetEnumerator()
inline Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909  List_1_GetEnumerator_m3DC15E45F109EA8ED752BBF8669EF7D6199CF358 (List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909  (*) (List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Photon.Realtime.IWebRpcCallback>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mA50C178A90B3A62136BA22B44CE8D3AA0B549911_inline (Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Photon.Realtime.IWebRpcCallback>::MoveNext()
inline bool Enumerator_MoveNext_m50709063468E77F299D9B15A5224FC5B8770F948 (Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Photon.Realtime.IWebRpcCallback>::Dispose()
inline void Enumerator_Dispose_mC7FFB79B44AF60DEF8ECB7E95469108B1A131FDD (Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Int32 Photon.Realtime.WebRpcResponse::get_ResultCode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_mFC73DF1E0EF9021C8C3E53EC0EF548915B566886_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.WebRpcResponse::get_Message()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_m9F817E8E921967871322B123F6C1BEF6F8BF5138_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.ParameterDictionary::TryGetValue(System.Byte,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterDictionary_TryGetValue_m3CCB04307083D057C8DB31E44F419D23AE4475C7 (ParameterDictionary_t6BDDC6005682A8AB09CDBD829E398C3D88FC6F41 * __this, uint8_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebRpcResponse::set_Name(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_mEADC4EB6ED220410F817BB3A5864230A0215CA01_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebRpcResponse::set_ResultCode(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_m8E4EE89F34D749CCFEA3B1D2D777A5A8D3FA33AA_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_mC93C08CE135944569FF91BC362C850E628E0563A_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebRpcResponse::set_Message(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_m0A4DB2E9F565AD93775CAE27C140A9DB4E411B78_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Photon.Realtime.WebRpcResponse::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_m0B6E38116B73FE932B4809D1510013A2D0E75FEB_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::get_Parameters()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * WebRpcResponse_get_Parameters_m73734E2B75DC69FF24E5EBFE1C58383DB7F01969_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_m118628C9BE3B5263EBDAF4B0A9066F8C4E57ACDD (RuntimeObject* ___dictionary0, bool ___includeTypes1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::get_LoadBalancingClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * Room_get_LoadBalancingClient_m352E09ADBA5592B3FC0F1432CE9F5D7D0FACC52B (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// public LoadBalancingClient LoadBalancingClient { get; set; }
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_U3CLoadBalancingClientU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_LoadBalancingClient(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_LoadBalancingClient_mFA6EE0C996848CD1979DC014BDB9AAEF09B5728F (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___value0, const RuntimeMethod* method)
{
	{
		// public LoadBalancingClient LoadBalancingClient { get; set; }
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = ___value0;
		__this->set_U3CLoadBalancingClientU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.String Photon.Realtime.Room::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Room_get_Name_mCDF41719862596519BBE7091948656DF28B30607 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// return this.name;
		String_t* L_0 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_name_9();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_Name_mC4C4FFFFA614A20BFD543979EB818B9F332D77F9 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// this.name = value;
		String_t* L_0 = ___value0;
		((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->set_name_9(L_0);
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.Room::get_IsOffline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_IsOffline_mED7792F1D0C59ED40BE6B0F30D133D5B718DE73A (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// return isOffline;
		bool L_0 = __this->get_isOffline_14();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_IsOffline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_IsOffline_mB8087AC7DE2C5F438DE0EA52623EBEA97D6D9A01 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// isOffline = value;
		bool L_0 = ___value0;
		__this->set_isOffline_14(L_0);
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.Room::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_IsOpen_m36A93CB7C99FF6ABB9F77C8E9DCE793362DC0436 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// return this.isOpen;
		bool L_0 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_isOpen_6();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_IsOpen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_IsOpen_m9BF3D27C133879A9EF88E4EEB553878DC88AB4A2 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_set_IsOpen_m9BF3D27C133879A9EF88E4EEB553878DC88AB4A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != this.isOpen)
		bool L_0 = ___value0;
		bool L_1 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_isOpen_6();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0035;
		}
	}
	{
		// if (!this.isOffline)
		bool L_2 = __this->get_isOffline_14();
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		// this.LoadBalancingClient.OpSetPropertiesOfRoom(new Hashtable() { { GamePropertyKey.IsOpen, value } });
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_3 = Room_get_LoadBalancingClient_m352E09ADBA5592B3FC0F1432CE9F5D7D0FACC52B_inline(__this, /*hidden argument*/NULL);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_4 = (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 *)il2cpp_codegen_object_new(Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329_il2cpp_TypeInfo_var);
		Hashtable__ctor_m78B777F53B9A2618F58674C3F080642FA6761373(L_4, /*hidden argument*/NULL);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_5 = L_4;
		bool L_6 = ___value0;
		bool L_7 = L_6;
		RuntimeObject * L_8 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		Hashtable_Add_mF054E7D9E8639FDA5C9F9BF1DAC5A46AC7CE72F0(L_5, (uint8_t)((int32_t)253), L_8, /*hidden argument*/NULL);
		NullCheck(L_3);
		LoadBalancingClient_OpSetPropertiesOfRoom_m6AA0375D775D2CE6F940AAB8BD024524E0C56324(L_3, L_5, (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 *)NULL, (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE *)NULL, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// this.isOpen = value;
		bool L_9 = ___value0;
		((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->set_isOpen_6(L_9);
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.Room::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_IsVisible_m3C0E0466B3DFF449182378D88FA1D61251594838 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// return this.isVisible;
		bool L_0 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_isVisible_7();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_IsVisible_m5506840C476AFB8F2FF510C8A3320EC19042C010 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_set_IsVisible_m5506840C476AFB8F2FF510C8A3320EC19042C010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != this.isVisible)
		bool L_0 = ___value0;
		bool L_1 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_isVisible_7();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0035;
		}
	}
	{
		// if (!this.isOffline)
		bool L_2 = __this->get_isOffline_14();
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		// this.LoadBalancingClient.OpSetPropertiesOfRoom(new Hashtable() { { GamePropertyKey.IsVisible, value } });
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_3 = Room_get_LoadBalancingClient_m352E09ADBA5592B3FC0F1432CE9F5D7D0FACC52B_inline(__this, /*hidden argument*/NULL);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_4 = (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 *)il2cpp_codegen_object_new(Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329_il2cpp_TypeInfo_var);
		Hashtable__ctor_m78B777F53B9A2618F58674C3F080642FA6761373(L_4, /*hidden argument*/NULL);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_5 = L_4;
		bool L_6 = ___value0;
		bool L_7 = L_6;
		RuntimeObject * L_8 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		Hashtable_Add_mF054E7D9E8639FDA5C9F9BF1DAC5A46AC7CE72F0(L_5, (uint8_t)((int32_t)254), L_8, /*hidden argument*/NULL);
		NullCheck(L_3);
		LoadBalancingClient_OpSetPropertiesOfRoom_m6AA0375D775D2CE6F940AAB8BD024524E0C56324(L_3, L_5, (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 *)NULL, (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE *)NULL, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// this.isVisible = value;
		bool L_9 = ___value0;
		((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->set_isVisible_7(L_9);
		// }
		return;
	}
}
// System.Byte Photon.Realtime.Room::get_MaxPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Room_get_MaxPlayers_mD4BF3E0BF13AE675F4831A129E91D8F06D3EB124 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// return this.maxPlayers;
		uint8_t L_0 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_maxPlayers_2();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_MaxPlayers(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_MaxPlayers_mA500CB2E9F2F4A3E498FA8707B1409247BE790EA (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_set_MaxPlayers_mA500CB2E9F2F4A3E498FA8707B1409247BE790EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != this.maxPlayers)
		uint8_t L_0 = ___value0;
		uint8_t L_1 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_maxPlayers_2();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0035;
		}
	}
	{
		// if (!this.isOffline)
		bool L_2 = __this->get_isOffline_14();
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		// this.LoadBalancingClient.OpSetPropertiesOfRoom(new Hashtable() { { GamePropertyKey.MaxPlayers, value } });
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_3 = Room_get_LoadBalancingClient_m352E09ADBA5592B3FC0F1432CE9F5D7D0FACC52B_inline(__this, /*hidden argument*/NULL);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_4 = (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 *)il2cpp_codegen_object_new(Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329_il2cpp_TypeInfo_var);
		Hashtable__ctor_m78B777F53B9A2618F58674C3F080642FA6761373(L_4, /*hidden argument*/NULL);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_5 = L_4;
		uint8_t L_6 = ___value0;
		uint8_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		Hashtable_Add_mF054E7D9E8639FDA5C9F9BF1DAC5A46AC7CE72F0(L_5, (uint8_t)((int32_t)255), L_8, /*hidden argument*/NULL);
		NullCheck(L_3);
		LoadBalancingClient_OpSetPropertiesOfRoom_m6AA0375D775D2CE6F940AAB8BD024524E0C56324(L_3, L_5, (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 *)NULL, (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE *)NULL, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// this.maxPlayers = value;
		uint8_t L_9 = ___value0;
		((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->set_maxPlayers_2(L_9);
		// }
		return;
	}
}
// System.Byte Photon.Realtime.Room::get_PlayerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Room_get_PlayerCount_mCBF32BA967FF797861D5E9C2B26C3A6BDACA2E99 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_get_PlayerCount_mCBF32BA967FF797861D5E9C2B26C3A6BDACA2E99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.Players == null)
		Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * L_0 = Room_get_Players_m8F39EA784277611D7051C8A37EE813FFF4BCDDD7_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return 0;
		return (uint8_t)0;
	}

IL_000a:
	{
		// return (byte)this.Players.Count;
		Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * L_1 = Room_get_Players_m8F39EA784277611D7051C8A37EE813FFF4BCDDD7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m8CB03A975FCA9FEE89F222E357EA52AEF7C44F1D(L_1, /*hidden argument*/Dictionary_2_get_Count_m8CB03A975FCA9FEE89F222E357EA52AEF7C44F1D_RuntimeMethod_var);
		return (uint8_t)(((int32_t)((uint8_t)L_2)));
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::get_Players()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * Room_get_Players_m8F39EA784277611D7051C8A37EE813FFF4BCDDD7 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// return this.players;
		Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * L_0 = __this->get_players_15();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_Players(System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_Players_m0D5CFB1E82363D1AB270484990EE5D79D9811FB8 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * ___value0, const RuntimeMethod* method)
{
	{
		// this.players = value;
		Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * L_0 = ___value0;
		__this->set_players_15(L_0);
		// }
		return;
	}
}
// System.String[] Photon.Realtime.Room::get_ExpectedUsers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Room_get_ExpectedUsers_mF6928B3A5B8CD93A75882BDDB08A2E759D4C565F (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// get { return this.expectedUsers; }
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_expectedUsers_5();
		return L_0;
	}
}
// System.Int32 Photon.Realtime.Room::get_PlayerTtl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Room_get_PlayerTtl_m9947D50F953F4C37988D5496A3E03336F27CE370 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// get { return this.playerTtl; }
		int32_t L_0 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_playerTtl_4();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_PlayerTtl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_PlayerTtl_mDC5CA1C7F2790DD26EDB6D8FD7FCFE723E60C55E (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_set_PlayerTtl_mDC5CA1C7F2790DD26EDB6D8FD7FCFE723E60C55E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != this.playerTtl)
		int32_t L_0 = ___value0;
		int32_t L_1 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_playerTtl_4();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0028;
		}
	}
	{
		// if (!this.isOffline)
		bool L_2 = __this->get_isOffline_14();
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// this.LoadBalancingClient.OpSetPropertyOfRoom(GamePropertyKey.PlayerTtl, value);  // TODO: implement Offline Mode
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_3 = Room_get_LoadBalancingClient_m352E09ADBA5592B3FC0F1432CE9F5D7D0FACC52B_inline(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___value0;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		LoadBalancingClient_OpSetPropertyOfRoom_mCB8F1CBD88BB217EB1C85388CA3532FE79B0A337(L_3, (uint8_t)((int32_t)246), L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// this.playerTtl = value;
		int32_t L_7 = ___value0;
		((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->set_playerTtl_4(L_7);
		// }
		return;
	}
}
// System.Int32 Photon.Realtime.Room::get_EmptyRoomTtl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Room_get_EmptyRoomTtl_mB2AB26E021613CAE926EED6C14FE2CB92100CBF9 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// get { return this.emptyRoomTtl; }
		int32_t L_0 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_emptyRoomTtl_3();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_EmptyRoomTtl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_EmptyRoomTtl_mA79AEB412F560A793F95EF26DDDFF53367D5E8FD (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_set_EmptyRoomTtl_mA79AEB412F560A793F95EF26DDDFF53367D5E8FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != this.emptyRoomTtl)
		int32_t L_0 = ___value0;
		int32_t L_1 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_emptyRoomTtl_3();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0028;
		}
	}
	{
		// if (!this.isOffline)
		bool L_2 = __this->get_isOffline_14();
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// this.LoadBalancingClient.OpSetPropertyOfRoom(GamePropertyKey.EmptyRoomTtl, value);  // TODO: implement Offline Mode
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_3 = Room_get_LoadBalancingClient_m352E09ADBA5592B3FC0F1432CE9F5D7D0FACC52B_inline(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___value0;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		LoadBalancingClient_OpSetPropertyOfRoom_mCB8F1CBD88BB217EB1C85388CA3532FE79B0A337(L_3, (uint8_t)((int32_t)245), L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// this.emptyRoomTtl = value;
		int32_t L_7 = ___value0;
		((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->set_emptyRoomTtl_3(L_7);
		// }
		return;
	}
}
// System.Int32 Photon.Realtime.Room::get_MasterClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Room_get_MasterClientId_m1F799A66FDFD9D1BCB2F32B0F2327BF8CDF5075E (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// public int MasterClientId { get { return this.masterClientId; } }
		int32_t L_0 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_masterClientId_10();
		return L_0;
	}
}
// System.String[] Photon.Realtime.Room::get_PropertiesListedInLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Room_get_PropertiesListedInLobby_mBCB796C319E1DEF67E4F914072668F4844FB053D (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// return this.propertiesListedInLobby;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_propertiesListedInLobby_11();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_PropertiesListedInLobby(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_PropertiesListedInLobby_m804175FB0D480F47629CA96F82DE6401DDF3F06F (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___value0, const RuntimeMethod* method)
{
	{
		// this.propertiesListedInLobby = value;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ___value0;
		((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->set_propertiesListedInLobby_11(L_0);
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.Room::get_AutoCleanUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_AutoCleanUp_m2BA5EC0F7D2A7ADAB38AB0FEB5B0A130A252B48F (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// return this.autoCleanUp;
		bool L_0 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_autoCleanUp_8();
		return L_0;
	}
}
// System.Boolean Photon.Realtime.Room::get_BroadcastPropertiesChangeToAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_BroadcastPropertiesChangeToAll_m41F0ED85671F3EB13B39709EAFEFFA53316B321F (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// public bool BroadcastPropertiesChangeToAll { get; private set; }
		bool L_0 = __this->get_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_BroadcastPropertiesChangeToAll(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_BroadcastPropertiesChangeToAll_m79D02C344D870A92D087EB3233E577563360E021 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool BroadcastPropertiesChangeToAll { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.Room::get_SuppressRoomEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_SuppressRoomEvents_m627BB786A14E418C54450D93509797CB59BBD2C4 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// public bool SuppressRoomEvents { get; private set; }
		bool L_0 = __this->get_U3CSuppressRoomEventsU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_SuppressRoomEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_SuppressRoomEvents_m84A6C9E46183C568A6AD0B271F32E5DF9EE2B9F7 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SuppressRoomEvents { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CSuppressRoomEventsU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.Room::get_SuppressPlayerInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_SuppressPlayerInfo_m13DB16876C4B2C0516B3A5E156C3BAC876DC9031 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// public bool SuppressPlayerInfo { get; private set; }
		bool L_0 = __this->get_U3CSuppressPlayerInfoU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_SuppressPlayerInfo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_SuppressPlayerInfo_m78EE1EB24A13ED90994E739920D93AF6EF223319 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SuppressPlayerInfo { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CSuppressPlayerInfoU3Ek__BackingField_18(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.Room::get_PublishUserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_PublishUserId_m4EDD95881C4C01E9BCF208AFB3F4C1C592001EB5 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishUserId { get; private set; }
		bool L_0 = __this->get_U3CPublishUserIdU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_PublishUserId(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_PublishUserId_m1C47BF951F408DF84828102A363AE15E5AD967E5 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishUserId { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishUserIdU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.Room::get_DeleteNullProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_get_DeleteNullProperties_m8CBAD331DABAD60C664BBD36F1DBA8F9159796B6 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// public bool DeleteNullProperties { get; private set; }
		bool L_0 = __this->get_U3CDeleteNullPropertiesU3Ek__BackingField_20();
		return L_0;
	}
}
// System.Void Photon.Realtime.Room::set_DeleteNullProperties(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_DeleteNullProperties_m5E70B831ED71C7754374BA6A595C4FB59B012B86 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool DeleteNullProperties { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CDeleteNullPropertiesU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.Void Photon.Realtime.Room::.ctor(System.String,Photon.Realtime.RoomOptions,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room__ctor_mD644FF2C795EC5BBD50438BAB949C2414A873CB6 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, String_t* ___roomName0, RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * ___options1, bool ___isOffline2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room__ctor_mD644FF2C795EC5BBD50438BAB949C2414A873CB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * G_B1_1 = NULL;
	Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * G_B3_2 = NULL;
	{
		// private Dictionary<int, Player> players = new Dictionary<int, Player>();
		Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * L_0 = (Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 *)il2cpp_codegen_object_new(Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m244556ED1F00995D5917656BB415FE0B73CD4B18(L_0, /*hidden argument*/Dictionary_2__ctor_m244556ED1F00995D5917656BB415FE0B73CD4B18_RuntimeMethod_var);
		__this->set_players_15(L_0);
		// public Room(string roomName, RoomOptions options, bool isOffline = false) : base(roomName, options != null ? options.CustomRoomProperties : null)
		String_t* L_1 = ___roomName0;
		RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * L_2 = ___options1;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 *)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0019;
	}

IL_0013:
	{
		RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * L_3 = ___options1;
		NullCheck(L_3);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_4 = L_3->get_CustomRoomProperties_6();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0019:
	{
		NullCheck(G_B3_2);
		RoomInfo__ctor_m800A5C45B677469300338E4F51B4D71C04168685(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// if (options != null)
		RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * L_5 = ___options1;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		// this.isVisible = options.IsVisible;
		RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * L_6 = ___options1;
		NullCheck(L_6);
		bool L_7 = RoomOptions_get_IsVisible_mEBC48A6E7D7A0422A0CEA3A4AD339EA8B7061976_inline(L_6, /*hidden argument*/NULL);
		((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->set_isVisible_7(L_7);
		// this.isOpen = options.IsOpen;
		RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * L_8 = ___options1;
		NullCheck(L_8);
		bool L_9 = RoomOptions_get_IsOpen_m63600C2FCC2227779869060317764624F9536147_inline(L_8, /*hidden argument*/NULL);
		((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->set_isOpen_6(L_9);
		// this.maxPlayers = options.MaxPlayers;
		RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * L_10 = ___options1;
		NullCheck(L_10);
		uint8_t L_11 = L_10->get_MaxPlayers_2();
		((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->set_maxPlayers_2(L_11);
		// this.propertiesListedInLobby = options.CustomRoomPropertiesForLobby;
		RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * L_12 = ___options1;
		NullCheck(L_12);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = L_12->get_CustomRoomPropertiesForLobby_7();
		((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->set_propertiesListedInLobby_11(L_13);
	}

IL_0051:
	{
		// this.isOffline = isOffline;
		bool L_14 = ___isOffline2;
		__this->set_isOffline_14(L_14);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Room::InternalCacheRoomFlags(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_InternalCacheRoomFlags_m3B5E9DA4D0FDD5FC89D0E5FB96FAEE1D5FB9511F (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, int32_t ___roomFlags0, const RuntimeMethod* method)
{
	{
		// this.BroadcastPropertiesChangeToAll = (roomFlags & (int)RoomOptionBit.BroadcastPropsChangeToAll) != 0;
		int32_t L_0 = ___roomFlags0;
		Room_set_BroadcastPropertiesChangeToAll_m79D02C344D870A92D087EB3233E577563360E021_inline(__this, (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		// this.SuppressRoomEvents = (roomFlags & (int)RoomOptionBit.SuppressRoomEvents) != 0;
		int32_t L_1 = ___roomFlags0;
		Room_set_SuppressRoomEvents_m84A6C9E46183C568A6AD0B271F32E5DF9EE2B9F7_inline(__this, (bool)((!(((uint32_t)((int32_t)((int32_t)L_1&(int32_t)4))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		// this.SuppressPlayerInfo = (roomFlags & (int)RoomOptionBit.SuppressPlayerInfo) != 0;
		int32_t L_2 = ___roomFlags0;
		Room_set_SuppressPlayerInfo_m78EE1EB24A13ED90994E739920D93AF6EF223319_inline(__this, (bool)((!(((uint32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		// this.PublishUserId = (roomFlags & (int)RoomOptionBit.PublishUserId) != 0;
		int32_t L_3 = ___roomFlags0;
		Room_set_PublishUserId_m1C47BF951F408DF84828102A363AE15E5AD967E5_inline(__this, (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&(int32_t)8))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		// this.DeleteNullProperties = (roomFlags & (int)RoomOptionBit.DeleteNullProps) != 0;
		int32_t L_4 = ___roomFlags0;
		Room_set_DeleteNullProperties_m5E70B831ED71C7754374BA6A595C4FB59B012B86_inline(__this, (bool)((!(((uint32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		// this.autoCleanUp = (roomFlags & (int)RoomOptionBit.DeleteCacheOnLeave) != 0;
		int32_t L_5 = ___roomFlags0;
		((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->set_autoCleanUp_8((bool)((!(((uint32_t)((int32_t)((int32_t)L_5&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0));
		// }
		return;
	}
}
// System.Void Photon.Realtime.Room::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_InternalCacheProperties_m78BD627FEEF2CE14013E7358E905EC602FAA8A37 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * ___propertiesToCache0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int oldMasterId = this.masterClientId;
		int32_t L_0 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_masterClientId_10();
		V_0 = L_0;
		// base.InternalCacheProperties(propertiesToCache);    // important: updating the properties fields has no way to do callbacks on change
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_1 = ___propertiesToCache0;
		RoomInfo_InternalCacheProperties_m58BA57D991C784FD56431FD965FC0329FE4AA039(__this, L_1, /*hidden argument*/NULL);
		// if (oldMasterId != 0 && this.masterClientId != oldMasterId)
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_3 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_masterClientId_10();
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0037;
		}
	}
	{
		// this.LoadBalancingClient.InRoomCallbackTargets.OnMasterClientSwitched(this.GetPlayer(this.masterClientId));
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_5 = Room_get_LoadBalancingClient_m352E09ADBA5592B3FC0F1432CE9F5D7D0FACC52B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D * L_6 = L_5->get_InRoomCallbackTargets_25();
		int32_t L_7 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_masterClientId_10();
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_8 = VirtFuncInvoker2< Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 *, int32_t, bool >::Invoke(10 /* Photon.Realtime.Player Photon.Realtime.Room::GetPlayer(System.Int32,System.Boolean) */, __this, L_7, (bool)0);
		NullCheck(L_6);
		InRoomCallbacksContainer_OnMasterClientSwitched_mDE73A982F91D03B67103CD7083734A37ED3CB07D(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.Room::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,Photon.Realtime.WebFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_SetCustomProperties_m3F5677F72E2D47B08F0D632D8D8073F2466EE6E9 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * ___propertiesToSet0, Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * ___expectedProperties1, WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * ___webFlags2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_SetCustomProperties_m3F5677F72E2D47B08F0D632D8D8073F2466EE6E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * V_0 = NULL;
	{
		// if (propertiesToSet == null || propertiesToSet.Count == 0)
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_0 = ___propertiesToSet0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_1 = ___propertiesToSet0;
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6(L_1, /*hidden argument*/Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		// return false;
		return (bool)0;
	}

IL_000d:
	{
		// Hashtable customProps = propertiesToSet.StripToStringKeys() as Hashtable;
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_3 = ___propertiesToSet0;
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_t17EF958E5F2414F822246B79B7D985713AACE5CE_il2cpp_TypeInfo_var);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_4 = Extensions_StripToStringKeys_m454D6DC3FB3CFF93EC1C2C069DD6CABCEEFAE3F4(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (this.isOffline)
		bool L_5 = __this->get_isOffline_14();
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		// if (customProps.Count == 0)
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6(L_6, /*hidden argument*/Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0026;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0026:
	{
		// this.CustomProperties.Merge(customProps);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_8 = RoomInfo_get_CustomProperties_mEC71BB3F58EBE417B3CC9085AB26DA07D1644F07_inline(__this, /*hidden argument*/NULL);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_t17EF958E5F2414F822246B79B7D985713AACE5CE_il2cpp_TypeInfo_var);
		Extensions_Merge_mE5A42AF13B84826877703729DB671E74D15D5AC9(L_8, L_9, /*hidden argument*/NULL);
		// this.CustomProperties.StripKeysWithNullValues();
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_10 = RoomInfo_get_CustomProperties_mEC71BB3F58EBE417B3CC9085AB26DA07D1644F07_inline(__this, /*hidden argument*/NULL);
		Extensions_StripKeysWithNullValues_m6143A9F1A4D7B67174FC0FDCF01A7203A9E5F332(L_10, /*hidden argument*/NULL);
		// this.LoadBalancingClient.InRoomCallbackTargets.OnRoomPropertiesUpdate(propertiesToSet);
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_11 = Room_get_LoadBalancingClient_m352E09ADBA5592B3FC0F1432CE9F5D7D0FACC52B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D * L_12 = L_11->get_InRoomCallbackTargets_25();
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_13 = ___propertiesToSet0;
		NullCheck(L_12);
		InRoomCallbacksContainer_OnRoomPropertiesUpdate_m1FF01A10E624127EB6D51B87B7CC50432ACA8A86(L_12, L_13, /*hidden argument*/NULL);
		// }
		goto IL_005f;
	}

IL_0050:
	{
		// return this.LoadBalancingClient.OpSetPropertiesOfRoom(customProps, expectedProperties, webFlags);
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_14 = Room_get_LoadBalancingClient_m352E09ADBA5592B3FC0F1432CE9F5D7D0FACC52B_inline(__this, /*hidden argument*/NULL);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_15 = V_0;
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_16 = ___expectedProperties1;
		WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * L_17 = ___webFlags2;
		NullCheck(L_14);
		bool L_18 = LoadBalancingClient_OpSetPropertiesOfRoom_m6AA0375D775D2CE6F940AAB8BD024524E0C56324(L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_005f:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Photon.Realtime.Room::SetPropertiesListedInLobby(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_SetPropertiesListedInLobby_mECC17F1937DC2405E339FB401C653AEE0A1C1367 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___lobbyProps0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_SetPropertiesListedInLobby_mECC17F1937DC2405E339FB401C653AEE0A1C1367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * V_0 = NULL;
	{
		// if (this.isOffline)
		bool L_0 = __this->get_isOffline_14();
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// Hashtable customProps = new Hashtable();
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_1 = (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 *)il2cpp_codegen_object_new(Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329_il2cpp_TypeInfo_var);
		Hashtable__ctor_m78B777F53B9A2618F58674C3F080642FA6761373(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		// customProps[GamePropertyKey.PropsListedInLobby] = lobbyProps;
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_2 = V_0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = ___lobbyProps0;
		NullCheck(L_2);
		Hashtable_set_Item_m9214433A9DD40E31FDF83FA43B7C5EC3AAA6E5E5(L_2, (uint8_t)((int32_t)250), (RuntimeObject *)(RuntimeObject *)L_3, /*hidden argument*/NULL);
		// return this.LoadBalancingClient.OpSetPropertiesOfRoom(customProps);
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_4 = Room_get_LoadBalancingClient_m352E09ADBA5592B3FC0F1432CE9F5D7D0FACC52B_inline(__this, /*hidden argument*/NULL);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = LoadBalancingClient_OpSetPropertiesOfRoom_m6AA0375D775D2CE6F940AAB8BD024524E0C56324(L_4, L_5, (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 *)NULL, (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE *)NULL, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Photon.Realtime.Room::RemovePlayer(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_RemovePlayer_m238395556BB7C376C19ADE84074EA4D3C043B215 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_RemovePlayer_m238395556BB7C376C19ADE84074EA4D3C043B215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Players.Remove(player.ActorNumber);
		Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * L_0 = Room_get_Players_m8F39EA784277611D7051C8A37EE813FFF4BCDDD7_inline(__this, /*hidden argument*/NULL);
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_1 = ___player0;
		NullCheck(L_1);
		int32_t L_2 = Player_get_ActorNumber_m02157560C558C6007C8146F1FCDA7E759AD0CF1D_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_Remove_mFD433C2EA94FECAA77A8B0C9671D05785AEADDC1(L_0, L_2, /*hidden argument*/Dictionary_2_Remove_mFD433C2EA94FECAA77A8B0C9671D05785AEADDC1_RuntimeMethod_var);
		// player.RoomReference = null;
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_3 = ___player0;
		NullCheck(L_3);
		Player_set_RoomReference_m94972048535DB91480569BC5E3B463A89CB12A91_inline(L_3, (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Room::RemovePlayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_RemovePlayer_mA6BA0D249B52408DE1C1C4B5E870CB2A27BF3BF5 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, int32_t ___id0, const RuntimeMethod* method)
{
	{
		// this.RemovePlayer(this.GetPlayer(id));
		int32_t L_0 = ___id0;
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_1 = VirtFuncInvoker2< Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 *, int32_t, bool >::Invoke(10 /* Photon.Realtime.Player Photon.Realtime.Room::GetPlayer(System.Int32,System.Boolean) */, __this, L_0, (bool)0);
		VirtActionInvoker1< Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * >::Invoke(6 /* System.Void Photon.Realtime.Room::RemovePlayer(Photon.Realtime.Player) */, __this, L_1);
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.Room::SetMasterClient(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_SetMasterClient_m332177B7EA4EBF00CABB88FA984B651954CFA21C (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___masterClientPlayer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_SetMasterClient_m332177B7EA4EBF00CABB88FA984B651954CFA21C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * V_0 = NULL;
	Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * V_1 = NULL;
	{
		// if (this.isOffline)
		bool L_0 = __this->get_isOffline_14();
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// Hashtable newProps = new Hashtable() { { GamePropertyKey.MasterClientId, masterClientPlayer.ActorNumber } };
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_1 = (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 *)il2cpp_codegen_object_new(Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329_il2cpp_TypeInfo_var);
		Hashtable__ctor_m78B777F53B9A2618F58674C3F080642FA6761373(L_1, /*hidden argument*/NULL);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_2 = L_1;
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_3 = ___masterClientPlayer0;
		NullCheck(L_3);
		int32_t L_4 = Player_get_ActorNumber_m02157560C558C6007C8146F1FCDA7E759AD0CF1D_inline(L_3, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		Hashtable_Add_mF054E7D9E8639FDA5C9F9BF1DAC5A46AC7CE72F0(L_2, (uint8_t)((int32_t)248), L_6, /*hidden argument*/NULL);
		V_0 = L_2;
		// Hashtable prevProps = new Hashtable() { { GamePropertyKey.MasterClientId, this.MasterClientId } };
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_7 = (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 *)il2cpp_codegen_object_new(Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329_il2cpp_TypeInfo_var);
		Hashtable__ctor_m78B777F53B9A2618F58674C3F080642FA6761373(L_7, /*hidden argument*/NULL);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_8 = L_7;
		int32_t L_9 = Room_get_MasterClientId_m1F799A66FDFD9D1BCB2F32B0F2327BF8CDF5075E_inline(__this, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		Hashtable_Add_mF054E7D9E8639FDA5C9F9BF1DAC5A46AC7CE72F0(L_8, (uint8_t)((int32_t)248), L_11, /*hidden argument*/NULL);
		V_1 = L_8;
		// return this.LoadBalancingClient.OpSetPropertiesOfRoom(newProps, prevProps);
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_12 = Room_get_LoadBalancingClient_m352E09ADBA5592B3FC0F1432CE9F5D7D0FACC52B_inline(__this, /*hidden argument*/NULL);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_13 = V_0;
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_14 = V_1;
		NullCheck(L_12);
		bool L_15 = LoadBalancingClient_OpSetPropertiesOfRoom_m6AA0375D775D2CE6F940AAB8BD024524E0C56324(L_12, L_13, L_14, (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE *)NULL, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Boolean Photon.Realtime.Room::AddPlayer(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_AddPlayer_m563868E24D9EF0C9DAE29389430F2F07F3FFB147 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_AddPlayer_m563868E24D9EF0C9DAE29389430F2F07F3FFB147_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!this.Players.ContainsKey(player.ActorNumber))
		Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * L_0 = Room_get_Players_m8F39EA784277611D7051C8A37EE813FFF4BCDDD7_inline(__this, /*hidden argument*/NULL);
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_1 = ___player0;
		NullCheck(L_1);
		int32_t L_2 = Player_get_ActorNumber_m02157560C558C6007C8146F1FCDA7E759AD0CF1D_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = Dictionary_2_ContainsKey_m59731793525CCBBC9E9B90D5525CF64AEE514A88(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m59731793525CCBBC9E9B90D5525CF64AEE514A88_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		// this.StorePlayer(player);
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_4 = ___player0;
		VirtFuncInvoker1< Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 *, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * >::Invoke(9 /* Photon.Realtime.Player Photon.Realtime.Room::StorePlayer(Photon.Realtime.Player) */, __this, L_4);
		// return true;
		return (bool)1;
	}

IL_001d:
	{
		// return false;
		return (bool)0;
	}
}
// Photon.Realtime.Player Photon.Realtime.Room::StorePlayer(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * Room_StorePlayer_m12DAA94744AE461D74B16FDB01A71F6FEE3325CE (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_StorePlayer_m12DAA94744AE461D74B16FDB01A71F6FEE3325CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Players[player.ActorNumber] = player;
		Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * L_0 = Room_get_Players_m8F39EA784277611D7051C8A37EE813FFF4BCDDD7_inline(__this, /*hidden argument*/NULL);
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_1 = ___player0;
		NullCheck(L_1);
		int32_t L_2 = Player_get_ActorNumber_m02157560C558C6007C8146F1FCDA7E759AD0CF1D_inline(L_1, /*hidden argument*/NULL);
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_3 = ___player0;
		NullCheck(L_0);
		Dictionary_2_set_Item_m47F4BA1976FB2F13ECF4FE6A55DA6ACB42720F75(L_0, L_2, L_3, /*hidden argument*/Dictionary_2_set_Item_m47F4BA1976FB2F13ECF4FE6A55DA6ACB42720F75_RuntimeMethod_var);
		// player.RoomReference = this;
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_4 = ___player0;
		NullCheck(L_4);
		Player_set_RoomReference_m94972048535DB91480569BC5E3B463A89CB12A91_inline(L_4, __this, /*hidden argument*/NULL);
		// return player;
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_5 = ___player0;
		return L_5;
	}
}
// Photon.Realtime.Player Photon.Realtime.Room::GetPlayer(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * Room_GetPlayer_m49DF1E5FE3CB10AE1AD5F1B7D1CD96583CAD5E2C (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, int32_t ___id0, bool ___findMaster1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_GetPlayer_m49DF1E5FE3CB10AE1AD5F1B7D1CD96583CAD5E2C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * V_1 = NULL;
	int32_t G_B4_0 = 0;
	{
		// int idToFind = (findMaster && id == 0) ? this.MasterClientId : id;
		bool L_0 = ___findMaster1;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_1 = ___id0;
		if (!L_1)
		{
			goto IL_0009;
		}
	}

IL_0006:
	{
		int32_t L_2 = ___id0;
		G_B4_0 = L_2;
		goto IL_000f;
	}

IL_0009:
	{
		int32_t L_3 = Room_get_MasterClientId_m1F799A66FDFD9D1BCB2F32B0F2327BF8CDF5075E_inline(__this, /*hidden argument*/NULL);
		G_B4_0 = L_3;
	}

IL_000f:
	{
		V_0 = G_B4_0;
		// Player result = null;
		V_1 = (Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 *)NULL;
		// this.Players.TryGetValue(idToFind, out result);
		Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * L_4 = Room_get_Players_m8F39EA784277611D7051C8A37EE813FFF4BCDDD7_inline(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Dictionary_2_TryGetValue_m455754A717B442E70D030785AC1B14A99FF61CFD(L_4, L_5, (Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m455754A717B442E70D030785AC1B14A99FF61CFD_RuntimeMethod_var);
		// return result;
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_6 = V_1;
		return L_6;
	}
}
// System.Boolean Photon.Realtime.Room::ClearExpectedUsers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_ClearExpectedUsers_mE4627419E610BE7C3CF9D8AA81E24F88F6042D47 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_ClearExpectedUsers_mE4627419E610BE7C3CF9D8AA81E24F88F6042D47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.ExpectedUsers == null || this.ExpectedUsers.Length == 0)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = Room_get_ExpectedUsers_mF6928B3A5B8CD93A75882BDDB08A2E759D4C565F_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = Room_get_ExpectedUsers_mF6928B3A5B8CD93A75882BDDB08A2E759D4C565F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		// return false;
		return (bool)0;
	}

IL_0013:
	{
		// return this.SetExpectedUsers(new string[0], this.ExpectedUsers);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = Room_get_ExpectedUsers_mF6928B3A5B8CD93A75882BDDB08A2E759D4C565F_inline(__this, /*hidden argument*/NULL);
		bool L_4 = Room_SetExpectedUsers_m624198ABE37038AC8C49F4570053F0E57340A865(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Photon.Realtime.Room::SetExpectedUsers(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_SetExpectedUsers_m78E6BFFC65FB7F6044661409EBBAC2F107BD368C (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___newExpectedUsers0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_SetExpectedUsers_m78E6BFFC65FB7F6044661409EBBAC2F107BD368C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (newExpectedUsers == null || newExpectedUsers.Length == 0)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ___newExpectedUsers0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = ___newExpectedUsers0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_001a;
		}
	}

IL_0007:
	{
		// this.LoadBalancingClient.DebugReturn(DebugLevel.ERROR, "newExpectedUsers array is null or empty, call Room.ClearExpectedUsers() instead if this is what you want.");
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_2 = Room_get_LoadBalancingClient_m352E09ADBA5592B3FC0F1432CE9F5D7D0FACC52B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker2< uint8_t, String_t* >::Invoke(14 /* System.Void Photon.Realtime.LoadBalancingClient::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, L_2, 1, _stringLiteralCA3FE080FB4F6BC100872F3199B8E39886FCEB68);
		// return false;
		return (bool)0;
	}

IL_001a:
	{
		// return this.SetExpectedUsers(newExpectedUsers, this.ExpectedUsers);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = ___newExpectedUsers0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = Room_get_ExpectedUsers_mF6928B3A5B8CD93A75882BDDB08A2E759D4C565F_inline(__this, /*hidden argument*/NULL);
		bool L_5 = Room_SetExpectedUsers_m624198ABE37038AC8C49F4570053F0E57340A865(__this, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean Photon.Realtime.Room::SetExpectedUsers(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Room_SetExpectedUsers_m624198ABE37038AC8C49F4570053F0E57340A865 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___newExpectedUsers0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___oldExpectedUsers1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_SetExpectedUsers_m624198ABE37038AC8C49F4570053F0E57340A865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * V_0 = NULL;
	Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * V_1 = NULL;
	{
		// if (this.isOffline)
		bool L_0 = __this->get_isOffline_14();
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// Hashtable gameProperties = new Hashtable(1);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_1 = (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 *)il2cpp_codegen_object_new(Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329_il2cpp_TypeInfo_var);
		Hashtable__ctor_m915025220A74BB84F3FC9CF1063A3A5B767FE8B8(L_1, 1, /*hidden argument*/NULL);
		V_0 = L_1;
		// gameProperties.Add(GamePropertyKey.ExpectedUsers, newExpectedUsers);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_2 = V_0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = ___newExpectedUsers0;
		NullCheck(L_2);
		Hashtable_Add_mF054E7D9E8639FDA5C9F9BF1DAC5A46AC7CE72F0(L_2, (uint8_t)((int32_t)247), (RuntimeObject *)(RuntimeObject *)L_3, /*hidden argument*/NULL);
		// Hashtable expectedProperties = null;
		V_1 = (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 *)NULL;
		// if (oldExpectedUsers != null)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = ___oldExpectedUsers1;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// expectedProperties = new Hashtable(1);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_5 = (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 *)il2cpp_codegen_object_new(Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329_il2cpp_TypeInfo_var);
		Hashtable__ctor_m915025220A74BB84F3FC9CF1063A3A5B767FE8B8(L_5, 1, /*hidden argument*/NULL);
		V_1 = L_5;
		// expectedProperties.Add(GamePropertyKey.ExpectedUsers, oldExpectedUsers);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_6 = V_1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = ___oldExpectedUsers1;
		NullCheck(L_6);
		Hashtable_Add_mF054E7D9E8639FDA5C9F9BF1DAC5A46AC7CE72F0(L_6, (uint8_t)((int32_t)247), (RuntimeObject *)(RuntimeObject *)L_7, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// return this.LoadBalancingClient.OpSetPropertiesOfRoom(gameProperties, expectedProperties);
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_8 = Room_get_LoadBalancingClient_m352E09ADBA5592B3FC0F1432CE9F5D7D0FACC52B_inline(__this, /*hidden argument*/NULL);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_9 = V_0;
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_10 = V_1;
		NullCheck(L_8);
		bool L_11 = LoadBalancingClient_OpSetPropertiesOfRoom_m6AA0375D775D2CE6F940AAB8BD024524E0C56324(L_8, L_9, L_10, (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE *)NULL, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.String Photon.Realtime.Room::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Room_ToString_mEFDF611A6369048A0F0471689A43585AD19D76BB (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_ToString_mEFDF611A6369048A0F0471689A43585AD19D76BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B2_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B1_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B3_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B5_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B4_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B6_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		// return string.Format("Room: '{0}' {1},{2} {4}/{3} players.", this.name, this.isVisible ? "visible" : "hidden", this.isOpen ? "open" : "closed", this.maxPlayers, this.PlayerCount);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_name_9();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		bool L_4 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_isVisible_7();
		G_B1_0 = 1;
		G_B1_1 = L_3;
		G_B1_2 = L_3;
		G_B1_3 = _stringLiteral479EC88E55FF68914417B71890F19067E031CF95;
		if (L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_3;
			G_B2_2 = L_3;
			G_B2_3 = _stringLiteral479EC88E55FF68914417B71890F19067E031CF95;
			goto IL_0025;
		}
	}
	{
		G_B3_0 = _stringLiteral99D72C7FC3E2E145870BEAB37C0B70E343EA9C3B;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002a;
	}

IL_0025:
	{
		G_B3_0 = _stringLiteral223883960405D6589D6CD37F175C73B073C4180F;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002a:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = G_B3_3;
		bool L_6 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_isOpen_6();
		G_B4_0 = 2;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = G_B3_4;
		if (L_6)
		{
			G_B5_0 = 2;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = G_B3_4;
			goto IL_003c;
		}
	}
	{
		G_B6_0 = _stringLiteralEA88FBAA99B73225752E2EF67593F775848160AD;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0041;
	}

IL_003c:
	{
		G_B6_0 = _stringLiteral5FC7E38BFFE00CA46ADD89145464A2EAF759D5C2;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0041:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = G_B6_3;
		uint8_t L_8 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_maxPlayers_2();
		uint8_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_7;
		uint8_t L_12 = Room_get_PlayerCount_mCBF32BA967FF797861D5E9C2B26C3A6BDACA2E99(__this, /*hidden argument*/NULL);
		uint8_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_14);
		String_t* L_15 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(G_B6_4, L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.String Photon.Realtime.Room::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Room_ToStringFull_m94133A3D76BCF79806886BBFCBEA1B6699BF0579 (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Room_ToStringFull_m94133A3D76BCF79806886BBFCBEA1B6699BF0579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B2_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B1_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B3_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B5_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B4_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B6_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		// return string.Format("Room: '{0}' {1},{2} {4}/{3} players.\ncustomProps: {5}", this.name, this.isVisible ? "visible" : "hidden", this.isOpen ? "open" : "closed", this.maxPlayers, this.PlayerCount, this.CustomProperties.ToStringFull());
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_name_9();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		bool L_4 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_isVisible_7();
		G_B1_0 = 1;
		G_B1_1 = L_3;
		G_B1_2 = L_3;
		G_B1_3 = _stringLiteralF7068A42680648970601D75B7A3926C9C04E462B;
		if (L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_3;
			G_B2_2 = L_3;
			G_B2_3 = _stringLiteralF7068A42680648970601D75B7A3926C9C04E462B;
			goto IL_0025;
		}
	}
	{
		G_B3_0 = _stringLiteral99D72C7FC3E2E145870BEAB37C0B70E343EA9C3B;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002a;
	}

IL_0025:
	{
		G_B3_0 = _stringLiteral223883960405D6589D6CD37F175C73B073C4180F;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002a:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = G_B3_3;
		bool L_6 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_isOpen_6();
		G_B4_0 = 2;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = G_B3_4;
		if (L_6)
		{
			G_B5_0 = 2;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = G_B3_4;
			goto IL_003c;
		}
	}
	{
		G_B6_0 = _stringLiteralEA88FBAA99B73225752E2EF67593F775848160AD;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0041;
	}

IL_003c:
	{
		G_B6_0 = _stringLiteral5FC7E38BFFE00CA46ADD89145464A2EAF759D5C2;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0041:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = G_B6_3;
		uint8_t L_8 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_maxPlayers_2();
		uint8_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_7;
		uint8_t L_12 = Room_get_PlayerCount_mCBF32BA967FF797861D5E9C2B26C3A6BDACA2E99(__this, /*hidden argument*/NULL);
		uint8_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_14);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_11;
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_16 = RoomInfo_get_CustomProperties_mEC71BB3F58EBE417B3CC9085AB26DA07D1644F07_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_t17EF958E5F2414F822246B79B7D985713AACE5CE_il2cpp_TypeInfo_var);
		String_t* L_17 = Extensions_ToStringFull_m7D5DC29B4341359CC4354664509068EF620E9DCC(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_17);
		String_t* L_18 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(G_B6_4, L_15, /*hidden argument*/NULL);
		return L_18;
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
// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::get_CustomProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * RoomInfo_get_CustomProperties_mEC71BB3F58EBE417B3CC9085AB26DA07D1644F07 (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	{
		// return this.customProperties;
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_0 = __this->get_customProperties_1();
		return L_0;
	}
}
// System.String Photon.Realtime.RoomInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_get_Name_m24C3CFCDD6E862D5E0EA27A0B2736E09D72843DA (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	{
		// return this.name;
		String_t* L_0 = __this->get_name_9();
		return L_0;
	}
}
// System.Int32 Photon.Realtime.RoomInfo::get_PlayerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_m6E97FB80FDADD5A3B15ED2D51F071B3F343C1CC1 (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = __this->get_U3CPlayerCountU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomInfo::set_PlayerCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo_set_PlayerCount_m406E55A69DFEB12E15AEB7B8DDF0B0C8F704911F (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPlayerCountU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Byte Photon.Realtime.RoomInfo::get_MaxPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RoomInfo_get_MaxPlayers_mB393159F17C716B593EC71158399F415ED15CA51 (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	{
		// return this.maxPlayers;
		uint8_t L_0 = __this->get_maxPlayers_2();
		return L_0;
	}
}
// System.Boolean Photon.Realtime.RoomInfo::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomInfo_get_IsOpen_mB6999468BA5346E8D7C421DB3CDBA882C1288856 (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	{
		// return this.isOpen;
		bool L_0 = __this->get_isOpen_6();
		return L_0;
	}
}
// System.Boolean Photon.Realtime.RoomInfo::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomInfo_get_IsVisible_mB12677A2EC41DE627005F79B86C3CEB9A0532491 (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	{
		// return this.isVisible;
		bool L_0 = __this->get_isVisible_7();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomInfo::.ctor(System.String,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo__ctor_m800A5C45B677469300338E4F51B4D71C04168685 (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, String_t* ___roomName0, Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * ___roomProperties1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo__ctor_m800A5C45B677469300338E4F51B4D71C04168685_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Hashtable customProperties = new Hashtable();
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_0 = (Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 *)il2cpp_codegen_object_new(Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329_il2cpp_TypeInfo_var);
		Hashtable__ctor_m78B777F53B9A2618F58674C3F080642FA6761373(L_0, /*hidden argument*/NULL);
		__this->set_customProperties_1(L_0);
		// protected bool isOpen = true;
		__this->set_isOpen_6((bool)1);
		// protected bool isVisible = true;
		__this->set_isVisible_7((bool)1);
		// protected bool autoCleanUp = true;
		__this->set_autoCleanUp_8((bool)1);
		// protected internal RoomInfo(string roomName, Hashtable roomProperties)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.InternalCacheProperties(roomProperties);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_1 = ___roomProperties1;
		VirtActionInvoker1< Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * >::Invoke(4 /* System.Void Photon.Realtime.RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable) */, __this, L_1);
		// this.name = roomName;
		String_t* L_2 = ___roomName0;
		__this->set_name_9(L_2);
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomInfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomInfo_Equals_mA1F83E98B362D4DAF441D42C360164E18057BECC (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo_Equals_mA1F83E98B362D4DAF441D42C360164E18057BECC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * V_0 = NULL;
	{
		// RoomInfo otherRoomInfo = other as RoomInfo;
		RuntimeObject * L_0 = ___other0;
		V_0 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)IsInstClass((RuntimeObject*)L_0, RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2_il2cpp_TypeInfo_var));
		// return (otherRoomInfo != null && this.Name.Equals(otherRoomInfo.name));
		RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = RoomInfo_get_Name_m24C3CFCDD6E862D5E0EA27A0B2736E09D72843DA_inline(__this, /*hidden argument*/NULL);
		RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_name_9();
		NullCheck(L_2);
		bool L_5 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Int32 Photon.Realtime.RoomInfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RoomInfo_GetHashCode_m86A2462634914114B25337548809456667A6240B (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	{
		// return this.name.GetHashCode();
		String_t* L_0 = __this->get_name_9();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.String Photon.Realtime.RoomInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_ToString_m47D9484C51886F87648BA365109134FB53CD933A (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo_ToString_m47D9484C51886F87648BA365109134FB53CD933A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B2_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B1_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B3_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B5_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B4_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B6_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		// return string.Format("Room: '{0}' {1},{2} {4}/{3} players.", this.name, this.isVisible ? "visible" : "hidden", this.isOpen ? "open" : "closed", this.maxPlayers, this.PlayerCount);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = __this->get_name_9();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		bool L_4 = __this->get_isVisible_7();
		G_B1_0 = 1;
		G_B1_1 = L_3;
		G_B1_2 = L_3;
		G_B1_3 = _stringLiteral479EC88E55FF68914417B71890F19067E031CF95;
		if (L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_3;
			G_B2_2 = L_3;
			G_B2_3 = _stringLiteral479EC88E55FF68914417B71890F19067E031CF95;
			goto IL_0025;
		}
	}
	{
		G_B3_0 = _stringLiteral99D72C7FC3E2E145870BEAB37C0B70E343EA9C3B;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002a;
	}

IL_0025:
	{
		G_B3_0 = _stringLiteral223883960405D6589D6CD37F175C73B073C4180F;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002a:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = G_B3_3;
		bool L_6 = __this->get_isOpen_6();
		G_B4_0 = 2;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = G_B3_4;
		if (L_6)
		{
			G_B5_0 = 2;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = G_B3_4;
			goto IL_003c;
		}
	}
	{
		G_B6_0 = _stringLiteralEA88FBAA99B73225752E2EF67593F775848160AD;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0041;
	}

IL_003c:
	{
		G_B6_0 = _stringLiteral5FC7E38BFFE00CA46ADD89145464A2EAF759D5C2;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0041:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = G_B6_3;
		uint8_t L_8 = __this->get_maxPlayers_2();
		uint8_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_7;
		int32_t L_12 = RoomInfo_get_PlayerCount_m6E97FB80FDADD5A3B15ED2D51F071B3F343C1CC1_inline(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_14);
		String_t* L_15 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(G_B6_4, L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.String Photon.Realtime.RoomInfo::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_ToStringFull_mE676F4200194103F85618888DE0790156EF89768 (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo_ToStringFull_mE676F4200194103F85618888DE0790156EF89768_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B2_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B1_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B3_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B5_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B4_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B6_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		// return string.Format("Room: '{0}' {1},{2} {4}/{3} players.\ncustomProps: {5}", this.name, this.isVisible ? "visible" : "hidden", this.isOpen ? "open" : "closed", this.maxPlayers, this.PlayerCount, this.customProperties.ToStringFull());
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = __this->get_name_9();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		bool L_4 = __this->get_isVisible_7();
		G_B1_0 = 1;
		G_B1_1 = L_3;
		G_B1_2 = L_3;
		G_B1_3 = _stringLiteralF7068A42680648970601D75B7A3926C9C04E462B;
		if (L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_3;
			G_B2_2 = L_3;
			G_B2_3 = _stringLiteralF7068A42680648970601D75B7A3926C9C04E462B;
			goto IL_0025;
		}
	}
	{
		G_B3_0 = _stringLiteral99D72C7FC3E2E145870BEAB37C0B70E343EA9C3B;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002a;
	}

IL_0025:
	{
		G_B3_0 = _stringLiteral223883960405D6589D6CD37F175C73B073C4180F;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002a:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = G_B3_3;
		bool L_6 = __this->get_isOpen_6();
		G_B4_0 = 2;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = G_B3_4;
		if (L_6)
		{
			G_B5_0 = 2;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = G_B3_4;
			goto IL_003c;
		}
	}
	{
		G_B6_0 = _stringLiteralEA88FBAA99B73225752E2EF67593F775848160AD;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0041;
	}

IL_003c:
	{
		G_B6_0 = _stringLiteral5FC7E38BFFE00CA46ADD89145464A2EAF759D5C2;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0041:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = G_B6_3;
		uint8_t L_8 = __this->get_maxPlayers_2();
		uint8_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_7;
		int32_t L_12 = RoomInfo_get_PlayerCount_m6E97FB80FDADD5A3B15ED2D51F071B3F343C1CC1_inline(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_14);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_11;
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_16 = __this->get_customProperties_1();
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_t17EF958E5F2414F822246B79B7D985713AACE5CE_il2cpp_TypeInfo_var);
		String_t* L_17 = Extensions_ToStringFull_m7D5DC29B4341359CC4354664509068EF620E9DCC(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_17);
		String_t* L_18 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(G_B6_4, L_15, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Void Photon.Realtime.RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo_InternalCacheProperties_m58BA57D991C784FD56431FD965FC0329FE4AA039 (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * ___propertiesToCache0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo_InternalCacheProperties_m58BA57D991C784FD56431FD965FC0329FE4AA039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (propertiesToCache == null || propertiesToCache.Count == 0 || this.customProperties.Equals(propertiesToCache))
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_0 = ___propertiesToCache0;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_1 = ___propertiesToCache0;
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6(L_1, /*hidden argument*/Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_3 = __this->get_customProperties_1();
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_4 = ___propertiesToCache0;
		NullCheck(L_3);
		bool L_5 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_4);
		if (!L_5)
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		// return;
		return;
	}

IL_001a:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.Removed))
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_6 = ___propertiesToCache0;
		NullCheck(L_6);
		bool L_7 = Hashtable_ContainsKey_mB35F90B41D0093E4AFB031B2B60789F768CB3252(L_6, (uint8_t)((int32_t)251), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// this.RemovedFromList = (bool)propertiesToCache[GamePropertyKey.Removed];
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_8 = ___propertiesToCache0;
		NullCheck(L_8);
		RuntimeObject * L_9 = Hashtable_get_Item_m098DDEBFA01852E9CB2D142664C3C5995D870B92(L_8, (uint8_t)((int32_t)251), /*hidden argument*/NULL);
		__this->set_RemovedFromList_0(((*(bool*)((bool*)UnBox(L_9, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))));
		// if (this.RemovedFromList)
		bool L_10 = __this->get_RemovedFromList_0();
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		// return;
		return;
	}

IL_0046:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.MaxPlayers))
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_11 = ___propertiesToCache0;
		NullCheck(L_11);
		bool L_12 = Hashtable_ContainsKey_mB35F90B41D0093E4AFB031B2B60789F768CB3252(L_11, (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		// this.maxPlayers = (byte)propertiesToCache[GamePropertyKey.MaxPlayers];
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_13 = ___propertiesToCache0;
		NullCheck(L_13);
		RuntimeObject * L_14 = Hashtable_get_Item_m098DDEBFA01852E9CB2D142664C3C5995D870B92(L_13, (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		__this->set_maxPlayers_2(((*(uint8_t*)((uint8_t*)UnBox(L_14, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var)))));
	}

IL_0069:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.IsOpen))
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_15 = ___propertiesToCache0;
		NullCheck(L_15);
		bool L_16 = Hashtable_ContainsKey_mB35F90B41D0093E4AFB031B2B60789F768CB3252(L_15, (uint8_t)((int32_t)253), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_008c;
		}
	}
	{
		// this.isOpen = (bool)propertiesToCache[GamePropertyKey.IsOpen];
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_17 = ___propertiesToCache0;
		NullCheck(L_17);
		RuntimeObject * L_18 = Hashtable_get_Item_m098DDEBFA01852E9CB2D142664C3C5995D870B92(L_17, (uint8_t)((int32_t)253), /*hidden argument*/NULL);
		__this->set_isOpen_6(((*(bool*)((bool*)UnBox(L_18, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))));
	}

IL_008c:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.IsVisible))
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_19 = ___propertiesToCache0;
		NullCheck(L_19);
		bool L_20 = Hashtable_ContainsKey_mB35F90B41D0093E4AFB031B2B60789F768CB3252(L_19, (uint8_t)((int32_t)254), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00af;
		}
	}
	{
		// this.isVisible = (bool)propertiesToCache[GamePropertyKey.IsVisible];
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_21 = ___propertiesToCache0;
		NullCheck(L_21);
		RuntimeObject * L_22 = Hashtable_get_Item_m098DDEBFA01852E9CB2D142664C3C5995D870B92(L_21, (uint8_t)((int32_t)254), /*hidden argument*/NULL);
		__this->set_isVisible_7(((*(bool*)((bool*)UnBox(L_22, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))));
	}

IL_00af:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.PlayerCount))
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_23 = ___propertiesToCache0;
		NullCheck(L_23);
		bool L_24 = Hashtable_ContainsKey_mB35F90B41D0093E4AFB031B2B60789F768CB3252(L_23, (uint8_t)((int32_t)252), /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00d2;
		}
	}
	{
		// this.PlayerCount = (int)((byte)propertiesToCache[GamePropertyKey.PlayerCount]);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_25 = ___propertiesToCache0;
		NullCheck(L_25);
		RuntimeObject * L_26 = Hashtable_get_Item_m098DDEBFA01852E9CB2D142664C3C5995D870B92(L_25, (uint8_t)((int32_t)252), /*hidden argument*/NULL);
		RoomInfo_set_PlayerCount_m406E55A69DFEB12E15AEB7B8DDF0B0C8F704911F_inline(__this, ((*(uint8_t*)((uint8_t*)UnBox(L_26, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_00d2:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.CleanupCacheOnLeave))
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_27 = ___propertiesToCache0;
		NullCheck(L_27);
		bool L_28 = Hashtable_ContainsKey_mB35F90B41D0093E4AFB031B2B60789F768CB3252(L_27, (uint8_t)((int32_t)249), /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00f5;
		}
	}
	{
		// this.autoCleanUp = (bool)propertiesToCache[GamePropertyKey.CleanupCacheOnLeave];
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_29 = ___propertiesToCache0;
		NullCheck(L_29);
		RuntimeObject * L_30 = Hashtable_get_Item_m098DDEBFA01852E9CB2D142664C3C5995D870B92(L_29, (uint8_t)((int32_t)249), /*hidden argument*/NULL);
		__this->set_autoCleanUp_8(((*(bool*)((bool*)UnBox(L_30, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))));
	}

IL_00f5:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.MasterClientId))
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_31 = ___propertiesToCache0;
		NullCheck(L_31);
		bool L_32 = Hashtable_ContainsKey_mB35F90B41D0093E4AFB031B2B60789F768CB3252(L_31, (uint8_t)((int32_t)248), /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0118;
		}
	}
	{
		// this.masterClientId = (int)propertiesToCache[GamePropertyKey.MasterClientId];
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_33 = ___propertiesToCache0;
		NullCheck(L_33);
		RuntimeObject * L_34 = Hashtable_get_Item_m098DDEBFA01852E9CB2D142664C3C5995D870B92(L_33, (uint8_t)((int32_t)248), /*hidden argument*/NULL);
		__this->set_masterClientId_10(((*(int32_t*)((int32_t*)UnBox(L_34, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))));
	}

IL_0118:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.PropsListedInLobby))
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_35 = ___propertiesToCache0;
		NullCheck(L_35);
		bool L_36 = Hashtable_ContainsKey_mB35F90B41D0093E4AFB031B2B60789F768CB3252(L_35, (uint8_t)((int32_t)250), /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_013b;
		}
	}
	{
		// this.propertiesListedInLobby = propertiesToCache[GamePropertyKey.PropsListedInLobby] as string[];
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_37 = ___propertiesToCache0;
		NullCheck(L_37);
		RuntimeObject * L_38 = Hashtable_get_Item_m098DDEBFA01852E9CB2D142664C3C5995D870B92(L_37, (uint8_t)((int32_t)250), /*hidden argument*/NULL);
		__this->set_propertiesListedInLobby_11(((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)IsInst((RuntimeObject*)L_38, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var)));
	}

IL_013b:
	{
		// if (propertiesToCache.ContainsKey((byte)GamePropertyKey.ExpectedUsers))
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_39 = ___propertiesToCache0;
		NullCheck(L_39);
		bool L_40 = Hashtable_ContainsKey_mB35F90B41D0093E4AFB031B2B60789F768CB3252(L_39, (uint8_t)((int32_t)247), /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_015e;
		}
	}
	{
		// this.expectedUsers = (string[])propertiesToCache[GamePropertyKey.ExpectedUsers];
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_41 = ___propertiesToCache0;
		NullCheck(L_41);
		RuntimeObject * L_42 = Hashtable_get_Item_m098DDEBFA01852E9CB2D142664C3C5995D870B92(L_41, (uint8_t)((int32_t)247), /*hidden argument*/NULL);
		__this->set_expectedUsers_5(((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)Castclass((RuntimeObject*)L_42, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var)));
	}

IL_015e:
	{
		// if (propertiesToCache.ContainsKey((byte)GamePropertyKey.EmptyRoomTtl))
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_43 = ___propertiesToCache0;
		NullCheck(L_43);
		bool L_44 = Hashtable_ContainsKey_mB35F90B41D0093E4AFB031B2B60789F768CB3252(L_43, (uint8_t)((int32_t)245), /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0181;
		}
	}
	{
		// this.emptyRoomTtl = (int)propertiesToCache[GamePropertyKey.EmptyRoomTtl];
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_45 = ___propertiesToCache0;
		NullCheck(L_45);
		RuntimeObject * L_46 = Hashtable_get_Item_m098DDEBFA01852E9CB2D142664C3C5995D870B92(L_45, (uint8_t)((int32_t)245), /*hidden argument*/NULL);
		__this->set_emptyRoomTtl_3(((*(int32_t*)((int32_t*)UnBox(L_46, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))));
	}

IL_0181:
	{
		// if (propertiesToCache.ContainsKey((byte)GamePropertyKey.PlayerTtl))
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_47 = ___propertiesToCache0;
		NullCheck(L_47);
		bool L_48 = Hashtable_ContainsKey_mB35F90B41D0093E4AFB031B2B60789F768CB3252(L_47, (uint8_t)((int32_t)246), /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_01a4;
		}
	}
	{
		// this.playerTtl = (int)propertiesToCache[GamePropertyKey.PlayerTtl];
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_49 = ___propertiesToCache0;
		NullCheck(L_49);
		RuntimeObject * L_50 = Hashtable_get_Item_m098DDEBFA01852E9CB2D142664C3C5995D870B92(L_49, (uint8_t)((int32_t)246), /*hidden argument*/NULL);
		__this->set_playerTtl_4(((*(int32_t*)((int32_t*)UnBox(L_50, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))));
	}

IL_01a4:
	{
		// this.customProperties.MergeStringKeys(propertiesToCache);
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_51 = __this->get_customProperties_1();
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_52 = ___propertiesToCache0;
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_t17EF958E5F2414F822246B79B7D985713AACE5CE_il2cpp_TypeInfo_var);
		Extensions_MergeStringKeys_mDCDF6621E96473D5021BFCEC97B22804F387951A(L_51, L_52, /*hidden argument*/NULL);
		// this.customProperties.StripKeysWithNullValues();
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_53 = __this->get_customProperties_1();
		Extensions_StripKeysWithNullValues_m6143A9F1A4D7B67174FC0FDCF01A7203A9E5F332(L_53, /*hidden argument*/NULL);
		// }
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
// System.Boolean Photon.Realtime.RoomOptions::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_IsVisible_mEBC48A6E7D7A0422A0CEA3A4AD339EA8B7061976 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		bool L_0 = __this->get_isVisible_0();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_IsVisible_mC18F0091F40004E92A6B0D65DADE6B8ACE4FC4AC (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		bool L_0 = ___value0;
		__this->set_isVisible_0(L_0);
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_IsOpen_m63600C2FCC2227779869060317764624F9536147 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsOpen { get { return this.isOpen; } set { this.isOpen = value; } }
		bool L_0 = __this->get_isOpen_1();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_IsOpen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_IsOpen_mB8FC22B596C9CD2534DB1F5911B352D9FC73F031 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsOpen { get { return this.isOpen; } set { this.isOpen = value; } }
		bool L_0 = ___value0;
		__this->set_isOpen_1(L_0);
		// public bool IsOpen { get { return this.isOpen; } set { this.isOpen = value; } }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_CleanupCacheOnLeave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_CleanupCacheOnLeave_m5BC86AE25FB6DCE474527C5FDB7363F1212C120B (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool CleanupCacheOnLeave { get { return this.cleanupCacheOnLeave; } set { this.cleanupCacheOnLeave = value; } }
		bool L_0 = __this->get_cleanupCacheOnLeave_5();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_CleanupCacheOnLeave(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_CleanupCacheOnLeave_mC9C34F080C4EDFD2FF80D959CAEC057DC619D48B (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool CleanupCacheOnLeave { get { return this.cleanupCacheOnLeave; } set { this.cleanupCacheOnLeave = value; } }
		bool L_0 = ___value0;
		__this->set_cleanupCacheOnLeave_5(L_0);
		// public bool CleanupCacheOnLeave { get { return this.cleanupCacheOnLeave; } set { this.cleanupCacheOnLeave = value; } }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_SuppressRoomEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_SuppressRoomEvents_mD4FCCD8AFF0DD842C04BA3D385FF0F9A128D1F50 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool SuppressRoomEvents { get; set; }
		bool L_0 = __this->get_U3CSuppressRoomEventsU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_SuppressRoomEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_SuppressRoomEvents_mDE84DE82AACEB351CC93E17B781149D52E97DB1E (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SuppressRoomEvents { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CSuppressRoomEventsU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_SuppressPlayerInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_SuppressPlayerInfo_m25F8E52B788198E3F4DBDC4988B225957BD5F8D0 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool SuppressPlayerInfo { get; set; }
		bool L_0 = __this->get_U3CSuppressPlayerInfoU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_SuppressPlayerInfo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_SuppressPlayerInfo_m07D1B5C515E6AFE7F3625D39FA1532DF1D8B4C04 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SuppressPlayerInfo { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CSuppressPlayerInfoU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_PublishUserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_PublishUserId_mEFF1EA9F5F3310DCED3A7BF9DE99174274DC5766 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishUserId { get; set; }
		bool L_0 = __this->get_U3CPublishUserIdU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_PublishUserId(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_PublishUserId_m2D2C26B98C031D132D3A7D450299BE55EBE2DE12 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishUserId { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishUserIdU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_DeleteNullProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_DeleteNullProperties_m63EDCA05FFC2792D99F87A8BCB52F8D535236277 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool DeleteNullProperties { get; set; }
		bool L_0 = __this->get_U3CDeleteNullPropertiesU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_DeleteNullProperties(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_DeleteNullProperties_mD834C5A7E29312EAEBDE491AD005FCD7C4983AF2 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool DeleteNullProperties { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CDeleteNullPropertiesU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_BroadcastPropsChangeToAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_BroadcastPropsChangeToAll_m148AB75D5E3A17B735D739B8C2217DA72774BE99 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool BroadcastPropsChangeToAll { get { return this.broadcastPropsChangeToAll; } set { this.broadcastPropsChangeToAll = value; } }
		bool L_0 = __this->get_broadcastPropsChangeToAll_13();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_BroadcastPropsChangeToAll(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_BroadcastPropsChangeToAll_m79EAEFCFEB7472FDD91FD10152BB60F6A1F0C9E7 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool BroadcastPropsChangeToAll { get { return this.broadcastPropsChangeToAll; } set { this.broadcastPropsChangeToAll = value; } }
		bool L_0 = ___value0;
		__this->set_broadcastPropsChangeToAll_13(L_0);
		// public bool BroadcastPropsChangeToAll { get { return this.broadcastPropsChangeToAll; } set { this.broadcastPropsChangeToAll = value; } }
		return;
	}
}
// System.Void Photon.Realtime.RoomOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions__ctor_m254044C6ACFBFED793E00A41DF8E76F953EE16CF (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomOptions__ctor_m254044C6ACFBFED793E00A41DF8E76F953EE16CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool isVisible = true;
		__this->set_isVisible_0((bool)1);
		// private bool isOpen = true;
		__this->set_isOpen_1((bool)1);
		// private bool cleanupCacheOnLeave = true;
		__this->set_cleanupCacheOnLeave_5((bool)1);
		// public string[] CustomRoomPropertiesForLobby = new string[0];
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_CustomRoomPropertiesForLobby_7(L_0);
		// private bool broadcastPropsChangeToAll = true;
		__this->set_broadcastPropsChangeToAll_13((bool)1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// Photon.Realtime.LoadBalancingClient Photon.Realtime.SupportLogger::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * SupportLogger_get_Client_mB26343CDA21A09F3EA30AD740275EAFC083D52B7 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	{
		// get { return this.client; }
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_client_6();
		return L_0;
	}
}
// System.Void Photon.Realtime.SupportLogger::set_Client(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_set_Client_m166B9D97ABDFAA4A8E7792F8C8861BE4C7193976 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___value0, const RuntimeMethod* method)
{
	{
		// if (this.client != value)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_client_6();
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_1 = ___value0;
		if ((((RuntimeObject*)(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A *)L_0) == ((RuntimeObject*)(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A *)L_1)))
		{
			goto IL_0038;
		}
	}
	{
		// if (this.client != null)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_2 = __this->get_client_6();
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// this.client.RemoveCallbackTarget(this);
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_3 = __this->get_client_6();
		NullCheck(L_3);
		LoadBalancingClient_RemoveCallbackTarget_mA166E163D02518ED621B80E8F07B31FFE79507A0(L_3, __this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// this.client = value;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_4 = ___value0;
		__this->set_client_6(L_4);
		// if (this.client != null)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_5 = __this->get_client_6();
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// this.client.AddCallbackTarget(this);
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_6 = __this->get_client_6();
		NullCheck(L_6);
		LoadBalancingClient_AddCallbackTarget_m17553A4C53D4BC96DF74BD3DFE8D8487E3B52565(L_6, __this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_Start_m1198B8A81F90188616E5942DCA38D0D79A8C7479 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_Start_m1198B8A81F90188616E5942DCA38D0D79A8C7479_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.LogBasics();
		SupportLogger_LogBasics_m1DD18EAF9701CABB4D230E939DC67A471B2C4B13(__this, /*hidden argument*/NULL);
		// if (this.startStopwatch == null)
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_0 = __this->get_startStopwatch_7();
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// this.startStopwatch = new Stopwatch();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_1 = (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 *)il2cpp_codegen_object_new(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860(L_1, /*hidden argument*/NULL);
		__this->set_startStopwatch_7(L_1);
		// this.startStopwatch.Start();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_2 = __this->get_startStopwatch_7();
		NullCheck(L_2);
		Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A(L_2, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnDestroy_mC575E99F950D013A32C69E9E598031E9CC82813E (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	{
		// this.Client = null; // will remove this SupportLogger as callback target
		SupportLogger_set_Client_m166B9D97ABDFAA4A8E7792F8C8861BE4C7193976(__this, (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnApplicationPause_m394AE8B8288BFCE03DD16287100911E4D922E01B (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, bool ___pause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnApplicationPause_m394AE8B8288BFCE03DD16287100911E4D922E01B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B2_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B1_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B3_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B3_3 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnApplicationPause: " + pause + " connected: " + (this.client == null ? "no (client is null)" : this.client.IsConnected.ToString()));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral98D82A5FBE2C48A4BA7D23C09B325D465EC799DC);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral98D82A5FBE2C48A4BA7D23C09B325D465EC799DC);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		String_t* L_5 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)(&___pause0), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral0BCAE45D8ADAB414DB38EA02F9292623B445C753);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral0BCAE45D8ADAB414DB38EA02F9292623B445C753);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_8 = __this->get_client_6();
		G_B1_0 = 4;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		if (!L_8)
		{
			G_B2_0 = 4;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			goto IL_0048;
		}
	}
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_9 = __this->get_client_6();
		NullCheck(L_9);
		bool L_10 = LoadBalancingClient_get_IsConnected_m90DAE8B064E99BA87DC5CDAC811D38647D468C2C(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_11;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_004d;
	}

IL_0048:
	{
		G_B3_0 = _stringLiteral6225D10150959CD938D74A90F50B22692B0A017E;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_004d:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		String_t* L_12 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(G_B3_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnApplicationQuit_mF14FE14659F54814A80D0DDCA9A8FFEC532CEC81 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	{
		// this.CancelInvoke();
		MonoBehaviour_CancelInvoke_m6ACF5FC83F8FE5A6E744CE1E83A94CB3B0A8B7EF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StartLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartLogStats_m973A1BFAAB04C8F0F9568E1A281C6EE553384610 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_StartLogStats_m973A1BFAAB04C8F0F9568E1A281C6EE553384610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.InvokeRepeating("LogStats", 10, 10);
		MonoBehaviour_InvokeRepeating_m99F21547D281B3F835745B681E5472F070E7E593(__this, _stringLiteral97CBBD581FE6B5A33E6750E4AAF42F61118114AE, (10.0f), (10.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StopLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopLogStats_m5EA95B7B9DD9BEB62FCB674FBDED85DB910C3B06 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_StopLogStats_m5EA95B7B9DD9BEB62FCB674FBDED85DB910C3B06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.CancelInvoke("LogStats");
		MonoBehaviour_CancelInvoke_mDD95225EF4DFBB8C00B865468DE8AFEB5D30490F(__this, _stringLiteral97CBBD581FE6B5A33E6750E4AAF42F61118114AE, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StartTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartTrackValues_mCCA9284BFA342F2822E786C069773B61ED626F55 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_StartTrackValues_mCCA9284BFA342F2822E786C069773B61ED626F55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.InvokeRepeating("TrackValues", 0.5f, 0.5f);
		MonoBehaviour_InvokeRepeating_m99F21547D281B3F835745B681E5472F070E7E593(__this, _stringLiteral747F36852E16310ED684572F30D34B6FF654D27C, (0.5f), (0.5f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StopTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopTrackValues_m0806BA608466711C295BC23883AFAF6AEE153CB4 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_StopTrackValues_m0806BA608466711C295BC23883AFAF6AEE153CB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.CancelInvoke("TrackValues");
		MonoBehaviour_CancelInvoke_mDD95225EF4DFBB8C00B865468DE8AFEB5D30490F(__this, _stringLiteral747F36852E16310ED684572F30D34B6FF654D27C, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Photon.Realtime.SupportLogger::GetFormattedTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (this.startStopwatch == null)
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_0 = __this->get_startStopwatch_7();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// this.startStopwatch = new Stopwatch();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_1 = (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 *)il2cpp_codegen_object_new(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860(L_1, /*hidden argument*/NULL);
		__this->set_startStopwatch_7(L_1);
		// this.startStopwatch.Start();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_2 = __this->get_startStopwatch_7();
		NullCheck(L_2);
		Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A(L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// TimeSpan span = this.startStopwatch.Elapsed;
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_3 = __this->get_startStopwatch_7();
		NullCheck(L_3);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_4 = Stopwatch_get_Elapsed_m6735B32BFB466FC4F52112AC3493D37404D184BB(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (span.Minutes > 0)
		int32_t L_5 = TimeSpan_get_Minutes_mCABF9EE7E7F78368DA0F825F5922C06238DD0F22((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_0), /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		// return string.Format("[{0}:{1}.{1}]", span.Minutes, span.Seconds, span.Milliseconds);
		int32_t L_6 = TimeSpan_get_Minutes_mCABF9EE7E7F78368DA0F825F5922C06238DD0F22((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		int32_t L_9 = TimeSpan_get_Seconds_m33764DE0DB67C2D1A2654BEE31E379A13571EED8((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		int32_t L_12 = TimeSpan_get_Milliseconds_m03218976DBB2BBDFB8B7F8A7F9452C19096312CA((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteralD235E051250AE16885534E940FDD36CA13FD2D20, L_8, L_11, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_0063:
	{
		// return string.Format("[{0}.{1}]", span.Seconds, span.Milliseconds);
		int32_t L_16 = TimeSpan_get_Seconds_m33764DE0DB67C2D1A2654BEE31E379A13571EED8((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_17);
		int32_t L_19 = TimeSpan_get_Milliseconds_m03218976DBB2BBDFB8B7F8A7F9452C19096312CA((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6ED81047DEAE3CCB5B374374798282C7FA029B8E, L_18, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void Photon.Realtime.SupportLogger::TrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_TrackValues_m66D40C21DDFC4AA2988C44ACAF53AE3FE76FC39C (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (this.client != null)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_client_6();
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// int currentRtt = this.client.LoadBalancingPeer.RoundTripTime;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_1 = __this->get_client_6();
		NullCheck(L_1);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_2 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = PhotonPeer_get_RoundTripTime_mDEEE3B7774DB5D2F014B77A1A6FEAF5214186CBD(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (currentRtt > this.pingMax)
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_pingMax_8();
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		// this.pingMax = currentRtt;
		int32_t L_6 = V_0;
		__this->set_pingMax_8(L_6);
	}

IL_0029:
	{
		// if (currentRtt < this.pingMin)
		int32_t L_7 = V_0;
		int32_t L_8 = __this->get_pingMin_9();
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0039;
		}
	}
	{
		// this.pingMin = currentRtt;
		int32_t L_9 = V_0;
		__this->set_pingMin_9(L_9);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::LogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogStats_m420DC4631D59DCE0F7D33C3146C8688D08C54F94 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_LogStats_m420DC4631D59DCE0F7D33C3146C8688D08C54F94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.client == null || this.client.State == ClientState.PeerCreated)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_client_6();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_1 = __this->get_client_6();
		NullCheck(L_1);
		int32_t L_2 = LoadBalancingClient_get_State_mDCC22D02A85973C68623C764C96BE9A862C8BD11_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// return;
		return;
	}

IL_0016:
	{
		// if (this.LogTrafficStats)
		bool L_3 = __this->get_LogTrafficStats_4();
		if (!L_3)
		{
			goto IL_007f;
		}
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger " + this.client.LoadBalancingPeer.VitalStatsToString(false) + " Ping min/max: " + this.pingMin + "/" + this.pingMax);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		String_t* L_6 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralCEB032786FD44DA7017F3BA777F0F12B63B3BE37);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralCEB032786FD44DA7017F3BA777F0F12B63B3BE37);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_9 = __this->get_client_6();
		NullCheck(L_9);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_10 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = PhotonPeer_VitalStatsToString_m230B20CE3B83C2D312814263718B776EADB9BE65(L_10, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_8;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral6C8EE3675EEC14F86A361B84718313E2562E573C);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral6C8EE3675EEC14F86A361B84718313E2562E573C);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_12;
		int32_t L_14 = __this->get_pingMin_9();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_16);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_13;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_17;
		int32_t L_19 = __this->get_pingMax_8();
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_21);
		String_t* L_22 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_22, /*hidden argument*/NULL);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::LogBasics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogBasics_m1DD18EAF9701CABB4D230E939DC67A471B2C4B13 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_LogBasics_m1DD18EAF9701CABB4D230E939DC67A471B2C4B13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * V_0 = NULL;
	StringBuilder_t * V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint8_t V_4 = 0;
	String_t* G_B5_0 = NULL;
	int32_t G_B11_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B11_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B11_2 = NULL;
	String_t* G_B11_3 = NULL;
	StringBuilder_t * G_B11_4 = NULL;
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B10_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B10_2 = NULL;
	String_t* G_B10_3 = NULL;
	StringBuilder_t * G_B10_4 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B12_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B12_3 = NULL;
	String_t* G_B12_4 = NULL;
	StringBuilder_t * G_B12_5 = NULL;
	{
		// if (this.client != null)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_client_6();
		if (!L_0)
		{
			goto IL_0267;
		}
	}
	{
		// List<string> buildProperties = new List<string>(10);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_1 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mE495502B9607C6FB122449BE5BCE1231C1A205A4(L_1, ((int32_t)10), /*hidden argument*/List_1__ctor_mE495502B9607C6FB122449BE5BCE1231C1A205A4_RuntimeMethod_var);
		V_0 = L_1;
		// buildProperties.Add(Application.unityVersion);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_2 = V_0;
		String_t* L_3 = Application_get_unityVersion_mC66901DE17E8F4F5BCA46CF3A4DCB34AF245CF99(/*hidden argument*/NULL);
		NullCheck(L_2);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_2, L_3, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		// buildProperties.Add(Application.platform.ToString());
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_4 = V_0;
		int32_t L_5 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		V_3 = L_5;
		RuntimeObject * L_6 = Box(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		V_3 = *(int32_t*)UnBox(L_6);
		NullCheck(L_4);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_4, L_7, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		// buildProperties.Add("ENABLE_IL2CPP");
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_8 = V_0;
		NullCheck(L_8);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_8, _stringLiteralC42A1C0FCB9F3B03AFF049A971ECB58EF1666A5B, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		// buildProperties.Add("NET_STANDARD_2_0");
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_9 = V_0;
		NullCheck(L_9);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_9, _stringLiteral5EBA78122894069C857A70206B4375C6198B3192, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t * L_10 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_10, /*hidden argument*/NULL);
		V_1 = L_10;
		// string appIdShort = string.IsNullOrEmpty(this.client.AppId) || this.client.AppId.Length < 8 ? this.client.AppId : string.Concat(this.client.AppId.Substring(0, 8), "***");
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_11 = __this->get_client_6();
		NullCheck(L_11);
		String_t* L_12 = LoadBalancingClient_get_AppId_m49A1261CC79356CABF9A709AAC4674B406ECA1DD_inline(L_11, /*hidden argument*/NULL);
		bool L_13 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0096;
		}
	}
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_14 = __this->get_client_6();
		NullCheck(L_14);
		String_t* L_15 = LoadBalancingClient_get_AppId_m49A1261CC79356CABF9A709AAC4674B406ECA1DD_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) < ((int32_t)8)))
		{
			goto IL_0096;
		}
	}
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_17 = __this->get_client_6();
		NullCheck(L_17);
		String_t* L_18 = LoadBalancingClient_get_AppId_m49A1261CC79356CABF9A709AAC4674B406ECA1DD_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_18, 0, 8, /*hidden argument*/NULL);
		String_t* L_20 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_19, _stringLiteral36C3EAA0E1E290F41E2810BAE8D9502C785E92D9, /*hidden argument*/NULL);
		G_B5_0 = L_20;
		goto IL_00a1;
	}

IL_0096:
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_21 = __this->get_client_6();
		NullCheck(L_21);
		String_t* L_22 = LoadBalancingClient_get_AppId_m49A1261CC79356CABF9A709AAC4674B406ECA1DD_inline(L_21, /*hidden argument*/NULL);
		G_B5_0 = L_22;
	}

IL_00a1:
	{
		V_2 = G_B5_0;
		// sb.AppendFormat("{0} SupportLogger Info: ", this.GetFormattedTimestamp());
		StringBuilder_t * L_23 = V_1;
		String_t* L_24 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_23, _stringLiteral7CEE29B46B3ED2F432C4A7B3A8DE12CAEB5D44D7, L_24, /*hidden argument*/NULL);
		// sb.AppendFormat("AppID: \"{0}\" AppVersion: \"{1}\" Client: v{2} ({4}) Build: {3} ", appIdShort, this.client.AppVersion, PhotonPeer.Version, string.Join(", ", buildProperties.ToArray()), this.client.LoadBalancingPeer.TargetFramework);
		StringBuilder_t * L_25 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = L_26;
		String_t* L_28 = V_2;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_28);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_29 = L_27;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_30 = __this->get_client_6();
		NullCheck(L_30);
		String_t* L_31 = LoadBalancingClient_get_AppVersion_m2D816CED5CD4B71B47C03B33D2C5DFAE08997B9D_inline(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_31);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = L_29;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086_il2cpp_TypeInfo_var);
		String_t* L_33 = PhotonPeer_get_Version_m8BA341A3A76F1F018248F88782367D9B30FFA94B(/*hidden argument*/NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_33);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_34 = L_32;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_35 = V_0;
		NullCheck(L_35);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_36 = List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38(L_35, /*hidden argument*/List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38_RuntimeMethod_var);
		String_t* L_37 = String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4(_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, L_36, /*hidden argument*/NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_37);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_38 = L_34;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_39 = __this->get_client_6();
		NullCheck(L_39);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_40 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		int32_t L_41 = ((PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086 *)L_40)->get_TargetFramework_8();
		int32_t L_42 = L_41;
		RuntimeObject * L_43 = Box(TargetFrameworks_t34C34F5EFFC27A4D9A6230FE2258976262663F31_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_43);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_43);
		NullCheck(L_25);
		StringBuilder_AppendFormat_m23742FE1E3C60341F37C243EB6BEE06AE444C774(L_25, _stringLiteralD017C5EA410EE280D7562FF84CE6D01E2D440ED1, L_38, /*hidden argument*/NULL);
		// if (this.client != null && this.client.LoadBalancingPeer != null && this.client.LoadBalancingPeer.SocketImplementation != null)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_44 = __this->get_client_6();
		if (!L_44)
		{
			goto IL_0159;
		}
	}
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_45 = __this->get_client_6();
		NullCheck(L_45);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_46 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0159;
		}
	}
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_47 = __this->get_client_6();
		NullCheck(L_47);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_48 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		Type_t * L_49 = PhotonPeer_get_SocketImplementation_mB351931E3AD33A2EEB0866215358D2D0A20E3556_inline(L_48, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_50 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_49, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0159;
		}
	}
	{
		// sb.AppendFormat("Socket: {0} ", this.client.LoadBalancingPeer.SocketImplementation.Name);
		StringBuilder_t * L_51 = V_1;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_52 = __this->get_client_6();
		NullCheck(L_52);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_53 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		Type_t * L_54 = PhotonPeer_get_SocketImplementation_mB351931E3AD33A2EEB0866215358D2D0A20E3556_inline(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		String_t* L_55 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_54);
		NullCheck(L_51);
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_51, _stringLiteral031E1E51C21ED3E865BC483E1AB65FD236DAE901, L_55, /*hidden argument*/NULL);
	}

IL_0159:
	{
		// sb.AppendFormat("UserId: \"{0}\" AuthType: {1} AuthMode: {2} {3} ", this.client.UserId, (this.client.AuthValues != null) ? this.client.AuthValues.AuthType.ToString() : "N/A", this.client.AuthMode, this.client.EncryptionMode);
		StringBuilder_t * L_56 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_57 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_58 = L_57;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_59 = __this->get_client_6();
		NullCheck(L_59);
		String_t* L_60 = LoadBalancingClient_get_UserId_mE44D3E9907F0B72F57E8D6CBF3A0E80B07064AA8(L_59, /*hidden argument*/NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_60);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_60);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_61 = L_58;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_62 = __this->get_client_6();
		NullCheck(L_62);
		AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * L_63 = LoadBalancingClient_get_AuthValues_mE56B5ADE8CC0EBB1CB9C5DFA64913AC5B36B7F02_inline(L_62, /*hidden argument*/NULL);
		G_B10_0 = 1;
		G_B10_1 = L_61;
		G_B10_2 = L_61;
		G_B10_3 = _stringLiteral9011E4E84DD86E01B4E886AF91734474A9DB3E2E;
		G_B10_4 = L_56;
		if (L_63)
		{
			G_B11_0 = 1;
			G_B11_1 = L_61;
			G_B11_2 = L_61;
			G_B11_3 = _stringLiteral9011E4E84DD86E01B4E886AF91734474A9DB3E2E;
			G_B11_4 = L_56;
			goto IL_0189;
		}
	}
	{
		G_B12_0 = _stringLiteral08D2E98E6754AF941484848930CCBADDFEFE13D6;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		G_B12_4 = G_B10_3;
		G_B12_5 = G_B10_4;
		goto IL_01a8;
	}

IL_0189:
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_64 = __this->get_client_6();
		NullCheck(L_64);
		AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * L_65 = LoadBalancingClient_get_AuthValues_mE56B5ADE8CC0EBB1CB9C5DFA64913AC5B36B7F02_inline(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		uint8_t L_66 = AuthenticationValues_get_AuthType_m7644167D1D9D4B1EB47E98BF5FDA05D1B3F1770A_inline(L_65, /*hidden argument*/NULL);
		V_4 = L_66;
		RuntimeObject * L_67 = Box(CustomAuthenticationType_t911A058D44AC5F98005B9297CFCDB1EE853AE2F5_il2cpp_TypeInfo_var, (&V_4));
		NullCheck(L_67);
		String_t* L_68 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_67);
		V_4 = *(uint8_t*)UnBox(L_67);
		G_B12_0 = L_68;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
		G_B12_4 = G_B11_3;
		G_B12_5 = G_B11_4;
	}

IL_01a8:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (RuntimeObject *)G_B12_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_69 = G_B12_3;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_70 = __this->get_client_6();
		NullCheck(L_70);
		int32_t L_71 = L_70->get_AuthMode_5();
		int32_t L_72 = L_71;
		RuntimeObject * L_73 = Box(AuthModeOption_tD09E4DA95C4EC0B4CC7EFC735D512F177EC4F829_il2cpp_TypeInfo_var, &L_72);
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_73);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_73);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_74 = L_69;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_75 = __this->get_client_6();
		NullCheck(L_75);
		int32_t L_76 = L_75->get_EncryptionMode_6();
		int32_t L_77 = L_76;
		RuntimeObject * L_78 = Box(EncryptionMode_t5BA959815A4DD1ABC4458E9951E81CB988CBE1F3_il2cpp_TypeInfo_var, &L_77);
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_78);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_78);
		NullCheck(G_B12_5);
		StringBuilder_AppendFormat_m23742FE1E3C60341F37C243EB6BEE06AE444C774(G_B12_5, G_B12_4, L_74, /*hidden argument*/NULL);
		// sb.AppendFormat("State: {0} ", this.client.State);
		StringBuilder_t * L_79 = V_1;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_80 = __this->get_client_6();
		NullCheck(L_80);
		int32_t L_81 = LoadBalancingClient_get_State_mDCC22D02A85973C68623C764C96BE9A862C8BD11_inline(L_80, /*hidden argument*/NULL);
		int32_t L_82 = L_81;
		RuntimeObject * L_83 = Box(ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282_il2cpp_TypeInfo_var, &L_82);
		NullCheck(L_79);
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_79, _stringLiteral63B3DB3EDFFE8E5BD1C358E6F9795D27086FEA91, L_83, /*hidden argument*/NULL);
		// sb.AppendFormat("PeerID: {0} ", this.client.LoadBalancingPeer.PeerID);
		StringBuilder_t * L_84 = V_1;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_85 = __this->get_client_6();
		NullCheck(L_85);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_86 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_85, /*hidden argument*/NULL);
		NullCheck(L_86);
		String_t* L_87 = PhotonPeer_get_PeerID_m6D746100DE276D694D2C62099B1C11955523296B(L_86, /*hidden argument*/NULL);
		NullCheck(L_84);
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_84, _stringLiteral78A99AC35589D8FC77F6FEB59EE7E55956BB35AE, L_87, /*hidden argument*/NULL);
		// sb.AppendFormat("NameServer: {0} Current Server: {1} IP: {2} Region: {3} ", this.client.NameServerHost, this.client.CurrentServerAddress, this.client.LoadBalancingPeer.ServerIpAddress, this.client.CloudRegion);
		StringBuilder_t * L_88 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_89 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_90 = L_89;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_91 = __this->get_client_6();
		NullCheck(L_91);
		String_t* L_92 = L_91->get_NameServerHost_10();
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, L_92);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_92);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_93 = L_90;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_94 = __this->get_client_6();
		NullCheck(L_94);
		String_t* L_95 = LoadBalancingClient_get_CurrentServerAddress_m617D5473B405AA52AA10EBC3FB8CEC4E65252A02(L_94, /*hidden argument*/NULL);
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, L_95);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_95);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_96 = L_93;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_97 = __this->get_client_6();
		NullCheck(L_97);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_98 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_97, /*hidden argument*/NULL);
		NullCheck(L_98);
		String_t* L_99 = PhotonPeer_get_ServerIpAddress_mC3A104C2821543B2E4F64BF5287C12EF32DBF373(L_98, /*hidden argument*/NULL);
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, L_99);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_99);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_100 = L_96;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_101 = __this->get_client_6();
		NullCheck(L_101);
		String_t* L_102 = LoadBalancingClient_get_CloudRegion_m0AAC37B5520321CC88C90C625E56EBEC822C3DEB_inline(L_101, /*hidden argument*/NULL);
		NullCheck(L_100);
		ArrayElementTypeCheck (L_100, L_102);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_102);
		NullCheck(L_88);
		StringBuilder_AppendFormat_m23742FE1E3C60341F37C243EB6BEE06AE444C774(L_88, _stringLiteral342CA6CAFC4C39E17B7E56F6FF13F6FED12AB1E3, L_100, /*hidden argument*/NULL);
		// Debug.LogWarning(sb.ToString());
		StringBuilder_t * L_103 = V_1;
		NullCheck(L_103);
		String_t* L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_103);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_104, /*hidden argument*/NULL);
	}

IL_0267:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnConnected_mA89BCA9B3319032CF17DEB3BE76B87AA54C06C76 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnConnected_mA89BCA9B3319032CF17DEB3BE76B87AA54C06C76_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnConnected().");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteralAF2F0CEF3FB17E9F3FFB6676C1CF10F475D85565, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// this.pingMax = 0;
		__this->set_pingMax_8(0);
		// this.pingMin = this.client.LoadBalancingPeer.RoundTripTime;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_2 = __this->get_client_6();
		NullCheck(L_2);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_3 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = PhotonPeer_get_RoundTripTime_mDEEE3B7774DB5D2F014B77A1A6FEAF5214186CBD(L_3, /*hidden argument*/NULL);
		__this->set_pingMin_9(L_4);
		// this.LogBasics();
		SupportLogger_LogBasics_m1DD18EAF9701CABB4D230E939DC67A471B2C4B13(__this, /*hidden argument*/NULL);
		// if (this.LogTrafficStats)
		bool L_5 = __this->get_LogTrafficStats_4();
		if (!L_5)
		{
			goto IL_0068;
		}
	}
	{
		// this.client.LoadBalancingPeer.TrafficStatsEnabled = false;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_6 = __this->get_client_6();
		NullCheck(L_6);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_7 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		PhotonPeer_set_TrafficStatsEnabled_mB05E6958B3B788D3F8A75DAA10D91A5DFDBE713E(L_7, (bool)0, /*hidden argument*/NULL);
		// this.client.LoadBalancingPeer.TrafficStatsEnabled = true;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_8 = __this->get_client_6();
		NullCheck(L_8);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_9 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		PhotonPeer_set_TrafficStatsEnabled_mB05E6958B3B788D3F8A75DAA10D91A5DFDBE713E(L_9, (bool)1, /*hidden argument*/NULL);
		// this.StartLogStats();
		SupportLogger_StartLogStats_m973A1BFAAB04C8F0F9568E1A281C6EE553384610(__this, /*hidden argument*/NULL);
	}

IL_0068:
	{
		// this.StartTrackValues();
		SupportLogger_StartTrackValues_mCCA9284BFA342F2822E786C069773B61ED626F55(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnConnectedToMaster_mF52A4381DCC7C6CE19F3451D539020E39B2A11C4 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnConnectedToMaster_mF52A4381DCC7C6CE19F3451D539020E39B2A11C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnConnectedToMaster().");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteralB32938589EB53DCC2BAD4055BB5EEBD4496BF09A, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnFriendListUpdate(System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnFriendListUpdate_mB422AD317F908DDCA99272016652A88A22FBAF47 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662 * ___friendList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnFriendListUpdate_mB422AD317F908DDCA99272016652A88A22FBAF47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnFriendListUpdate(friendList).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral65B5AA8DFF1B2E90A2D050D4B6B198EFD82D674E, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinedLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinedLobby_m3F1EFC503B05CA5A2410C4B5FF08405E6A4ECB2C (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnJoinedLobby_m3F1EFC503B05CA5A2410C4B5FF08405E6A4ECB2C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinedLobby(" + this.client.CurrentLobby + ").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral601FC93C20392B20EEB3C9F37859C622C0D151DF);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral601FC93C20392B20EEB3C9F37859C622C0D151DF);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_5 = __this->get_client_6();
		NullCheck(L_5);
		TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * L_6 = LoadBalancingClient_get_CurrentLobby_mA012C41E1DF7DF53F0CF4A024C9E0FABDDDC2456_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_8 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLeftLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLeftLobby_m33D2D8A6305BA65C80658D8B0AC3DADB7FAEC419 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnLeftLobby_m33D2D8A6305BA65C80658D8B0AC3DADB7FAEC419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLeftLobby().");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral8BA5EF7D138B70C6CE8ACA51A43081AB53BB3ABD, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCreateRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCreateRoomFailed_mE38FC7667E7002A91626809317BECD47D71FDCCF (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnCreateRoomFailed_mE38FC7667E7002A91626809317BECD47D71FDCCF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCreateRoomFailed(" + returnCode+","+message+").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral7D53C873D226A601A9783CBEBEB7B758ABE2D2C7);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral7D53C873D226A601A9783CBEBEB7B758ABE2D2C7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		int16_t L_5 = ___returnCode0;
		int16_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_8;
		String_t* L_10 = ___message1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_12 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinedRoom_mB37EE4EAB942E5A6A8890C6FA4E1EB6740E16B82 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnJoinedRoom_mB37EE4EAB942E5A6A8890C6FA4E1EB6740E16B82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinedRoom(" + this.client.CurrentRoom + "). " + this.client.CurrentLobby + " GameServer:" + this.client.GameServerAddress);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral32664F9AA6498F4C645EF8CFF0ECD74680727FE7);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral32664F9AA6498F4C645EF8CFF0ECD74680727FE7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_5 = __this->get_client_6();
		NullCheck(L_5);
		Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * L_6 = LoadBalancingClient_get_CurrentRoom_mA294529AE11CDDF17597FADE478A392B8B534002_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral449A6A793E79A809F30A8DF7B94A45F51C03EAA7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral449A6A793E79A809F30A8DF7B94A45F51C03EAA7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_9 = __this->get_client_6();
		NullCheck(L_9);
		TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * L_10 = LoadBalancingClient_get_CurrentLobby_mA012C41E1DF7DF53F0CF4A024C9E0FABDDDC2456_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral1D3E5829ED7DE70BD79558BB321D57CF75539526);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral1D3E5829ED7DE70BD79558BB321D57CF75539526);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_13 = __this->get_client_6();
		NullCheck(L_13);
		String_t* L_14 = LoadBalancingClient_get_GameServerAddress_m572210F250D42394A3E6E0FAB7E15DBD6EE78E05_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_14);
		String_t* L_15 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinRoomFailed_m3488EE58BF74437B2142A96EBF18DCB6B4B2C48C (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnJoinRoomFailed_m3488EE58BF74437B2142A96EBF18DCB6B4B2C48C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinRoomFailed(" + returnCode+","+message+").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral237C3911F834CBF9FAC59D4A04E783842A1D3CD6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral237C3911F834CBF9FAC59D4A04E783842A1D3CD6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		int16_t L_5 = ___returnCode0;
		int16_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_8;
		String_t* L_10 = ___message1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_12 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinRandomFailed_mAE5ECBF451C6E4FDFE2F85E0DC30F525319D12F0 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnJoinRandomFailed_mAE5ECBF451C6E4FDFE2F85E0DC30F525319D12F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinRandomFailed(" + returnCode+","+message+").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral5E0956988995BA9D8AD545060593EC7593A248E9);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral5E0956988995BA9D8AD545060593EC7593A248E9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		int16_t L_5 = ___returnCode0;
		int16_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_8;
		String_t* L_10 = ___message1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_12 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCreatedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCreatedRoom_mF35AB68837976AC88555409F51F24C21C4A8C2F2 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnCreatedRoom_mF35AB68837976AC88555409F51F24C21C4A8C2F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCreatedRoom(" + this.client.CurrentRoom + "). " + this.client.CurrentLobby + " GameServer:" + this.client.GameServerAddress);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral6E7819832982A4FC237916272FB49CFFA9624FE3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral6E7819832982A4FC237916272FB49CFFA9624FE3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_5 = __this->get_client_6();
		NullCheck(L_5);
		Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * L_6 = LoadBalancingClient_get_CurrentRoom_mA294529AE11CDDF17597FADE478A392B8B534002_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral449A6A793E79A809F30A8DF7B94A45F51C03EAA7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral449A6A793E79A809F30A8DF7B94A45F51C03EAA7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_9 = __this->get_client_6();
		NullCheck(L_9);
		TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * L_10 = LoadBalancingClient_get_CurrentLobby_mA012C41E1DF7DF53F0CF4A024C9E0FABDDDC2456_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral1D3E5829ED7DE70BD79558BB321D57CF75539526);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral1D3E5829ED7DE70BD79558BB321D57CF75539526);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_13 = __this->get_client_6();
		NullCheck(L_13);
		String_t* L_14 = LoadBalancingClient_get_GameServerAddress_m572210F250D42394A3E6E0FAB7E15DBD6EE78E05_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_14);
		String_t* L_15 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLeftRoom_m05D5834FFADC1CCD590D7606819AA48399A3C76F (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnLeftRoom_m05D5834FFADC1CCD590D7606819AA48399A3C76F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLeftRoom().");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral0E894D3036F153E19CBC956B6A5AB40E5B46BFE2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnDisconnected(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnDisconnected_mDE77493509B7A736D17258EABD0BD827843C9950 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnDisconnected_mDE77493509B7A736D17258EABD0BD827843C9950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.StopLogStats();
		SupportLogger_StopLogStats_m5EA95B7B9DD9BEB62FCB674FBDED85DB910C3B06(__this, /*hidden argument*/NULL);
		// this.StopTrackValues();
		SupportLogger_StopTrackValues_m0806BA608466711C295BC23883AFAF6AEE153CB4(__this, /*hidden argument*/NULL);
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnDisconnected(" + cause + ").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralC114B6A8C4FCA0FA33B6A8678C504A97A63EBC26);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralC114B6A8C4FCA0FA33B6A8678C504A97A63EBC26);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		int32_t L_5 = ___cause0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(DisconnectCause_t8A969EFEB0FE2E4ABD5824250D4C9F7941F2650F_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_9 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_9, /*hidden argument*/NULL);
		// this.LogBasics();
		SupportLogger_LogBasics_m1DD18EAF9701CABB4D230E939DC67A471B2C4B13(__this, /*hidden argument*/NULL);
		// this.LogStats();
		SupportLogger_LogStats_m420DC4631D59DCE0F7D33C3146C8688D08C54F94(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRegionListReceived(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRegionListReceived_mC0CEDEA1F7A9B6376FAF45AFEB99FE7F0B36A720 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * ___regionHandler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnRegionListReceived_mC0CEDEA1F7A9B6376FAF45AFEB99FE7F0B36A720_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRegionListReceived(regionHandler).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral10081B2796EBDFF80CF5904ABFDA3DFF44F1D24D, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRoomListUpdate(System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRoomListUpdate_m8268A931B26BA87B2F0B52F6F21A02B76CF7E2F5 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28 * ___roomList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnRoomListUpdate_m8268A931B26BA87B2F0B52F6F21A02B76CF7E2F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRoomListUpdate(roomList). roomList.Count: " + roomList.Count);
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28 * L_1 = ___roomList0;
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m1A59BC22EE5CA9B605AA85BF87051308A8EFE204_inline(L_1, /*hidden argument*/List_1_get_Count_m1A59BC22EE5CA9B605AA85BF87051308A8EFE204_RuntimeMethod_var);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(L_0, _stringLiteral0E181279FE55F2E332C77E81D9AD00F5486D04F9, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerEnteredRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerEnteredRoom_m154F337E9EB056F73C076F87B3D79F7C60203933 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___newPlayer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnPlayerEnteredRoom_m154F337E9EB056F73C076F87B3D79F7C60203933_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerEnteredRoom(" + newPlayer+").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral736FF8E5B8E1C7958551256FA5E5146C75A31C7B);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral736FF8E5B8E1C7958551256FA5E5146C75A31C7B);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_5 = ___newPlayer0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_7 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerLeftRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerLeftRoom_m341B83040EF40500E395885DEE61E6EF45B7FD31 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___otherPlayer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnPlayerLeftRoom_m341B83040EF40500E395885DEE61E6EF45B7FD31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerLeftRoom(" + otherPlayer+").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3850EA0BD3AE76F6C25B67DC9BD76AD54ED52547);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3850EA0BD3AE76F6C25B67DC9BD76AD54ED52547);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_5 = ___otherPlayer0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_7 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRoomPropertiesUpdate_m9222F2B2957516181B236A28EF37CA57425344EC (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * ___propertiesThatChanged0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnRoomPropertiesUpdate_m9222F2B2957516181B236A28EF37CA57425344EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRoomPropertiesUpdate(propertiesThatChanged).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral6936221DCE707D23499D1653D6EE7D2BADFFBAA9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerPropertiesUpdate(Photon.Realtime.Player,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerPropertiesUpdate_mC18A647DD91E6378CB5D20FD5CC9E7769F0EEEF7 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___targetPlayer0, Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * ___changedProps1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnPlayerPropertiesUpdate_mC18A647DD91E6378CB5D20FD5CC9E7769F0EEEF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerPropertiesUpdate(targetPlayer,changedProps).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral6124202FE8A86D323B1C5BC98700503825D454C2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnMasterClientSwitched(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnMasterClientSwitched_m3658AC3899549A5D3788B25BD338CDDA9C842F8D (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___newMasterClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnMasterClientSwitched_m3658AC3899549A5D3788B25BD338CDDA9C842F8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnMasterClientSwitched(" + newMasterClient+").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral263A15B4E3E9E2F4C3E8221AC828274306B13855);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral263A15B4E3E9E2F4C3E8221AC828274306B13855);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_5 = ___newMasterClient0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_7 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCustomAuthenticationResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCustomAuthenticationResponse_mF5F844DB7163FEE64FB92021F75C644C44D2CF35 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnCustomAuthenticationResponse_mF5F844DB7163FEE64FB92021F75C644C44D2CF35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCustomAuthenticationResponse(" + data.ToStringFull()+").");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_1 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_t17EF958E5F2414F822246B79B7D985713AACE5CE_il2cpp_TypeInfo_var);
		String_t* L_2 = Extensions_ToStringFull_m7D5DC29B4341359CC4354664509068EF620E9DCC(L_1, /*hidden argument*/NULL);
		String_t* L_3 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_0, _stringLiteralC5958D312E5DCB60470B5CABD9A95E5F86B42BCB, L_2, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCustomAuthenticationFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCustomAuthenticationFailed_m63D26B6876F0FD3409FD609D7354B59DCA6B6648 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, String_t* ___debugMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnCustomAuthenticationFailed_m63D26B6876F0FD3409FD609D7354B59DCA6B6648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCustomAuthenticationFailed(" + debugMessage+").");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___debugMessage0;
		String_t* L_2 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_0, _stringLiteral4510F0D9271E0DB7D04EB79129742314C93163A9, L_1, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLobbyStatisticsUpdate(System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLobbyStatisticsUpdate_m9224062BC0172E2FE07283717A658EF01153EB68 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459 * ___lobbyStatistics0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnLobbyStatisticsUpdate_m9224062BC0172E2FE07283717A658EF01153EB68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLobbyStatisticsUpdate(lobbyStatistics).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral810A4EA841E283333EDA34AE9D91F1789F061216, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnErrorInfo(Photon.Realtime.ErrorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnErrorInfo_m20D7E6C6F87BF2BA88711037EEC5F34871B55C8D (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, ErrorInfo_t829D1EA10BBE2538E288DC9FAFFCBE91874225D9 * ___errorInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnErrorInfo_m20D7E6C6F87BF2BA88711037EEC5F34871B55C8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(errorInfo.ToString());
		ErrorInfo_t829D1EA10BBE2538E288DC9FAFFCBE91874225D9 * L_0 = ___errorInfo0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger__ctor_m17A4C242A97DE0BC726D88511103F1AB72B49653 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	{
		// public bool LogTrafficStats = true;
		__this->set_LogTrafficStats_4((bool)1);
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
// System.Boolean Photon.Realtime.TypedLobby::get_IsDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypedLobby_get_IsDefault_m9EABBD862010C30DC98DCFAC650D5DE378BDE77C (TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsDefault { get { return string.IsNullOrEmpty(this.Name); } }
		String_t* L_0 = __this->get_Name_0();
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Photon.Realtime.TypedLobby::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__ctor_m00923523872B0E50E15357CBBED9A08D5F944586 (TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * __this, const RuntimeMethod* method)
{
	{
		// internal TypedLobby()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.TypedLobby::.ctor(System.String,Photon.Realtime.LobbyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__ctor_mE5A5B745646CA0B8228EE2B6451B06BBE02D561D (TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * __this, String_t* ___name0, uint8_t ___type1, const RuntimeMethod* method)
{
	{
		// public TypedLobby(string name, LobbyType type)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.Name = name;
		String_t* L_0 = ___name0;
		__this->set_Name_0(L_0);
		// this.Type = type;
		uint8_t L_1 = ___type1;
		__this->set_Type_1(L_1);
		// }
		return;
	}
}
// System.String Photon.Realtime.TypedLobby::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypedLobby_ToString_mA56D3E449966F9879512DB3400679974B80DB5AA (TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobby_ToString_mA56D3E449966F9879512DB3400679974B80DB5AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("lobby '{0}'[{1}]", this.Name, this.Type);
		String_t* L_0 = __this->get_Name_0();
		uint8_t L_1 = __this->get_Type_1();
		uint8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(LobbyType_tC10229382E36CFEC2718583263A711F1C1F35305_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral8227CC0BECA58310D819DA015E3EE6A267F9F559, L_0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Photon.Realtime.TypedLobby::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__cctor_m9A3C3621A62B5E941CBC71894D7318FA30EE84B7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobby__cctor_m9A3C3621A62B5E941CBC71894D7318FA30EE84B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly TypedLobby Default = new TypedLobby();
		TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * L_0 = (TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 *)il2cpp_codegen_object_new(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_il2cpp_TypeInfo_var);
		TypedLobby__ctor_m00923523872B0E50E15357CBBED9A08D5F944586(L_0, /*hidden argument*/NULL);
		((TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_StaticFields*)il2cpp_codegen_static_fields_for(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_il2cpp_TypeInfo_var))->set_Default_2(L_0);
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
// System.String Photon.Realtime.TypedLobbyInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypedLobbyInfo_ToString_m5C7AB7E7308A8603657D1621D9AA98C027BD467C (TypedLobbyInfo_t4ADAD96C3E4BD40D2ADEA6AF8741EB96983D76E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobbyInfo_ToString_m5C7AB7E7308A8603657D1621D9AA98C027BD467C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("TypedLobbyInfo '{0}'[{1}] rooms: {2} players: {3}", this.Name, this.Type, this.RoomCount, this.PlayerCount);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = ((TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 *)__this)->get_Name_0();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		uint8_t L_4 = ((TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 *)__this)->get_Type_1();
		uint8_t L_5 = L_4;
		RuntimeObject * L_6 = Box(LobbyType_tC10229382E36CFEC2718583263A711F1C1F35305_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_3;
		int32_t L_8 = __this->get_RoomCount_4();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_7;
		int32_t L_12 = __this->get_PlayerCount_3();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteralD1DBE50E93BA588346E8642DECF71D0109C9A902, L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void Photon.Realtime.TypedLobbyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobbyInfo__ctor_m608A819C4E7B3D755880CBBE88AD68B11447F76B (TypedLobbyInfo_t4ADAD96C3E4BD40D2ADEA6AF8741EB96983D76E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobbyInfo__ctor_m608A819C4E7B3D755880CBBE88AD68B11447F76B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_il2cpp_TypeInfo_var);
		TypedLobby__ctor_m00923523872B0E50E15357CBBED9A08D5F944586(__this, /*hidden argument*/NULL);
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
// System.Boolean Photon.Realtime.WebFlags::get_HttpForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_HttpForward_m06B3FF0980DD3F3AC493ECF0897CFAFEB6101AB7 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, const RuntimeMethod* method)
{
	{
		// get { return (WebhookFlags & HttpForwardConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Photon.Realtime.WebFlags::set_HttpForward(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_HttpForward_m5057520D45E0EE8B75146FF633C741C88E6DB1E5 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// WebhookFlags |= HttpForwardConst;
		uint8_t L_1 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1|(int32_t)1))))));
		// }
		return;
	}

IL_0013:
	{
		// WebhookFlags = (byte) (WebhookFlags & ~(1 << 0));
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2)))))));
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.WebFlags::get_SendAuthCookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_SendAuthCookie_m4C3809BF83E26E6A0A0BBCF1B656FB420DB099C5 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, const RuntimeMethod* method)
{
	{
		// get { return (WebhookFlags & SendAuthCookieConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Photon.Realtime.WebFlags::set_SendAuthCookie(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_SendAuthCookie_m67D7AF57044292DA159A46AE8F4DC27F1DD3A46E (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// WebhookFlags |= SendAuthCookieConst;
		uint8_t L_1 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1|(int32_t)2))))));
		// }
		return;
	}

IL_0013:
	{
		// WebhookFlags = (byte)(WebhookFlags & ~(1 << 1));
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-3)))))));
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.WebFlags::get_SendSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_SendSync_m8E4500A08237E7ACF599CF7A77EF1F0B419D7FE2 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, const RuntimeMethod* method)
{
	{
		// get { return (WebhookFlags & SendSyncConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)4))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Photon.Realtime.WebFlags::set_SendSync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_SendSync_m1C9961C96558BF31ED185876EA55990A4F54CAE3 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// WebhookFlags |= SendSyncConst;
		uint8_t L_1 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1|(int32_t)4))))));
		// }
		return;
	}

IL_0013:
	{
		// WebhookFlags = (byte)(WebhookFlags & ~(1 << 2));
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-5)))))));
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.WebFlags::get_SendState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_SendState_m7085E7394ECDB9CDC07BF0A4C2A0037E344076C5 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, const RuntimeMethod* method)
{
	{
		// get { return (WebhookFlags & SendStateConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)8))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Photon.Realtime.WebFlags::set_SendState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_SendState_m772DFC77F5169E3548302A9F601B87DC11765909 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// WebhookFlags |= SendStateConst;
		uint8_t L_1 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1|(int32_t)8))))));
		// }
		return;
	}

IL_0013:
	{
		// WebhookFlags = (byte)(WebhookFlags & ~(1 << 3));
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-9)))))));
		// }
		return;
	}
}
// System.Void Photon.Realtime.WebFlags::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__ctor_mF30D282AD9F1D728C06672D22FCB7E108BCB1993 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, uint8_t ___webhookFlags0, const RuntimeMethod* method)
{
	{
		// public WebFlags(byte webhookFlags)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// WebhookFlags = webhookFlags;
		uint8_t L_0 = ___webhookFlags0;
		__this->set_WebhookFlags_1(L_0);
		// }
		return;
	}
}
// System.Void Photon.Realtime.WebFlags::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__cctor_m98EB282DAF4EDC93CC587315D2B06E55CB86DDE0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebFlags__cctor_m98EB282DAF4EDC93CC587315D2B06E55CB86DDE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly static WebFlags Default = new WebFlags(0);
		WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * L_0 = (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE *)il2cpp_codegen_object_new(WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE_il2cpp_TypeInfo_var);
		WebFlags__ctor_mF30D282AD9F1D728C06672D22FCB7E108BCB1993(L_0, (uint8_t)0, /*hidden argument*/NULL);
		((WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE_StaticFields*)il2cpp_codegen_static_fields_for(WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE_il2cpp_TypeInfo_var))->set_Default_0(L_0);
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
// System.Void Photon.Realtime.WebRpcCallbacksContainer::.ctor(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcCallbacksContainer__ctor_mC0E65E12EA20C9F14D401D8F08FDB85E806176AF (WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * __this, LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___client0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRpcCallbacksContainer__ctor_mC0E65E12EA20C9F14D401D8F08FDB85E806176AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebRpcCallbacksContainer(LoadBalancingClient client)
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6_il2cpp_TypeInfo_var);
		List_1__ctor_m8998D7682A2B5B6B47F0837987B6598904297BAF(__this, /*hidden argument*/List_1__ctor_m8998D7682A2B5B6B47F0837987B6598904297BAF_RuntimeMethod_var);
		// this.client = client;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = ___client0;
		__this->set_client_6(L_0);
		// }
		return;
	}
}
// System.Void Photon.Realtime.WebRpcCallbacksContainer::OnWebRpcResponse(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcCallbacksContainer_OnWebRpcResponse_mCBCDEF2F034B32C9C0FAF84B205E7AF6F0D92780 (WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * __this, OperationResponse_t9EDDF7A2BDA98009C3FC81DA1D23CA0C24B717DD * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRpcCallbacksContainer_OnWebRpcResponse_mCBCDEF2F034B32C9C0FAF84B205E7AF6F0D92780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// this.client.UpdateCallbackTargets();
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_client_6();
		NullCheck(L_0);
		LoadBalancingClient_UpdateCallbackTargets_m4F0C56B00E0DC74B26294FA61A83186A710DBFFA(L_0, /*hidden argument*/NULL);
		// foreach (IWebRpcCallback target in this)
		Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909  L_1 = List_1_GetEnumerator_m3DC15E45F109EA8ED752BBF8669EF7D6199CF358(__this, /*hidden argument*/List_1_GetEnumerator_m3DC15E45F109EA8ED752BBF8669EF7D6199CF358_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_0014:
		{
			// foreach (IWebRpcCallback target in this)
			RuntimeObject* L_2 = Enumerator_get_Current_mA50C178A90B3A62136BA22B44CE8D3AA0B549911_inline((Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mA50C178A90B3A62136BA22B44CE8D3AA0B549911_RuntimeMethod_var);
			// target.OnWebRpcResponse(response);
			OperationResponse_t9EDDF7A2BDA98009C3FC81DA1D23CA0C24B717DD * L_3 = ___response0;
			NullCheck(L_2);
			InterfaceActionInvoker1< OperationResponse_t9EDDF7A2BDA98009C3FC81DA1D23CA0C24B717DD * >::Invoke(0 /* System.Void Photon.Realtime.IWebRpcCallback::OnWebRpcResponse(ExitGames.Client.Photon.OperationResponse) */, IWebRpcCallback_t8E22E34D48A3C7550F423A92483771438C1B7D25_il2cpp_TypeInfo_var, L_2, L_3);
		}

IL_0021:
		{
			// foreach (IWebRpcCallback target in this)
			bool L_4 = Enumerator_MoveNext_m50709063468E77F299D9B15A5224FC5B8770F948((Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m50709063468E77F299D9B15A5224FC5B8770F948_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0014;
			}
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x3A, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC7FFB79B44AF60DEF8ECB7E95469108B1A131FDD((Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mC7FFB79B44AF60DEF8ECB7E95469108B1A131FDD_RuntimeMethod_var);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
	}

IL_003a:
	{
		// }
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
// System.String Photon.Realtime.WebRpcResponse::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_m0B6E38116B73FE932B4809D1510013A2D0E75FEB (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_mEADC4EB6ED220410F817BB3A5864230A0215CA01 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 Photon.Realtime.WebRpcResponse::get_ResultCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_mFC73DF1E0EF9021C8C3E53EC0EF548915B566886 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = __this->get_U3CResultCodeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_ResultCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_m8E4EE89F34D749CCFEA3B1D2D777A5A8D3FA33AA (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CResultCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 Photon.Realtime.WebRpcResponse::get_ReturnCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ReturnCode_mC2DB2985F6E1F2AB60A26975A4D7DC88C5D7562A (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// get { return ResultCode; }
		int32_t L_0 = WebRpcResponse_get_ResultCode_mFC73DF1E0EF9021C8C3E53EC0EF548915B566886_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Photon.Realtime.WebRpcResponse::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_m9F817E8E921967871322B123F6C1BEF6F8BF5138 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_m0A4DB2E9F565AD93775CAE27C140A9DB4E411B78 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Photon.Realtime.WebRpcResponse::get_DebugMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_DebugMessage_mD4740D583D4CF227657519753D2145759B371714 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// get { return Message; }
		String_t* L_0 = WebRpcResponse_get_Message_m9F817E8E921967871322B123F6C1BEF6F8BF5138_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * WebRpcResponse_get_Parameters_m73734E2B75DC69FF24E5EBFE1C58383DB7F01969 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = __this->get_U3CParametersU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_mC93C08CE135944569FF91BC362C850E628E0563A (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___value0, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = ___value0;
		__this->set_U3CParametersU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::.ctor(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse__ctor_m978C21F8095562921B1D549E5EFDCC2B6B0A5C66 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, OperationResponse_t9EDDF7A2BDA98009C3FC81DA1D23CA0C24B717DD * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRpcResponse__ctor_m978C21F8095562921B1D549E5EFDCC2B6B0A5C66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// public WebRpcResponse(OperationResponse response)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// if (response.Parameters.TryGetValue(ParameterCode.UriPath, out value))
		OperationResponse_t9EDDF7A2BDA98009C3FC81DA1D23CA0C24B717DD * L_0 = ___response0;
		NullCheck(L_0);
		ParameterDictionary_t6BDDC6005682A8AB09CDBD829E398C3D88FC6F41 * L_1 = L_0->get_Parameters_3();
		NullCheck(L_1);
		bool L_2 = ParameterDictionary_TryGetValue_m3CCB04307083D057C8DB31E44F419D23AE4475C7(L_1, (uint8_t)((int32_t)209), (RuntimeObject **)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// this.Name = value as string;
		RuntimeObject * L_3 = V_0;
		WebRpcResponse_set_Name_mEADC4EB6ED220410F817BB3A5864230A0215CA01_inline(__this, ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_0026:
	{
		// this.ResultCode = -1;
		WebRpcResponse_set_ResultCode_m8E4EE89F34D749CCFEA3B1D2D777A5A8D3FA33AA_inline(__this, (-1), /*hidden argument*/NULL);
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcReturnCode, out value))
		OperationResponse_t9EDDF7A2BDA98009C3FC81DA1D23CA0C24B717DD * L_4 = ___response0;
		NullCheck(L_4);
		ParameterDictionary_t6BDDC6005682A8AB09CDBD829E398C3D88FC6F41 * L_5 = L_4->get_Parameters_3();
		NullCheck(L_5);
		bool L_6 = ParameterDictionary_TryGetValue_m3CCB04307083D057C8DB31E44F419D23AE4475C7(L_5, (uint8_t)((int32_t)207), (RuntimeObject **)(&V_0), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		// this.ResultCode = (byte)value;
		RuntimeObject * L_7 = V_0;
		WebRpcResponse_set_ResultCode_m8E4EE89F34D749CCFEA3B1D2D777A5A8D3FA33AA_inline(__this, ((*(uint8_t*)((uint8_t*)UnBox(L_7, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_004d:
	{
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcParameters, out value))
		OperationResponse_t9EDDF7A2BDA98009C3FC81DA1D23CA0C24B717DD * L_8 = ___response0;
		NullCheck(L_8);
		ParameterDictionary_t6BDDC6005682A8AB09CDBD829E398C3D88FC6F41 * L_9 = L_8->get_Parameters_3();
		NullCheck(L_9);
		bool L_10 = ParameterDictionary_TryGetValue_m3CCB04307083D057C8DB31E44F419D23AE4475C7(L_9, (uint8_t)((int32_t)208), (RuntimeObject **)(&V_0), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		// this.Parameters = value as Dictionary<string, object>;
		RuntimeObject * L_11 = V_0;
		WebRpcResponse_set_Parameters_mC93C08CE135944569FF91BC362C850E628E0563A_inline(__this, ((Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)IsInstClass((RuntimeObject*)L_11, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_006d:
	{
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcReturnMessage, out value))
		OperationResponse_t9EDDF7A2BDA98009C3FC81DA1D23CA0C24B717DD * L_12 = ___response0;
		NullCheck(L_12);
		ParameterDictionary_t6BDDC6005682A8AB09CDBD829E398C3D88FC6F41 * L_13 = L_12->get_Parameters_3();
		NullCheck(L_13);
		bool L_14 = ParameterDictionary_TryGetValue_m3CCB04307083D057C8DB31E44F419D23AE4475C7(L_13, (uint8_t)((int32_t)206), (RuntimeObject **)(&V_0), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		// this.Message = value as string;
		RuntimeObject * L_15 = V_0;
		WebRpcResponse_set_Message_m0A4DB2E9F565AD93775CAE27C140A9DB4E411B78_inline(__this, ((String_t*)IsInstSealed((RuntimeObject*)L_15, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.String Photon.Realtime.WebRpcResponse::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_ToStringFull_mD16B7B3F985553A86DC907BC3836B249EC84F203 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRpcResponse_ToStringFull_mD16B7B3F985553A86DC907BC3836B249EC84F203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("{0}={2}: {1} \"{3}\"", this.Name, SupportClass.DictionaryToString(this.Parameters), this.ResultCode, this.Message);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = WebRpcResponse_get_Name_m0B6E38116B73FE932B4809D1510013A2D0E75FEB_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_4 = WebRpcResponse_get_Parameters_m73734E2B75DC69FF24E5EBFE1C58383DB7F01969_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tFCCF848578539B219B5F60389AB2C730F14273C7_il2cpp_TypeInfo_var);
		String_t* L_5 = SupportClass_DictionaryToString_m118628C9BE3B5263EBDAF4B0A9066F8C4E57ACDD(L_4, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_3;
		int32_t L_7 = WebRpcResponse_get_ResultCode_mFC73DF1E0EF9021C8C3E53EC0EF548915B566886_inline(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_6;
		String_t* L_11 = WebRpcResponse_get_Message_m9F817E8E921967871322B123F6C1BEF6F8BF5138_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		String_t* L_12 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral9E226BDBF405B6893314BBDA5DF5D6DA548FA202, L_10, /*hidden argument*/NULL);
		return L_12;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * Room_get_LoadBalancingClient_m352E09ADBA5592B3FC0F1432CE9F5D7D0FACC52B_inline (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// public LoadBalancingClient LoadBalancingClient { get; set; }
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_U3CLoadBalancingClientU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * Room_get_Players_m8F39EA784277611D7051C8A37EE813FFF4BCDDD7_inline (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// return this.players;
		Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * L_0 = __this->get_players_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool RoomOptions_get_IsVisible_mEBC48A6E7D7A0422A0CEA3A4AD339EA8B7061976_inline (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		bool L_0 = __this->get_isVisible_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool RoomOptions_get_IsOpen_m63600C2FCC2227779869060317764624F9536147_inline (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsOpen { get { return this.isOpen; } set { this.isOpen = value; } }
		bool L_0 = __this->get_isOpen_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Room_set_BroadcastPropertiesChangeToAll_m79D02C344D870A92D087EB3233E577563360E021_inline (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool BroadcastPropertiesChangeToAll { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Room_set_SuppressRoomEvents_m84A6C9E46183C568A6AD0B271F32E5DF9EE2B9F7_inline (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SuppressRoomEvents { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CSuppressRoomEventsU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Room_set_SuppressPlayerInfo_m78EE1EB24A13ED90994E739920D93AF6EF223319_inline (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SuppressPlayerInfo { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CSuppressPlayerInfoU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Room_set_PublishUserId_m1C47BF951F408DF84828102A363AE15E5AD967E5_inline (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishUserId { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishUserIdU3Ek__BackingField_19(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Room_set_DeleteNullProperties_m5E70B831ED71C7754374BA6A595C4FB59B012B86_inline (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool DeleteNullProperties { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CDeleteNullPropertiesU3Ek__BackingField_20(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * RoomInfo_get_CustomProperties_mEC71BB3F58EBE417B3CC9085AB26DA07D1644F07_inline (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	{
		// return this.customProperties;
		Hashtable_t0DA5F947D62B0E9E06838E2078398C00E1DE3329 * L_0 = __this->get_customProperties_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Player_get_ActorNumber_m02157560C558C6007C8146F1FCDA7E759AD0CF1D_inline (Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.actorNumber; }
		int32_t L_0 = __this->get_actorNumber_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Player_set_RoomReference_m94972048535DB91480569BC5E3B463A89CB12A91_inline (Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * __this, Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * ___value0, const RuntimeMethod* method)
{
	{
		// protected internal Room RoomReference { get; set; }
		Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * L_0 = ___value0;
		__this->set_U3CRoomReferenceU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Room_get_MasterClientId_m1F799A66FDFD9D1BCB2F32B0F2327BF8CDF5075E_inline (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// public int MasterClientId { get { return this.masterClientId; } }
		int32_t L_0 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_masterClientId_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Room_get_ExpectedUsers_mF6928B3A5B8CD93A75882BDDB08A2E759D4C565F_inline (Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * __this, const RuntimeMethod* method)
{
	{
		// get { return this.expectedUsers; }
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)__this)->get_expectedUsers_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RoomInfo_get_Name_m24C3CFCDD6E862D5E0EA27A0B2736E09D72843DA_inline (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	{
		// return this.name;
		String_t* L_0 = __this->get_name_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_m6E97FB80FDADD5A3B15ED2D51F071B3F343C1CC1_inline (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = __this->get_U3CPlayerCountU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RoomInfo_set_PlayerCount_m406E55A69DFEB12E15AEB7B8DDF0B0C8F704911F_inline (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPlayerCountU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public LoadBalancingPeer LoadBalancingPeer { get; private set; }
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_0 = __this->get_U3CLoadBalancingPeerU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_mDCC22D02A85973C68623C764C96BE9A862C8BD11_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// return this.state;
		int32_t L_0 = __this->get_state_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppId_m49A1261CC79356CABF9A709AAC4674B406ECA1DD_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public string AppId { get; set; }
		String_t* L_0 = __this->get_U3CAppIdU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_m2D816CED5CD4B71B47C03B33D2C5DFAE08997B9D_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; set; }
		String_t* L_0 = __this->get_U3CAppVersionU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * PhotonPeer_get_SocketImplementation_mB351931E3AD33A2EEB0866215358D2D0A20E3556_inline (PhotonPeer_t47E4CEC4A05BA6BAB98B420FD9317E35F5345086 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CSocketImplementationU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * LoadBalancingClient_get_AuthValues_mE56B5ADE8CC0EBB1CB9C5DFA64913AC5B36B7F02_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * L_0 = __this->get_U3CAuthValuesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_m7644167D1D9D4B1EB47E98BF5FDA05D1B3F1770A_inline (AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * __this, const RuntimeMethod* method)
{
	{
		// get { return authType; }
		uint8_t L_0 = __this->get_authType_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CloudRegion_m0AAC37B5520321CC88C90C625E56EBEC822C3DEB_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public string CloudRegion { get; private set; }
		String_t* L_0 = __this->get_U3CCloudRegionU3Ek__BackingField_43();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * LoadBalancingClient_get_CurrentLobby_mA012C41E1DF7DF53F0CF4A024C9E0FABDDDC2456_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public TypedLobby CurrentLobby { get; internal set; }
		TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * L_0 = __this->get_U3CCurrentLobbyU3Ek__BackingField_30();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * LoadBalancingClient_get_CurrentRoom_mA294529AE11CDDF17597FADE478A392B8B534002_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public Room CurrentRoom { get; set; }
		Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * L_0 = __this->get_U3CCurrentRoomU3Ek__BackingField_34();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_GameServerAddress_m572210F250D42394A3E6E0FAB7E15DBD6EE78E05_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public string GameServerAddress { get; protected internal set; }
		String_t* L_0 = __this->get_U3CGameServerAddressU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_mFC73DF1E0EF9021C8C3E53EC0EF548915B566886_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = __this->get_U3CResultCodeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_m9F817E8E921967871322B123F6C1BEF6F8BF5138_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_mEADC4EB6ED220410F817BB3A5864230A0215CA01_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_m8E4EE89F34D749CCFEA3B1D2D777A5A8D3FA33AA_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CResultCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_mC93C08CE135944569FF91BC362C850E628E0563A_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___value0, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = ___value0;
		__this->set_U3CParametersU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_m0A4DB2E9F565AD93775CAE27C140A9DB4E411B78_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_m0B6E38116B73FE932B4809D1510013A2D0E75FEB_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * WebRpcResponse_get_Parameters_m73734E2B75DC69FF24E5EBFE1C58383DB7F01969_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = __this->get_U3CParametersU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
