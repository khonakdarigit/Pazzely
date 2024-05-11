#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtualActionInvoker0Invoker
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, NULL);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3;
// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4;
// System.Func`2<System.Guid,System.Boolean>
struct Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA;
// System.Func`2<Realms.KeyPath,System.Boolean>
struct Func_2_tED48016847BEDB00839D61E14F631458FB13A2BB;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,Realms.Native.SchemaObject>
struct Func_2_tCF83ECAB8AFDA1BF6DCCB8648945D6F86001BC5F;
// System.Func`2<System.Object,System.Single>
struct Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12;
// System.Func`2<System.Object,Realms.Native.StringValue>
struct Func_2_t7FEAF9B40BC91889C3F7FA1D3C0AB0E276613D6C;
// System.Func`2<System.Object,UnityEngine.Vector2>
struct Func_2_t127163694D7C66D0F32B7F8F5BB2507F7516DEE4;
// System.Func`2<System.Object,UnityEngine.Vector3>
struct Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E;
// System.Func`2<System.Object,UnityEngine.Vector4>
struct Func_2_t01EEA5FE255AF6B9B90E3CFAE8B5571BC66E8302;
// System.Func`2<Realms.Native.PrimitiveValue,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tFB60D22A7188A225EC88D4C2A2A516E8A5EC1B45;
// System.Func`2<Realms.Native.PrimitiveValue,System.Boolean>
struct Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2;
// System.Func`2<Realms.Native.PrimitiveValue,System.Guid>
struct Func_2_t6F5D52A89A1B936762EE51CD9D9AAD0EF815BD23;
// System.Func`2<Realms.Native.PrimitiveValue,System.Int32>
struct Func_2_tF01BB0E21083B293CF60FDE06ED0026AC094CFB7;
// System.Func`2<Realms.Native.PrimitiveValue,Realms.KeyPath>
struct Func_2_tB313531AE7343695ABF10C08F75B55E4699B40DD;
// System.Func`2<Realms.Native.PrimitiveValue,System.Object>
struct Func_2_t429E82ABFFFC2AC1CE010D74CC7A9C629055F887;
// System.Func`2<Realms.Native.PrimitiveValue,Realms.Native.SchemaObject>
struct Func_2_t210E61F99D7472E51282943CC7639FF687A3719F;
// System.Func`2<Realms.Native.PrimitiveValue,System.Single>
struct Func_2_t90CE56F960E045743F1A9D67A849897248A821D9;
// System.Func`2<Realms.Native.PrimitiveValue,Realms.Native.StringValue>
struct Func_2_t478B3D12821F41ABD43978161E257B9F8BADC68B;
// System.Func`2<Realms.Native.PrimitiveValue,UnityEngine.Vector2>
struct Func_2_tC71476211D01CF6367A4721A03CB208B876EA9FD;
// System.Func`2<Realms.Native.PrimitiveValue,UnityEngine.Vector3>
struct Func_2_t4086956E9AE7A5665BF03B7A439D29BF0941DD15;
// System.Func`2<Realms.Native.PrimitiveValue,UnityEngine.Vector4>
struct Func_2_tC0F42D8244464038AD9681F241E7C31A37D8242D;
// System.Func`2<Realms.Schema.Property,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_t0A1D011E49157B9D56FE997E6A482A5DB8807547;
// System.Func`2<Realms.Schema.Property,System.Boolean>
struct Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC;
// System.Func`2<Realms.Schema.Property,System.Guid>
struct Func_2_t3807B8C9754B3D6705404B2CD1E16545D814C5F9;
// System.Func`2<Realms.Schema.Property,System.Int32>
struct Func_2_tF8593969B24CFE8ED3A96E2492171238088CB745;
// System.Func`2<Realms.Schema.Property,Realms.KeyPath>
struct Func_2_t0A9E31724C776DB67DCD4F7112EE85A7A2B0CD33;
// System.Func`2<Realms.Schema.Property,System.Object>
struct Func_2_t4FD74B88B95B6110B1D6592FD11281D6C97B1E46;
// System.Func`2<Realms.Schema.Property,Realms.Native.SchemaObject>
struct Func_2_tAD733CA4558224115B2DA3BF79BFD352C06CDCE7;
// System.Func`2<Realms.Schema.Property,Realms.Native.SchemaProperty>
struct Func_2_tC47F6B9AEF0CD37A0AAF7B841E0964898D7E76EC;
// System.Func`2<Realms.Schema.Property,System.Single>
struct Func_2_t5CF6D64DB8F942BFBDDE1DA250A41595B7CD124B;
// System.Func`2<Realms.Schema.Property,Realms.Native.StringValue>
struct Func_2_t4501FBC7B7B6DE5384D627D7E0E5A8C6584958D8;
// System.Func`2<Realms.Schema.Property,UnityEngine.Vector2>
struct Func_2_tB381C8D4E63305292B8BAE77DFB59AAAEC93E7EB;
// System.Func`2<Realms.Schema.Property,UnityEngine.Vector3>
struct Func_2_t15754930DFF16C02EF8AC22B6EED29449A2EF8FA;
// System.Func`2<Realms.Schema.Property,UnityEngine.Vector4>
struct Func_2_tDC0BD947591C831552E42B078DDF4F4376D0B51C;
// System.Func`2<Realms.Native.SchemaObject,System.Boolean>
struct Func_2_t3933D1A9C2F1F83F8EE6F4C8686FB62AD7C724EE;
// System.Func`2<Realms.Native.SchemaProperty,System.Boolean>
struct Func_2_tD1F5FD4955CFB8FF8610002415951FD9B651B750;
// System.Func`2<System.Single,System.Boolean>
struct Func_2_t49E998685259ADE759F9329BF66F20DE8667006E;
// System.Func`2<Realms.Native.StringValue,System.Boolean>
struct Func_2_t1A51224749A0012D832BF2E64575FDEF202FAE9E;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tC496704D554895234B1360058C5CC2D901C24957;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Guid>
struct Func_2_t77FA9C1683C0E1C9EAB1F170DF3C99ACB681C844;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>
struct Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Realms.KeyPath>
struct Func_2_tEAC08894811D9FD5269204AA3060C2BEF8F1D642;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.SchemaObject>
struct Func_2_t934BEB9FD7B82BD864DFC9AA662455FFF6130528;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>
struct Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.StringValue>
struct Func_2_t08BC79E812019DA290F7DB747CDBAEE3FDB7F571;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector2>
struct Func_2_tE58FFCA3E7D1699580A0C27FAFD702E828AC651E;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector3>
struct Func_2_t208A44437DC9E09577E7BBCC73E296265723730A;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector4>
struct Func_2_t264165A1230ACB392CC4F13E8C39F1A315308B40;
// System.Func`2<UnityEngine.Vector2,System.Boolean>
struct Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9;
// System.Func`2<UnityEngine.Vector3,System.Boolean>
struct Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E;
// System.Func`2<UnityEngine.Vector4,System.Boolean>
struct Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
// System.Func`2<Realms.ChangeSet/Move,System.Boolean>
struct Func_2_tF766663C676BB43E908160385DE1AE7E191CBACF;
// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_t03CA755C248F875160167B828915D6082B1B04C9;
// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Boolean>
struct Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121;
// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Guid>
struct Func_2_t4DC8BD25FD9294FE03EDBB25432A58F0258C2C1E;
// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Int32>
struct Func_2_t9A90534C443C9EEB3549323D9827F807D313F61C;
// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.KeyPath>
struct Func_2_tB9AF32C440CFF51539468D51BAC35222664515DC;
// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Object>
struct Func_2_t9AF765B749C8FB6EBB8EB10FF8DD1179384A67BA;
// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.SchemaObject>
struct Func_2_tF3AA4AD2C7C1736A58F720FB888548D318056273;
// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Single>
struct Func_2_t2A82C711EDC64CDF3AD004D83EDAB4783CB1BC6E;
// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.StringValue>
struct Func_2_tFAEF0CCB9C791E80A31E045E378B4961D4BD6813;
// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector2>
struct Func_2_t2606923E4ECA17448CE383E2E0A4D7B4634B4990;
// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector3>
struct Func_2_t71250C7A2B7B3BC12FF416A1DEF67E1C1537EC02;
// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector4>
struct Func_2_t4A91E5D3092011C21723653D37A7736AC536B84D;
// System.Func`2<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move,System.Boolean>
struct Func_2_t769154D792964F65B1090A0A4CA1C50554085781;
// System.Func`2<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move,Realms.ChangeSet/Move>
struct Func_2_t68217885A5968320AD5647CE9C496996E1AB11F5;
// System.Collections.Generic.HashSet`1<Realms.Schema.PropertyType>
struct HashSet_1_tB6500BDDDCB8DF19C4C8045C5D0C7C4C2FEE44ED;
// System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<System.Object,System.Object>>
struct IEnumerable_1_tF87C02535F5ADDDE139D4D2EE4BD06652C1791A4;
// System.Collections.Generic.IEnumerable`1<System.Guid>
struct IEnumerable_1_t6AD47CB8BEC813E15985AA93F7394F6ECE74088A;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<Realms.KeyPath>
struct IEnumerable_1_t561E72A6EBB472F97F70240F53759DCEC2F81B38;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Realms.Native.SchemaObject>
struct IEnumerable_1_tD981389400D4797968CE45CE5A03D43C541E7EAF;
// System.Collections.Generic.IEnumerable`1<Realms.Native.SchemaProperty>
struct IEnumerable_1_t7962CFE4B777E079763319D20B7563B68B66FF2F;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41;
// System.Collections.Generic.IEnumerable`1<Realms.Native.StringValue>
struct IEnumerable_1_t722485E50AD81E41995DF51A0CC4A477D8B47621;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>
struct IEnumerable_1_t6C47A8FE62321E6AD75C312B8549AFD2B13F0591;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>
struct IEnumerable_1_tD5C0FD17E45BB16A64310D831E29C350A184590F;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEnumerable`1<Realms.ChangeSet/Move>
struct IEnumerable_1_t6E7DED1BBFC295E93EBD8CC624D069AF4B124367;
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<System.Object,System.Object>>
struct IEnumerator_1_t526C6CBBA5290F560D4704AB11CDA3D0D499F433;
// System.Collections.Generic.IEnumerator`1<System.Guid>
struct IEnumerator_1_t488F9FA82247BF8D2DC5E133C1C3F9366CDED9B0;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
// System.Collections.Generic.IEnumerator`1<Realms.KeyPath>
struct IEnumerator_1_t4840C40F517B976D0EC2BCEBFDD73D73CEB3A45F;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEnumerator`1<Realms.Native.SchemaObject>
struct IEnumerator_1_tE0FA1C95DC0F0154BD3D62338C9DFFF332A6D28A;
// System.Collections.Generic.IEnumerator`1<Realms.Native.SchemaProperty>
struct IEnumerator_1_t2F8AABFFA7BAA1172E8170461F4C6692D783BC4C;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t736E9F8BD2FD38A5E9EA2E8A510AFED788D05010;
// System.Collections.Generic.IEnumerator`1<Realms.Native.StringValue>
struct IEnumerator_1_tBE7AEDD40CCCF7C55EC38916CB8B061FF6980280;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector2>
struct IEnumerator_1_tC0C08C9659581E6A592DEEC8CEE4A412A400B773;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector4>
struct IEnumerator_1_t1DC9BF0C441509977AE52846CAE10D10A21C5FE0;
// System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
// System.Collections.Generic.IEnumerator`1<Realms.ChangeSet/Move>
struct IEnumerator_1_t84F8A316A228EA2197D97EE8DA32C3AC755E8C42;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>
struct Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7;
// System.Linq.Enumerable/Iterator`1<System.Guid>
struct Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE;
// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07;
// System.Linq.Enumerable/Iterator`1<Realms.KeyPath>
struct Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA;
// System.Linq.Enumerable/Iterator`1<Realms.Native.SchemaObject>
struct Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D;
// System.Linq.Enumerable/Iterator`1<Realms.Native.SchemaProperty>
struct Iterator_1_t46BF638A1DF2D69EAA3663ECCC3E5615FD54E6C3;
// System.Linq.Enumerable/Iterator`1<System.Single>
struct Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E;
// System.Linq.Enumerable/Iterator`1<Realms.Native.StringValue>
struct Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector2>
struct Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>
struct Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>
struct Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E;
// System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0;
// System.Linq.Enumerable/Iterator`1<Realms.ChangeSet/Move>
struct Iterator_1_t84457A80C88597309971CA963B0AD904879B2F8E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Realms.Native.PrimitiveValue>
struct List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E;
// System.Collections.Generic.List`1<Realms.Schema.Property>
struct List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<Realms.Native.SyncError/CompensatingWriteInfo>
struct List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674;
// System.Collections.Generic.List`1<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move>
struct List_1_t0B0E988A8317058A530514934AA74A8A47C91D39;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.ValueTuple`2<System.Object,System.Object>>
struct WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Guid>
struct WhereEnumerableIterator_1_tD9B3677A96A5B0AD1FA4479CEA26880403A92E6D;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.KeyPath>
struct WhereEnumerableIterator_1_t8E2BDFFB19EFDD6FDD1A997E25D30A9151B5E20C;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.Native.SchemaObject>
struct WhereEnumerableIterator_1_tD26E121E693726AF91796ECC3C2F2496D6B34430;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.Native.SchemaProperty>
struct WhereEnumerableIterator_1_t8654ECAC8E9E6FF557E1A76C04AE8F02A7A7F5B5;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Single>
struct WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.Native.StringValue>
struct WhereEnumerableIterator_1_t85FA13B5DA9275197656EBD8285E1371A80E65D0;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector2>
struct WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>
struct WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>
struct WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.ChangeSet/Move>
struct WhereEnumerableIterator_1_t0F32988A00805A31D5F95BF4C5A5214EA3D7104B;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Realms.Native.SchemaObject>
struct WhereSelectListIterator_2_t42B5B14419D4DC51F1649E5A5C3215858974F25E;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Single>
struct WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Realms.Native.StringValue>
struct WhereSelectListIterator_2_t0822086E0A8333BD1C0A264D828A2466EC971560;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector2>
struct WhereSelectListIterator_2_t6D757CC0B317F507E31783D6BAB8CDC2C848CB44;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector3>
struct WhereSelectListIterator_2_t2F947A7776BA76AEEB0F205EF71A63410DFACA65;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector4>
struct WhereSelectListIterator_2_t9651C82872E49763DA217BC42252D9BEAED98F8F;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t1D1ECE57DDFB8B79F11AE611E6CFD43FD79C2A75;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Guid>
struct WhereSelectListIterator_2_t5F859585DBD38F530CDADB5DE2D2E5B741E473B6;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Int32>
struct WhereSelectListIterator_2_tF17BC0AE60EF6A2CC11A2B94A9E5F0777FD249C5;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.KeyPath>
struct WhereSelectListIterator_2_t28AB655AA4A400E98C753FAE39A8854666509F71;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Object>
struct WhereSelectListIterator_2_t60B3F115E1808DEFF67E64031605E0CF6CAA916D;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.Native.SchemaObject>
struct WhereSelectListIterator_2_tA7D93BC522D059361B567DB7386ACD3AB4F9199B;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Single>
struct WhereSelectListIterator_2_tD5B8B4EDE8DE52C8140F32A2AE4D1D840BF4623E;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.Native.StringValue>
struct WhereSelectListIterator_2_tF7F7D19F91F7FF29FEB9AC4C40AF34BEC05C5FE4;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector2>
struct WhereSelectListIterator_2_tC0EDCE3671DC8A347EC3FA41D4BB5A6707A0EC67;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector3>
struct WhereSelectListIterator_2_t0752849B241AC3D8351B3D6146CE326291B4CB28;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector4>
struct WhereSelectListIterator_2_tC707137F05826EECD63624BA657FEAC39F00C292;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_tA397D24E1605A76B61FAB88C38499CFC5B625201;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Guid>
struct WhereSelectListIterator_2_tD32E7B8A98D5FE56872A1EA8AFBE53F42FDE3900;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Int32>
struct WhereSelectListIterator_2_tD93DE3EAF3A43F96261ED1E1C40826D106FDFE9C;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.KeyPath>
struct WhereSelectListIterator_2_t188D1C1E4FC64D629FDE0E7B9945CEE40D32FEC5;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Object>
struct WhereSelectListIterator_2_t502F76E72C22266C9CEB2731335807A882BA3B40;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.SchemaObject>
struct WhereSelectListIterator_2_t85F5892D866F96458AE20F82BDA332937BFBAE63;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.SchemaProperty>
struct WhereSelectListIterator_2_tE7D2819C273C34D93B8E52FA26B6371CE3936B9A;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Single>
struct WhereSelectListIterator_2_t0983DF24E4CA20D883685546E2A58A7316B7F8F6;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.StringValue>
struct WhereSelectListIterator_2_tDA2665678E41A10B21E54E10D7F905F3641FA2A6;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector2>
struct WhereSelectListIterator_2_t95AE895BD033E8B6C1E4E322D568E3D596FCD87C;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector3>
struct WhereSelectListIterator_2_t423DF549C799E9117DBC87E884E0504546C62065;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector4>
struct WhereSelectListIterator_2_t38D0B415E5EF53C6DAB6487265554AF096CDE8B6;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Guid>
struct WhereSelectListIterator_2_t2EB837695B7D069AF34EA97F9E715D981199F4FC;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>
struct WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.KeyPath>
struct WhereSelectListIterator_2_t66FF86786D55B63BCC9786B47B321044E794E29B;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.SchemaObject>
struct WhereSelectListIterator_2_t9DE7BD7D89A1833ED9C07353A12709356F6E1BB0;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>
struct WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.StringValue>
struct WhereSelectListIterator_2_tBDA1A315234F78C7F2A1D794F578B1F0B2F5399C;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector2>
struct WhereSelectListIterator_2_t87AD7612E82A4062BBF65D4AEF211245C8A02452;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector3>
struct WhereSelectListIterator_2_t6883B5D59E258B59317BFE9FB7405235985546FD;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector4>
struct WhereSelectListIterator_2_t85FFC53584D855FF66ADBE91B3903B9A2A75118B;
// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_tE4D1677627952441B6403BD2F7FE67483F02BEA1;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Guid>
struct WhereSelectListIterator_2_t6B4BEBF6242540C8713B1E462A94A9371960EA51;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Int32>
struct WhereSelectListIterator_2_t8A943F5A7C427BB120AFD260C152D6248682BB5A;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.KeyPath>
struct WhereSelectListIterator_2_tAA33716851819066683D677996641C6D161A3684;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Object>
struct WhereSelectListIterator_2_tD8C2A18C14631F8C9AA22BD061EF98FD514E2C99;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.SchemaObject>
struct WhereSelectListIterator_2_t69568E754CC7EA89B0002864BDE412F643D7F784;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Single>
struct WhereSelectListIterator_2_tE59F3D6BE467EABCC4645DDB4BD08F3F91307F92;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.StringValue>
struct WhereSelectListIterator_2_tA7401EB770D559AF2DA9E3FD7B1FD53E6C6F667F;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector2>
struct WhereSelectListIterator_2_tB1263FF3FD17A16713E9EE78908F9C184A4B08D6;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector3>
struct WhereSelectListIterator_2_t5E88820A1FB7395337EDFF872CE4D9A4A0A50A9D;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector4>
struct WhereSelectListIterator_2_t79F5931FF7D6E8AB258918D05FC4D76052A4F543;
// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move,Realms.ChangeSet/Move>
struct WhereSelectListIterator_2_tA99199351429EB86E604DAB78DCF92DB2D162F97;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Rect,System.Object,System.Single>
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.RectInt,System.Object,System.Int32>
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2,System.Object,System.Single>
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2Int,System.Object,System.Int32>
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3,System.Object,System.Single>
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3Int,System.Object,System.Int32>
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector4,System.Object,System.Single>
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8;
// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7;
// MongoDB.Bson.Serialization.IdGenerators.ZeroIdChecker`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct ZeroIdChecker_1_tD2A67090D2D36FD790F888B9BF20E8B24FC47CED;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>
struct fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>
struct fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>
struct fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>
struct fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>
struct fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.VisualScripting.FullSerializer.fsData>[]
struct EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Realms.Native.PrimitiveValue[]
struct PrimitiveValueU5BU5D_t12D63C62DFDF50FBDF6D43C0A0AB2DFBCFAECABE;
// Realms.Schema.Property[]
struct PropertyU5BU5D_tE18569936A9F3F54660D4E8388C4AC11765B37FE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIElements.StyleSelectorPart[]
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType[]
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F;
// Realms.Native.SyncError/CompensatingWriteInfo[]
struct CompensatingWriteInfoU5BU5D_t88DB9EA992C62B30C79F724BDA893EE628D2B427;
// Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move[]
struct MoveU5BU5D_t6732BE63521B7CA9709AC979E6F16A1083F4D85E;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Realms.Native.SchemaProperty
struct SchemaProperty_t04A08E4E115B0691FEB67BE6FA34B7DEF6DB0C94;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.VisualScripting.FullSerializer.fsBaseConverter
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04;
// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23;
// Unity.VisualScripting.FullSerializer.fsDirectConverter
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668;
// Unity.VisualScripting.FullSerializer.fsSerializer
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F;
IL2CPP_EXTERN_C String_t* _stringLiteral2AB095FDE12BD8BBD1684087A048758A32189875;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZeroIdChecker_1_GenerateId_m55DC8ABACEBD56130B254E6178F3172575F1A13B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	int32_t ___current_2;
};

// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject* ___current_2;
};

// System.Linq.Enumerable/Iterator`1<System.Single>
struct Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	float ___current_2;
};

// System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Realms.Native.PrimitiveValue>
struct List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PrimitiveValueU5BU5D_t12D63C62DFDF50FBDF6D43C0A0AB2DFBCFAECABE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PrimitiveValueU5BU5D_t12D63C62DFDF50FBDF6D43C0A0AB2DFBCFAECABE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Realms.Schema.Property>
struct List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PropertyU5BU5D_tE18569936A9F3F54660D4E8388C4AC11765B37FE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PropertyU5BU5D_tE18569936A9F3F54660D4E8388C4AC11765B37FE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Realms.Native.SyncError/CompensatingWriteInfo>
struct List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CompensatingWriteInfoU5BU5D_t88DB9EA992C62B30C79F724BDA893EE628D2B427* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CompensatingWriteInfoU5BU5D_t88DB9EA992C62B30C79F724BDA893EE628D2B427* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move>
struct List_1_t0B0E988A8317058A530514934AA74A8A47C91D39  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MoveU5BU5D_t6732BE63521B7CA9709AC979E6F16A1083F4D85E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0B0E988A8317058A530514934AA74A8A47C91D39_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MoveU5BU5D_t6732BE63521B7CA9709AC979E6F16A1083F4D85E* ___s_emptyArray_5;
};

// MongoDB.Bson.Serialization.IdGenerators.ZeroIdChecker`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct ZeroIdChecker_1_tD2A67090D2D36FD790F888B9BF20E8B24FC47CED  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Unity.VisualScripting.FullSerializer.fsBaseConverter
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04  : public RuntimeObject
{
	// Unity.VisualScripting.FullSerializer.fsSerializer Unity.VisualScripting.FullSerializer.fsBaseConverter::Serializer
	fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* ___Serializer_0;
};

// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23  : public RuntimeObject
{
	// System.Object Unity.VisualScripting.FullSerializer.fsData::_value
	RuntimeObject* ____value_0;
};

struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_StaticFields
{
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::True
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___True_1;
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::False
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___False_2;
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::Null
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___Null_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.ValueTuple`2<System.Object,System.Object>
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	// T1 System.ValueTuple`2::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject* ___Item2_1;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Single>
struct WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C  : public Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88;

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Realms.KeyPath
struct KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D 
{
	// System.String Realms.KeyPath::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of Realms.KeyPath
struct KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D_marshaled_pinvoke
{
	char* ___U3CPathU3Ek__BackingField_0;
};
// Native definition for COM marshalling of Realms.KeyPath
struct KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D_marshaled_com
{
	Il2CppChar* ___U3CPathU3Ek__BackingField_0;
};

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// Realms.Native.NativeBool
struct NativeBool_t0F66C3325B235DDF3E7B5D6D80D0C5A9BDBD3B0A 
{
	// System.Byte Realms.Native.NativeBool::_value
	uint8_t ____value_0;
};

// Realms.Schema.Property
struct Property_tA1E653E5DCE45303997F51563A7060FE291075DC 
{
	// System.String Realms.Schema.Property::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.String Realms.Schema.Property::<ManagedName>k__BackingField
	String_t* ___U3CManagedNameU3Ek__BackingField_3;
	// Realms.Schema.PropertyType Realms.Schema.Property::<Type>k__BackingField
	uint16_t ___U3CTypeU3Ek__BackingField_4;
	// System.String Realms.Schema.Property::<ObjectType>k__BackingField
	String_t* ___U3CObjectTypeU3Ek__BackingField_5;
	// System.String Realms.Schema.Property::<LinkOriginPropertyName>k__BackingField
	String_t* ___U3CLinkOriginPropertyNameU3Ek__BackingField_6;
	// System.Boolean Realms.Schema.Property::<IsPrimaryKey>k__BackingField
	bool ___U3CIsPrimaryKeyU3Ek__BackingField_7;
	// Realms.IndexType Realms.Schema.Property::<IndexType>k__BackingField
	int32_t ___U3CIndexTypeU3Ek__BackingField_8;
};

struct Property_tA1E653E5DCE45303997F51563A7060FE291075DC_StaticFields
{
	// System.Collections.Generic.HashSet`1<Realms.Schema.PropertyType> Realms.Schema.Property::IndexableTypes
	HashSet_1_tB6500BDDDCB8DF19C4C8045C5D0C7C4C2FEE44ED* ___IndexableTypes_0;
	// System.Collections.Generic.HashSet`1<Realms.Schema.PropertyType> Realms.Schema.Property::PrimaryKeyTypes
	HashSet_1_tB6500BDDDCB8DF19C4C8045C5D0C7C4C2FEE44ED* ___PrimaryKeyTypes_1;
};
// Native definition for P/Invoke marshalling of Realms.Schema.Property
struct Property_tA1E653E5DCE45303997F51563A7060FE291075DC_marshaled_pinvoke
{
	char* ___U3CNameU3Ek__BackingField_2;
	char* ___U3CManagedNameU3Ek__BackingField_3;
	uint16_t ___U3CTypeU3Ek__BackingField_4;
	char* ___U3CObjectTypeU3Ek__BackingField_5;
	char* ___U3CLinkOriginPropertyNameU3Ek__BackingField_6;
	int32_t ___U3CIsPrimaryKeyU3Ek__BackingField_7;
	int32_t ___U3CIndexTypeU3Ek__BackingField_8;
};
// Native definition for COM marshalling of Realms.Schema.Property
struct Property_tA1E653E5DCE45303997F51563A7060FE291075DC_marshaled_com
{
	Il2CppChar* ___U3CNameU3Ek__BackingField_2;
	Il2CppChar* ___U3CManagedNameU3Ek__BackingField_3;
	uint16_t ___U3CTypeU3Ek__BackingField_4;
	Il2CppChar* ___U3CObjectTypeU3Ek__BackingField_5;
	Il2CppChar* ___U3CLinkOriginPropertyNameU3Ek__BackingField_6;
	int32_t ___U3CIsPrimaryKeyU3Ek__BackingField_7;
	int32_t ___U3CIndexTypeU3Ek__BackingField_8;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	// System.String UnityEngine.UIElements.StyleSelectorPart::m_Value
	String_t* ___m_Value_0;
	// UnityEngine.UIElements.StyleSelectorType UnityEngine.UIElements.StyleSelectorPart::m_Type
	int32_t ___m_Type_1;
	// System.Object UnityEngine.UIElements.StyleSelectorPart::tempData
	RuntimeObject* ___tempData_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};

// Realms.Native.TableKey
struct TableKey_tDE0311CA4D5C298F8BB7E0352BAEE9910E60B713 
{
	// System.UInt32 Realms.Native.TableKey::Value
	uint32_t ___Value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;
};

struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
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

// Unity.VisualScripting.FullSerializer.fsDirectConverter
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668  : public fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04
{
};

// Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 
{
	// System.Boolean Unity.VisualScripting.FullSerializer.fsResult::_success
	bool ____success_1;
	// System.Collections.Generic.List`1<System.String> Unity.VisualScripting.FullSerializer.fsResult::_messages
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};

struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields
{
	// System.String[] Unity.VisualScripting.FullSerializer.fsResult::EmptyStringArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyStringArray_0;
	// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsResult::Success
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___Success_3;
};
// Native definition for P/Invoke marshalling of Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_pinvoke
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};
// Native definition for COM marshalling of Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_com
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};

// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 
{
	// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType[] Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::Ancestors
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___Ancestors_0;
	// System.String Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::VersionString
	String_t* ___VersionString_1;
	// System.Type Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::ModelType
	Type_t* ___ModelType_2;
};
// Native definition for P/Invoke marshalling of Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke* ___Ancestors_0;
	char* ___VersionString_1;
	Type_t* ___ModelType_2;
};
// Native definition for COM marshalling of Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com* ___Ancestors_0;
	Il2CppChar* ___VersionString_1;
	Type_t* ___ModelType_2;
};

// Realms.ChangeSet/Move
struct Move_t436C9476C63D3027D29955ECD688020E34CED66B 
{
	// System.Int32 Realms.ChangeSet/Move::<From>k__BackingField
	int32_t ___U3CFromU3Ek__BackingField_0;
	// System.Int32 Realms.ChangeSet/Move::<To>k__BackingField
	int32_t ___U3CToU3Ek__BackingField_1;
};

// Realms.Native.PrimitiveValue/<decimal_bits>e__FixedBuffer
struct U3Cdecimal_bitsU3Ee__FixedBuffer_tF7D50EE072C933FF8FA41523147EAE0AF67B528D 
{
	union
	{
		struct
		{
			// System.UInt64 Realms.Native.PrimitiveValue/<decimal_bits>e__FixedBuffer::FixedElementField
			uint64_t ___FixedElementField_0;
		};
		uint8_t U3Cdecimal_bitsU3Ee__FixedBuffer_tF7D50EE072C933FF8FA41523147EAE0AF67B528D__padding[16];
	};
};

// Realms.Native.PrimitiveValue/<guid_bytes>e__FixedBuffer
struct U3Cguid_bytesU3Ee__FixedBuffer_tC99494C5FB5D0B6DDFDBECE6BB8FEFAEE7165DC3 
{
	union
	{
		struct
		{
			// System.Byte Realms.Native.PrimitiveValue/<guid_bytes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cguid_bytesU3Ee__FixedBuffer_tC99494C5FB5D0B6DDFDBECE6BB8FEFAEE7165DC3__padding[16];
	};
};

// Realms.Native.PrimitiveValue/<object_id_bytes>e__FixedBuffer
struct U3Cobject_id_bytesU3Ee__FixedBuffer_t8744739B792C1B30310C858286163338499BA3FB 
{
	union
	{
		struct
		{
			// System.Byte Realms.Native.PrimitiveValue/<object_id_bytes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cobject_id_bytesU3Ee__FixedBuffer_t8744739B792C1B30310C858286163338499BA3FB__padding[12];
	};
};

// Realms.Native.PrimitiveValue/TimestampValue
struct TimestampValue_t6D61E9CC604EF7895FE1872840E8227341DD69DC 
{
	// System.Int64 Realms.Native.PrimitiveValue/TimestampValue::seconds
	int64_t ___seconds_3;
	// System.Int32 Realms.Native.PrimitiveValue/TimestampValue::nanoseconds
	int32_t ___nanoseconds_4;
};

// System.Collections.Generic.List`1/Enumerator<Realms.Schema.Property>
struct Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Property_tA1E653E5DCE45303997F51563A7060FE291075DC ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>
struct Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ____current_3;
};

// System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>
struct Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___current_2;
};

// System.Linq.Enumerable/Iterator`1<System.Guid>
struct Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Guid_t ___current_2;
};

// System.Linq.Enumerable/Iterator`1<Realms.KeyPath>
struct Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D ___current_2;
};

// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector2>
struct Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___current_2;
};

// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>
struct Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current_2;
};

// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>
struct Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___current_2;
};

// System.Linq.Enumerable/Iterator`1<Realms.ChangeSet/Move>
struct Iterator_1_t84457A80C88597309971CA963B0AD904879B2F8E  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Move_t436C9476C63D3027D29955ECD688020E34CED66B ___current_2;
};

// Realms.MarshaledVector`1<Realms.Native.SchemaProperty>
struct MarshaledVector_1_tAEBD9E253FC482440666227695756A33F3D51BAD 
{
	// T* Realms.MarshaledVector`1::items
	SchemaProperty_t04A08E4E115B0691FEB67BE6FA34B7DEF6DB0C94* ___items_0;
	// System.IntPtr Realms.MarshaledVector`1::Count
	intptr_t ___Count_1;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Single>
struct WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9  : public Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336 : public RuntimeObject {};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>
struct fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>
struct fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>
struct fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>
struct fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>
struct fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>
struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A 
{
	// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1::_hasValue
	bool ____hasValue_0;
	// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1::_value
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ____value_1;
};

struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A_StaticFields
{
	// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<T> Unity.VisualScripting.FullSerializer.Internal.fsOption`1::Empty
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A ___Empty_2;
};

// Realms.Native.BinaryValue
struct BinaryValue_t7B2D7E7F1646EFE4AFF2C22C56F384B11C8F551D 
{
	// System.Byte* Realms.Native.BinaryValue::data
	uint8_t* ___data_0;
	// System.IntPtr Realms.Native.BinaryValue::size
	intptr_t ___size_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.Ray2D
struct Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A 
{
	// UnityEngine.Vector2 UnityEngine.Ray2D::m_Origin
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Origin_0;
	// UnityEngine.Vector2 UnityEngine.Ray2D::m_Direction
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Direction_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Realms.Native.StringValue
struct StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 
{
	// System.Byte* Realms.Native.StringValue::data
	uint8_t* ___data_0;
	// System.IntPtr Realms.Native.StringValue::size
	intptr_t ___size_1;
};

struct StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8_StaticFields
{
	// Realms.Native.StringValue Realms.Native.StringValue::Null
	StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 ___Null_2;
};

// Realms.Native.PrimitiveValue/LinkValue
struct LinkValue_t2E971397736EAD9583513BF15C18315B51B81EA3 
{
	// System.IntPtr Realms.Native.PrimitiveValue/LinkValue::object_ptr
	intptr_t ___object_ptr_0;
	// Realms.Native.TableKey Realms.Native.PrimitiveValue/LinkValue::table_key
	TableKey_tDE0311CA4D5C298F8BB7E0352BAEE9910E60B713 ___table_key_1;
};

// Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move
struct Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237 
{
	// System.IntPtr Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move::From
	intptr_t ___From_0;
	// System.IntPtr Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move::To
	intptr_t ___To_1;
};

// System.Collections.Generic.List`1/Enumerator<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move>
struct Enumerator_tB700BC9E6E7C8BD2D72F2F343D938D58B581323F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t0B0E988A8317058A530514934AA74A8A47C91D39* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237 ____current_3;
};

// System.Linq.Enumerable/Iterator`1<Realms.Native.StringValue>
struct Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 ___current_2;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.ValueTuple`2<System.Object,System.Object>>
struct WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Guid>
struct WhereEnumerableIterator_1_tD9B3677A96A5B0AD1FA4479CEA26880403A92E6D  : public Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.KeyPath>
struct WhereEnumerableIterator_1_t8E2BDFFB19EFDD6FDD1A997E25D30A9151B5E20C  : public Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tED48016847BEDB00839D61E14F631458FB13A2BB* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector2>
struct WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75  : public Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>
struct WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>
struct WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9  : public Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.ChangeSet/Move>
struct WhereEnumerableIterator_1_t0F32988A00805A31D5F95BF4C5A5214EA3D7104B  : public Iterator_1_t84457A80C88597309971CA963B0AD904879B2F8E
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tF766663C676BB43E908160385DE1AE7E191CBACF* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector2>
struct WhereSelectListIterator_2_t6D757CC0B317F507E31783D6BAB8CDC2C848CB44  : public Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t127163694D7C66D0F32B7F8F5BB2507F7516DEE4* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector3>
struct WhereSelectListIterator_2_t2F947A7776BA76AEEB0F205EF71A63410DFACA65  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector4>
struct WhereSelectListIterator_2_t9651C82872E49763DA217BC42252D9BEAED98F8F  : public Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t01EEA5FE255AF6B9B90E3CFAE8B5571BC66E8302* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_tA397D24E1605A76B61FAB88C38499CFC5B625201  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t0A1D011E49157B9D56FE997E6A482A5DB8807547* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Guid>
struct WhereSelectListIterator_2_tD32E7B8A98D5FE56872A1EA8AFBE53F42FDE3900  : public Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t3807B8C9754B3D6705404B2CD1E16545D814C5F9* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Int32>
struct WhereSelectListIterator_2_tD93DE3EAF3A43F96261ED1E1C40826D106FDFE9C  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tF8593969B24CFE8ED3A96E2492171238088CB745* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.KeyPath>
struct WhereSelectListIterator_2_t188D1C1E4FC64D629FDE0E7B9945CEE40D32FEC5  : public Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t0A9E31724C776DB67DCD4F7112EE85A7A2B0CD33* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Object>
struct WhereSelectListIterator_2_t502F76E72C22266C9CEB2731335807A882BA3B40  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t4FD74B88B95B6110B1D6592FD11281D6C97B1E46* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Single>
struct WhereSelectListIterator_2_t0983DF24E4CA20D883685546E2A58A7316B7F8F6  : public Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t5CF6D64DB8F942BFBDDE1DA250A41595B7CD124B* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector2>
struct WhereSelectListIterator_2_t95AE895BD033E8B6C1E4E322D568E3D596FCD87C  : public Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tB381C8D4E63305292B8BAE77DFB59AAAEC93E7EB* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector3>
struct WhereSelectListIterator_2_t423DF549C799E9117DBC87E884E0504546C62065  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t15754930DFF16C02EF8AC22B6EED29449A2EF8FA* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector4>
struct WhereSelectListIterator_2_t38D0B415E5EF53C6DAB6487265554AF096CDE8B6  : public Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tDC0BD947591C831552E42B078DDF4F4376D0B51C* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tC496704D554895234B1360058C5CC2D901C24957* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Guid>
struct WhereSelectListIterator_2_t2EB837695B7D069AF34EA97F9E715D981199F4FC  : public Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t77FA9C1683C0E1C9EAB1F170DF3C99ACB681C844* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>
struct WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.KeyPath>
struct WhereSelectListIterator_2_t66FF86786D55B63BCC9786B47B321044E794E29B  : public Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tEAC08894811D9FD5269204AA3060C2BEF8F1D642* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>
struct WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D  : public Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector2>
struct WhereSelectListIterator_2_t87AD7612E82A4062BBF65D4AEF211245C8A02452  : public Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tE58FFCA3E7D1699580A0C27FAFD702E828AC651E* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector3>
struct WhereSelectListIterator_2_t6883B5D59E258B59317BFE9FB7405235985546FD  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t208A44437DC9E09577E7BBCC73E296265723730A* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector4>
struct WhereSelectListIterator_2_t85FFC53584D855FF66ADBE91B3903B9A2A75118B  : public Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t264165A1230ACB392CC4F13E8C39F1A315308B40* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Realms.Native.PrimitiveValue
struct PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Realms.Native.PrimitiveValue::int_value
			int64_t ___int_value_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int_value_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Realms.Native.PrimitiveValue::float_value
			float ___float_value_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___float_value_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Realms.Native.PrimitiveValue::double_value
			double ___double_value_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_value_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Realms.Native.PrimitiveValue/<decimal_bits>e__FixedBuffer Realms.Native.PrimitiveValue::decimal_bits
			U3Cdecimal_bitsU3Ee__FixedBuffer_tF7D50EE072C933FF8FA41523147EAE0AF67B528D ___decimal_bits_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3Cdecimal_bitsU3Ee__FixedBuffer_tF7D50EE072C933FF8FA41523147EAE0AF67B528D ___decimal_bits_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Realms.Native.PrimitiveValue/<object_id_bytes>e__FixedBuffer Realms.Native.PrimitiveValue::object_id_bytes
			U3Cobject_id_bytesU3Ee__FixedBuffer_t8744739B792C1B30310C858286163338499BA3FB ___object_id_bytes_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3Cobject_id_bytesU3Ee__FixedBuffer_t8744739B792C1B30310C858286163338499BA3FB ___object_id_bytes_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Realms.Native.PrimitiveValue/<guid_bytes>e__FixedBuffer Realms.Native.PrimitiveValue::guid_bytes
			U3Cguid_bytesU3Ee__FixedBuffer_tC99494C5FB5D0B6DDFDBECE6BB8FEFAEE7165DC3 ___guid_bytes_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3Cguid_bytesU3Ee__FixedBuffer_tC99494C5FB5D0B6DDFDBECE6BB8FEFAEE7165DC3 ___guid_bytes_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___dontuse_6_OffsetPadding[8];
			// System.Int64 Realms.Native.PrimitiveValue::dontuse
			int64_t ___dontuse_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___dontuse_6_OffsetPadding_forAlignmentOnly[8];
			int64_t ___dontuse_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Realms.Native.StringValue Realms.Native.PrimitiveValue::string_value
			StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 ___string_value_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 ___string_value_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Realms.Native.BinaryValue Realms.Native.PrimitiveValue::data_value
			BinaryValue_t7B2D7E7F1646EFE4AFF2C22C56F384B11C8F551D ___data_value_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			BinaryValue_t7B2D7E7F1646EFE4AFF2C22C56F384B11C8F551D ___data_value_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Realms.Native.PrimitiveValue/TimestampValue Realms.Native.PrimitiveValue::timestamp_value
			TimestampValue_t6D61E9CC604EF7895FE1872840E8227341DD69DC ___timestamp_value_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			TimestampValue_t6D61E9CC604EF7895FE1872840E8227341DD69DC ___timestamp_value_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Realms.Native.PrimitiveValue/LinkValue Realms.Native.PrimitiveValue::link_value
			LinkValue_t2E971397736EAD9583513BF15C18315B51B81EA3 ___link_value_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			LinkValue_t2E971397736EAD9583513BF15C18315B51B81EA3 ___link_value_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr Realms.Native.PrimitiveValue::collection_ptr
			intptr_t ___collection_ptr_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___collection_ptr_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Type_12_OffsetPadding[16];
			// Realms.RealmValueType Realms.Native.PrimitiveValue::Type
			uint8_t ___Type_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Type_12_OffsetPadding_forAlignmentOnly[16];
			uint8_t ___Type_12_forAlignmentOnly;
		};
	};
};

// Realms.Native.SchemaObject
struct SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD 
{
	// Realms.Native.StringValue Realms.Native.SchemaObject::name
	StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 ___name_0;
	// Realms.MarshaledVector`1<Realms.Native.SchemaProperty> Realms.Native.SchemaObject::properties
	MarshaledVector_1_tAEBD9E253FC482440666227695756A33F3D51BAD ___properties_1;
	// Realms.Native.StringValue Realms.Native.SchemaObject::primary_key
	StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 ___primary_key_2;
	// Realms.Schema.ObjectSchema/ObjectType Realms.Native.SchemaObject::table_type
	uint8_t ___table_type_3;
};

// Realms.Native.SchemaProperty
struct SchemaProperty_t04A08E4E115B0691FEB67BE6FA34B7DEF6DB0C94 
{
	// Realms.Native.StringValue Realms.Native.SchemaProperty::name
	StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 ___name_0;
	// Realms.Native.StringValue Realms.Native.SchemaProperty::managed_name
	StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 ___managed_name_1;
	// Realms.Native.StringValue Realms.Native.SchemaProperty::object_type
	StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 ___object_type_2;
	// Realms.Native.StringValue Realms.Native.SchemaProperty::link_origin_property_name
	StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 ___link_origin_property_name_3;
	// Realms.Schema.PropertyType Realms.Native.SchemaProperty::type
	uint16_t ___type_4;
	// Realms.Native.NativeBool Realms.Native.SchemaProperty::is_primary
	NativeBool_t0F66C3325B235DDF3E7B5D6D80D0C5A9BDBD3B0A ___is_primary_5;
	// Realms.IndexType Realms.Native.SchemaProperty::index
	int32_t ___index_6;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Collections.Generic.List`1/Enumerator<Realms.Native.PrimitiveValue>
struct Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ____current_3;
};

// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4  : public MulticastDelegate_t
{
};

// System.Func`2<System.Guid,System.Boolean>
struct Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.KeyPath,System.Boolean>
struct Func_2_tED48016847BEDB00839D61E14F631458FB13A2BB  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,Realms.Native.SchemaObject>
struct Func_2_tCF83ECAB8AFDA1BF6DCCB8648945D6F86001BC5F  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Single>
struct Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,Realms.Native.StringValue>
struct Func_2_t7FEAF9B40BC91889C3F7FA1D3C0AB0E276613D6C  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,UnityEngine.Vector2>
struct Func_2_t127163694D7C66D0F32B7F8F5BB2507F7516DEE4  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,UnityEngine.Vector3>
struct Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,UnityEngine.Vector4>
struct Func_2_t01EEA5FE255AF6B9B90E3CFAE8B5571BC66E8302  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.PrimitiveValue,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tFB60D22A7188A225EC88D4C2A2A516E8A5EC1B45  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.PrimitiveValue,System.Boolean>
struct Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.PrimitiveValue,System.Guid>
struct Func_2_t6F5D52A89A1B936762EE51CD9D9AAD0EF815BD23  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.PrimitiveValue,System.Int32>
struct Func_2_tF01BB0E21083B293CF60FDE06ED0026AC094CFB7  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.PrimitiveValue,Realms.KeyPath>
struct Func_2_tB313531AE7343695ABF10C08F75B55E4699B40DD  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.PrimitiveValue,System.Object>
struct Func_2_t429E82ABFFFC2AC1CE010D74CC7A9C629055F887  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.PrimitiveValue,Realms.Native.SchemaObject>
struct Func_2_t210E61F99D7472E51282943CC7639FF687A3719F  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.PrimitiveValue,System.Single>
struct Func_2_t90CE56F960E045743F1A9D67A849897248A821D9  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.PrimitiveValue,Realms.Native.StringValue>
struct Func_2_t478B3D12821F41ABD43978161E257B9F8BADC68B  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.PrimitiveValue,UnityEngine.Vector2>
struct Func_2_tC71476211D01CF6367A4721A03CB208B876EA9FD  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.PrimitiveValue,UnityEngine.Vector3>
struct Func_2_t4086956E9AE7A5665BF03B7A439D29BF0941DD15  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.PrimitiveValue,UnityEngine.Vector4>
struct Func_2_tC0F42D8244464038AD9681F241E7C31A37D8242D  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Schema.Property,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_t0A1D011E49157B9D56FE997E6A482A5DB8807547  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Schema.Property,System.Boolean>
struct Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Schema.Property,System.Guid>
struct Func_2_t3807B8C9754B3D6705404B2CD1E16545D814C5F9  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Schema.Property,System.Int32>
struct Func_2_tF8593969B24CFE8ED3A96E2492171238088CB745  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Schema.Property,Realms.KeyPath>
struct Func_2_t0A9E31724C776DB67DCD4F7112EE85A7A2B0CD33  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Schema.Property,System.Object>
struct Func_2_t4FD74B88B95B6110B1D6592FD11281D6C97B1E46  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Schema.Property,Realms.Native.SchemaObject>
struct Func_2_tAD733CA4558224115B2DA3BF79BFD352C06CDCE7  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Schema.Property,Realms.Native.SchemaProperty>
struct Func_2_tC47F6B9AEF0CD37A0AAF7B841E0964898D7E76EC  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Schema.Property,System.Single>
struct Func_2_t5CF6D64DB8F942BFBDDE1DA250A41595B7CD124B  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Schema.Property,Realms.Native.StringValue>
struct Func_2_t4501FBC7B7B6DE5384D627D7E0E5A8C6584958D8  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Schema.Property,UnityEngine.Vector2>
struct Func_2_tB381C8D4E63305292B8BAE77DFB59AAAEC93E7EB  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Schema.Property,UnityEngine.Vector3>
struct Func_2_t15754930DFF16C02EF8AC22B6EED29449A2EF8FA  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Schema.Property,UnityEngine.Vector4>
struct Func_2_tDC0BD947591C831552E42B078DDF4F4376D0B51C  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.SchemaObject,System.Boolean>
struct Func_2_t3933D1A9C2F1F83F8EE6F4C8686FB62AD7C724EE  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.SchemaProperty,System.Boolean>
struct Func_2_tD1F5FD4955CFB8FF8610002415951FD9B651B750  : public MulticastDelegate_t
{
};

// System.Func`2<System.Single,System.Boolean>
struct Func_2_t49E998685259ADE759F9329BF66F20DE8667006E  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.StringValue,System.Boolean>
struct Func_2_t1A51224749A0012D832BF2E64575FDEF202FAE9E  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_tC496704D554895234B1360058C5CC2D901C24957  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Guid>
struct Func_2_t77FA9C1683C0E1C9EAB1F170DF3C99ACB681C844  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>
struct Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Realms.KeyPath>
struct Func_2_tEAC08894811D9FD5269204AA3060C2BEF8F1D642  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.SchemaObject>
struct Func_2_t934BEB9FD7B82BD864DFC9AA662455FFF6130528  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>
struct Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.StringValue>
struct Func_2_t08BC79E812019DA290F7DB747CDBAEE3FDB7F571  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector2>
struct Func_2_tE58FFCA3E7D1699580A0C27FAFD702E828AC651E  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector3>
struct Func_2_t208A44437DC9E09577E7BBCC73E296265723730A  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector4>
struct Func_2_t264165A1230ACB392CC4F13E8C39F1A315308B40  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Vector2,System.Boolean>
struct Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Vector3,System.Boolean>
struct Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Vector4,System.Boolean>
struct Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.ChangeSet/Move,System.Boolean>
struct Func_2_tF766663C676BB43E908160385DE1AE7E191CBACF  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move,System.Boolean>
struct Func_2_t769154D792964F65B1090A0A4CA1C50554085781  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move,Realms.ChangeSet/Move>
struct Func_2_t68217885A5968320AD5647CE9C496996E1AB11F5  : public MulticastDelegate_t
{
};

// System.Linq.Enumerable/Iterator`1<Realms.Native.SchemaObject>
struct Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD ___current_2;
};

// System.Linq.Enumerable/Iterator`1<Realms.Native.SchemaProperty>
struct Iterator_1_t46BF638A1DF2D69EAA3663ECCC3E5615FD54E6C3  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	SchemaProperty_t04A08E4E115B0691FEB67BE6FA34B7DEF6DB0C94 ___current_2;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.Native.StringValue>
struct WhereEnumerableIterator_1_t85FA13B5DA9275197656EBD8285E1371A80E65D0  : public Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t1A51224749A0012D832BF2E64575FDEF202FAE9E* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Realms.Native.StringValue>
struct WhereSelectListIterator_2_t0822086E0A8333BD1C0A264D828A2466EC971560  : public Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t7FEAF9B40BC91889C3F7FA1D3C0AB0E276613D6C* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.StringValue>
struct WhereSelectListIterator_2_tDA2665678E41A10B21E54E10D7F905F3641FA2A6  : public Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t4501FBC7B7B6DE5384D627D7E0E5A8C6584958D8* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.StringValue>
struct WhereSelectListIterator_2_tBDA1A315234F78C7F2A1D794F578B1F0B2F5399C  : public Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t08BC79E812019DA290F7DB747CDBAEE3FDB7F571* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move,Realms.ChangeSet/Move>
struct WhereSelectListIterator_2_tA99199351429EB86E604DAB78DCF92DB2D162F97  : public Iterator_1_t84457A80C88597309971CA963B0AD904879B2F8E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t0B0E988A8317058A530514934AA74A8A47C91D39* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t769154D792964F65B1090A0A4CA1C50554085781* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t68217885A5968320AD5647CE9C496996E1AB11F5* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB700BC9E6E7C8BD2D72F2F343D938D58B581323F ___enumerator_6;
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Rect,System.Object,System.Single>
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.RectInt,System.Object,System.Int32>
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2,System.Object,System.Single>
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2Int,System.Object,System.Int32>
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3,System.Object,System.Single>
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3Int,System.Object,System.Int32>
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector4,System.Object,System.Single>
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8  : public MulticastDelegate_t
{
};

// UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Realms.Native.SyncError/CompensatingWriteInfo
struct CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A 
{
	// Realms.Native.StringValue Realms.Native.SyncError/CompensatingWriteInfo::reason
	StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 ___reason_0;
	// Realms.Native.StringValue Realms.Native.SyncError/CompensatingWriteInfo::object_name
	StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 ___object_name_1;
	// Realms.Native.PrimitiveValue Realms.Native.SyncError/CompensatingWriteInfo::primary_key
	PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___primary_key_2;
};

// System.Collections.Generic.List`1/Enumerator<Realms.Native.SyncError/CompensatingWriteInfo>
struct Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ____current_3;
};

// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.ValueTuple`2<System.Object,System.Object>>
struct Func_2_t03CA755C248F875160167B828915D6082B1B04C9  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Boolean>
struct Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Guid>
struct Func_2_t4DC8BD25FD9294FE03EDBB25432A58F0258C2C1E  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Int32>
struct Func_2_t9A90534C443C9EEB3549323D9827F807D313F61C  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.KeyPath>
struct Func_2_tB9AF32C440CFF51539468D51BAC35222664515DC  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Object>
struct Func_2_t9AF765B749C8FB6EBB8EB10FF8DD1179384A67BA  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.SchemaObject>
struct Func_2_tF3AA4AD2C7C1736A58F720FB888548D318056273  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Single>
struct Func_2_t2A82C711EDC64CDF3AD004D83EDAB4783CB1BC6E  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.StringValue>
struct Func_2_tFAEF0CCB9C791E80A31E045E378B4961D4BD6813  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector2>
struct Func_2_t2606923E4ECA17448CE383E2E0A4D7B4634B4990  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector3>
struct Func_2_t71250C7A2B7B3BC12FF416A1DEF67E1C1537EC02  : public MulticastDelegate_t
{
};

// System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector4>
struct Func_2_t4A91E5D3092011C21723653D37A7736AC536B84D  : public MulticastDelegate_t
{
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.Native.SchemaObject>
struct WhereEnumerableIterator_1_tD26E121E693726AF91796ECC3C2F2496D6B34430  : public Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t3933D1A9C2F1F83F8EE6F4C8686FB62AD7C724EE* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.Native.SchemaProperty>
struct WhereEnumerableIterator_1_t8654ECAC8E9E6FF557E1A76C04AE8F02A7A7F5B5  : public Iterator_1_t46BF638A1DF2D69EAA3663ECCC3E5615FD54E6C3
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tD1F5FD4955CFB8FF8610002415951FD9B651B750* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Realms.Native.SchemaObject>
struct WhereSelectListIterator_2_t42B5B14419D4DC51F1649E5A5C3215858974F25E  : public Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tCF83ECAB8AFDA1BF6DCCB8648945D6F86001BC5F* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t1D1ECE57DDFB8B79F11AE611E6CFD43FD79C2A75  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFB60D22A7188A225EC88D4C2A2A516E8A5EC1B45* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Guid>
struct WhereSelectListIterator_2_t5F859585DBD38F530CDADB5DE2D2E5B741E473B6  : public Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t6F5D52A89A1B936762EE51CD9D9AAD0EF815BD23* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Int32>
struct WhereSelectListIterator_2_tF17BC0AE60EF6A2CC11A2B94A9E5F0777FD249C5  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tF01BB0E21083B293CF60FDE06ED0026AC094CFB7* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.KeyPath>
struct WhereSelectListIterator_2_t28AB655AA4A400E98C753FAE39A8854666509F71  : public Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tB313531AE7343695ABF10C08F75B55E4699B40DD* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Object>
struct WhereSelectListIterator_2_t60B3F115E1808DEFF67E64031605E0CF6CAA916D  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t429E82ABFFFC2AC1CE010D74CC7A9C629055F887* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.Native.SchemaObject>
struct WhereSelectListIterator_2_tA7D93BC522D059361B567DB7386ACD3AB4F9199B  : public Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t210E61F99D7472E51282943CC7639FF687A3719F* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Single>
struct WhereSelectListIterator_2_tD5B8B4EDE8DE52C8140F32A2AE4D1D840BF4623E  : public Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t90CE56F960E045743F1A9D67A849897248A821D9* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.Native.StringValue>
struct WhereSelectListIterator_2_tF7F7D19F91F7FF29FEB9AC4C40AF34BEC05C5FE4  : public Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t478B3D12821F41ABD43978161E257B9F8BADC68B* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector2>
struct WhereSelectListIterator_2_tC0EDCE3671DC8A347EC3FA41D4BB5A6707A0EC67  : public Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tC71476211D01CF6367A4721A03CB208B876EA9FD* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector3>
struct WhereSelectListIterator_2_t0752849B241AC3D8351B3D6146CE326291B4CB28  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t4086956E9AE7A5665BF03B7A439D29BF0941DD15* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector4>
struct WhereSelectListIterator_2_tC707137F05826EECD63624BA657FEAC39F00C292  : public Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tC0F42D8244464038AD9681F241E7C31A37D8242D* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.SchemaObject>
struct WhereSelectListIterator_2_t85F5892D866F96458AE20F82BDA332937BFBAE63  : public Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tAD733CA4558224115B2DA3BF79BFD352C06CDCE7* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.SchemaProperty>
struct WhereSelectListIterator_2_tE7D2819C273C34D93B8E52FA26B6371CE3936B9A  : public Iterator_1_t46BF638A1DF2D69EAA3663ECCC3E5615FD54E6C3
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tC47F6B9AEF0CD37A0AAF7B841E0964898D7E76EC* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.SchemaObject>
struct WhereSelectListIterator_2_t9DE7BD7D89A1833ED9C07353A12709356F6E1BB0  : public Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t934BEB9FD7B82BD864DFC9AA662455FFF6130528* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.ValueTuple`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_tE4D1677627952441B6403BD2F7FE67483F02BEA1  : public Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t03CA755C248F875160167B828915D6082B1B04C9* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Guid>
struct WhereSelectListIterator_2_t6B4BEBF6242540C8713B1E462A94A9371960EA51  : public Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t4DC8BD25FD9294FE03EDBB25432A58F0258C2C1E* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Int32>
struct WhereSelectListIterator_2_t8A943F5A7C427BB120AFD260C152D6248682BB5A  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t9A90534C443C9EEB3549323D9827F807D313F61C* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.KeyPath>
struct WhereSelectListIterator_2_tAA33716851819066683D677996641C6D161A3684  : public Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tB9AF32C440CFF51539468D51BAC35222664515DC* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Object>
struct WhereSelectListIterator_2_tD8C2A18C14631F8C9AA22BD061EF98FD514E2C99  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t9AF765B749C8FB6EBB8EB10FF8DD1179384A67BA* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.SchemaObject>
struct WhereSelectListIterator_2_t69568E754CC7EA89B0002864BDE412F643D7F784  : public Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tF3AA4AD2C7C1736A58F720FB888548D318056273* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Single>
struct WhereSelectListIterator_2_tE59F3D6BE467EABCC4645DDB4BD08F3F91307F92  : public Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t2A82C711EDC64CDF3AD004D83EDAB4783CB1BC6E* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.StringValue>
struct WhereSelectListIterator_2_tA7401EB770D559AF2DA9E3FD7B1FD53E6C6F667F  : public Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFAEF0CCB9C791E80A31E045E378B4961D4BD6813* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector2>
struct WhereSelectListIterator_2_tB1263FF3FD17A16713E9EE78908F9C184A4B08D6  : public Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t2606923E4ECA17448CE383E2E0A4D7B4634B4990* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector3>
struct WhereSelectListIterator_2_t5E88820A1FB7395337EDFF872CE4D9A4A0A50A9D  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t71250C7A2B7B3BC12FF416A1DEF67E1C1537EC02* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector4>
struct WhereSelectListIterator_2_t79F5931FF7D6E8AB258918D05FC4D76052A4F543  : public Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t4A91E5D3092011C21723653D37A7736AC536B84D* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 ___enumerator_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Linq.Enumerable/Iterator`1<Realms.Native.SchemaObject>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_mFB8E9331E1D58E2A2630EEF92F370603EC76BA91_gshared (Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Realms.Native.SchemaObject>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8D72AFA7D5A124C26644AF0AC7DA7BFBB6A51BB0_gshared (WhereSelectListIterator_2_t42B5B14419D4DC51F1649E5A5C3215858974F25E* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tCF83ECAB8AFDA1BF6DCCB8648945D6F86001BC5F* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,Realms.Native.SchemaObject>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD Func_2_Invoke_m567486E77E5A98A34DC60AEA578E6B67FFF44CD9_gshared_inline (Func_2_tCF83ECAB8AFDA1BF6DCCB8648945D6F86001BC5F* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.Native.SchemaObject>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE8A6FCF46E486262885323C90F04B102705E4C79_gshared (WhereEnumerableIterator_1_tD26E121E693726AF91796ECC3C2F2496D6B34430* __this, RuntimeObject* ___source0, Func_2_t3933D1A9C2F1F83F8EE6F4C8686FB62AD7C724EE* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m7FEBAE985CDE5DD1CB255EB4A3D65F05AA8D2AEF_gshared (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Single>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m22BAFF678F9378729DD9E5551BBA6BA69FDEEF94_gshared (WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_mBE16A5FDA5E80CCBA51D69334EF21C0F03D353AF_gshared_inline (Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mCB49A03958EF827EF6CE47402259941EAB31D984_gshared (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* __this, RuntimeObject* ___source0, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<Realms.Native.StringValue>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m76554CB1FDBB89992FFB766F579ACC93103EE1CB_gshared (Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Realms.Native.StringValue>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6D1312AC1F4C6353B4F80C575A72C1781C945BB7_gshared (WhereSelectListIterator_2_t0822086E0A8333BD1C0A264D828A2466EC971560* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t7FEAF9B40BC91889C3F7FA1D3C0AB0E276613D6C* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,Realms.Native.StringValue>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 Func_2_Invoke_m00140FA5334202FFFC3866B79CDE48942C4A1A94_gshared_inline (Func_2_t7FEAF9B40BC91889C3F7FA1D3C0AB0E276613D6C* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.Native.StringValue>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mD43F06F3C0215811180E199186B9EA63E88384AA_gshared (WhereEnumerableIterator_1_t85FA13B5DA9275197656EBD8285E1371A80E65D0* __this, RuntimeObject* ___source0, Func_2_t1A51224749A0012D832BF2E64575FDEF202FAE9E* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m78B15ADF003EB66E975D0F71571715AE0A2C63DD_gshared (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector2>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m806C56469C3B3CE4D41439A0205E28D186E82FF6_gshared (WhereSelectListIterator_2_t6D757CC0B317F507E31783D6BAB8CDC2C848CB44* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t127163694D7C66D0F32B7F8F5BB2507F7516DEE4* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,UnityEngine.Vector2>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_mB81D84A05453E4320D091506FC75F34E2C0E0ADC_gshared_inline (Func_2_t127163694D7C66D0F32B7F8F5BB2507F7516DEE4* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector2>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m9C077DCBB6483C517E8B74C1F61F52D38B51AE0A_gshared (WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75* __this, RuntimeObject* ___source0, Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF_gshared (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5A8EEDF32091C2AC8FF6CA6B931180CC68A43EA3_gshared (WhereSelectListIterator_2_t2F947A7776BA76AEEB0F205EF71A63410DFACA65* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,UnityEngine.Vector3>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_m72462558F94253B761AE3224284CF6A0ED6E5521_gshared_inline (Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023_gshared (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* __this, RuntimeObject* ___source0, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D_gshared (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m274E71E959F2DE46853B9D4066D696F7A5E7A242_gshared (WhereSelectListIterator_2_t9651C82872E49763DA217BC42252D9BEAED98F8F* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t01EEA5FE255AF6B9B90E3CFAE8B5571BC66E8302* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,UnityEngine.Vector4>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_m404CC86DD4A7C42E047A2B9F0D8EF8A79A563ABB_gshared_inline (Func_2_t01EEA5FE255AF6B9B90E3CFAE8B5571BC66E8302* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB_gshared (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9* __this, RuntimeObject* ___source0, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m2354367D0E1B37E7E69B5E67F97AEEE56674E8C4_gshared (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m1AC35FDB7DB42824DE56959C69959373EF0AA1BD_gshared (WhereSelectListIterator_2_t1D1ECE57DDFB8B79F11AE611E6CFD43FD79C2A75* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_tFB60D22A7188A225EC88D4C2A2A516E8A5EC1B45* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Realms.Native.PrimitiveValue>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C List_1_GetEnumerator_m247E418410B1D685C84D5E16B651A345563C67A5_gshared (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Realms.Native.PrimitiveValue>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B Enumerator_get_Current_mAF9948BAE896A229451C88312BC11312AFC644A8_gshared_inline (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.PrimitiveValue,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m75EC2083856EBA636983B0D1930AC65BBD70B8BD_gshared_inline (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.PrimitiveValue,System.ValueTuple`2<System.Object,System.Object>>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Func_2_Invoke_mFB1328B15495AE319F4A1122468EAD253C18212A_gshared_inline (Func_2_tFB60D22A7188A225EC88D4C2A2A516E8A5EC1B45* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Realms.Native.PrimitiveValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFDA7AE925C7AB0E8B68E1793C0A0BB55EFE16366_gshared (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mB57E9223DB0E68D35CAE577A2C111D98EDAC5298_gshared (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* __this, RuntimeObject* ___source0, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<System.Guid>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_mEE24CA444F268E52B9F173A684E9A50C294ABBCF_gshared (Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Guid>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mD81A541F00BC923467DB37472688050E4ED7136D_gshared (WhereSelectListIterator_2_t5F859585DBD38F530CDADB5DE2D2E5B741E473B6* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_t6F5D52A89A1B936762EE51CD9D9AAD0EF815BD23* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.PrimitiveValue,System.Guid>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t Func_2_Invoke_mBF51B7910D885B818A6C92BC3679438D81C6B907_gshared_inline (Func_2_t6F5D52A89A1B936762EE51CD9D9AAD0EF815BD23* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Guid>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m9DD9CD3347A8DF85572E37D93DE7575DA4CF1626_gshared (WhereEnumerableIterator_1_tD9B3677A96A5B0AD1FA4479CEA26880403A92E6D* __this, RuntimeObject* ___source0, Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7_gshared (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2A711391E5932E6CF7528D549F01C82DE1DCF7AA_gshared (WhereSelectListIterator_2_tF17BC0AE60EF6A2CC11A2B94A9E5F0777FD249C5* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_tF01BB0E21083B293CF60FDE06ED0026AC094CFB7* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.PrimitiveValue,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mA1BA5A89DB1F7A5384BF03FE2CC141432588E005_gshared_inline (Func_2_tF01BB0E21083B293CF60FDE06ED0026AC094CFB7* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE_gshared (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<Realms.KeyPath>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_mA1C51ABC585C08998C0C98D4B0A478E18F7B008A_gshared (Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.KeyPath>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m1DC6F2EB970D4546838B651BE622DE4A5AA3179A_gshared (WhereSelectListIterator_2_t28AB655AA4A400E98C753FAE39A8854666509F71* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_tB313531AE7343695ABF10C08F75B55E4699B40DD* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.PrimitiveValue,Realms.KeyPath>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D Func_2_Invoke_m084776653B82944F57AF389DE04F75A283DFF7FA_gshared_inline (Func_2_tB313531AE7343695ABF10C08F75B55E4699B40DD* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.KeyPath>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m5629CFC57747C084082271317D4281BD090CDCE6_gshared (WhereEnumerableIterator_1_t8E2BDFFB19EFDD6FDD1A997E25D30A9151B5E20C* __this, RuntimeObject* ___source0, Func_2_tED48016847BEDB00839D61E14F631458FB13A2BB* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m75BD6F2E66C27F6EFB08358798D69BB58A25E707_gshared (WhereSelectListIterator_2_t60B3F115E1808DEFF67E64031605E0CF6CAA916D* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_t429E82ABFFFC2AC1CE010D74CC7A9C629055F887* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.PrimitiveValue,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m743660DEBFCC2A4F52E0A52B28811BADC0F059B3_gshared_inline (Func_2_t429E82ABFFFC2AC1CE010D74CC7A9C629055F887* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.Native.SchemaObject>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m455FFC550CF077B57E6EB07D4C6E0EDECE54756C_gshared (WhereSelectListIterator_2_tA7D93BC522D059361B567DB7386ACD3AB4F9199B* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_t210E61F99D7472E51282943CC7639FF687A3719F* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.PrimitiveValue,Realms.Native.SchemaObject>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD Func_2_Invoke_mD913EF3C33D8C9D342733C13B6340CD79E3AB4CD_gshared_inline (Func_2_t210E61F99D7472E51282943CC7639FF687A3719F* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Single>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mAAA3EF1A2DD7602CAD6DCDF9793BC9706E3E945F_gshared (WhereSelectListIterator_2_tD5B8B4EDE8DE52C8140F32A2AE4D1D840BF4623E* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_t90CE56F960E045743F1A9D67A849897248A821D9* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.PrimitiveValue,System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_mD94FBE777ED7F338999AE0E4A9C5C2262E395D35_gshared_inline (Func_2_t90CE56F960E045743F1A9D67A849897248A821D9* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.Native.StringValue>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m4BC66429B7646BE612D8D93EE5AC94EB44DB6F1E_gshared (WhereSelectListIterator_2_tF7F7D19F91F7FF29FEB9AC4C40AF34BEC05C5FE4* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_t478B3D12821F41ABD43978161E257B9F8BADC68B* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.PrimitiveValue,Realms.Native.StringValue>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 Func_2_Invoke_m2887033A7BCC2749BBFE1E1F2B8C5E23270EFC45_gshared_inline (Func_2_t478B3D12821F41ABD43978161E257B9F8BADC68B* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector2>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA863E14AA2DF40C9E2049ED3AE01C0606A0F1C24_gshared (WhereSelectListIterator_2_tC0EDCE3671DC8A347EC3FA41D4BB5A6707A0EC67* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_tC71476211D01CF6367A4721A03CB208B876EA9FD* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.PrimitiveValue,UnityEngine.Vector2>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_mEFD7F55BC0F81F921E9081338D0BCD886CBFFB19_gshared_inline (Func_2_tC71476211D01CF6367A4721A03CB208B876EA9FD* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF3C9D61E4D31E2950F615CC92937117453AF76FD_gshared (WhereSelectListIterator_2_t0752849B241AC3D8351B3D6146CE326291B4CB28* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_t4086956E9AE7A5665BF03B7A439D29BF0941DD15* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.PrimitiveValue,UnityEngine.Vector3>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_mC04A0F679DFBDE21F1CFED2AC219429427E7EFB8_gshared_inline (Func_2_t4086956E9AE7A5665BF03B7A439D29BF0941DD15* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0F05C73DCBFD4286C689A297375F66D2766C50E3_gshared (WhereSelectListIterator_2_tC707137F05826EECD63624BA657FEAC39F00C292* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_tC0F42D8244464038AD9681F241E7C31A37D8242D* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.PrimitiveValue,UnityEngine.Vector4>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_m7A5AE9163F762E1F71607A8D572886E09B6B3EB9_gshared_inline (Func_2_tC0F42D8244464038AD9681F241E7C31A37D8242D* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mFD9B1DCE1281A6C4E5A9B9F9EF1D6CBB8763052B_gshared (WhereSelectListIterator_2_tA397D24E1605A76B61FAB88C38499CFC5B625201* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t0A1D011E49157B9D56FE997E6A482A5DB8807547* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Realms.Schema.Property>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF List_1_GetEnumerator_m498538CDE927D22B507110228E1A1B911ADB758D_gshared (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Realms.Schema.Property>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Property_tA1E653E5DCE45303997F51563A7060FE291075DC Enumerator_get_Current_m9882246BFEAA177BC7A18BCF40BF0D3861EA45D3_gshared_inline (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Schema.Property,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mEB16369495B60475CAA6E581D0FE8CEF13F08307_gshared_inline (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Schema.Property,System.ValueTuple`2<System.Object,System.Object>>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Func_2_Invoke_mDFDF48F96731ACEE5EA85D83715C5552F48DF078_gshared_inline (Func_2_t0A1D011E49157B9D56FE997E6A482A5DB8807547* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Realms.Schema.Property>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m765BCF4132B64FA1C4DDCB609E7F87550A1C2935_gshared (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Guid>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mB505D2DE46B84BC89E95D59C21C108645E0FB33A_gshared (WhereSelectListIterator_2_tD32E7B8A98D5FE56872A1EA8AFBE53F42FDE3900* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t3807B8C9754B3D6705404B2CD1E16545D814C5F9* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Schema.Property,System.Guid>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t Func_2_Invoke_mDC94F8547482F318BA6B3F893E257B340B38A5E4_gshared_inline (Func_2_t3807B8C9754B3D6705404B2CD1E16545D814C5F9* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA68076C06D59CB41D7F338DE040F2424907FA38C_gshared (WhereSelectListIterator_2_tD93DE3EAF3A43F96261ED1E1C40826D106FDFE9C* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_tF8593969B24CFE8ED3A96E2492171238088CB745* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Schema.Property,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m0B34FBC021B80ECDA3B1675D0291380EED5621A9_gshared_inline (Func_2_tF8593969B24CFE8ED3A96E2492171238088CB745* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.KeyPath>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m1CA179CCF003E4B5855009055733BFA420AE64AE_gshared (WhereSelectListIterator_2_t188D1C1E4FC64D629FDE0E7B9945CEE40D32FEC5* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t0A9E31724C776DB67DCD4F7112EE85A7A2B0CD33* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Schema.Property,Realms.KeyPath>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D Func_2_Invoke_m010578C284F697036E6B0EDACE4A06381C05FB5E_gshared_inline (Func_2_t0A9E31724C776DB67DCD4F7112EE85A7A2B0CD33* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m4AF316DA6FE79FB7AEB514FB9980A99087510BBE_gshared (WhereSelectListIterator_2_t502F76E72C22266C9CEB2731335807A882BA3B40* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t4FD74B88B95B6110B1D6592FD11281D6C97B1E46* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Schema.Property,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mFED01E7E7AA8123B66FEE52F45744B648C27FBB9_gshared_inline (Func_2_t4FD74B88B95B6110B1D6592FD11281D6C97B1E46* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.SchemaObject>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mEF04C3C3CCEA270209B1B24CFCECB9344BFFA7CC_gshared (WhereSelectListIterator_2_t85F5892D866F96458AE20F82BDA332937BFBAE63* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_tAD733CA4558224115B2DA3BF79BFD352C06CDCE7* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Schema.Property,Realms.Native.SchemaObject>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD Func_2_Invoke_m29BB9D391A55630C2C2686E63B631DD3546630A9_gshared_inline (Func_2_tAD733CA4558224115B2DA3BF79BFD352C06CDCE7* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<Realms.Native.SchemaProperty>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m444A05D6EE0C61B3D002308D9673F5DA7BDDF838_gshared (Iterator_1_t46BF638A1DF2D69EAA3663ECCC3E5615FD54E6C3* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.SchemaProperty>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2238429D7DBC1179F382784DE86E80C682498C1B_gshared (WhereSelectListIterator_2_tE7D2819C273C34D93B8E52FA26B6371CE3936B9A* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_tC47F6B9AEF0CD37A0AAF7B841E0964898D7E76EC* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Schema.Property,Realms.Native.SchemaProperty>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SchemaProperty_t04A08E4E115B0691FEB67BE6FA34B7DEF6DB0C94 Func_2_Invoke_mE803506220213BCB5A50A7B1DDD91A7E6A150272_gshared_inline (Func_2_tC47F6B9AEF0CD37A0AAF7B841E0964898D7E76EC* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.Native.SchemaProperty>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m6AB232783A95AAA2092027F69EA0E55DDF459525_gshared (WhereEnumerableIterator_1_t8654ECAC8E9E6FF557E1A76C04AE8F02A7A7F5B5* __this, RuntimeObject* ___source0, Func_2_tD1F5FD4955CFB8FF8610002415951FD9B651B750* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Single>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mBFFA658F3440F3780E643605C7B197FFAFEBBAF6_gshared (WhereSelectListIterator_2_t0983DF24E4CA20D883685546E2A58A7316B7F8F6* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t5CF6D64DB8F942BFBDDE1DA250A41595B7CD124B* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Schema.Property,System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m33614C25025BFAF59E35DEDEDB8826EC1DDAB672_gshared_inline (Func_2_t5CF6D64DB8F942BFBDDE1DA250A41595B7CD124B* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.StringValue>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA09866E36C3BDBD6BAF96E5C2777E8CD4384EAE9_gshared (WhereSelectListIterator_2_tDA2665678E41A10B21E54E10D7F905F3641FA2A6* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t4501FBC7B7B6DE5384D627D7E0E5A8C6584958D8* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Schema.Property,Realms.Native.StringValue>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 Func_2_Invoke_m6BCA9458DDD4A30BB4DA7D2378BB0AA3B493D519_gshared_inline (Func_2_t4501FBC7B7B6DE5384D627D7E0E5A8C6584958D8* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector2>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0581B7AAFEEF68F9825B3DF2EC906D7980766515_gshared (WhereSelectListIterator_2_t95AE895BD033E8B6C1E4E322D568E3D596FCD87C* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_tB381C8D4E63305292B8BAE77DFB59AAAEC93E7EB* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Schema.Property,UnityEngine.Vector2>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_m79771364E88276B2A40650A6FF9C349E67F88BBF_gshared_inline (Func_2_tB381C8D4E63305292B8BAE77DFB59AAAEC93E7EB* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m76A09180AD5C4EDF1DA0F24B2A7182E9970A428F_gshared (WhereSelectListIterator_2_t423DF549C799E9117DBC87E884E0504546C62065* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t15754930DFF16C02EF8AC22B6EED29449A2EF8FA* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Schema.Property,UnityEngine.Vector3>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_m40F363755A479B8135266E9DC57FA556B4747ECB_gshared_inline (Func_2_t15754930DFF16C02EF8AC22B6EED29449A2EF8FA* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m450B7BFF945E5AD1CE1AA7C833288270EAD49C09_gshared (WhereSelectListIterator_2_t38D0B415E5EF53C6DAB6487265554AF096CDE8B6* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_tDC0BD947591C831552E42B078DDF4F4376D0B51C* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Schema.Property,UnityEngine.Vector4>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_m2BCAAE2F6933485630DBA5B29B771FA1E3C3B6D8_gshared_inline (Func_2_tDC0BD947591C831552E42B078DDF4F4376D0B51C* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m1344C578099C9BF9AD59C3907C02DDC4B7952132_gshared (WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tC496704D554895234B1360058C5CC2D901C24957* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751_gshared (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Func_2_Invoke_m2AB6C1914FFEDDAF25F1EDC95B95C1614CFD344A_gshared_inline (Func_2_tC496704D554895234B1360058C5CC2D901C24957* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Guid>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mB0B4AC763B6D29893062924D19BD2DBEC2E772A8_gshared (WhereSelectListIterator_2_t2EB837695B7D069AF34EA97F9E715D981199F4FC* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t77FA9C1683C0E1C9EAB1F170DF3C99ACB681C844* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Guid>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t Func_2_Invoke_mE0B59E11BFA298BDA292C1E20CFABB6A9959C1A7_gshared_inline (Func_2_t77FA9C1683C0E1C9EAB1F170DF3C99ACB681C844* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.KeyPath>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mBD9AC05F4EBCEBD1BAD6E5FC4FF28D19E67A0A0B_gshared (WhereSelectListIterator_2_t66FF86786D55B63BCC9786B47B321044E794E29B* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tEAC08894811D9FD5269204AA3060C2BEF8F1D642* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Realms.KeyPath>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D Func_2_Invoke_m719985EE76CF0BD5FBD3E6E5FC15EB4740BE6032_gshared_inline (Func_2_tEAC08894811D9FD5269204AA3060C2BEF8F1D642* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.SchemaObject>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m56558AF6592C6631219D1CB817B9BCA106F5693F_gshared (WhereSelectListIterator_2_t9DE7BD7D89A1833ED9C07353A12709356F6E1BB0* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t934BEB9FD7B82BD864DFC9AA662455FFF6130528* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.SchemaObject>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD Func_2_Invoke_mDCF44A26B0DA4448CFFAED90A68296DE50055E97_gshared_inline (Func_2_t934BEB9FD7B82BD864DFC9AA662455FFF6130528* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m76F902C34043369FDB8A537BDF0D659CCC5697A6_gshared (WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m04BADA9FD9773CB362E37F37840B2AA611211094_gshared_inline (Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.StringValue>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m64EA5EEA58DFEDD0A251CDF2119AC7D0AFC43EFA_gshared (WhereSelectListIterator_2_tBDA1A315234F78C7F2A1D794F578B1F0B2F5399C* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t08BC79E812019DA290F7DB747CDBAEE3FDB7F571* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.StringValue>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 Func_2_Invoke_m10039BD668463CDC7DECB6833ACCFC284CE7AD95_gshared_inline (Func_2_t08BC79E812019DA290F7DB747CDBAEE3FDB7F571* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector2>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF81036FF4985B6E90BA6C1611373FA4231918626_gshared (WhereSelectListIterator_2_t87AD7612E82A4062BBF65D4AEF211245C8A02452* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tE58FFCA3E7D1699580A0C27FAFD702E828AC651E* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector2>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_m35E6E7CBB739C23EFC426907C293D4884C512111_gshared_inline (Func_2_tE58FFCA3E7D1699580A0C27FAFD702E828AC651E* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m10952410A7A2ACE220840ED727010AA138F4E0E1_gshared (WhereSelectListIterator_2_t6883B5D59E258B59317BFE9FB7405235985546FD* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t208A44437DC9E09577E7BBCC73E296265723730A* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector3>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_m67ECA62C962E732A74C8D2F3978405A9DC8EFDC0_gshared_inline (Func_2_t208A44437DC9E09577E7BBCC73E296265723730A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m404E469B7201D233DE7B676D6197E9FF20C72FF3_gshared (WhereSelectListIterator_2_t85FFC53584D855FF66ADBE91B3903B9A2A75118B* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t264165A1230ACB392CC4F13E8C39F1A315308B40* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector4>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_mD9EB3360FB7CA0472FCB04C99F66D2AF01E8AE3E_gshared_inline (Func_2_t264165A1230ACB392CC4F13E8C39F1A315308B40* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m7D55853E91B631B9DBD34E650C3A403AF3C0ACED_gshared (WhereSelectListIterator_2_tE4D1677627952441B6403BD2F7FE67483F02BEA1* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t03CA755C248F875160167B828915D6082B1B04C9* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Realms.Native.SyncError/CompensatingWriteInfo>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 List_1_GetEnumerator_m7281084311C6EB1550B62A7D7A894FABE23338FB_gshared (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Realms.Native.SyncError/CompensatingWriteInfo>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A Enumerator_get_Current_m35FB3C20CCDD6901255BABABA0B61EACDEBC464E_gshared_inline (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m49B5F41E5C3E4E16B0C11E39283F5BC42FAE7469_gshared_inline (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.ValueTuple`2<System.Object,System.Object>>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Func_2_Invoke_mBA647A8AB82AC23154AAC0C436A328FF1A91210B_gshared_inline (Func_2_t03CA755C248F875160167B828915D6082B1B04C9* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Realms.Native.SyncError/CompensatingWriteInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB28398A0DABAB4DCC6AF5E7BE2357BBE05528F87_gshared (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Guid>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m7216AE6A2C9C468CE788399C5B2CA2D772041634_gshared (WhereSelectListIterator_2_t6B4BEBF6242540C8713B1E462A94A9371960EA51* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t4DC8BD25FD9294FE03EDBB25432A58F0258C2C1E* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Guid>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t Func_2_Invoke_mB2AB51FD974F1F5AE8AC533763E391D84107391A_gshared_inline (Func_2_t4DC8BD25FD9294FE03EDBB25432A58F0258C2C1E* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8806ADD2E7FE953E43E320191E5A3D36B900E4BF_gshared (WhereSelectListIterator_2_t8A943F5A7C427BB120AFD260C152D6248682BB5A* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t9A90534C443C9EEB3549323D9827F807D313F61C* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m9C10690FB51858997045A9DC8E24B0B5856FCEA6_gshared_inline (Func_2_t9A90534C443C9EEB3549323D9827F807D313F61C* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.KeyPath>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0305BC39BCDF62A5E804CE0DFDEAE275C6C4F039_gshared (WhereSelectListIterator_2_tAA33716851819066683D677996641C6D161A3684* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_tB9AF32C440CFF51539468D51BAC35222664515DC* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.KeyPath>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D Func_2_Invoke_m92A3F74A84651D65C20B4CB0F33565ECC35821BF_gshared_inline (Func_2_tB9AF32C440CFF51539468D51BAC35222664515DC* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA479A6A55C39CB6B277DFD2AB4BB0D9209A7CC71_gshared (WhereSelectListIterator_2_tD8C2A18C14631F8C9AA22BD061EF98FD514E2C99* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t9AF765B749C8FB6EBB8EB10FF8DD1179384A67BA* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m76560041BAA036BD6E9EA38A67338F6015DCE3D2_gshared_inline (Func_2_t9AF765B749C8FB6EBB8EB10FF8DD1179384A67BA* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.SchemaObject>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m13CF224D7B3DB8934776FF6DE091D8ED96AFA9CF_gshared (WhereSelectListIterator_2_t69568E754CC7EA89B0002864BDE412F643D7F784* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_tF3AA4AD2C7C1736A58F720FB888548D318056273* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.SchemaObject>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD Func_2_Invoke_m75AB993BEE2A3FF78C5E974606BDE575CB4F8A69_gshared_inline (Func_2_tF3AA4AD2C7C1736A58F720FB888548D318056273* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Single>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m650E72B3A60152C59A1819579D462B9E7C28A7B5_gshared (WhereSelectListIterator_2_tE59F3D6BE467EABCC4645DDB4BD08F3F91307F92* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t2A82C711EDC64CDF3AD004D83EDAB4783CB1BC6E* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m44CA957A6D583DE1A81BAE587D3918CFB885A26E_gshared_inline (Func_2_t2A82C711EDC64CDF3AD004D83EDAB4783CB1BC6E* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.StringValue>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m3105C967013B44856D1D5649DFB1D22EC0428DBA_gshared (WhereSelectListIterator_2_tA7401EB770D559AF2DA9E3FD7B1FD53E6C6F667F* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_tFAEF0CCB9C791E80A31E045E378B4961D4BD6813* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.StringValue>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 Func_2_Invoke_m9E0FFF972E3615CA4E8A3994C57C0F5614C2DDBB_gshared_inline (Func_2_tFAEF0CCB9C791E80A31E045E378B4961D4BD6813* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector2>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mCB9E24EBFACBBC12B2A4BB6DD1CEA8D90FD3215F_gshared (WhereSelectListIterator_2_tB1263FF3FD17A16713E9EE78908F9C184A4B08D6* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t2606923E4ECA17448CE383E2E0A4D7B4634B4990* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector2>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_mC6587D1A4E1A77D2576FD84C716EA27D00420736_gshared_inline (Func_2_t2606923E4ECA17448CE383E2E0A4D7B4634B4990* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m90FF4F78CF14D96849580EB8FE2D2F37A223E3A7_gshared (WhereSelectListIterator_2_t5E88820A1FB7395337EDFF872CE4D9A4A0A50A9D* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t71250C7A2B7B3BC12FF416A1DEF67E1C1537EC02* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector3>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_mAEBB369469EA5BAA520BE7C332E794DF88951498_gshared_inline (Func_2_t71250C7A2B7B3BC12FF416A1DEF67E1C1537EC02* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF4CB0693122D2DF85AB48FB6B8B1D9D35A38056F_gshared (WhereSelectListIterator_2_t79F5931FF7D6E8AB258918D05FC4D76052A4F543* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t4A91E5D3092011C21723653D37A7736AC536B84D* ___selector2, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector4>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_mD5AAFFC0D507F8F2695620F45278BA2A389D1C7D_gshared_inline (Func_2_t4A91E5D3092011C21723653D37A7736AC536B84D* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/Iterator`1<Realms.ChangeSet/Move>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_mFC6C9C36F56D66524A8EBD29F43748E790A5B7B5_gshared (Iterator_1_t84457A80C88597309971CA963B0AD904879B2F8E* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move,Realms.ChangeSet/Move>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA74DC4639729EEFF8D735B3FCA895A9F811A5FC0_gshared (WhereSelectListIterator_2_tA99199351429EB86E604DAB78DCF92DB2D162F97* __this, List_1_t0B0E988A8317058A530514934AA74A8A47C91D39* ___source0, Func_2_t769154D792964F65B1090A0A4CA1C50554085781* ___predicate1, Func_2_t68217885A5968320AD5647CE9C496996E1AB11F5* ___selector2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB700BC9E6E7C8BD2D72F2F343D938D58B581323F List_1_GetEnumerator_m3AA45736E51260DD26F76D01E40F249AB9A6AE9D_gshared (List_1_t0B0E988A8317058A530514934AA74A8A47C91D39* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237 Enumerator_get_Current_m73FE47CCD13D01D30812FAE10C8EAC3D2A7EE712_gshared_inline (Enumerator_tB700BC9E6E7C8BD2D72F2F343D938D58B581323F* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mB7261F04FE304CB158F5ABFCF0727E446B3E3409_gshared_inline (Func_2_t769154D792964F65B1090A0A4CA1C50554085781* __this, Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237 ___arg0, const RuntimeMethod* method) ;
// TResult System.Func`2<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move,Realms.ChangeSet/Move>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Move_t436C9476C63D3027D29955ECD688020E34CED66B Func_2_Invoke_m65BE5B22EAA02D302B123E9D776EA2B33B03331D_gshared_inline (Func_2_t68217885A5968320AD5647CE9C496996E1AB11F5* __this, Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237 ___arg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC5A59A2ED367ECC7F81E4394C2CB6343FE9A5C12_gshared (Enumerator_tB700BC9E6E7C8BD2D72F2F343D938D58B581323F* __this, const RuntimeMethod* method) ;
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.ChangeSet/Move>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m185710362319E2F305D2EA2187B6E10559B8946C_gshared (WhereEnumerableIterator_1_t0F32988A00805A31D5F95BF4C5A5214EA3D7104B* __this, RuntimeObject* ___source0, Func_2_tF766663C676BB43E908160385DE1AE7E191CBACF* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) ;
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___value0, const RuntimeMethod* method) ;

// System.Void System.Linq.Enumerable/Iterator`1<Realms.Native.SchemaObject>::.ctor()
inline void Iterator_1__ctor_mFB8E9331E1D58E2A2630EEF92F370603EC76BA91 (Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*, const RuntimeMethod*))Iterator_1__ctor_mFB8E9331E1D58E2A2630EEF92F370603EC76BA91_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Realms.Native.SchemaObject>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m8D72AFA7D5A124C26644AF0AC7DA7BFBB6A51BB0 (WhereSelectListIterator_2_t42B5B14419D4DC51F1649E5A5C3215858974F25E* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tCF83ECAB8AFDA1BF6DCCB8648945D6F86001BC5F* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t42B5B14419D4DC51F1649E5A5C3215858974F25E*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tCF83ECAB8AFDA1BF6DCCB8648945D6F86001BC5F*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m8D72AFA7D5A124C26644AF0AC7DA7BFBB6A51BB0_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<System.Object,Realms.Native.SchemaObject>::Invoke(T)
inline SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD Func_2_Invoke_m567486E77E5A98A34DC60AEA578E6B67FFF44CD9_inline (Func_2_tCF83ECAB8AFDA1BF6DCCB8648945D6F86001BC5F* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD (*) (Func_2_tCF83ECAB8AFDA1BF6DCCB8648945D6F86001BC5F*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m567486E77E5A98A34DC60AEA578E6B67FFF44CD9_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.Native.SchemaObject>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_mE8A6FCF46E486262885323C90F04B102705E4C79 (WhereEnumerableIterator_1_tD26E121E693726AF91796ECC3C2F2496D6B34430* __this, RuntimeObject* ___source0, Func_2_t3933D1A9C2F1F83F8EE6F4C8686FB62AD7C724EE* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tD26E121E693726AF91796ECC3C2F2496D6B34430*, RuntimeObject*, Func_2_t3933D1A9C2F1F83F8EE6F4C8686FB62AD7C724EE*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mE8A6FCF46E486262885323C90F04B102705E4C79_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<System.Single>::.ctor()
inline void Iterator_1__ctor_m7FEBAE985CDE5DD1CB255EB4A3D65F05AA8D2AEF (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*, const RuntimeMethod*))Iterator_1__ctor_m7FEBAE985CDE5DD1CB255EB4A3D65F05AA8D2AEF_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Single>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m22BAFF678F9378729DD9E5551BBA6BA69FDEEF94 (WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m22BAFF678F9378729DD9E5551BBA6BA69FDEEF94_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<System.Object,System.Single>::Invoke(T)
inline float Func_2_Invoke_mBE16A5FDA5E80CCBA51D69334EF21C0F03D353AF_inline (Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  float (*) (Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mBE16A5FDA5E80CCBA51D69334EF21C0F03D353AF_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_mCB49A03958EF827EF6CE47402259941EAB31D984 (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* __this, RuntimeObject* ___source0, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*, RuntimeObject*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mCB49A03958EF827EF6CE47402259941EAB31D984_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<Realms.Native.StringValue>::.ctor()
inline void Iterator_1__ctor_m76554CB1FDBB89992FFB766F579ACC93103EE1CB (Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*, const RuntimeMethod*))Iterator_1__ctor_m76554CB1FDBB89992FFB766F579ACC93103EE1CB_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Realms.Native.StringValue>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m6D1312AC1F4C6353B4F80C575A72C1781C945BB7 (WhereSelectListIterator_2_t0822086E0A8333BD1C0A264D828A2466EC971560* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t7FEAF9B40BC91889C3F7FA1D3C0AB0E276613D6C* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t0822086E0A8333BD1C0A264D828A2466EC971560*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_t7FEAF9B40BC91889C3F7FA1D3C0AB0E276613D6C*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m6D1312AC1F4C6353B4F80C575A72C1781C945BB7_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<System.Object,Realms.Native.StringValue>::Invoke(T)
inline StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 Func_2_Invoke_m00140FA5334202FFFC3866B79CDE48942C4A1A94_inline (Func_2_t7FEAF9B40BC91889C3F7FA1D3C0AB0E276613D6C* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 (*) (Func_2_t7FEAF9B40BC91889C3F7FA1D3C0AB0E276613D6C*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m00140FA5334202FFFC3866B79CDE48942C4A1A94_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.Native.StringValue>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_mD43F06F3C0215811180E199186B9EA63E88384AA (WhereEnumerableIterator_1_t85FA13B5DA9275197656EBD8285E1371A80E65D0* __this, RuntimeObject* ___source0, Func_2_t1A51224749A0012D832BF2E64575FDEF202FAE9E* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t85FA13B5DA9275197656EBD8285E1371A80E65D0*, RuntimeObject*, Func_2_t1A51224749A0012D832BF2E64575FDEF202FAE9E*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mD43F06F3C0215811180E199186B9EA63E88384AA_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector2>::.ctor()
inline void Iterator_1__ctor_m78B15ADF003EB66E975D0F71571715AE0A2C63DD (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*, const RuntimeMethod*))Iterator_1__ctor_m78B15ADF003EB66E975D0F71571715AE0A2C63DD_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector2>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m806C56469C3B3CE4D41439A0205E28D186E82FF6 (WhereSelectListIterator_2_t6D757CC0B317F507E31783D6BAB8CDC2C848CB44* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t127163694D7C66D0F32B7F8F5BB2507F7516DEE4* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t6D757CC0B317F507E31783D6BAB8CDC2C848CB44*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_t127163694D7C66D0F32B7F8F5BB2507F7516DEE4*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m806C56469C3B3CE4D41439A0205E28D186E82FF6_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<System.Object,UnityEngine.Vector2>::Invoke(T)
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_mB81D84A05453E4320D091506FC75F34E2C0E0ADC_inline (Func_2_t127163694D7C66D0F32B7F8F5BB2507F7516DEE4* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (Func_2_t127163694D7C66D0F32B7F8F5BB2507F7516DEE4*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mB81D84A05453E4320D091506FC75F34E2C0E0ADC_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector2>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_m9C077DCBB6483C517E8B74C1F61F52D38B51AE0A (WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75* __this, RuntimeObject* ___source0, Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75*, RuntimeObject*, Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m9C077DCBB6483C517E8B74C1F61F52D38B51AE0A_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::.ctor()
inline void Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*, const RuntimeMethod*))Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m5A8EEDF32091C2AC8FF6CA6B931180CC68A43EA3 (WhereSelectListIterator_2_t2F947A7776BA76AEEB0F205EF71A63410DFACA65* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t2F947A7776BA76AEEB0F205EF71A63410DFACA65*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m5A8EEDF32091C2AC8FF6CA6B931180CC68A43EA3_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<System.Object,UnityEngine.Vector3>::Invoke(T)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_m72462558F94253B761AE3224284CF6A0ED6E5521_inline (Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m72462558F94253B761AE3224284CF6A0ED6E5521_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023 (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* __this, RuntimeObject* ___source0, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*, RuntimeObject*, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>::.ctor()
inline void Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*, const RuntimeMethod*))Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m274E71E959F2DE46853B9D4066D696F7A5E7A242 (WhereSelectListIterator_2_t9651C82872E49763DA217BC42252D9BEAED98F8F* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t01EEA5FE255AF6B9B90E3CFAE8B5571BC66E8302* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t9651C82872E49763DA217BC42252D9BEAED98F8F*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_t01EEA5FE255AF6B9B90E3CFAE8B5571BC66E8302*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m274E71E959F2DE46853B9D4066D696F7A5E7A242_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<System.Object,UnityEngine.Vector4>::Invoke(T)
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_m404CC86DD4A7C42E047A2B9F0D8EF8A79A563ABB_inline (Func_2_t01EEA5FE255AF6B9B90E3CFAE8B5571BC66E8302* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (Func_2_t01EEA5FE255AF6B9B90E3CFAE8B5571BC66E8302*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m404CC86DD4A7C42E047A2B9F0D8EF8A79A563ABB_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9* __this, RuntimeObject* ___source0, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9*, RuntimeObject*, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::.ctor()
inline void Iterator_1__ctor_m2354367D0E1B37E7E69B5E67F97AEEE56674E8C4 (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*, const RuntimeMethod*))Iterator_1__ctor_m2354367D0E1B37E7E69B5E67F97AEEE56674E8C4_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m1AC35FDB7DB42824DE56959C69959373EF0AA1BD (WhereSelectListIterator_2_t1D1ECE57DDFB8B79F11AE611E6CFD43FD79C2A75* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_tFB60D22A7188A225EC88D4C2A2A516E8A5EC1B45* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t1D1ECE57DDFB8B79F11AE611E6CFD43FD79C2A75*, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*, Func_2_tFB60D22A7188A225EC88D4C2A2A516E8A5EC1B45*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m1AC35FDB7DB42824DE56959C69959373EF0AA1BD_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Realms.Native.PrimitiveValue>::GetEnumerator()
inline Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C List_1_GetEnumerator_m247E418410B1D685C84D5E16B651A345563C67A5 (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C (*) (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*, const RuntimeMethod*))List_1_GetEnumerator_m247E418410B1D685C84D5E16B651A345563C67A5_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Realms.Native.PrimitiveValue>::get_Current()
inline PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B Enumerator_get_Current_mAF9948BAE896A229451C88312BC11312AFC644A8_inline (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* __this, const RuntimeMethod* method)
{
	return ((  PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B (*) (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*, const RuntimeMethod*))Enumerator_get_Current_mAF9948BAE896A229451C88312BC11312AFC644A8_gshared_inline)(__this, method);
}
// TResult System.Func`2<Realms.Native.PrimitiveValue,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m75EC2083856EBA636983B0D1930AC65BBD70B8BD_inline (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*))Func_2_Invoke_m75EC2083856EBA636983B0D1930AC65BBD70B8BD_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<Realms.Native.PrimitiveValue,System.ValueTuple`2<System.Object,System.Object>>::Invoke(T)
inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Func_2_Invoke_mFB1328B15495AE319F4A1122468EAD253C18212A_inline (Func_2_tFB60D22A7188A225EC88D4C2A2A516E8A5EC1B45* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_2_tFB60D22A7188A225EC88D4C2A2A516E8A5EC1B45*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*))Func_2_Invoke_mFB1328B15495AE319F4A1122468EAD253C18212A_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Realms.Native.PrimitiveValue>::MoveNext()
inline bool Enumerator_MoveNext_mFDA7AE925C7AB0E8B68E1793C0A0BB55EFE16366 (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*, const RuntimeMethod*))Enumerator_MoveNext_mFDA7AE925C7AB0E8B68E1793C0A0BB55EFE16366_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_mB57E9223DB0E68D35CAE577A2C111D98EDAC5298 (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* __this, RuntimeObject* ___source0, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*, RuntimeObject*, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mB57E9223DB0E68D35CAE577A2C111D98EDAC5298_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<System.Guid>::.ctor()
inline void Iterator_1__ctor_mEE24CA444F268E52B9F173A684E9A50C294ABBCF (Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*, const RuntimeMethod*))Iterator_1__ctor_mEE24CA444F268E52B9F173A684E9A50C294ABBCF_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Guid>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mD81A541F00BC923467DB37472688050E4ED7136D (WhereSelectListIterator_2_t5F859585DBD38F530CDADB5DE2D2E5B741E473B6* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_t6F5D52A89A1B936762EE51CD9D9AAD0EF815BD23* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t5F859585DBD38F530CDADB5DE2D2E5B741E473B6*, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*, Func_2_t6F5D52A89A1B936762EE51CD9D9AAD0EF815BD23*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mD81A541F00BC923467DB37472688050E4ED7136D_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.PrimitiveValue,System.Guid>::Invoke(T)
inline Guid_t Func_2_Invoke_mBF51B7910D885B818A6C92BC3679438D81C6B907_inline (Func_2_t6F5D52A89A1B936762EE51CD9D9AAD0EF815BD23* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (Func_2_t6F5D52A89A1B936762EE51CD9D9AAD0EF815BD23*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*))Func_2_Invoke_mBF51B7910D885B818A6C92BC3679438D81C6B907_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Guid>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_m9DD9CD3347A8DF85572E37D93DE7575DA4CF1626 (WhereEnumerableIterator_1_tD9B3677A96A5B0AD1FA4479CEA26880403A92E6D* __this, RuntimeObject* ___source0, Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tD9B3677A96A5B0AD1FA4479CEA26880403A92E6D*, RuntimeObject*, Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m9DD9CD3347A8DF85572E37D93DE7575DA4CF1626_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::.ctor()
inline void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7 (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*, const RuntimeMethod*))Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m2A711391E5932E6CF7528D549F01C82DE1DCF7AA (WhereSelectListIterator_2_tF17BC0AE60EF6A2CC11A2B94A9E5F0777FD249C5* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_tF01BB0E21083B293CF60FDE06ED0026AC094CFB7* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tF17BC0AE60EF6A2CC11A2B94A9E5F0777FD249C5*, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*, Func_2_tF01BB0E21083B293CF60FDE06ED0026AC094CFB7*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m2A711391E5932E6CF7528D549F01C82DE1DCF7AA_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.PrimitiveValue,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_mA1BA5A89DB1F7A5384BF03FE2CC141432588E005_inline (Func_2_tF01BB0E21083B293CF60FDE06ED0026AC094CFB7* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_tF01BB0E21083B293CF60FDE06ED0026AC094CFB7*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*))Func_2_Invoke_mA1BA5A89DB1F7A5384BF03FE2CC141432588E005_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*, RuntimeObject*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<Realms.KeyPath>::.ctor()
inline void Iterator_1__ctor_mA1C51ABC585C08998C0C98D4B0A478E18F7B008A (Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*, const RuntimeMethod*))Iterator_1__ctor_mA1C51ABC585C08998C0C98D4B0A478E18F7B008A_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.KeyPath>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m1DC6F2EB970D4546838B651BE622DE4A5AA3179A (WhereSelectListIterator_2_t28AB655AA4A400E98C753FAE39A8854666509F71* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_tB313531AE7343695ABF10C08F75B55E4699B40DD* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t28AB655AA4A400E98C753FAE39A8854666509F71*, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*, Func_2_tB313531AE7343695ABF10C08F75B55E4699B40DD*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m1DC6F2EB970D4546838B651BE622DE4A5AA3179A_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.PrimitiveValue,Realms.KeyPath>::Invoke(T)
inline KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D Func_2_Invoke_m084776653B82944F57AF389DE04F75A283DFF7FA_inline (Func_2_tB313531AE7343695ABF10C08F75B55E4699B40DD* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method)
{
	return ((  KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D (*) (Func_2_tB313531AE7343695ABF10C08F75B55E4699B40DD*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*))Func_2_Invoke_m084776653B82944F57AF389DE04F75A283DFF7FA_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.KeyPath>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_m5629CFC57747C084082271317D4281BD090CDCE6 (WhereEnumerableIterator_1_t8E2BDFFB19EFDD6FDD1A997E25D30A9151B5E20C* __this, RuntimeObject* ___source0, Func_2_tED48016847BEDB00839D61E14F631458FB13A2BB* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t8E2BDFFB19EFDD6FDD1A997E25D30A9151B5E20C*, RuntimeObject*, Func_2_tED48016847BEDB00839D61E14F631458FB13A2BB*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m5629CFC57747C084082271317D4281BD090CDCE6_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<System.Object>::.ctor()
inline void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63 (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m75BD6F2E66C27F6EFB08358798D69BB58A25E707 (WhereSelectListIterator_2_t60B3F115E1808DEFF67E64031605E0CF6CAA916D* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_t429E82ABFFFC2AC1CE010D74CC7A9C629055F887* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t60B3F115E1808DEFF67E64031605E0CF6CAA916D*, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*, Func_2_t429E82ABFFFC2AC1CE010D74CC7A9C629055F887*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m75BD6F2E66C27F6EFB08358798D69BB58A25E707_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.PrimitiveValue,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_m743660DEBFCC2A4F52E0A52B28811BADC0F059B3_inline (Func_2_t429E82ABFFFC2AC1CE010D74CC7A9C629055F887* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t429E82ABFFFC2AC1CE010D74CC7A9C629055F887*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*))Func_2_Invoke_m743660DEBFCC2A4F52E0A52B28811BADC0F059B3_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01 (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.Native.SchemaObject>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m455FFC550CF077B57E6EB07D4C6E0EDECE54756C (WhereSelectListIterator_2_tA7D93BC522D059361B567DB7386ACD3AB4F9199B* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_t210E61F99D7472E51282943CC7639FF687A3719F* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tA7D93BC522D059361B567DB7386ACD3AB4F9199B*, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*, Func_2_t210E61F99D7472E51282943CC7639FF687A3719F*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m455FFC550CF077B57E6EB07D4C6E0EDECE54756C_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.PrimitiveValue,Realms.Native.SchemaObject>::Invoke(T)
inline SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD Func_2_Invoke_mD913EF3C33D8C9D342733C13B6340CD79E3AB4CD_inline (Func_2_t210E61F99D7472E51282943CC7639FF687A3719F* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method)
{
	return ((  SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD (*) (Func_2_t210E61F99D7472E51282943CC7639FF687A3719F*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*))Func_2_Invoke_mD913EF3C33D8C9D342733C13B6340CD79E3AB4CD_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Single>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mAAA3EF1A2DD7602CAD6DCDF9793BC9706E3E945F (WhereSelectListIterator_2_tD5B8B4EDE8DE52C8140F32A2AE4D1D840BF4623E* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_t90CE56F960E045743F1A9D67A849897248A821D9* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tD5B8B4EDE8DE52C8140F32A2AE4D1D840BF4623E*, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*, Func_2_t90CE56F960E045743F1A9D67A849897248A821D9*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mAAA3EF1A2DD7602CAD6DCDF9793BC9706E3E945F_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.PrimitiveValue,System.Single>::Invoke(T)
inline float Func_2_Invoke_mD94FBE777ED7F338999AE0E4A9C5C2262E395D35_inline (Func_2_t90CE56F960E045743F1A9D67A849897248A821D9* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method)
{
	return ((  float (*) (Func_2_t90CE56F960E045743F1A9D67A849897248A821D9*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*))Func_2_Invoke_mD94FBE777ED7F338999AE0E4A9C5C2262E395D35_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.Native.StringValue>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m4BC66429B7646BE612D8D93EE5AC94EB44DB6F1E (WhereSelectListIterator_2_tF7F7D19F91F7FF29FEB9AC4C40AF34BEC05C5FE4* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_t478B3D12821F41ABD43978161E257B9F8BADC68B* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tF7F7D19F91F7FF29FEB9AC4C40AF34BEC05C5FE4*, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*, Func_2_t478B3D12821F41ABD43978161E257B9F8BADC68B*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m4BC66429B7646BE612D8D93EE5AC94EB44DB6F1E_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.PrimitiveValue,Realms.Native.StringValue>::Invoke(T)
inline StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 Func_2_Invoke_m2887033A7BCC2749BBFE1E1F2B8C5E23270EFC45_inline (Func_2_t478B3D12821F41ABD43978161E257B9F8BADC68B* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method)
{
	return ((  StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 (*) (Func_2_t478B3D12821F41ABD43978161E257B9F8BADC68B*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*))Func_2_Invoke_m2887033A7BCC2749BBFE1E1F2B8C5E23270EFC45_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector2>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mA863E14AA2DF40C9E2049ED3AE01C0606A0F1C24 (WhereSelectListIterator_2_tC0EDCE3671DC8A347EC3FA41D4BB5A6707A0EC67* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_tC71476211D01CF6367A4721A03CB208B876EA9FD* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tC0EDCE3671DC8A347EC3FA41D4BB5A6707A0EC67*, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*, Func_2_tC71476211D01CF6367A4721A03CB208B876EA9FD*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mA863E14AA2DF40C9E2049ED3AE01C0606A0F1C24_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.PrimitiveValue,UnityEngine.Vector2>::Invoke(T)
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_mEFD7F55BC0F81F921E9081338D0BCD886CBFFB19_inline (Func_2_tC71476211D01CF6367A4721A03CB208B876EA9FD* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (Func_2_tC71476211D01CF6367A4721A03CB208B876EA9FD*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*))Func_2_Invoke_mEFD7F55BC0F81F921E9081338D0BCD886CBFFB19_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mF3C9D61E4D31E2950F615CC92937117453AF76FD (WhereSelectListIterator_2_t0752849B241AC3D8351B3D6146CE326291B4CB28* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_t4086956E9AE7A5665BF03B7A439D29BF0941DD15* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t0752849B241AC3D8351B3D6146CE326291B4CB28*, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*, Func_2_t4086956E9AE7A5665BF03B7A439D29BF0941DD15*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mF3C9D61E4D31E2950F615CC92937117453AF76FD_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.PrimitiveValue,UnityEngine.Vector3>::Invoke(T)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_mC04A0F679DFBDE21F1CFED2AC219429427E7EFB8_inline (Func_2_t4086956E9AE7A5665BF03B7A439D29BF0941DD15* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Func_2_t4086956E9AE7A5665BF03B7A439D29BF0941DD15*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*))Func_2_Invoke_mC04A0F679DFBDE21F1CFED2AC219429427E7EFB8_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m0F05C73DCBFD4286C689A297375F66D2766C50E3 (WhereSelectListIterator_2_tC707137F05826EECD63624BA657FEAC39F00C292* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_tC0F42D8244464038AD9681F241E7C31A37D8242D* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tC707137F05826EECD63624BA657FEAC39F00C292*, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*, Func_2_tC0F42D8244464038AD9681F241E7C31A37D8242D*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m0F05C73DCBFD4286C689A297375F66D2766C50E3_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.PrimitiveValue,UnityEngine.Vector4>::Invoke(T)
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_m7A5AE9163F762E1F71607A8D572886E09B6B3EB9_inline (Func_2_tC0F42D8244464038AD9681F241E7C31A37D8242D* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (Func_2_tC0F42D8244464038AD9681F241E7C31A37D8242D*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*))Func_2_Invoke_m7A5AE9163F762E1F71607A8D572886E09B6B3EB9_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mFD9B1DCE1281A6C4E5A9B9F9EF1D6CBB8763052B (WhereSelectListIterator_2_tA397D24E1605A76B61FAB88C38499CFC5B625201* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t0A1D011E49157B9D56FE997E6A482A5DB8807547* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tA397D24E1605A76B61FAB88C38499CFC5B625201*, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*, Func_2_t0A1D011E49157B9D56FE997E6A482A5DB8807547*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mFD9B1DCE1281A6C4E5A9B9F9EF1D6CBB8763052B_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Realms.Schema.Property>::GetEnumerator()
inline Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF List_1_GetEnumerator_m498538CDE927D22B507110228E1A1B911ADB758D (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF (*) (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*, const RuntimeMethod*))List_1_GetEnumerator_m498538CDE927D22B507110228E1A1B911ADB758D_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Realms.Schema.Property>::get_Current()
inline Property_tA1E653E5DCE45303997F51563A7060FE291075DC Enumerator_get_Current_m9882246BFEAA177BC7A18BCF40BF0D3861EA45D3_inline (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* __this, const RuntimeMethod* method)
{
	return ((  Property_tA1E653E5DCE45303997F51563A7060FE291075DC (*) (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*, const RuntimeMethod*))Enumerator_get_Current_m9882246BFEAA177BC7A18BCF40BF0D3861EA45D3_gshared_inline)(__this, method);
}
// TResult System.Func`2<Realms.Schema.Property,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_mEB16369495B60475CAA6E581D0FE8CEF13F08307_inline (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*))Func_2_Invoke_mEB16369495B60475CAA6E581D0FE8CEF13F08307_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<Realms.Schema.Property,System.ValueTuple`2<System.Object,System.Object>>::Invoke(T)
inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Func_2_Invoke_mDFDF48F96731ACEE5EA85D83715C5552F48DF078_inline (Func_2_t0A1D011E49157B9D56FE997E6A482A5DB8807547* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_2_t0A1D011E49157B9D56FE997E6A482A5DB8807547*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*))Func_2_Invoke_mDFDF48F96731ACEE5EA85D83715C5552F48DF078_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Realms.Schema.Property>::MoveNext()
inline bool Enumerator_MoveNext_m765BCF4132B64FA1C4DDCB609E7F87550A1C2935 (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*, const RuntimeMethod*))Enumerator_MoveNext_m765BCF4132B64FA1C4DDCB609E7F87550A1C2935_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Guid>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mB505D2DE46B84BC89E95D59C21C108645E0FB33A (WhereSelectListIterator_2_tD32E7B8A98D5FE56872A1EA8AFBE53F42FDE3900* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t3807B8C9754B3D6705404B2CD1E16545D814C5F9* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tD32E7B8A98D5FE56872A1EA8AFBE53F42FDE3900*, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*, Func_2_t3807B8C9754B3D6705404B2CD1E16545D814C5F9*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mB505D2DE46B84BC89E95D59C21C108645E0FB33A_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Schema.Property,System.Guid>::Invoke(T)
inline Guid_t Func_2_Invoke_mDC94F8547482F318BA6B3F893E257B340B38A5E4_inline (Func_2_t3807B8C9754B3D6705404B2CD1E16545D814C5F9* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (Func_2_t3807B8C9754B3D6705404B2CD1E16545D814C5F9*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*))Func_2_Invoke_mDC94F8547482F318BA6B3F893E257B340B38A5E4_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mA68076C06D59CB41D7F338DE040F2424907FA38C (WhereSelectListIterator_2_tD93DE3EAF3A43F96261ED1E1C40826D106FDFE9C* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_tF8593969B24CFE8ED3A96E2492171238088CB745* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tD93DE3EAF3A43F96261ED1E1C40826D106FDFE9C*, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*, Func_2_tF8593969B24CFE8ED3A96E2492171238088CB745*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mA68076C06D59CB41D7F338DE040F2424907FA38C_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Schema.Property,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_m0B34FBC021B80ECDA3B1675D0291380EED5621A9_inline (Func_2_tF8593969B24CFE8ED3A96E2492171238088CB745* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_tF8593969B24CFE8ED3A96E2492171238088CB745*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*))Func_2_Invoke_m0B34FBC021B80ECDA3B1675D0291380EED5621A9_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.KeyPath>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m1CA179CCF003E4B5855009055733BFA420AE64AE (WhereSelectListIterator_2_t188D1C1E4FC64D629FDE0E7B9945CEE40D32FEC5* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t0A9E31724C776DB67DCD4F7112EE85A7A2B0CD33* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t188D1C1E4FC64D629FDE0E7B9945CEE40D32FEC5*, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*, Func_2_t0A9E31724C776DB67DCD4F7112EE85A7A2B0CD33*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m1CA179CCF003E4B5855009055733BFA420AE64AE_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Schema.Property,Realms.KeyPath>::Invoke(T)
inline KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D Func_2_Invoke_m010578C284F697036E6B0EDACE4A06381C05FB5E_inline (Func_2_t0A9E31724C776DB67DCD4F7112EE85A7A2B0CD33* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method)
{
	return ((  KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D (*) (Func_2_t0A9E31724C776DB67DCD4F7112EE85A7A2B0CD33*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*))Func_2_Invoke_m010578C284F697036E6B0EDACE4A06381C05FB5E_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m4AF316DA6FE79FB7AEB514FB9980A99087510BBE (WhereSelectListIterator_2_t502F76E72C22266C9CEB2731335807A882BA3B40* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t4FD74B88B95B6110B1D6592FD11281D6C97B1E46* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t502F76E72C22266C9CEB2731335807A882BA3B40*, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*, Func_2_t4FD74B88B95B6110B1D6592FD11281D6C97B1E46*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m4AF316DA6FE79FB7AEB514FB9980A99087510BBE_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Schema.Property,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_mFED01E7E7AA8123B66FEE52F45744B648C27FBB9_inline (Func_2_t4FD74B88B95B6110B1D6592FD11281D6C97B1E46* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t4FD74B88B95B6110B1D6592FD11281D6C97B1E46*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*))Func_2_Invoke_mFED01E7E7AA8123B66FEE52F45744B648C27FBB9_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.SchemaObject>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mEF04C3C3CCEA270209B1B24CFCECB9344BFFA7CC (WhereSelectListIterator_2_t85F5892D866F96458AE20F82BDA332937BFBAE63* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_tAD733CA4558224115B2DA3BF79BFD352C06CDCE7* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t85F5892D866F96458AE20F82BDA332937BFBAE63*, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*, Func_2_tAD733CA4558224115B2DA3BF79BFD352C06CDCE7*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mEF04C3C3CCEA270209B1B24CFCECB9344BFFA7CC_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Schema.Property,Realms.Native.SchemaObject>::Invoke(T)
inline SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD Func_2_Invoke_m29BB9D391A55630C2C2686E63B631DD3546630A9_inline (Func_2_tAD733CA4558224115B2DA3BF79BFD352C06CDCE7* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method)
{
	return ((  SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD (*) (Func_2_tAD733CA4558224115B2DA3BF79BFD352C06CDCE7*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*))Func_2_Invoke_m29BB9D391A55630C2C2686E63B631DD3546630A9_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<Realms.Native.SchemaProperty>::.ctor()
inline void Iterator_1__ctor_m444A05D6EE0C61B3D002308D9673F5DA7BDDF838 (Iterator_1_t46BF638A1DF2D69EAA3663ECCC3E5615FD54E6C3* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t46BF638A1DF2D69EAA3663ECCC3E5615FD54E6C3*, const RuntimeMethod*))Iterator_1__ctor_m444A05D6EE0C61B3D002308D9673F5DA7BDDF838_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.SchemaProperty>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m2238429D7DBC1179F382784DE86E80C682498C1B (WhereSelectListIterator_2_tE7D2819C273C34D93B8E52FA26B6371CE3936B9A* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_tC47F6B9AEF0CD37A0AAF7B841E0964898D7E76EC* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tE7D2819C273C34D93B8E52FA26B6371CE3936B9A*, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*, Func_2_tC47F6B9AEF0CD37A0AAF7B841E0964898D7E76EC*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m2238429D7DBC1179F382784DE86E80C682498C1B_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Schema.Property,Realms.Native.SchemaProperty>::Invoke(T)
inline SchemaProperty_t04A08E4E115B0691FEB67BE6FA34B7DEF6DB0C94 Func_2_Invoke_mE803506220213BCB5A50A7B1DDD91A7E6A150272_inline (Func_2_tC47F6B9AEF0CD37A0AAF7B841E0964898D7E76EC* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method)
{
	return ((  SchemaProperty_t04A08E4E115B0691FEB67BE6FA34B7DEF6DB0C94 (*) (Func_2_tC47F6B9AEF0CD37A0AAF7B841E0964898D7E76EC*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*))Func_2_Invoke_mE803506220213BCB5A50A7B1DDD91A7E6A150272_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.Native.SchemaProperty>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_m6AB232783A95AAA2092027F69EA0E55DDF459525 (WhereEnumerableIterator_1_t8654ECAC8E9E6FF557E1A76C04AE8F02A7A7F5B5* __this, RuntimeObject* ___source0, Func_2_tD1F5FD4955CFB8FF8610002415951FD9B651B750* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t8654ECAC8E9E6FF557E1A76C04AE8F02A7A7F5B5*, RuntimeObject*, Func_2_tD1F5FD4955CFB8FF8610002415951FD9B651B750*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m6AB232783A95AAA2092027F69EA0E55DDF459525_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Single>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mBFFA658F3440F3780E643605C7B197FFAFEBBAF6 (WhereSelectListIterator_2_t0983DF24E4CA20D883685546E2A58A7316B7F8F6* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t5CF6D64DB8F942BFBDDE1DA250A41595B7CD124B* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t0983DF24E4CA20D883685546E2A58A7316B7F8F6*, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*, Func_2_t5CF6D64DB8F942BFBDDE1DA250A41595B7CD124B*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mBFFA658F3440F3780E643605C7B197FFAFEBBAF6_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Schema.Property,System.Single>::Invoke(T)
inline float Func_2_Invoke_m33614C25025BFAF59E35DEDEDB8826EC1DDAB672_inline (Func_2_t5CF6D64DB8F942BFBDDE1DA250A41595B7CD124B* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method)
{
	return ((  float (*) (Func_2_t5CF6D64DB8F942BFBDDE1DA250A41595B7CD124B*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*))Func_2_Invoke_m33614C25025BFAF59E35DEDEDB8826EC1DDAB672_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.StringValue>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mA09866E36C3BDBD6BAF96E5C2777E8CD4384EAE9 (WhereSelectListIterator_2_tDA2665678E41A10B21E54E10D7F905F3641FA2A6* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t4501FBC7B7B6DE5384D627D7E0E5A8C6584958D8* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tDA2665678E41A10B21E54E10D7F905F3641FA2A6*, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*, Func_2_t4501FBC7B7B6DE5384D627D7E0E5A8C6584958D8*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mA09866E36C3BDBD6BAF96E5C2777E8CD4384EAE9_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Schema.Property,Realms.Native.StringValue>::Invoke(T)
inline StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 Func_2_Invoke_m6BCA9458DDD4A30BB4DA7D2378BB0AA3B493D519_inline (Func_2_t4501FBC7B7B6DE5384D627D7E0E5A8C6584958D8* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method)
{
	return ((  StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 (*) (Func_2_t4501FBC7B7B6DE5384D627D7E0E5A8C6584958D8*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*))Func_2_Invoke_m6BCA9458DDD4A30BB4DA7D2378BB0AA3B493D519_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector2>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m0581B7AAFEEF68F9825B3DF2EC906D7980766515 (WhereSelectListIterator_2_t95AE895BD033E8B6C1E4E322D568E3D596FCD87C* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_tB381C8D4E63305292B8BAE77DFB59AAAEC93E7EB* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t95AE895BD033E8B6C1E4E322D568E3D596FCD87C*, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*, Func_2_tB381C8D4E63305292B8BAE77DFB59AAAEC93E7EB*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m0581B7AAFEEF68F9825B3DF2EC906D7980766515_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Schema.Property,UnityEngine.Vector2>::Invoke(T)
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_m79771364E88276B2A40650A6FF9C349E67F88BBF_inline (Func_2_tB381C8D4E63305292B8BAE77DFB59AAAEC93E7EB* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (Func_2_tB381C8D4E63305292B8BAE77DFB59AAAEC93E7EB*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*))Func_2_Invoke_m79771364E88276B2A40650A6FF9C349E67F88BBF_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m76A09180AD5C4EDF1DA0F24B2A7182E9970A428F (WhereSelectListIterator_2_t423DF549C799E9117DBC87E884E0504546C62065* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t15754930DFF16C02EF8AC22B6EED29449A2EF8FA* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t423DF549C799E9117DBC87E884E0504546C62065*, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*, Func_2_t15754930DFF16C02EF8AC22B6EED29449A2EF8FA*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m76A09180AD5C4EDF1DA0F24B2A7182E9970A428F_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Schema.Property,UnityEngine.Vector3>::Invoke(T)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_m40F363755A479B8135266E9DC57FA556B4747ECB_inline (Func_2_t15754930DFF16C02EF8AC22B6EED29449A2EF8FA* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Func_2_t15754930DFF16C02EF8AC22B6EED29449A2EF8FA*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*))Func_2_Invoke_m40F363755A479B8135266E9DC57FA556B4747ECB_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m450B7BFF945E5AD1CE1AA7C833288270EAD49C09 (WhereSelectListIterator_2_t38D0B415E5EF53C6DAB6487265554AF096CDE8B6* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_tDC0BD947591C831552E42B078DDF4F4376D0B51C* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t38D0B415E5EF53C6DAB6487265554AF096CDE8B6*, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*, Func_2_tDC0BD947591C831552E42B078DDF4F4376D0B51C*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m450B7BFF945E5AD1CE1AA7C833288270EAD49C09_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Schema.Property,UnityEngine.Vector4>::Invoke(T)
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_m2BCAAE2F6933485630DBA5B29B771FA1E3C3B6D8_inline (Func_2_tDC0BD947591C831552E42B078DDF4F4376D0B51C* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (Func_2_tDC0BD947591C831552E42B078DDF4F4376D0B51C*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*))Func_2_Invoke_m2BCAAE2F6933485630DBA5B29B771FA1E3C3B6D8_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m1344C578099C9BF9AD59C3907C02DDC4B7952132 (WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tC496704D554895234B1360058C5CC2D901C24957* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tC496704D554895234B1360058C5CC2D901C24957*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m1344C578099C9BF9AD59C3907C02DDC4B7952132_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>::GetEnumerator()
inline Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751 (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F (*) (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, const RuntimeMethod*))List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::get_Current()
inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline)(__this, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>::Invoke(T)
inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Func_2_Invoke_m2AB6C1914FFEDDAF25F1EDC95B95C1614CFD344A_inline (Func_2_tC496704D554895234B1360058C5CC2D901C24957* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_2_tC496704D554895234B1360058C5CC2D901C24957*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m2AB6C1914FFEDDAF25F1EDC95B95C1614CFD344A_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::MoveNext()
inline bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Guid>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mB0B4AC763B6D29893062924D19BD2DBEC2E772A8 (WhereSelectListIterator_2_t2EB837695B7D069AF34EA97F9E715D981199F4FC* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t77FA9C1683C0E1C9EAB1F170DF3C99ACB681C844* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t2EB837695B7D069AF34EA97F9E715D981199F4FC*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t77FA9C1683C0E1C9EAB1F170DF3C99ACB681C844*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mB0B4AC763B6D29893062924D19BD2DBEC2E772A8_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Guid>::Invoke(T)
inline Guid_t Func_2_Invoke_mE0B59E11BFA298BDA292C1E20CFABB6A9959C1A7_inline (Func_2_t77FA9C1683C0E1C9EAB1F170DF3C99ACB681C844* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (Func_2_t77FA9C1683C0E1C9EAB1F170DF3C99ACB681C844*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_mE0B59E11BFA298BDA292C1E20CFABB6A9959C1A7_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64 (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.KeyPath>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mBD9AC05F4EBCEBD1BAD6E5FC4FF28D19E67A0A0B (WhereSelectListIterator_2_t66FF86786D55B63BCC9786B47B321044E794E29B* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tEAC08894811D9FD5269204AA3060C2BEF8F1D642* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t66FF86786D55B63BCC9786B47B321044E794E29B*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tEAC08894811D9FD5269204AA3060C2BEF8F1D642*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mBD9AC05F4EBCEBD1BAD6E5FC4FF28D19E67A0A0B_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Realms.KeyPath>::Invoke(T)
inline KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D Func_2_Invoke_m719985EE76CF0BD5FBD3E6E5FC15EB4740BE6032_inline (Func_2_tEAC08894811D9FD5269204AA3060C2BEF8F1D642* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D (*) (Func_2_tEAC08894811D9FD5269204AA3060C2BEF8F1D642*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m719985EE76CF0BD5FBD3E6E5FC15EB4740BE6032_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.SchemaObject>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m56558AF6592C6631219D1CB817B9BCA106F5693F (WhereSelectListIterator_2_t9DE7BD7D89A1833ED9C07353A12709356F6E1BB0* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t934BEB9FD7B82BD864DFC9AA662455FFF6130528* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t9DE7BD7D89A1833ED9C07353A12709356F6E1BB0*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t934BEB9FD7B82BD864DFC9AA662455FFF6130528*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m56558AF6592C6631219D1CB817B9BCA106F5693F_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.SchemaObject>::Invoke(T)
inline SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD Func_2_Invoke_mDCF44A26B0DA4448CFFAED90A68296DE50055E97_inline (Func_2_t934BEB9FD7B82BD864DFC9AA662455FFF6130528* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD (*) (Func_2_t934BEB9FD7B82BD864DFC9AA662455FFF6130528*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_mDCF44A26B0DA4448CFFAED90A68296DE50055E97_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m76F902C34043369FDB8A537BDF0D659CCC5697A6 (WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m76F902C34043369FDB8A537BDF0D659CCC5697A6_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>::Invoke(T)
inline float Func_2_Invoke_m04BADA9FD9773CB362E37F37840B2AA611211094_inline (Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  float (*) (Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m04BADA9FD9773CB362E37F37840B2AA611211094_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.StringValue>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m64EA5EEA58DFEDD0A251CDF2119AC7D0AFC43EFA (WhereSelectListIterator_2_tBDA1A315234F78C7F2A1D794F578B1F0B2F5399C* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t08BC79E812019DA290F7DB747CDBAEE3FDB7F571* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tBDA1A315234F78C7F2A1D794F578B1F0B2F5399C*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t08BC79E812019DA290F7DB747CDBAEE3FDB7F571*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m64EA5EEA58DFEDD0A251CDF2119AC7D0AFC43EFA_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.StringValue>::Invoke(T)
inline StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 Func_2_Invoke_m10039BD668463CDC7DECB6833ACCFC284CE7AD95_inline (Func_2_t08BC79E812019DA290F7DB747CDBAEE3FDB7F571* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 (*) (Func_2_t08BC79E812019DA290F7DB747CDBAEE3FDB7F571*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m10039BD668463CDC7DECB6833ACCFC284CE7AD95_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector2>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mF81036FF4985B6E90BA6C1611373FA4231918626 (WhereSelectListIterator_2_t87AD7612E82A4062BBF65D4AEF211245C8A02452* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tE58FFCA3E7D1699580A0C27FAFD702E828AC651E* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t87AD7612E82A4062BBF65D4AEF211245C8A02452*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tE58FFCA3E7D1699580A0C27FAFD702E828AC651E*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mF81036FF4985B6E90BA6C1611373FA4231918626_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector2>::Invoke(T)
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_m35E6E7CBB739C23EFC426907C293D4884C512111_inline (Func_2_tE58FFCA3E7D1699580A0C27FAFD702E828AC651E* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (Func_2_tE58FFCA3E7D1699580A0C27FAFD702E828AC651E*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m35E6E7CBB739C23EFC426907C293D4884C512111_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m10952410A7A2ACE220840ED727010AA138F4E0E1 (WhereSelectListIterator_2_t6883B5D59E258B59317BFE9FB7405235985546FD* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t208A44437DC9E09577E7BBCC73E296265723730A* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t6883B5D59E258B59317BFE9FB7405235985546FD*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t208A44437DC9E09577E7BBCC73E296265723730A*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m10952410A7A2ACE220840ED727010AA138F4E0E1_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector3>::Invoke(T)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_m67ECA62C962E732A74C8D2F3978405A9DC8EFDC0_inline (Func_2_t208A44437DC9E09577E7BBCC73E296265723730A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Func_2_t208A44437DC9E09577E7BBCC73E296265723730A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m67ECA62C962E732A74C8D2F3978405A9DC8EFDC0_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m404E469B7201D233DE7B676D6197E9FF20C72FF3 (WhereSelectListIterator_2_t85FFC53584D855FF66ADBE91B3903B9A2A75118B* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t264165A1230ACB392CC4F13E8C39F1A315308B40* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t85FFC53584D855FF66ADBE91B3903B9A2A75118B*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t264165A1230ACB392CC4F13E8C39F1A315308B40*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m404E469B7201D233DE7B676D6197E9FF20C72FF3_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector4>::Invoke(T)
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_mD9EB3360FB7CA0472FCB04C99F66D2AF01E8AE3E_inline (Func_2_t264165A1230ACB392CC4F13E8C39F1A315308B40* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (Func_2_t264165A1230ACB392CC4F13E8C39F1A315308B40*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_mD9EB3360FB7CA0472FCB04C99F66D2AF01E8AE3E_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m7D55853E91B631B9DBD34E650C3A403AF3C0ACED (WhereSelectListIterator_2_tE4D1677627952441B6403BD2F7FE67483F02BEA1* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t03CA755C248F875160167B828915D6082B1B04C9* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tE4D1677627952441B6403BD2F7FE67483F02BEA1*, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*, Func_2_t03CA755C248F875160167B828915D6082B1B04C9*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m7D55853E91B631B9DBD34E650C3A403AF3C0ACED_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Realms.Native.SyncError/CompensatingWriteInfo>::GetEnumerator()
inline Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 List_1_GetEnumerator_m7281084311C6EB1550B62A7D7A894FABE23338FB (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 (*) (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*, const RuntimeMethod*))List_1_GetEnumerator_m7281084311C6EB1550B62A7D7A894FABE23338FB_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Realms.Native.SyncError/CompensatingWriteInfo>::get_Current()
inline CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A Enumerator_get_Current_m35FB3C20CCDD6901255BABABA0B61EACDEBC464E_inline (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* __this, const RuntimeMethod* method)
{
	return ((  CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A (*) (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*, const RuntimeMethod*))Enumerator_get_Current_m35FB3C20CCDD6901255BABABA0B61EACDEBC464E_gshared_inline)(__this, method);
}
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m49B5F41E5C3E4E16B0C11E39283F5BC42FAE7469_inline (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*))Func_2_Invoke_m49B5F41E5C3E4E16B0C11E39283F5BC42FAE7469_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.ValueTuple`2<System.Object,System.Object>>::Invoke(T)
inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Func_2_Invoke_mBA647A8AB82AC23154AAC0C436A328FF1A91210B_inline (Func_2_t03CA755C248F875160167B828915D6082B1B04C9* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_2_t03CA755C248F875160167B828915D6082B1B04C9*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*))Func_2_Invoke_mBA647A8AB82AC23154AAC0C436A328FF1A91210B_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Realms.Native.SyncError/CompensatingWriteInfo>::MoveNext()
inline bool Enumerator_MoveNext_mB28398A0DABAB4DCC6AF5E7BE2357BBE05528F87 (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*, const RuntimeMethod*))Enumerator_MoveNext_mB28398A0DABAB4DCC6AF5E7BE2357BBE05528F87_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Guid>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m7216AE6A2C9C468CE788399C5B2CA2D772041634 (WhereSelectListIterator_2_t6B4BEBF6242540C8713B1E462A94A9371960EA51* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t4DC8BD25FD9294FE03EDBB25432A58F0258C2C1E* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t6B4BEBF6242540C8713B1E462A94A9371960EA51*, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*, Func_2_t4DC8BD25FD9294FE03EDBB25432A58F0258C2C1E*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m7216AE6A2C9C468CE788399C5B2CA2D772041634_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Guid>::Invoke(T)
inline Guid_t Func_2_Invoke_mB2AB51FD974F1F5AE8AC533763E391D84107391A_inline (Func_2_t4DC8BD25FD9294FE03EDBB25432A58F0258C2C1E* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (Func_2_t4DC8BD25FD9294FE03EDBB25432A58F0258C2C1E*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*))Func_2_Invoke_mB2AB51FD974F1F5AE8AC533763E391D84107391A_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m8806ADD2E7FE953E43E320191E5A3D36B900E4BF (WhereSelectListIterator_2_t8A943F5A7C427BB120AFD260C152D6248682BB5A* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t9A90534C443C9EEB3549323D9827F807D313F61C* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t8A943F5A7C427BB120AFD260C152D6248682BB5A*, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*, Func_2_t9A90534C443C9EEB3549323D9827F807D313F61C*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m8806ADD2E7FE953E43E320191E5A3D36B900E4BF_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_m9C10690FB51858997045A9DC8E24B0B5856FCEA6_inline (Func_2_t9A90534C443C9EEB3549323D9827F807D313F61C* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t9A90534C443C9EEB3549323D9827F807D313F61C*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*))Func_2_Invoke_m9C10690FB51858997045A9DC8E24B0B5856FCEA6_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.KeyPath>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m0305BC39BCDF62A5E804CE0DFDEAE275C6C4F039 (WhereSelectListIterator_2_tAA33716851819066683D677996641C6D161A3684* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_tB9AF32C440CFF51539468D51BAC35222664515DC* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tAA33716851819066683D677996641C6D161A3684*, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*, Func_2_tB9AF32C440CFF51539468D51BAC35222664515DC*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m0305BC39BCDF62A5E804CE0DFDEAE275C6C4F039_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.KeyPath>::Invoke(T)
inline KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D Func_2_Invoke_m92A3F74A84651D65C20B4CB0F33565ECC35821BF_inline (Func_2_tB9AF32C440CFF51539468D51BAC35222664515DC* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method)
{
	return ((  KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D (*) (Func_2_tB9AF32C440CFF51539468D51BAC35222664515DC*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*))Func_2_Invoke_m92A3F74A84651D65C20B4CB0F33565ECC35821BF_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mA479A6A55C39CB6B277DFD2AB4BB0D9209A7CC71 (WhereSelectListIterator_2_tD8C2A18C14631F8C9AA22BD061EF98FD514E2C99* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t9AF765B749C8FB6EBB8EB10FF8DD1179384A67BA* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tD8C2A18C14631F8C9AA22BD061EF98FD514E2C99*, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*, Func_2_t9AF765B749C8FB6EBB8EB10FF8DD1179384A67BA*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mA479A6A55C39CB6B277DFD2AB4BB0D9209A7CC71_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_m76560041BAA036BD6E9EA38A67338F6015DCE3D2_inline (Func_2_t9AF765B749C8FB6EBB8EB10FF8DD1179384A67BA* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t9AF765B749C8FB6EBB8EB10FF8DD1179384A67BA*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*))Func_2_Invoke_m76560041BAA036BD6E9EA38A67338F6015DCE3D2_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.SchemaObject>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m13CF224D7B3DB8934776FF6DE091D8ED96AFA9CF (WhereSelectListIterator_2_t69568E754CC7EA89B0002864BDE412F643D7F784* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_tF3AA4AD2C7C1736A58F720FB888548D318056273* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t69568E754CC7EA89B0002864BDE412F643D7F784*, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*, Func_2_tF3AA4AD2C7C1736A58F720FB888548D318056273*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m13CF224D7B3DB8934776FF6DE091D8ED96AFA9CF_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.SchemaObject>::Invoke(T)
inline SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD Func_2_Invoke_m75AB993BEE2A3FF78C5E974606BDE575CB4F8A69_inline (Func_2_tF3AA4AD2C7C1736A58F720FB888548D318056273* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method)
{
	return ((  SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD (*) (Func_2_tF3AA4AD2C7C1736A58F720FB888548D318056273*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*))Func_2_Invoke_m75AB993BEE2A3FF78C5E974606BDE575CB4F8A69_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Single>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m650E72B3A60152C59A1819579D462B9E7C28A7B5 (WhereSelectListIterator_2_tE59F3D6BE467EABCC4645DDB4BD08F3F91307F92* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t2A82C711EDC64CDF3AD004D83EDAB4783CB1BC6E* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tE59F3D6BE467EABCC4645DDB4BD08F3F91307F92*, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*, Func_2_t2A82C711EDC64CDF3AD004D83EDAB4783CB1BC6E*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m650E72B3A60152C59A1819579D462B9E7C28A7B5_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Single>::Invoke(T)
inline float Func_2_Invoke_m44CA957A6D583DE1A81BAE587D3918CFB885A26E_inline (Func_2_t2A82C711EDC64CDF3AD004D83EDAB4783CB1BC6E* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method)
{
	return ((  float (*) (Func_2_t2A82C711EDC64CDF3AD004D83EDAB4783CB1BC6E*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*))Func_2_Invoke_m44CA957A6D583DE1A81BAE587D3918CFB885A26E_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.StringValue>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m3105C967013B44856D1D5649DFB1D22EC0428DBA (WhereSelectListIterator_2_tA7401EB770D559AF2DA9E3FD7B1FD53E6C6F667F* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_tFAEF0CCB9C791E80A31E045E378B4961D4BD6813* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tA7401EB770D559AF2DA9E3FD7B1FD53E6C6F667F*, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*, Func_2_tFAEF0CCB9C791E80A31E045E378B4961D4BD6813*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m3105C967013B44856D1D5649DFB1D22EC0428DBA_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.StringValue>::Invoke(T)
inline StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 Func_2_Invoke_m9E0FFF972E3615CA4E8A3994C57C0F5614C2DDBB_inline (Func_2_tFAEF0CCB9C791E80A31E045E378B4961D4BD6813* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method)
{
	return ((  StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 (*) (Func_2_tFAEF0CCB9C791E80A31E045E378B4961D4BD6813*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*))Func_2_Invoke_m9E0FFF972E3615CA4E8A3994C57C0F5614C2DDBB_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector2>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mCB9E24EBFACBBC12B2A4BB6DD1CEA8D90FD3215F (WhereSelectListIterator_2_tB1263FF3FD17A16713E9EE78908F9C184A4B08D6* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t2606923E4ECA17448CE383E2E0A4D7B4634B4990* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tB1263FF3FD17A16713E9EE78908F9C184A4B08D6*, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*, Func_2_t2606923E4ECA17448CE383E2E0A4D7B4634B4990*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mCB9E24EBFACBBC12B2A4BB6DD1CEA8D90FD3215F_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector2>::Invoke(T)
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_mC6587D1A4E1A77D2576FD84C716EA27D00420736_inline (Func_2_t2606923E4ECA17448CE383E2E0A4D7B4634B4990* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (Func_2_t2606923E4ECA17448CE383E2E0A4D7B4634B4990*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*))Func_2_Invoke_mC6587D1A4E1A77D2576FD84C716EA27D00420736_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_m90FF4F78CF14D96849580EB8FE2D2F37A223E3A7 (WhereSelectListIterator_2_t5E88820A1FB7395337EDFF872CE4D9A4A0A50A9D* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t71250C7A2B7B3BC12FF416A1DEF67E1C1537EC02* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t5E88820A1FB7395337EDFF872CE4D9A4A0A50A9D*, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*, Func_2_t71250C7A2B7B3BC12FF416A1DEF67E1C1537EC02*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m90FF4F78CF14D96849580EB8FE2D2F37A223E3A7_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector3>::Invoke(T)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_mAEBB369469EA5BAA520BE7C332E794DF88951498_inline (Func_2_t71250C7A2B7B3BC12FF416A1DEF67E1C1537EC02* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Func_2_t71250C7A2B7B3BC12FF416A1DEF67E1C1537EC02*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*))Func_2_Invoke_mAEBB369469EA5BAA520BE7C332E794DF88951498_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mF4CB0693122D2DF85AB48FB6B8B1D9D35A38056F (WhereSelectListIterator_2_t79F5931FF7D6E8AB258918D05FC4D76052A4F543* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t4A91E5D3092011C21723653D37A7736AC536B84D* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t79F5931FF7D6E8AB258918D05FC4D76052A4F543*, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*, Func_2_t4A91E5D3092011C21723653D37A7736AC536B84D*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mF4CB0693122D2DF85AB48FB6B8B1D9D35A38056F_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// TResult System.Func`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector4>::Invoke(T)
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_mD5AAFFC0D507F8F2695620F45278BA2A389D1C7D_inline (Func_2_t4A91E5D3092011C21723653D37A7736AC536B84D* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (Func_2_t4A91E5D3092011C21723653D37A7736AC536B84D*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*))Func_2_Invoke_mD5AAFFC0D507F8F2695620F45278BA2A389D1C7D_gshared_inline)(__this, ___arg0, method);
}
// System.Void System.Linq.Enumerable/Iterator`1<Realms.ChangeSet/Move>::.ctor()
inline void Iterator_1__ctor_mFC6C9C36F56D66524A8EBD29F43748E790A5B7B5 (Iterator_1_t84457A80C88597309971CA963B0AD904879B2F8E* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t84457A80C88597309971CA963B0AD904879B2F8E*, const RuntimeMethod*))Iterator_1__ctor_mFC6C9C36F56D66524A8EBD29F43748E790A5B7B5_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move,Realms.ChangeSet/Move>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
inline void WhereSelectListIterator_2__ctor_mA74DC4639729EEFF8D735B3FCA895A9F811A5FC0 (WhereSelectListIterator_2_tA99199351429EB86E604DAB78DCF92DB2D162F97* __this, List_1_t0B0E988A8317058A530514934AA74A8A47C91D39* ___source0, Func_2_t769154D792964F65B1090A0A4CA1C50554085781* ___predicate1, Func_2_t68217885A5968320AD5647CE9C496996E1AB11F5* ___selector2, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tA99199351429EB86E604DAB78DCF92DB2D162F97*, List_1_t0B0E988A8317058A530514934AA74A8A47C91D39*, Func_2_t769154D792964F65B1090A0A4CA1C50554085781*, Func_2_t68217885A5968320AD5647CE9C496996E1AB11F5*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mA74DC4639729EEFF8D735B3FCA895A9F811A5FC0_gshared)(__this, ___source0, ___predicate1, ___selector2, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move>::GetEnumerator()
inline Enumerator_tB700BC9E6E7C8BD2D72F2F343D938D58B581323F List_1_GetEnumerator_m3AA45736E51260DD26F76D01E40F249AB9A6AE9D (List_1_t0B0E988A8317058A530514934AA74A8A47C91D39* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB700BC9E6E7C8BD2D72F2F343D938D58B581323F (*) (List_1_t0B0E988A8317058A530514934AA74A8A47C91D39*, const RuntimeMethod*))List_1_GetEnumerator_m3AA45736E51260DD26F76D01E40F249AB9A6AE9D_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move>::get_Current()
inline Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237 Enumerator_get_Current_m73FE47CCD13D01D30812FAE10C8EAC3D2A7EE712_inline (Enumerator_tB700BC9E6E7C8BD2D72F2F343D938D58B581323F* __this, const RuntimeMethod* method)
{
	return ((  Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237 (*) (Enumerator_tB700BC9E6E7C8BD2D72F2F343D938D58B581323F*, const RuntimeMethod*))Enumerator_get_Current_m73FE47CCD13D01D30812FAE10C8EAC3D2A7EE712_gshared_inline)(__this, method);
}
// TResult System.Func`2<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_mB7261F04FE304CB158F5ABFCF0727E446B3E3409_inline (Func_2_t769154D792964F65B1090A0A4CA1C50554085781* __this, Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237 ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t769154D792964F65B1090A0A4CA1C50554085781*, Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237, const RuntimeMethod*))Func_2_Invoke_mB7261F04FE304CB158F5ABFCF0727E446B3E3409_gshared_inline)(__this, ___arg0, method);
}
// TResult System.Func`2<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move,Realms.ChangeSet/Move>::Invoke(T)
inline Move_t436C9476C63D3027D29955ECD688020E34CED66B Func_2_Invoke_m65BE5B22EAA02D302B123E9D776EA2B33B03331D_inline (Func_2_t68217885A5968320AD5647CE9C496996E1AB11F5* __this, Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237 ___arg0, const RuntimeMethod* method)
{
	return ((  Move_t436C9476C63D3027D29955ECD688020E34CED66B (*) (Func_2_t68217885A5968320AD5647CE9C496996E1AB11F5*, Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237, const RuntimeMethod*))Func_2_Invoke_m65BE5B22EAA02D302B123E9D776EA2B33B03331D_gshared_inline)(__this, ___arg0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move>::MoveNext()
inline bool Enumerator_MoveNext_mC5A59A2ED367ECC7F81E4394C2CB6343FE9A5C12 (Enumerator_tB700BC9E6E7C8BD2D72F2F343D938D58B581323F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB700BC9E6E7C8BD2D72F2F343D938D58B581323F*, const RuntimeMethod*))Enumerator_MoveNext_mC5A59A2ED367ECC7F81E4394C2CB6343FE9A5C12_gshared)(__this, method);
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<Realms.ChangeSet/Move>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline void WhereEnumerableIterator_1__ctor_m185710362319E2F305D2EA2187B6E10559B8946C (WhereEnumerableIterator_1_t0F32988A00805A31D5F95BF4C5A5214EA3D7104B* __this, RuntimeObject* ___source0, Func_2_tF766663C676BB43E908160385DE1AE7E191CBACF* ___predicate1, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t0F32988A00805A31D5F95BF4C5A5214EA3D7104B*, RuntimeObject*, Func_2_tF766663C676BB43E908160385DE1AE7E191CBACF*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m185710362319E2F305D2EA2187B6E10559B8946C_gshared)(__this, ___source0, ___predicate1, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>::.ctor()
inline void Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04 (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.FullSerializer.fsData::.ctor(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___dict0, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsBaseConverter::CheckType(Unity.VisualScripting.FullSerializer.fsData,Unity.VisualScripting.FullSerializer.fsDataType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32 (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, int32_t ___type1, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsResult::op_Addition(Unity.VisualScripting.FullSerializer.fsResult,Unity.VisualScripting.FullSerializer.fsResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___a0, fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___b1, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.fsResult::get_Failed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData> Unity.VisualScripting.FullSerializer.fsData::get_AsDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1 (fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_HasValue()
inline bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, method);
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_IsEmpty()
inline bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767 (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, method);
}
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Value()
inline void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, il2cppRetVal, method);
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T)
inline void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516 (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, ___value0, method);
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_HasValue()
inline bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline)(__this, method);
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_IsEmpty()
inline bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared)(__this, method);
}
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Value()
inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor(T)
inline void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___value0, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8, const RuntimeMethod*))fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared)(__this, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Realms.Native.SchemaObject>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8D72AFA7D5A124C26644AF0AC7DA7BFBB6A51BB0_gshared (WhereSelectListIterator_2_t42B5B14419D4DC51F1649E5A5C3215858974F25E* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tCF83ECAB8AFDA1BF6DCCB8648945D6F86001BC5F* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mFB8E9331E1D58E2A2630EEF92F370603EC76BA91((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tCF83ECAB8AFDA1BF6DCCB8648945D6F86001BC5F* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Realms.Native.SchemaObject>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D* WhereSelectListIterator_2_Clone_m0EB8B0E289561E8336E5893AD906287FFCF9CAE0_gshared (WhereSelectListIterator_2_t42B5B14419D4DC51F1649E5A5C3215858974F25E* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tCF83ECAB8AFDA1BF6DCCB8648945D6F86001BC5F* L_2 = (Func_2_tCF83ECAB8AFDA1BF6DCCB8648945D6F86001BC5F*)__this->___selector_5;
		WhereSelectListIterator_2_t42B5B14419D4DC51F1649E5A5C3215858974F25E* L_3 = (WhereSelectListIterator_2_t42B5B14419D4DC51F1649E5A5C3215858974F25E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m8D72AFA7D5A124C26644AF0AC7DA7BFBB6A51BB0(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Realms.Native.SchemaObject>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m1DF61858E164312A4B99B38280AB4AA64A934D1A_gshared (WhereSelectListIterator_2_t42B5B14419D4DC51F1649E5A5C3215858974F25E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tCF83ECAB8AFDA1BF6DCCB8648945D6F86001BC5F* L_11 = (Func_2_tCF83ECAB8AFDA1BF6DCCB8648945D6F86001BC5F*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD L_13;
		L_13 = Func_2_Invoke_m567486E77E5A98A34DC60AEA578E6B67FFF44CD9_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Realms.Native.SchemaObject>::Dispose() */, (Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Realms.Native.SchemaObject>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mD2CD3A302F66CF1C9030D2175B00AC30645FED02_gshared (WhereSelectListIterator_2_t42B5B14419D4DC51F1649E5A5C3215858974F25E* __this, Func_2_t3933D1A9C2F1F83F8EE6F4C8686FB62AD7C724EE* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3933D1A9C2F1F83F8EE6F4C8686FB62AD7C724EE* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tD26E121E693726AF91796ECC3C2F2496D6B34430* L_1 = (WhereEnumerableIterator_1_tD26E121E693726AF91796ECC3C2F2496D6B34430*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mE8A6FCF46E486262885323C90F04B102705E4C79(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Single>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m22BAFF678F9378729DD9E5551BBA6BA69FDEEF94_gshared (WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m7FEBAE985CDE5DD1CB255EB4A3D65F05AA8D2AEF((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Single>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* WhereSelectListIterator_2_Clone_m29FF529DD718DD7EEFEE0E1128661AD8EF2C534E_gshared (WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* L_2 = (Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12*)__this->___selector_5;
		WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9* L_3 = (WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m22BAFF678F9378729DD9E5551BBA6BA69FDEEF94(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Single>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m0B0C765BFD4BA1167D123810AF36952282481BA6_gshared (WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* L_11 = (Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		float L_13;
		L_13 = Func_2_Invoke_mBE16A5FDA5E80CCBA51D69334EF21C0F03D353AF_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Single>::Dispose() */, (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Single>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m4A3DB49D03860A66FF85F000DEB2E2D8688DAC49_gshared (WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9* __this, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* L_1 = (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mCB49A03958EF827EF6CE47402259941EAB31D984(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Realms.Native.StringValue>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6D1312AC1F4C6353B4F80C575A72C1781C945BB7_gshared (WhereSelectListIterator_2_t0822086E0A8333BD1C0A264D828A2466EC971560* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t7FEAF9B40BC91889C3F7FA1D3C0AB0E276613D6C* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m76554CB1FDBB89992FFB766F579ACC93103EE1CB((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t7FEAF9B40BC91889C3F7FA1D3C0AB0E276613D6C* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Realms.Native.StringValue>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5* WhereSelectListIterator_2_Clone_mA99AD6001051FEA372A13674CF77CA2EE22B4D9A_gshared (WhereSelectListIterator_2_t0822086E0A8333BD1C0A264D828A2466EC971560* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_t7FEAF9B40BC91889C3F7FA1D3C0AB0E276613D6C* L_2 = (Func_2_t7FEAF9B40BC91889C3F7FA1D3C0AB0E276613D6C*)__this->___selector_5;
		WhereSelectListIterator_2_t0822086E0A8333BD1C0A264D828A2466EC971560* L_3 = (WhereSelectListIterator_2_t0822086E0A8333BD1C0A264D828A2466EC971560*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m6D1312AC1F4C6353B4F80C575A72C1781C945BB7(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Realms.Native.StringValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m262DF2292B56472429FCE6D12BD2273B871B1A88_gshared (WhereSelectListIterator_2_t0822086E0A8333BD1C0A264D828A2466EC971560* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7FEAF9B40BC91889C3F7FA1D3C0AB0E276613D6C* L_11 = (Func_2_t7FEAF9B40BC91889C3F7FA1D3C0AB0E276613D6C*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 L_13;
		L_13 = Func_2_Invoke_m00140FA5334202FFFC3866B79CDE48942C4A1A94_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Realms.Native.StringValue>::Dispose() */, (Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,Realms.Native.StringValue>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m39DAF02DFF04FF8784D49078A4E6B1BCC42ACABA_gshared (WhereSelectListIterator_2_t0822086E0A8333BD1C0A264D828A2466EC971560* __this, Func_2_t1A51224749A0012D832BF2E64575FDEF202FAE9E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t1A51224749A0012D832BF2E64575FDEF202FAE9E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t85FA13B5DA9275197656EBD8285E1371A80E65D0* L_1 = (WhereEnumerableIterator_1_t85FA13B5DA9275197656EBD8285E1371A80E65D0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mD43F06F3C0215811180E199186B9EA63E88384AA(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector2>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m806C56469C3B3CE4D41439A0205E28D186E82FF6_gshared (WhereSelectListIterator_2_t6D757CC0B317F507E31783D6BAB8CDC2C848CB44* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t127163694D7C66D0F32B7F8F5BB2507F7516DEE4* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m78B15ADF003EB66E975D0F71571715AE0A2C63DD((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t127163694D7C66D0F32B7F8F5BB2507F7516DEE4* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector2>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC* WhereSelectListIterator_2_Clone_m782F8E66FE142BEF793C9D13FBCD42402F3E8286_gshared (WhereSelectListIterator_2_t6D757CC0B317F507E31783D6BAB8CDC2C848CB44* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_t127163694D7C66D0F32B7F8F5BB2507F7516DEE4* L_2 = (Func_2_t127163694D7C66D0F32B7F8F5BB2507F7516DEE4*)__this->___selector_5;
		WhereSelectListIterator_2_t6D757CC0B317F507E31783D6BAB8CDC2C848CB44* L_3 = (WhereSelectListIterator_2_t6D757CC0B317F507E31783D6BAB8CDC2C848CB44*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m806C56469C3B3CE4D41439A0205E28D186E82FF6(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector2>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m98F02010E49D5B7611B6EA93FAB319CEA27AE213_gshared (WhereSelectListIterator_2_t6D757CC0B317F507E31783D6BAB8CDC2C848CB44* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t127163694D7C66D0F32B7F8F5BB2507F7516DEE4* L_11 = (Func_2_t127163694D7C66D0F32B7F8F5BB2507F7516DEE4*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Func_2_Invoke_mB81D84A05453E4320D091506FC75F34E2C0E0ADC_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector2>::Dispose() */, (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector2>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m911DEA71974E129BE00137D7162F62CEC3613A63_gshared (WhereSelectListIterator_2_t6D757CC0B317F507E31783D6BAB8CDC2C848CB44* __this, Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75* L_1 = (WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m9C077DCBB6483C517E8B74C1F61F52D38B51AE0A(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5A8EEDF32091C2AC8FF6CA6B931180CC68A43EA3_gshared (WhereSelectListIterator_2_t2F947A7776BA76AEEB0F205EF71A63410DFACA65* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* WhereSelectListIterator_2_Clone_mB123A62114F102BC9E627875F910B69017BBCEFE_gshared (WhereSelectListIterator_2_t2F947A7776BA76AEEB0F205EF71A63410DFACA65* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E* L_2 = (Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E*)__this->___selector_5;
		WhereSelectListIterator_2_t2F947A7776BA76AEEB0F205EF71A63410DFACA65* L_3 = (WhereSelectListIterator_2_t2F947A7776BA76AEEB0F205EF71A63410DFACA65*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m5A8EEDF32091C2AC8FF6CA6B931180CC68A43EA3(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m67C68C17887B15EBC197D3AB4AE4A342590CF699_gshared (WhereSelectListIterator_2_t2F947A7776BA76AEEB0F205EF71A63410DFACA65* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E* L_11 = (Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Func_2_Invoke_m72462558F94253B761AE3224284CF6A0ED6E5521_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::Dispose() */, (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector3>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m3A5A23102292A2055320993D8C6572D041A2A650_gshared (WhereSelectListIterator_2_t2F947A7776BA76AEEB0F205EF71A63410DFACA65* __this, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* L_1 = (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m274E71E959F2DE46853B9D4066D696F7A5E7A242_gshared (WhereSelectListIterator_2_t9651C82872E49763DA217BC42252D9BEAED98F8F* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t01EEA5FE255AF6B9B90E3CFAE8B5571BC66E8302* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t01EEA5FE255AF6B9B90E3CFAE8B5571BC66E8302* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector4>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E* WhereSelectListIterator_2_Clone_mEA87D809B69DE51EAFC4A6E3068BC1FCA4B1EBEC_gshared (WhereSelectListIterator_2_t9651C82872E49763DA217BC42252D9BEAED98F8F* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_t01EEA5FE255AF6B9B90E3CFAE8B5571BC66E8302* L_2 = (Func_2_t01EEA5FE255AF6B9B90E3CFAE8B5571BC66E8302*)__this->___selector_5;
		WhereSelectListIterator_2_t9651C82872E49763DA217BC42252D9BEAED98F8F* L_3 = (WhereSelectListIterator_2_t9651C82872E49763DA217BC42252D9BEAED98F8F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m274E71E959F2DE46853B9D4066D696F7A5E7A242(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector4>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m889461A8B0708A322A1318A27DB8590CB3B7D458_gshared (WhereSelectListIterator_2_t9651C82872E49763DA217BC42252D9BEAED98F8F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t01EEA5FE255AF6B9B90E3CFAE8B5571BC66E8302* L_11 = (Func_2_t01EEA5FE255AF6B9B90E3CFAE8B5571BC66E8302*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = Func_2_Invoke_m404CC86DD4A7C42E047A2B9F0D8EF8A79A563ABB_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>::Dispose() */, (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Vector4>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mFE65ABA0E48FA8CF6254C235D4C5E029EE0068DE_gshared (WhereSelectListIterator_2_t9651C82872E49763DA217BC42252D9BEAED98F8F* __this, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9* L_1 = (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m1AC35FDB7DB42824DE56959C69959373EF0AA1BD_gshared (WhereSelectListIterator_2_t1D1ECE57DDFB8B79F11AE611E6CFD43FD79C2A75* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_tFB60D22A7188A225EC88D4C2A2A516E8A5EC1B45* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m2354367D0E1B37E7E69B5E67F97AEEE56674E8C4((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tFB60D22A7188A225EC88D4C2A2A516E8A5EC1B45* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* WhereSelectListIterator_2_Clone_m5F2ACE5A521A8CD97891F85C1AEA39BD3E19BB1E_gshared (WhereSelectListIterator_2_t1D1ECE57DDFB8B79F11AE611E6CFD43FD79C2A75* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		Func_2_tFB60D22A7188A225EC88D4C2A2A516E8A5EC1B45* L_2 = (Func_2_tFB60D22A7188A225EC88D4C2A2A516E8A5EC1B45*)__this->___selector_5;
		WhereSelectListIterator_2_t1D1ECE57DDFB8B79F11AE611E6CFD43FD79C2A75* L_3 = (WhereSelectListIterator_2_t1D1ECE57DDFB8B79F11AE611E6CFD43FD79C2A75*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m1AC35FDB7DB42824DE56959C69959373EF0AA1BD(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mCF952692683156DD665C730501EBE83C0480868B_gshared (WhereSelectListIterator_2_t1D1ECE57DDFB8B79F11AE611E6CFD43FD79C2A75* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_3 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C L_4;
		L_4 = List_1_GetEnumerator_m247E418410B1D685C84D5E16B651A345563C67A5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_5 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_6;
		L_6 = Enumerator_get_Current_mAF9948BAE896A229451C88312BC11312AFC644A8_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_7 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_8 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m75EC2083856EBA636983B0D1930AC65BBD70B8BD_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFB60D22A7188A225EC88D4C2A2A516E8A5EC1B45* L_11 = (Func_2_tFB60D22A7188A225EC88D4C2A2A516E8A5EC1B45*)__this->___selector_5;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_13;
		L_13 = Func_2_Invoke_mFB1328B15495AE319F4A1122468EAD253C18212A_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_14 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFDA7AE925C7AB0E8B68E1793C0A0BB55EFE16366(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m61F095DB7C14305A543A8DEBE473CCC0568B2F72_gshared (WhereSelectListIterator_2_t1D1ECE57DDFB8B79F11AE611E6CFD43FD79C2A75* __this, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* L_1 = (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mB57E9223DB0E68D35CAE577A2C111D98EDAC5298(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Guid>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mD81A541F00BC923467DB37472688050E4ED7136D_gshared (WhereSelectListIterator_2_t5F859585DBD38F530CDADB5DE2D2E5B741E473B6* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_t6F5D52A89A1B936762EE51CD9D9AAD0EF815BD23* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mEE24CA444F268E52B9F173A684E9A50C294ABBCF((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t6F5D52A89A1B936762EE51CD9D9AAD0EF815BD23* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Guid>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE* WhereSelectListIterator_2_Clone_mD1C87C8AE91E741D6CF61F6CD6844EBDAD3FAFB8_gshared (WhereSelectListIterator_2_t5F859585DBD38F530CDADB5DE2D2E5B741E473B6* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		Func_2_t6F5D52A89A1B936762EE51CD9D9AAD0EF815BD23* L_2 = (Func_2_t6F5D52A89A1B936762EE51CD9D9AAD0EF815BD23*)__this->___selector_5;
		WhereSelectListIterator_2_t5F859585DBD38F530CDADB5DE2D2E5B741E473B6* L_3 = (WhereSelectListIterator_2_t5F859585DBD38F530CDADB5DE2D2E5B741E473B6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mD81A541F00BC923467DB37472688050E4ED7136D(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Guid>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m369F6C48A67ADD1E1A4A4C8AEC14D99D480C0515_gshared (WhereSelectListIterator_2_t5F859585DBD38F530CDADB5DE2D2E5B741E473B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_3 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C L_4;
		L_4 = List_1_GetEnumerator_m247E418410B1D685C84D5E16B651A345563C67A5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_5 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_6;
		L_6 = Enumerator_get_Current_mAF9948BAE896A229451C88312BC11312AFC644A8_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_7 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_8 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m75EC2083856EBA636983B0D1930AC65BBD70B8BD_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6F5D52A89A1B936762EE51CD9D9AAD0EF815BD23* L_11 = (Func_2_t6F5D52A89A1B936762EE51CD9D9AAD0EF815BD23*)__this->___selector_5;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_12 = V_1;
		NullCheck(L_11);
		Guid_t L_13;
		L_13 = Func_2_Invoke_mBF51B7910D885B818A6C92BC3679438D81C6B907_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_14 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFDA7AE925C7AB0E8B68E1793C0A0BB55EFE16366(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Guid>::Dispose() */, (Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Guid>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mC55C4AE51FE0490B50FD5259C6DCEF440012F35F_gshared (WhereSelectListIterator_2_t5F859585DBD38F530CDADB5DE2D2E5B741E473B6* __this, Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tD9B3677A96A5B0AD1FA4479CEA26880403A92E6D* L_1 = (WhereEnumerableIterator_1_tD9B3677A96A5B0AD1FA4479CEA26880403A92E6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m9DD9CD3347A8DF85572E37D93DE7575DA4CF1626(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2A711391E5932E6CF7528D549F01C82DE1DCF7AA_gshared (WhereSelectListIterator_2_tF17BC0AE60EF6A2CC11A2B94A9E5F0777FD249C5* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_tF01BB0E21083B293CF60FDE06ED0026AC094CFB7* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tF01BB0E21083B293CF60FDE06ED0026AC094CFB7* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_mA725CDA691E5FF814989F40FF401CAA7D25D33AF_gshared (WhereSelectListIterator_2_tF17BC0AE60EF6A2CC11A2B94A9E5F0777FD249C5* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		Func_2_tF01BB0E21083B293CF60FDE06ED0026AC094CFB7* L_2 = (Func_2_tF01BB0E21083B293CF60FDE06ED0026AC094CFB7*)__this->___selector_5;
		WhereSelectListIterator_2_tF17BC0AE60EF6A2CC11A2B94A9E5F0777FD249C5* L_3 = (WhereSelectListIterator_2_tF17BC0AE60EF6A2CC11A2B94A9E5F0777FD249C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m2A711391E5932E6CF7528D549F01C82DE1DCF7AA(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m901DBF98CBABCBA4F9E0B75AFB7A590099B2491E_gshared (WhereSelectListIterator_2_tF17BC0AE60EF6A2CC11A2B94A9E5F0777FD249C5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_3 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C L_4;
		L_4 = List_1_GetEnumerator_m247E418410B1D685C84D5E16B651A345563C67A5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_5 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_6;
		L_6 = Enumerator_get_Current_mAF9948BAE896A229451C88312BC11312AFC644A8_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_7 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_8 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m75EC2083856EBA636983B0D1930AC65BBD70B8BD_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF01BB0E21083B293CF60FDE06ED0026AC094CFB7* L_11 = (Func_2_tF01BB0E21083B293CF60FDE06ED0026AC094CFB7*)__this->___selector_5;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_mA1BA5A89DB1F7A5384BF03FE2CC141432588E005_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_14 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFDA7AE925C7AB0E8B68E1793C0A0BB55EFE16366(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m38783046A5BCE6BBC97050B8D25E7FC431312B1B_gshared (WhereSelectListIterator_2_tF17BC0AE60EF6A2CC11A2B94A9E5F0777FD249C5* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.KeyPath>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m1DC6F2EB970D4546838B651BE622DE4A5AA3179A_gshared (WhereSelectListIterator_2_t28AB655AA4A400E98C753FAE39A8854666509F71* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_tB313531AE7343695ABF10C08F75B55E4699B40DD* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mA1C51ABC585C08998C0C98D4B0A478E18F7B008A((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tB313531AE7343695ABF10C08F75B55E4699B40DD* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.KeyPath>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4* WhereSelectListIterator_2_Clone_m68555EBECC33484EE65CDD0F38DD301123D189B3_gshared (WhereSelectListIterator_2_t28AB655AA4A400E98C753FAE39A8854666509F71* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		Func_2_tB313531AE7343695ABF10C08F75B55E4699B40DD* L_2 = (Func_2_tB313531AE7343695ABF10C08F75B55E4699B40DD*)__this->___selector_5;
		WhereSelectListIterator_2_t28AB655AA4A400E98C753FAE39A8854666509F71* L_3 = (WhereSelectListIterator_2_t28AB655AA4A400E98C753FAE39A8854666509F71*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m1DC6F2EB970D4546838B651BE622DE4A5AA3179A(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.KeyPath>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m29DC1EE3125209F21FE8AB04B7AC026B13A0DFD7_gshared (WhereSelectListIterator_2_t28AB655AA4A400E98C753FAE39A8854666509F71* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_3 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C L_4;
		L_4 = List_1_GetEnumerator_m247E418410B1D685C84D5E16B651A345563C67A5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_5 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_6;
		L_6 = Enumerator_get_Current_mAF9948BAE896A229451C88312BC11312AFC644A8_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_7 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_8 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m75EC2083856EBA636983B0D1930AC65BBD70B8BD_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB313531AE7343695ABF10C08F75B55E4699B40DD* L_11 = (Func_2_tB313531AE7343695ABF10C08F75B55E4699B40DD*)__this->___selector_5;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_12 = V_1;
		NullCheck(L_11);
		KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D L_13;
		L_13 = Func_2_Invoke_m084776653B82944F57AF389DE04F75A283DFF7FA_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this)->___current_2))->___U3CPathU3Ek__BackingField_0), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_14 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFDA7AE925C7AB0E8B68E1793C0A0BB55EFE16366(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Realms.KeyPath>::Dispose() */, (Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.KeyPath>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mBCF79D6571DC6D5F7A65B48ACA7E2957900BA53D_gshared (WhereSelectListIterator_2_t28AB655AA4A400E98C753FAE39A8854666509F71* __this, Func_2_tED48016847BEDB00839D61E14F631458FB13A2BB* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tED48016847BEDB00839D61E14F631458FB13A2BB* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8E2BDFFB19EFDD6FDD1A997E25D30A9151B5E20C* L_1 = (WhereEnumerableIterator_1_t8E2BDFFB19EFDD6FDD1A997E25D30A9151B5E20C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m5629CFC57747C084082271317D4281BD090CDCE6(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m75BD6F2E66C27F6EFB08358798D69BB58A25E707_gshared (WhereSelectListIterator_2_t60B3F115E1808DEFF67E64031605E0CF6CAA916D* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_t429E82ABFFFC2AC1CE010D74CC7A9C629055F887* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t429E82ABFFFC2AC1CE010D74CC7A9C629055F887* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mA87FCA9F85B9CDE6D8F6DC9BE0FCFBD60F4CE7A2_gshared (WhereSelectListIterator_2_t60B3F115E1808DEFF67E64031605E0CF6CAA916D* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		Func_2_t429E82ABFFFC2AC1CE010D74CC7A9C629055F887* L_2 = (Func_2_t429E82ABFFFC2AC1CE010D74CC7A9C629055F887*)__this->___selector_5;
		WhereSelectListIterator_2_t60B3F115E1808DEFF67E64031605E0CF6CAA916D* L_3 = (WhereSelectListIterator_2_t60B3F115E1808DEFF67E64031605E0CF6CAA916D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m75BD6F2E66C27F6EFB08358798D69BB58A25E707(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m6E711E7B77F1563F5E03B3ECD65369E16D0AC997_gshared (WhereSelectListIterator_2_t60B3F115E1808DEFF67E64031605E0CF6CAA916D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_3 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C L_4;
		L_4 = List_1_GetEnumerator_m247E418410B1D685C84D5E16B651A345563C67A5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_5 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_6;
		L_6 = Enumerator_get_Current_mAF9948BAE896A229451C88312BC11312AFC644A8_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_7 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_8 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m75EC2083856EBA636983B0D1930AC65BBD70B8BD_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t429E82ABFFFC2AC1CE010D74CC7A9C629055F887* L_11 = (Func_2_t429E82ABFFFC2AC1CE010D74CC7A9C629055F887*)__this->___selector_5;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m743660DEBFCC2A4F52E0A52B28811BADC0F059B3_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_14 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFDA7AE925C7AB0E8B68E1793C0A0BB55EFE16366(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mFC2DF870271A1D93E83259A4FC10431998B3AA7C_gshared (WhereSelectListIterator_2_t60B3F115E1808DEFF67E64031605E0CF6CAA916D* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.Native.SchemaObject>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m455FFC550CF077B57E6EB07D4C6E0EDECE54756C_gshared (WhereSelectListIterator_2_tA7D93BC522D059361B567DB7386ACD3AB4F9199B* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_t210E61F99D7472E51282943CC7639FF687A3719F* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mFB8E9331E1D58E2A2630EEF92F370603EC76BA91((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t210E61F99D7472E51282943CC7639FF687A3719F* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.Native.SchemaObject>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D* WhereSelectListIterator_2_Clone_mE31F8222C357972DE7A4098DAE95975103189925_gshared (WhereSelectListIterator_2_tA7D93BC522D059361B567DB7386ACD3AB4F9199B* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		Func_2_t210E61F99D7472E51282943CC7639FF687A3719F* L_2 = (Func_2_t210E61F99D7472E51282943CC7639FF687A3719F*)__this->___selector_5;
		WhereSelectListIterator_2_tA7D93BC522D059361B567DB7386ACD3AB4F9199B* L_3 = (WhereSelectListIterator_2_tA7D93BC522D059361B567DB7386ACD3AB4F9199B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m455FFC550CF077B57E6EB07D4C6E0EDECE54756C(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.Native.SchemaObject>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m0A582F18EC4978BE431F47665C17B81727AEEC13_gshared (WhereSelectListIterator_2_tA7D93BC522D059361B567DB7386ACD3AB4F9199B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_3 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C L_4;
		L_4 = List_1_GetEnumerator_m247E418410B1D685C84D5E16B651A345563C67A5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_5 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_6;
		L_6 = Enumerator_get_Current_mAF9948BAE896A229451C88312BC11312AFC644A8_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_7 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_8 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m75EC2083856EBA636983B0D1930AC65BBD70B8BD_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t210E61F99D7472E51282943CC7639FF687A3719F* L_11 = (Func_2_t210E61F99D7472E51282943CC7639FF687A3719F*)__this->___selector_5;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_12 = V_1;
		NullCheck(L_11);
		SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD L_13;
		L_13 = Func_2_Invoke_mD913EF3C33D8C9D342733C13B6340CD79E3AB4CD_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_14 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFDA7AE925C7AB0E8B68E1793C0A0BB55EFE16366(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Realms.Native.SchemaObject>::Dispose() */, (Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.Native.SchemaObject>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m4D11F79FA068E7D0EEF68A27E39786087935C94C_gshared (WhereSelectListIterator_2_tA7D93BC522D059361B567DB7386ACD3AB4F9199B* __this, Func_2_t3933D1A9C2F1F83F8EE6F4C8686FB62AD7C724EE* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3933D1A9C2F1F83F8EE6F4C8686FB62AD7C724EE* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tD26E121E693726AF91796ECC3C2F2496D6B34430* L_1 = (WhereEnumerableIterator_1_tD26E121E693726AF91796ECC3C2F2496D6B34430*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mE8A6FCF46E486262885323C90F04B102705E4C79(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Single>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mAAA3EF1A2DD7602CAD6DCDF9793BC9706E3E945F_gshared (WhereSelectListIterator_2_tD5B8B4EDE8DE52C8140F32A2AE4D1D840BF4623E* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_t90CE56F960E045743F1A9D67A849897248A821D9* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m7FEBAE985CDE5DD1CB255EB4A3D65F05AA8D2AEF((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t90CE56F960E045743F1A9D67A849897248A821D9* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Single>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* WhereSelectListIterator_2_Clone_m9A0A75F9D730B4E6B61E3CD511E51DE88CA23E9F_gshared (WhereSelectListIterator_2_tD5B8B4EDE8DE52C8140F32A2AE4D1D840BF4623E* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		Func_2_t90CE56F960E045743F1A9D67A849897248A821D9* L_2 = (Func_2_t90CE56F960E045743F1A9D67A849897248A821D9*)__this->___selector_5;
		WhereSelectListIterator_2_tD5B8B4EDE8DE52C8140F32A2AE4D1D840BF4623E* L_3 = (WhereSelectListIterator_2_tD5B8B4EDE8DE52C8140F32A2AE4D1D840BF4623E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mAAA3EF1A2DD7602CAD6DCDF9793BC9706E3E945F(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Single>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m7AB559E53345B5C92C5BC1F864967F45F7352688_gshared (WhereSelectListIterator_2_tD5B8B4EDE8DE52C8140F32A2AE4D1D840BF4623E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_3 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C L_4;
		L_4 = List_1_GetEnumerator_m247E418410B1D685C84D5E16B651A345563C67A5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_5 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_6;
		L_6 = Enumerator_get_Current_mAF9948BAE896A229451C88312BC11312AFC644A8_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_7 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_8 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m75EC2083856EBA636983B0D1930AC65BBD70B8BD_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t90CE56F960E045743F1A9D67A849897248A821D9* L_11 = (Func_2_t90CE56F960E045743F1A9D67A849897248A821D9*)__this->___selector_5;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_12 = V_1;
		NullCheck(L_11);
		float L_13;
		L_13 = Func_2_Invoke_mD94FBE777ED7F338999AE0E4A9C5C2262E395D35_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_14 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFDA7AE925C7AB0E8B68E1793C0A0BB55EFE16366(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Single>::Dispose() */, (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,System.Single>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m5FEAC0218109511DFBB49CD2A557E50FA40E47D9_gshared (WhereSelectListIterator_2_tD5B8B4EDE8DE52C8140F32A2AE4D1D840BF4623E* __this, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* L_1 = (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mCB49A03958EF827EF6CE47402259941EAB31D984(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.Native.StringValue>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m4BC66429B7646BE612D8D93EE5AC94EB44DB6F1E_gshared (WhereSelectListIterator_2_tF7F7D19F91F7FF29FEB9AC4C40AF34BEC05C5FE4* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_t478B3D12821F41ABD43978161E257B9F8BADC68B* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m76554CB1FDBB89992FFB766F579ACC93103EE1CB((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t478B3D12821F41ABD43978161E257B9F8BADC68B* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.Native.StringValue>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5* WhereSelectListIterator_2_Clone_m7E52951E53C95C0E6EFD867C1C63308A894C60E3_gshared (WhereSelectListIterator_2_tF7F7D19F91F7FF29FEB9AC4C40AF34BEC05C5FE4* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		Func_2_t478B3D12821F41ABD43978161E257B9F8BADC68B* L_2 = (Func_2_t478B3D12821F41ABD43978161E257B9F8BADC68B*)__this->___selector_5;
		WhereSelectListIterator_2_tF7F7D19F91F7FF29FEB9AC4C40AF34BEC05C5FE4* L_3 = (WhereSelectListIterator_2_tF7F7D19F91F7FF29FEB9AC4C40AF34BEC05C5FE4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m4BC66429B7646BE612D8D93EE5AC94EB44DB6F1E(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.Native.StringValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m8DFE14DCAAEF6A2BE231C650352E11A9C237FF26_gshared (WhereSelectListIterator_2_tF7F7D19F91F7FF29FEB9AC4C40AF34BEC05C5FE4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_3 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C L_4;
		L_4 = List_1_GetEnumerator_m247E418410B1D685C84D5E16B651A345563C67A5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_5 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_6;
		L_6 = Enumerator_get_Current_mAF9948BAE896A229451C88312BC11312AFC644A8_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_7 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_8 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m75EC2083856EBA636983B0D1930AC65BBD70B8BD_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t478B3D12821F41ABD43978161E257B9F8BADC68B* L_11 = (Func_2_t478B3D12821F41ABD43978161E257B9F8BADC68B*)__this->___selector_5;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_12 = V_1;
		NullCheck(L_11);
		StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 L_13;
		L_13 = Func_2_Invoke_m2887033A7BCC2749BBFE1E1F2B8C5E23270EFC45_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_14 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFDA7AE925C7AB0E8B68E1793C0A0BB55EFE16366(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Realms.Native.StringValue>::Dispose() */, (Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,Realms.Native.StringValue>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m11519E5BC08EE644A33D43D4F099455CA3235CA5_gshared (WhereSelectListIterator_2_tF7F7D19F91F7FF29FEB9AC4C40AF34BEC05C5FE4* __this, Func_2_t1A51224749A0012D832BF2E64575FDEF202FAE9E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t1A51224749A0012D832BF2E64575FDEF202FAE9E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t85FA13B5DA9275197656EBD8285E1371A80E65D0* L_1 = (WhereEnumerableIterator_1_t85FA13B5DA9275197656EBD8285E1371A80E65D0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mD43F06F3C0215811180E199186B9EA63E88384AA(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector2>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA863E14AA2DF40C9E2049ED3AE01C0606A0F1C24_gshared (WhereSelectListIterator_2_tC0EDCE3671DC8A347EC3FA41D4BB5A6707A0EC67* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_tC71476211D01CF6367A4721A03CB208B876EA9FD* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m78B15ADF003EB66E975D0F71571715AE0A2C63DD((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tC71476211D01CF6367A4721A03CB208B876EA9FD* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector2>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC* WhereSelectListIterator_2_Clone_mB9F28B2FFFEF25855014D27D033E6553AA65E964_gshared (WhereSelectListIterator_2_tC0EDCE3671DC8A347EC3FA41D4BB5A6707A0EC67* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		Func_2_tC71476211D01CF6367A4721A03CB208B876EA9FD* L_2 = (Func_2_tC71476211D01CF6367A4721A03CB208B876EA9FD*)__this->___selector_5;
		WhereSelectListIterator_2_tC0EDCE3671DC8A347EC3FA41D4BB5A6707A0EC67* L_3 = (WhereSelectListIterator_2_tC0EDCE3671DC8A347EC3FA41D4BB5A6707A0EC67*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mA863E14AA2DF40C9E2049ED3AE01C0606A0F1C24(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector2>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF81B9C32368C46D7D099EEFD1D98E9963FF9573D_gshared (WhereSelectListIterator_2_tC0EDCE3671DC8A347EC3FA41D4BB5A6707A0EC67* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_3 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C L_4;
		L_4 = List_1_GetEnumerator_m247E418410B1D685C84D5E16B651A345563C67A5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_5 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_6;
		L_6 = Enumerator_get_Current_mAF9948BAE896A229451C88312BC11312AFC644A8_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_7 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_8 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m75EC2083856EBA636983B0D1930AC65BBD70B8BD_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tC71476211D01CF6367A4721A03CB208B876EA9FD* L_11 = (Func_2_tC71476211D01CF6367A4721A03CB208B876EA9FD*)__this->___selector_5;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_12 = V_1;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Func_2_Invoke_mEFD7F55BC0F81F921E9081338D0BCD886CBFFB19_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_14 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFDA7AE925C7AB0E8B68E1793C0A0BB55EFE16366(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector2>::Dispose() */, (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector2>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m4E4C0E8591F909AF710B6D37F30738290846885B_gshared (WhereSelectListIterator_2_tC0EDCE3671DC8A347EC3FA41D4BB5A6707A0EC67* __this, Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75* L_1 = (WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m9C077DCBB6483C517E8B74C1F61F52D38B51AE0A(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF3C9D61E4D31E2950F615CC92937117453AF76FD_gshared (WhereSelectListIterator_2_t0752849B241AC3D8351B3D6146CE326291B4CB28* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_t4086956E9AE7A5665BF03B7A439D29BF0941DD15* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t4086956E9AE7A5665BF03B7A439D29BF0941DD15* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* WhereSelectListIterator_2_Clone_m7974F4C7BCA25A883C51EFEB3E2BFBC12134A5B0_gshared (WhereSelectListIterator_2_t0752849B241AC3D8351B3D6146CE326291B4CB28* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		Func_2_t4086956E9AE7A5665BF03B7A439D29BF0941DD15* L_2 = (Func_2_t4086956E9AE7A5665BF03B7A439D29BF0941DD15*)__this->___selector_5;
		WhereSelectListIterator_2_t0752849B241AC3D8351B3D6146CE326291B4CB28* L_3 = (WhereSelectListIterator_2_t0752849B241AC3D8351B3D6146CE326291B4CB28*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mF3C9D61E4D31E2950F615CC92937117453AF76FD(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mDCAB0EF12B9451CDFE4A19536C6B919FF1A101CC_gshared (WhereSelectListIterator_2_t0752849B241AC3D8351B3D6146CE326291B4CB28* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_3 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C L_4;
		L_4 = List_1_GetEnumerator_m247E418410B1D685C84D5E16B651A345563C67A5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_5 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_6;
		L_6 = Enumerator_get_Current_mAF9948BAE896A229451C88312BC11312AFC644A8_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_7 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_8 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m75EC2083856EBA636983B0D1930AC65BBD70B8BD_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4086956E9AE7A5665BF03B7A439D29BF0941DD15* L_11 = (Func_2_t4086956E9AE7A5665BF03B7A439D29BF0941DD15*)__this->___selector_5;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_12 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Func_2_Invoke_mC04A0F679DFBDE21F1CFED2AC219429427E7EFB8_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_14 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFDA7AE925C7AB0E8B68E1793C0A0BB55EFE16366(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::Dispose() */, (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector3>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m62717B23E0159B022CF764483DEAB92F3A0E9CFB_gshared (WhereSelectListIterator_2_t0752849B241AC3D8351B3D6146CE326291B4CB28* __this, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* L_1 = (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0F05C73DCBFD4286C689A297375F66D2766C50E3_gshared (WhereSelectListIterator_2_tC707137F05826EECD63624BA657FEAC39F00C292* __this, List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* ___source0, Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* ___predicate1, Func_2_tC0F42D8244464038AD9681F241E7C31A37D8242D* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tC0F42D8244464038AD9681F241E7C31A37D8242D* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector4>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E* WhereSelectListIterator_2_Clone_mED00C98057EFC83B33A9FBF5E9FFBD5F738B8FB9_gshared (WhereSelectListIterator_2_tC707137F05826EECD63624BA657FEAC39F00C292* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_0 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_1 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		Func_2_tC0F42D8244464038AD9681F241E7C31A37D8242D* L_2 = (Func_2_tC0F42D8244464038AD9681F241E7C31A37D8242D*)__this->___selector_5;
		WhereSelectListIterator_2_tC707137F05826EECD63624BA657FEAC39F00C292* L_3 = (WhereSelectListIterator_2_tC707137F05826EECD63624BA657FEAC39F00C292*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m0F05C73DCBFD4286C689A297375F66D2766C50E3(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector4>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m502C76B28FBD84ED4FABE3136350BD44AFE3F580_gshared (WhereSelectListIterator_2_tC707137F05826EECD63624BA657FEAC39F00C292* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E* L_3 = (List_1_t6BE7D7FE4CDB4929ECF3AF723536242757940C6E*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C L_4;
		L_4 = List_1_GetEnumerator_m247E418410B1D685C84D5E16B651A345563C67A5(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_5 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_6;
		L_6 = Enumerator_get_Current_mAF9948BAE896A229451C88312BC11312AFC644A8_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_7 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* L_8 = (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2*)__this->___predicate_4;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m75EC2083856EBA636983B0D1930AC65BBD70B8BD_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tC0F42D8244464038AD9681F241E7C31A37D8242D* L_11 = (Func_2_tC0F42D8244464038AD9681F241E7C31A37D8242D*)__this->___selector_5;
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_12 = V_1;
		NullCheck(L_11);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = Func_2_Invoke_m7A5AE9163F762E1F71607A8D572886E09B6B3EB9_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* L_14 = (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFDA7AE925C7AB0E8B68E1793C0A0BB55EFE16366(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>::Dispose() */, (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.PrimitiveValue,UnityEngine.Vector4>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA013FA9962959C6D2BB3F28822C27FA17CA06142_gshared (WhereSelectListIterator_2_tC707137F05826EECD63624BA657FEAC39F00C292* __this, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9* L_1 = (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mFD9B1DCE1281A6C4E5A9B9F9EF1D6CBB8763052B_gshared (WhereSelectListIterator_2_tA397D24E1605A76B61FAB88C38499CFC5B625201* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t0A1D011E49157B9D56FE997E6A482A5DB8807547* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m2354367D0E1B37E7E69B5E67F97AEEE56674E8C4((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t0A1D011E49157B9D56FE997E6A482A5DB8807547* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* WhereSelectListIterator_2_Clone_mDAC1C8CAE5CD18D949D882D4C0BC7052B1595271_gshared (WhereSelectListIterator_2_tA397D24E1605A76B61FAB88C38499CFC5B625201* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Func_2_t0A1D011E49157B9D56FE997E6A482A5DB8807547* L_2 = (Func_2_t0A1D011E49157B9D56FE997E6A482A5DB8807547*)__this->___selector_5;
		WhereSelectListIterator_2_tA397D24E1605A76B61FAB88C38499CFC5B625201* L_3 = (WhereSelectListIterator_2_tA397D24E1605A76B61FAB88C38499CFC5B625201*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mFD9B1DCE1281A6C4E5A9B9F9EF1D6CBB8763052B(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m90355909DD674E62A8C56FBE409045FE9E332098_gshared (WhereSelectListIterator_2_tA397D24E1605A76B61FAB88C38499CFC5B625201* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Property_tA1E653E5DCE45303997F51563A7060FE291075DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_3 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF L_4;
		L_4 = List_1_GetEnumerator_m498538CDE927D22B507110228E1A1B911ADB758D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CNameU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CManagedNameU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CObjectTypeU3Ek__BackingField_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CLinkOriginPropertyNameU3Ek__BackingField_6), (void*)NULL);
		#endif
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_5 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_6;
		L_6 = Enumerator_get_Current_m9882246BFEAA177BC7A18BCF40BF0D3861EA45D3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_7 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_8 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mEB16369495B60475CAA6E581D0FE8CEF13F08307_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t0A1D011E49157B9D56FE997E6A482A5DB8807547* L_11 = (Func_2_t0A1D011E49157B9D56FE997E6A482A5DB8807547*)__this->___selector_5;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_13;
		L_13 = Func_2_Invoke_mDFDF48F96731ACEE5EA85D83715C5552F48DF078_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_14 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m765BCF4132B64FA1C4DDCB609E7F87550A1C2935(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA2EE9C85AFC1F0AA8679242D01EB51AA310A9691_gshared (WhereSelectListIterator_2_tA397D24E1605A76B61FAB88C38499CFC5B625201* __this, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* L_1 = (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mB57E9223DB0E68D35CAE577A2C111D98EDAC5298(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Guid>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mB505D2DE46B84BC89E95D59C21C108645E0FB33A_gshared (WhereSelectListIterator_2_tD32E7B8A98D5FE56872A1EA8AFBE53F42FDE3900* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t3807B8C9754B3D6705404B2CD1E16545D814C5F9* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mEE24CA444F268E52B9F173A684E9A50C294ABBCF((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t3807B8C9754B3D6705404B2CD1E16545D814C5F9* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Guid>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE* WhereSelectListIterator_2_Clone_m8CBB34AE8B2C80F11E004CA6C09BB1E23DD22DB1_gshared (WhereSelectListIterator_2_tD32E7B8A98D5FE56872A1EA8AFBE53F42FDE3900* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Func_2_t3807B8C9754B3D6705404B2CD1E16545D814C5F9* L_2 = (Func_2_t3807B8C9754B3D6705404B2CD1E16545D814C5F9*)__this->___selector_5;
		WhereSelectListIterator_2_tD32E7B8A98D5FE56872A1EA8AFBE53F42FDE3900* L_3 = (WhereSelectListIterator_2_tD32E7B8A98D5FE56872A1EA8AFBE53F42FDE3900*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mB505D2DE46B84BC89E95D59C21C108645E0FB33A(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Guid>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m5459114C8173E407D55E9C386F6DB3B32AE3532A_gshared (WhereSelectListIterator_2_tD32E7B8A98D5FE56872A1EA8AFBE53F42FDE3900* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Property_tA1E653E5DCE45303997F51563A7060FE291075DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_3 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF L_4;
		L_4 = List_1_GetEnumerator_m498538CDE927D22B507110228E1A1B911ADB758D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CNameU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CManagedNameU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CObjectTypeU3Ek__BackingField_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CLinkOriginPropertyNameU3Ek__BackingField_6), (void*)NULL);
		#endif
		((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_5 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_6;
		L_6 = Enumerator_get_Current_m9882246BFEAA177BC7A18BCF40BF0D3861EA45D3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_7 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_8 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mEB16369495B60475CAA6E581D0FE8CEF13F08307_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t3807B8C9754B3D6705404B2CD1E16545D814C5F9* L_11 = (Func_2_t3807B8C9754B3D6705404B2CD1E16545D814C5F9*)__this->___selector_5;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_12 = V_1;
		NullCheck(L_11);
		Guid_t L_13;
		L_13 = Func_2_Invoke_mDC94F8547482F318BA6B3F893E257B340B38A5E4_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_14 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m765BCF4132B64FA1C4DDCB609E7F87550A1C2935(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Guid>::Dispose() */, (Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Guid>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m28100066BCA75401D8A38DF9A447925D2D9432EF_gshared (WhereSelectListIterator_2_tD32E7B8A98D5FE56872A1EA8AFBE53F42FDE3900* __this, Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tD9B3677A96A5B0AD1FA4479CEA26880403A92E6D* L_1 = (WhereEnumerableIterator_1_tD9B3677A96A5B0AD1FA4479CEA26880403A92E6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m9DD9CD3347A8DF85572E37D93DE7575DA4CF1626(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA68076C06D59CB41D7F338DE040F2424907FA38C_gshared (WhereSelectListIterator_2_tD93DE3EAF3A43F96261ED1E1C40826D106FDFE9C* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_tF8593969B24CFE8ED3A96E2492171238088CB745* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tF8593969B24CFE8ED3A96E2492171238088CB745* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m556DD8F6388C0C07C3A57C6DA9B9545140EA0179_gshared (WhereSelectListIterator_2_tD93DE3EAF3A43F96261ED1E1C40826D106FDFE9C* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Func_2_tF8593969B24CFE8ED3A96E2492171238088CB745* L_2 = (Func_2_tF8593969B24CFE8ED3A96E2492171238088CB745*)__this->___selector_5;
		WhereSelectListIterator_2_tD93DE3EAF3A43F96261ED1E1C40826D106FDFE9C* L_3 = (WhereSelectListIterator_2_tD93DE3EAF3A43F96261ED1E1C40826D106FDFE9C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mA68076C06D59CB41D7F338DE040F2424907FA38C(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mB9C5E6F62723098420FBEECEE6D1F19400241633_gshared (WhereSelectListIterator_2_tD93DE3EAF3A43F96261ED1E1C40826D106FDFE9C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Property_tA1E653E5DCE45303997F51563A7060FE291075DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_3 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF L_4;
		L_4 = List_1_GetEnumerator_m498538CDE927D22B507110228E1A1B911ADB758D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CNameU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CManagedNameU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CObjectTypeU3Ek__BackingField_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CLinkOriginPropertyNameU3Ek__BackingField_6), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_5 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_6;
		L_6 = Enumerator_get_Current_m9882246BFEAA177BC7A18BCF40BF0D3861EA45D3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_7 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_8 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mEB16369495B60475CAA6E581D0FE8CEF13F08307_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF8593969B24CFE8ED3A96E2492171238088CB745* L_11 = (Func_2_tF8593969B24CFE8ED3A96E2492171238088CB745*)__this->___selector_5;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m0B34FBC021B80ECDA3B1675D0291380EED5621A9_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_14 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m765BCF4132B64FA1C4DDCB609E7F87550A1C2935(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mFA2B89D36E993BCCB5909EE190B0D2D93F6CDAA2_gshared (WhereSelectListIterator_2_tD93DE3EAF3A43F96261ED1E1C40826D106FDFE9C* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.KeyPath>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m1CA179CCF003E4B5855009055733BFA420AE64AE_gshared (WhereSelectListIterator_2_t188D1C1E4FC64D629FDE0E7B9945CEE40D32FEC5* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t0A9E31724C776DB67DCD4F7112EE85A7A2B0CD33* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mA1C51ABC585C08998C0C98D4B0A478E18F7B008A((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t0A9E31724C776DB67DCD4F7112EE85A7A2B0CD33* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.KeyPath>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4* WhereSelectListIterator_2_Clone_m8CD7FBCD3F4471C47DC9D0A5324980B29FFD9A05_gshared (WhereSelectListIterator_2_t188D1C1E4FC64D629FDE0E7B9945CEE40D32FEC5* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Func_2_t0A9E31724C776DB67DCD4F7112EE85A7A2B0CD33* L_2 = (Func_2_t0A9E31724C776DB67DCD4F7112EE85A7A2B0CD33*)__this->___selector_5;
		WhereSelectListIterator_2_t188D1C1E4FC64D629FDE0E7B9945CEE40D32FEC5* L_3 = (WhereSelectListIterator_2_t188D1C1E4FC64D629FDE0E7B9945CEE40D32FEC5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m1CA179CCF003E4B5855009055733BFA420AE64AE(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.KeyPath>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m7BAFF813E6F588292B3E05AC6A2797B80C9A85D9_gshared (WhereSelectListIterator_2_t188D1C1E4FC64D629FDE0E7B9945CEE40D32FEC5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Property_tA1E653E5DCE45303997F51563A7060FE291075DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_3 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF L_4;
		L_4 = List_1_GetEnumerator_m498538CDE927D22B507110228E1A1B911ADB758D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CNameU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CManagedNameU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CObjectTypeU3Ek__BackingField_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CLinkOriginPropertyNameU3Ek__BackingField_6), (void*)NULL);
		#endif
		((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_5 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_6;
		L_6 = Enumerator_get_Current_m9882246BFEAA177BC7A18BCF40BF0D3861EA45D3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_7 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_8 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mEB16369495B60475CAA6E581D0FE8CEF13F08307_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t0A9E31724C776DB67DCD4F7112EE85A7A2B0CD33* L_11 = (Func_2_t0A9E31724C776DB67DCD4F7112EE85A7A2B0CD33*)__this->___selector_5;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_12 = V_1;
		NullCheck(L_11);
		KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D L_13;
		L_13 = Func_2_Invoke_m010578C284F697036E6B0EDACE4A06381C05FB5E_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this)->___current_2))->___U3CPathU3Ek__BackingField_0), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_14 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m765BCF4132B64FA1C4DDCB609E7F87550A1C2935(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Realms.KeyPath>::Dispose() */, (Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.KeyPath>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m34ADDE71468E2DE6C75217A9D0A4803B58B37831_gshared (WhereSelectListIterator_2_t188D1C1E4FC64D629FDE0E7B9945CEE40D32FEC5* __this, Func_2_tED48016847BEDB00839D61E14F631458FB13A2BB* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tED48016847BEDB00839D61E14F631458FB13A2BB* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8E2BDFFB19EFDD6FDD1A997E25D30A9151B5E20C* L_1 = (WhereEnumerableIterator_1_t8E2BDFFB19EFDD6FDD1A997E25D30A9151B5E20C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m5629CFC57747C084082271317D4281BD090CDCE6(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m4AF316DA6FE79FB7AEB514FB9980A99087510BBE_gshared (WhereSelectListIterator_2_t502F76E72C22266C9CEB2731335807A882BA3B40* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t4FD74B88B95B6110B1D6592FD11281D6C97B1E46* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t4FD74B88B95B6110B1D6592FD11281D6C97B1E46* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m9BE1881C3C911BE50E41D308E65EFC32A2F1BBC0_gshared (WhereSelectListIterator_2_t502F76E72C22266C9CEB2731335807A882BA3B40* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Func_2_t4FD74B88B95B6110B1D6592FD11281D6C97B1E46* L_2 = (Func_2_t4FD74B88B95B6110B1D6592FD11281D6C97B1E46*)__this->___selector_5;
		WhereSelectListIterator_2_t502F76E72C22266C9CEB2731335807A882BA3B40* L_3 = (WhereSelectListIterator_2_t502F76E72C22266C9CEB2731335807A882BA3B40*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m4AF316DA6FE79FB7AEB514FB9980A99087510BBE(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m8B3EA2FDD2576C15FCDCBCC890CAD6E832D685BB_gshared (WhereSelectListIterator_2_t502F76E72C22266C9CEB2731335807A882BA3B40* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Property_tA1E653E5DCE45303997F51563A7060FE291075DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_3 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF L_4;
		L_4 = List_1_GetEnumerator_m498538CDE927D22B507110228E1A1B911ADB758D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CNameU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CManagedNameU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CObjectTypeU3Ek__BackingField_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CLinkOriginPropertyNameU3Ek__BackingField_6), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_5 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_6;
		L_6 = Enumerator_get_Current_m9882246BFEAA177BC7A18BCF40BF0D3861EA45D3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_7 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_8 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mEB16369495B60475CAA6E581D0FE8CEF13F08307_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4FD74B88B95B6110B1D6592FD11281D6C97B1E46* L_11 = (Func_2_t4FD74B88B95B6110B1D6592FD11281D6C97B1E46*)__this->___selector_5;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mFED01E7E7AA8123B66FEE52F45744B648C27FBB9_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_14 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m765BCF4132B64FA1C4DDCB609E7F87550A1C2935(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m97438DA79585389C505A20362729C81C1B0C353E_gshared (WhereSelectListIterator_2_t502F76E72C22266C9CEB2731335807A882BA3B40* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.SchemaObject>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mEF04C3C3CCEA270209B1B24CFCECB9344BFFA7CC_gshared (WhereSelectListIterator_2_t85F5892D866F96458AE20F82BDA332937BFBAE63* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_tAD733CA4558224115B2DA3BF79BFD352C06CDCE7* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mFB8E9331E1D58E2A2630EEF92F370603EC76BA91((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tAD733CA4558224115B2DA3BF79BFD352C06CDCE7* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.SchemaObject>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D* WhereSelectListIterator_2_Clone_m3F4E895BE00BBEC38EF91453A3EEA3FC490AC9C7_gshared (WhereSelectListIterator_2_t85F5892D866F96458AE20F82BDA332937BFBAE63* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Func_2_tAD733CA4558224115B2DA3BF79BFD352C06CDCE7* L_2 = (Func_2_tAD733CA4558224115B2DA3BF79BFD352C06CDCE7*)__this->___selector_5;
		WhereSelectListIterator_2_t85F5892D866F96458AE20F82BDA332937BFBAE63* L_3 = (WhereSelectListIterator_2_t85F5892D866F96458AE20F82BDA332937BFBAE63*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mEF04C3C3CCEA270209B1B24CFCECB9344BFFA7CC(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.SchemaObject>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m5AD5DE6B86AC049122A90BEE445AD7D3AC8F2F7E_gshared (WhereSelectListIterator_2_t85F5892D866F96458AE20F82BDA332937BFBAE63* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Property_tA1E653E5DCE45303997F51563A7060FE291075DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_3 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF L_4;
		L_4 = List_1_GetEnumerator_m498538CDE927D22B507110228E1A1B911ADB758D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CNameU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CManagedNameU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CObjectTypeU3Ek__BackingField_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CLinkOriginPropertyNameU3Ek__BackingField_6), (void*)NULL);
		#endif
		((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_5 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_6;
		L_6 = Enumerator_get_Current_m9882246BFEAA177BC7A18BCF40BF0D3861EA45D3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_7 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_8 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mEB16369495B60475CAA6E581D0FE8CEF13F08307_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tAD733CA4558224115B2DA3BF79BFD352C06CDCE7* L_11 = (Func_2_tAD733CA4558224115B2DA3BF79BFD352C06CDCE7*)__this->___selector_5;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_12 = V_1;
		NullCheck(L_11);
		SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD L_13;
		L_13 = Func_2_Invoke_m29BB9D391A55630C2C2686E63B631DD3546630A9_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_14 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m765BCF4132B64FA1C4DDCB609E7F87550A1C2935(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Realms.Native.SchemaObject>::Dispose() */, (Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.SchemaObject>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mC9347AA55CF6C092960E5FC4FC373607C0EE4C68_gshared (WhereSelectListIterator_2_t85F5892D866F96458AE20F82BDA332937BFBAE63* __this, Func_2_t3933D1A9C2F1F83F8EE6F4C8686FB62AD7C724EE* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3933D1A9C2F1F83F8EE6F4C8686FB62AD7C724EE* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tD26E121E693726AF91796ECC3C2F2496D6B34430* L_1 = (WhereEnumerableIterator_1_tD26E121E693726AF91796ECC3C2F2496D6B34430*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mE8A6FCF46E486262885323C90F04B102705E4C79(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.SchemaProperty>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2238429D7DBC1179F382784DE86E80C682498C1B_gshared (WhereSelectListIterator_2_tE7D2819C273C34D93B8E52FA26B6371CE3936B9A* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_tC47F6B9AEF0CD37A0AAF7B841E0964898D7E76EC* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m444A05D6EE0C61B3D002308D9673F5DA7BDDF838((Iterator_1_t46BF638A1DF2D69EAA3663ECCC3E5615FD54E6C3*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tC47F6B9AEF0CD37A0AAF7B841E0964898D7E76EC* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.SchemaProperty>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t46BF638A1DF2D69EAA3663ECCC3E5615FD54E6C3* WhereSelectListIterator_2_Clone_m67E37C882F03E821F7062930334B3FFAD856D21D_gshared (WhereSelectListIterator_2_tE7D2819C273C34D93B8E52FA26B6371CE3936B9A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Func_2_tC47F6B9AEF0CD37A0AAF7B841E0964898D7E76EC* L_2 = (Func_2_tC47F6B9AEF0CD37A0AAF7B841E0964898D7E76EC*)__this->___selector_5;
		WhereSelectListIterator_2_tE7D2819C273C34D93B8E52FA26B6371CE3936B9A* L_3 = (WhereSelectListIterator_2_tE7D2819C273C34D93B8E52FA26B6371CE3936B9A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m2238429D7DBC1179F382784DE86E80C682498C1B(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t46BF638A1DF2D69EAA3663ECCC3E5615FD54E6C3*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.SchemaProperty>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m25A363528D60FBA43236673E4A8A29BB5986A04A_gshared (WhereSelectListIterator_2_tE7D2819C273C34D93B8E52FA26B6371CE3936B9A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Property_tA1E653E5DCE45303997F51563A7060FE291075DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t46BF638A1DF2D69EAA3663ECCC3E5615FD54E6C3*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_3 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF L_4;
		L_4 = List_1_GetEnumerator_m498538CDE927D22B507110228E1A1B911ADB758D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CNameU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CManagedNameU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CObjectTypeU3Ek__BackingField_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CLinkOriginPropertyNameU3Ek__BackingField_6), (void*)NULL);
		#endif
		((Iterator_1_t46BF638A1DF2D69EAA3663ECCC3E5615FD54E6C3*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_5 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_6;
		L_6 = Enumerator_get_Current_m9882246BFEAA177BC7A18BCF40BF0D3861EA45D3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_7 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_8 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mEB16369495B60475CAA6E581D0FE8CEF13F08307_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tC47F6B9AEF0CD37A0AAF7B841E0964898D7E76EC* L_11 = (Func_2_tC47F6B9AEF0CD37A0AAF7B841E0964898D7E76EC*)__this->___selector_5;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_12 = V_1;
		NullCheck(L_11);
		SchemaProperty_t04A08E4E115B0691FEB67BE6FA34B7DEF6DB0C94 L_13;
		L_13 = Func_2_Invoke_mE803506220213BCB5A50A7B1DDD91A7E6A150272_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t46BF638A1DF2D69EAA3663ECCC3E5615FD54E6C3*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_14 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m765BCF4132B64FA1C4DDCB609E7F87550A1C2935(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t46BF638A1DF2D69EAA3663ECCC3E5615FD54E6C3*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Realms.Native.SchemaProperty>::Dispose() */, (Iterator_1_t46BF638A1DF2D69EAA3663ECCC3E5615FD54E6C3*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.SchemaProperty>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mFA0E4E9528311D0F6071A9C8FFF5EBD4ACAA6A82_gshared (WhereSelectListIterator_2_tE7D2819C273C34D93B8E52FA26B6371CE3936B9A* __this, Func_2_tD1F5FD4955CFB8FF8610002415951FD9B651B750* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tD1F5FD4955CFB8FF8610002415951FD9B651B750* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8654ECAC8E9E6FF557E1A76C04AE8F02A7A7F5B5* L_1 = (WhereEnumerableIterator_1_t8654ECAC8E9E6FF557E1A76C04AE8F02A7A7F5B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m6AB232783A95AAA2092027F69EA0E55DDF459525(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Single>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mBFFA658F3440F3780E643605C7B197FFAFEBBAF6_gshared (WhereSelectListIterator_2_t0983DF24E4CA20D883685546E2A58A7316B7F8F6* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t5CF6D64DB8F942BFBDDE1DA250A41595B7CD124B* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m7FEBAE985CDE5DD1CB255EB4A3D65F05AA8D2AEF((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t5CF6D64DB8F942BFBDDE1DA250A41595B7CD124B* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Single>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* WhereSelectListIterator_2_Clone_mFB61DA40B3B6BBBD8F3DA3B16BC52022E047CC1D_gshared (WhereSelectListIterator_2_t0983DF24E4CA20D883685546E2A58A7316B7F8F6* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Func_2_t5CF6D64DB8F942BFBDDE1DA250A41595B7CD124B* L_2 = (Func_2_t5CF6D64DB8F942BFBDDE1DA250A41595B7CD124B*)__this->___selector_5;
		WhereSelectListIterator_2_t0983DF24E4CA20D883685546E2A58A7316B7F8F6* L_3 = (WhereSelectListIterator_2_t0983DF24E4CA20D883685546E2A58A7316B7F8F6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mBFFA658F3440F3780E643605C7B197FFAFEBBAF6(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Single>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mFC86BEF0F60A01CDDBDA13D80E7F9DBE540AD30A_gshared (WhereSelectListIterator_2_t0983DF24E4CA20D883685546E2A58A7316B7F8F6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Property_tA1E653E5DCE45303997F51563A7060FE291075DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_3 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF L_4;
		L_4 = List_1_GetEnumerator_m498538CDE927D22B507110228E1A1B911ADB758D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CNameU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CManagedNameU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CObjectTypeU3Ek__BackingField_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CLinkOriginPropertyNameU3Ek__BackingField_6), (void*)NULL);
		#endif
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_5 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_6;
		L_6 = Enumerator_get_Current_m9882246BFEAA177BC7A18BCF40BF0D3861EA45D3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_7 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_8 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mEB16369495B60475CAA6E581D0FE8CEF13F08307_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t5CF6D64DB8F942BFBDDE1DA250A41595B7CD124B* L_11 = (Func_2_t5CF6D64DB8F942BFBDDE1DA250A41595B7CD124B*)__this->___selector_5;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_12 = V_1;
		NullCheck(L_11);
		float L_13;
		L_13 = Func_2_Invoke_m33614C25025BFAF59E35DEDEDB8826EC1DDAB672_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_14 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m765BCF4132B64FA1C4DDCB609E7F87550A1C2935(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Single>::Dispose() */, (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,System.Single>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m59EB61DE8EC6FB56DD078693E9DA48A9D66FEA8F_gshared (WhereSelectListIterator_2_t0983DF24E4CA20D883685546E2A58A7316B7F8F6* __this, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* L_1 = (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mCB49A03958EF827EF6CE47402259941EAB31D984(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.StringValue>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA09866E36C3BDBD6BAF96E5C2777E8CD4384EAE9_gshared (WhereSelectListIterator_2_tDA2665678E41A10B21E54E10D7F905F3641FA2A6* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t4501FBC7B7B6DE5384D627D7E0E5A8C6584958D8* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m76554CB1FDBB89992FFB766F579ACC93103EE1CB((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t4501FBC7B7B6DE5384D627D7E0E5A8C6584958D8* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.StringValue>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5* WhereSelectListIterator_2_Clone_m61D716CD5C66859C7FADF8A1BBA777B1F5FD144A_gshared (WhereSelectListIterator_2_tDA2665678E41A10B21E54E10D7F905F3641FA2A6* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Func_2_t4501FBC7B7B6DE5384D627D7E0E5A8C6584958D8* L_2 = (Func_2_t4501FBC7B7B6DE5384D627D7E0E5A8C6584958D8*)__this->___selector_5;
		WhereSelectListIterator_2_tDA2665678E41A10B21E54E10D7F905F3641FA2A6* L_3 = (WhereSelectListIterator_2_tDA2665678E41A10B21E54E10D7F905F3641FA2A6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mA09866E36C3BDBD6BAF96E5C2777E8CD4384EAE9(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.StringValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mCF26AF41F2911CD2439BDF6D0294B4051CC7792A_gshared (WhereSelectListIterator_2_tDA2665678E41A10B21E54E10D7F905F3641FA2A6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Property_tA1E653E5DCE45303997F51563A7060FE291075DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_3 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF L_4;
		L_4 = List_1_GetEnumerator_m498538CDE927D22B507110228E1A1B911ADB758D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CNameU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CManagedNameU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CObjectTypeU3Ek__BackingField_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CLinkOriginPropertyNameU3Ek__BackingField_6), (void*)NULL);
		#endif
		((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_5 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_6;
		L_6 = Enumerator_get_Current_m9882246BFEAA177BC7A18BCF40BF0D3861EA45D3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_7 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_8 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mEB16369495B60475CAA6E581D0FE8CEF13F08307_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4501FBC7B7B6DE5384D627D7E0E5A8C6584958D8* L_11 = (Func_2_t4501FBC7B7B6DE5384D627D7E0E5A8C6584958D8*)__this->___selector_5;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_12 = V_1;
		NullCheck(L_11);
		StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 L_13;
		L_13 = Func_2_Invoke_m6BCA9458DDD4A30BB4DA7D2378BB0AA3B493D519_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_14 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m765BCF4132B64FA1C4DDCB609E7F87550A1C2935(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Realms.Native.StringValue>::Dispose() */, (Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,Realms.Native.StringValue>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE1C45755F8AA1D8A907E25A6056CD5D0E6F6D2F1_gshared (WhereSelectListIterator_2_tDA2665678E41A10B21E54E10D7F905F3641FA2A6* __this, Func_2_t1A51224749A0012D832BF2E64575FDEF202FAE9E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t1A51224749A0012D832BF2E64575FDEF202FAE9E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t85FA13B5DA9275197656EBD8285E1371A80E65D0* L_1 = (WhereEnumerableIterator_1_t85FA13B5DA9275197656EBD8285E1371A80E65D0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mD43F06F3C0215811180E199186B9EA63E88384AA(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector2>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0581B7AAFEEF68F9825B3DF2EC906D7980766515_gshared (WhereSelectListIterator_2_t95AE895BD033E8B6C1E4E322D568E3D596FCD87C* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_tB381C8D4E63305292B8BAE77DFB59AAAEC93E7EB* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m78B15ADF003EB66E975D0F71571715AE0A2C63DD((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tB381C8D4E63305292B8BAE77DFB59AAAEC93E7EB* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector2>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC* WhereSelectListIterator_2_Clone_m1BDB247F5C1FAC55EB85C91238C0D3138C824354_gshared (WhereSelectListIterator_2_t95AE895BD033E8B6C1E4E322D568E3D596FCD87C* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Func_2_tB381C8D4E63305292B8BAE77DFB59AAAEC93E7EB* L_2 = (Func_2_tB381C8D4E63305292B8BAE77DFB59AAAEC93E7EB*)__this->___selector_5;
		WhereSelectListIterator_2_t95AE895BD033E8B6C1E4E322D568E3D596FCD87C* L_3 = (WhereSelectListIterator_2_t95AE895BD033E8B6C1E4E322D568E3D596FCD87C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m0581B7AAFEEF68F9825B3DF2EC906D7980766515(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector2>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m41CF9F436FEF347BDB086A5E37F7DE43D27E6CD2_gshared (WhereSelectListIterator_2_t95AE895BD033E8B6C1E4E322D568E3D596FCD87C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Property_tA1E653E5DCE45303997F51563A7060FE291075DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_3 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF L_4;
		L_4 = List_1_GetEnumerator_m498538CDE927D22B507110228E1A1B911ADB758D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CNameU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CManagedNameU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CObjectTypeU3Ek__BackingField_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CLinkOriginPropertyNameU3Ek__BackingField_6), (void*)NULL);
		#endif
		((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_5 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_6;
		L_6 = Enumerator_get_Current_m9882246BFEAA177BC7A18BCF40BF0D3861EA45D3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_7 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_8 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mEB16369495B60475CAA6E581D0FE8CEF13F08307_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB381C8D4E63305292B8BAE77DFB59AAAEC93E7EB* L_11 = (Func_2_tB381C8D4E63305292B8BAE77DFB59AAAEC93E7EB*)__this->___selector_5;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_12 = V_1;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Func_2_Invoke_m79771364E88276B2A40650A6FF9C349E67F88BBF_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_14 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m765BCF4132B64FA1C4DDCB609E7F87550A1C2935(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector2>::Dispose() */, (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector2>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mC86E69914B6D0329094073AACED71FB542C7DF4D_gshared (WhereSelectListIterator_2_t95AE895BD033E8B6C1E4E322D568E3D596FCD87C* __this, Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75* L_1 = (WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m9C077DCBB6483C517E8B74C1F61F52D38B51AE0A(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m76A09180AD5C4EDF1DA0F24B2A7182E9970A428F_gshared (WhereSelectListIterator_2_t423DF549C799E9117DBC87E884E0504546C62065* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_t15754930DFF16C02EF8AC22B6EED29449A2EF8FA* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t15754930DFF16C02EF8AC22B6EED29449A2EF8FA* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* WhereSelectListIterator_2_Clone_m5C50D6FF314BB9423507A76D2ADE12AB0A2BD09D_gshared (WhereSelectListIterator_2_t423DF549C799E9117DBC87E884E0504546C62065* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Func_2_t15754930DFF16C02EF8AC22B6EED29449A2EF8FA* L_2 = (Func_2_t15754930DFF16C02EF8AC22B6EED29449A2EF8FA*)__this->___selector_5;
		WhereSelectListIterator_2_t423DF549C799E9117DBC87E884E0504546C62065* L_3 = (WhereSelectListIterator_2_t423DF549C799E9117DBC87E884E0504546C62065*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m76A09180AD5C4EDF1DA0F24B2A7182E9970A428F(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBC34E79E2392651B4BD5D7C5E3941CD23A692B29_gshared (WhereSelectListIterator_2_t423DF549C799E9117DBC87E884E0504546C62065* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Property_tA1E653E5DCE45303997F51563A7060FE291075DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_3 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF L_4;
		L_4 = List_1_GetEnumerator_m498538CDE927D22B507110228E1A1B911ADB758D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CNameU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CManagedNameU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CObjectTypeU3Ek__BackingField_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CLinkOriginPropertyNameU3Ek__BackingField_6), (void*)NULL);
		#endif
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_5 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_6;
		L_6 = Enumerator_get_Current_m9882246BFEAA177BC7A18BCF40BF0D3861EA45D3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_7 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_8 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mEB16369495B60475CAA6E581D0FE8CEF13F08307_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t15754930DFF16C02EF8AC22B6EED29449A2EF8FA* L_11 = (Func_2_t15754930DFF16C02EF8AC22B6EED29449A2EF8FA*)__this->___selector_5;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_12 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Func_2_Invoke_m40F363755A479B8135266E9DC57FA556B4747ECB_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_14 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m765BCF4132B64FA1C4DDCB609E7F87550A1C2935(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::Dispose() */, (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector3>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF711D9162E5A0441C5CC78980C3FEF02CD7398BA_gshared (WhereSelectListIterator_2_t423DF549C799E9117DBC87E884E0504546C62065* __this, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* L_1 = (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m450B7BFF945E5AD1CE1AA7C833288270EAD49C09_gshared (WhereSelectListIterator_2_t38D0B415E5EF53C6DAB6487265554AF096CDE8B6* __this, List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* ___source0, Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* ___predicate1, Func_2_tDC0BD947591C831552E42B078DDF4F4376D0B51C* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tDC0BD947591C831552E42B078DDF4F4376D0B51C* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector4>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E* WhereSelectListIterator_2_Clone_mEE20DAA3AEABA7387DDAF9423315B50DF6763332_gshared (WhereSelectListIterator_2_t38D0B415E5EF53C6DAB6487265554AF096CDE8B6* __this, const RuntimeMethod* method) 
{
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_0 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_1 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Func_2_tDC0BD947591C831552E42B078DDF4F4376D0B51C* L_2 = (Func_2_tDC0BD947591C831552E42B078DDF4F4376D0B51C*)__this->___selector_5;
		WhereSelectListIterator_2_t38D0B415E5EF53C6DAB6487265554AF096CDE8B6* L_3 = (WhereSelectListIterator_2_t38D0B415E5EF53C6DAB6487265554AF096CDE8B6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m450B7BFF945E5AD1CE1AA7C833288270EAD49C09(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector4>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mFA0882DFDAE460E15ECFFF9F8467DD25A0746323_gshared (WhereSelectListIterator_2_t38D0B415E5EF53C6DAB6487265554AF096CDE8B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Property_tA1E653E5DCE45303997F51563A7060FE291075DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC* L_3 = (List_1_tD7065F38DC4D6C0398F8AE8617ED53D4225A73CC*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF L_4;
		L_4 = List_1_GetEnumerator_m498538CDE927D22B507110228E1A1B911ADB758D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CNameU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CManagedNameU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CObjectTypeU3Ek__BackingField_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CLinkOriginPropertyNameU3Ek__BackingField_6), (void*)NULL);
		#endif
		((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_5 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_6;
		L_6 = Enumerator_get_Current_m9882246BFEAA177BC7A18BCF40BF0D3861EA45D3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_7 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* L_8 = (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC*)__this->___predicate_4;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mEB16369495B60475CAA6E581D0FE8CEF13F08307_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tDC0BD947591C831552E42B078DDF4F4376D0B51C* L_11 = (Func_2_tDC0BD947591C831552E42B078DDF4F4376D0B51C*)__this->___selector_5;
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_12 = V_1;
		NullCheck(L_11);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = Func_2_Invoke_m2BCAAE2F6933485630DBA5B29B771FA1E3C3B6D8_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* L_14 = (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m765BCF4132B64FA1C4DDCB609E7F87550A1C2935(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>::Dispose() */, (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Schema.Property,UnityEngine.Vector4>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m05439937B21DB656F222A41469D13113913C8EEE_gshared (WhereSelectListIterator_2_t38D0B415E5EF53C6DAB6487265554AF096CDE8B6* __this, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9* L_1 = (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m1344C578099C9BF9AD59C3907C02DDC4B7952132_gshared (WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tC496704D554895234B1360058C5CC2D901C24957* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m2354367D0E1B37E7E69B5E67F97AEEE56674E8C4((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tC496704D554895234B1360058C5CC2D901C24957* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* WhereSelectListIterator_2_Clone_mEA46A649565540C65C30A58988F2E737A098003F_gshared (WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_tC496704D554895234B1360058C5CC2D901C24957* L_2 = (Func_2_tC496704D554895234B1360058C5CC2D901C24957*)__this->___selector_5;
		WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC* L_3 = (WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m1344C578099C9BF9AD59C3907C02DDC4B7952132(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9867D239589CB6D32C0EBFBC06A142A979CF2242_gshared (WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tC496704D554895234B1360058C5CC2D901C24957* L_11 = (Func_2_tC496704D554895234B1360058C5CC2D901C24957*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_13;
		L_13 = Func_2_Invoke_m2AB6C1914FFEDDAF25F1EDC95B95C1614CFD344A_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m550AB19D1C92BD33273F8BE936FEC8FBFA975D11_gshared (WhereSelectListIterator_2_tF0640331D98594762A021513E6F45184227DA7FC* __this, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* L_1 = (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mB57E9223DB0E68D35CAE577A2C111D98EDAC5298(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Guid>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mB0B4AC763B6D29893062924D19BD2DBEC2E772A8_gshared (WhereSelectListIterator_2_t2EB837695B7D069AF34EA97F9E715D981199F4FC* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t77FA9C1683C0E1C9EAB1F170DF3C99ACB681C844* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mEE24CA444F268E52B9F173A684E9A50C294ABBCF((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t77FA9C1683C0E1C9EAB1F170DF3C99ACB681C844* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Guid>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE* WhereSelectListIterator_2_Clone_mFC7E480FDC744D6D3F3BE152C118624577825548_gshared (WhereSelectListIterator_2_t2EB837695B7D069AF34EA97F9E715D981199F4FC* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t77FA9C1683C0E1C9EAB1F170DF3C99ACB681C844* L_2 = (Func_2_t77FA9C1683C0E1C9EAB1F170DF3C99ACB681C844*)__this->___selector_5;
		WhereSelectListIterator_2_t2EB837695B7D069AF34EA97F9E715D981199F4FC* L_3 = (WhereSelectListIterator_2_t2EB837695B7D069AF34EA97F9E715D981199F4FC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mB0B4AC763B6D29893062924D19BD2DBEC2E772A8(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Guid>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mA9D0FC941C29D4A1C5F1BC5DF1E5CB5E96972D7E_gshared (WhereSelectListIterator_2_t2EB837695B7D069AF34EA97F9E715D981199F4FC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t77FA9C1683C0E1C9EAB1F170DF3C99ACB681C844* L_11 = (Func_2_t77FA9C1683C0E1C9EAB1F170DF3C99ACB681C844*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		Guid_t L_13;
		L_13 = Func_2_Invoke_mE0B59E11BFA298BDA292C1E20CFABB6A9959C1A7_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Guid>::Dispose() */, (Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Guid>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m104B437D34B7407F1BD245BDD845E812DAD40B15_gshared (WhereSelectListIterator_2_t2EB837695B7D069AF34EA97F9E715D981199F4FC* __this, Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tD9B3677A96A5B0AD1FA4479CEA26880403A92E6D* L_1 = (WhereEnumerableIterator_1_tD9B3677A96A5B0AD1FA4479CEA26880403A92E6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m9DD9CD3347A8DF85572E37D93DE7575DA4CF1626(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_mD7DFE8C6AD3458E99FCBEA0751FF7C4043732CD4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_2 = (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*)__this->___selector_5;
		WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* L_3 = (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m2F302C62B7FF8D42DDE74A666313CDC858137AC4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_11 = (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m98B6BE2F15454CBA305692F230C66425836665F4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.KeyPath>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mBD9AC05F4EBCEBD1BAD6E5FC4FF28D19E67A0A0B_gshared (WhereSelectListIterator_2_t66FF86786D55B63BCC9786B47B321044E794E29B* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tEAC08894811D9FD5269204AA3060C2BEF8F1D642* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mA1C51ABC585C08998C0C98D4B0A478E18F7B008A((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tEAC08894811D9FD5269204AA3060C2BEF8F1D642* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.KeyPath>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4* WhereSelectListIterator_2_Clone_m5E625176CE6112C9249FED02C1E35A94490AD80B_gshared (WhereSelectListIterator_2_t66FF86786D55B63BCC9786B47B321044E794E29B* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_tEAC08894811D9FD5269204AA3060C2BEF8F1D642* L_2 = (Func_2_tEAC08894811D9FD5269204AA3060C2BEF8F1D642*)__this->___selector_5;
		WhereSelectListIterator_2_t66FF86786D55B63BCC9786B47B321044E794E29B* L_3 = (WhereSelectListIterator_2_t66FF86786D55B63BCC9786B47B321044E794E29B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mBD9AC05F4EBCEBD1BAD6E5FC4FF28D19E67A0A0B(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.KeyPath>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m30028330E3D4250D886F342AAAE62E6B428D0524_gshared (WhereSelectListIterator_2_t66FF86786D55B63BCC9786B47B321044E794E29B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tEAC08894811D9FD5269204AA3060C2BEF8F1D642* L_11 = (Func_2_tEAC08894811D9FD5269204AA3060C2BEF8F1D642*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D L_13;
		L_13 = Func_2_Invoke_m719985EE76CF0BD5FBD3E6E5FC15EB4740BE6032_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this)->___current_2))->___U3CPathU3Ek__BackingField_0), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Realms.KeyPath>::Dispose() */, (Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.KeyPath>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mEC93981C0EDBFD1A7814C39DC7135B97353DC021_gshared (WhereSelectListIterator_2_t66FF86786D55B63BCC9786B47B321044E794E29B* __this, Func_2_tED48016847BEDB00839D61E14F631458FB13A2BB* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tED48016847BEDB00839D61E14F631458FB13A2BB* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8E2BDFFB19EFDD6FDD1A997E25D30A9151B5E20C* L_1 = (WhereEnumerableIterator_1_t8E2BDFFB19EFDD6FDD1A997E25D30A9151B5E20C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m5629CFC57747C084082271317D4281BD090CDCE6(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6D285DDC28CFAF8BDCF8C2ED06F9982D33D0342A_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* L_3 = (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9DBE2E1EDA00E9EBE1A6E90D5DA81A39E1CEBF37_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_11 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE0E3E8BE8176B317F5FF0D03313F7D4DFE68681E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.SchemaObject>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m56558AF6592C6631219D1CB817B9BCA106F5693F_gshared (WhereSelectListIterator_2_t9DE7BD7D89A1833ED9C07353A12709356F6E1BB0* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t934BEB9FD7B82BD864DFC9AA662455FFF6130528* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mFB8E9331E1D58E2A2630EEF92F370603EC76BA91((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t934BEB9FD7B82BD864DFC9AA662455FFF6130528* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.SchemaObject>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D* WhereSelectListIterator_2_Clone_m47B9AA93846CD5913BAF7AAC1B48225F0F38769B_gshared (WhereSelectListIterator_2_t9DE7BD7D89A1833ED9C07353A12709356F6E1BB0* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t934BEB9FD7B82BD864DFC9AA662455FFF6130528* L_2 = (Func_2_t934BEB9FD7B82BD864DFC9AA662455FFF6130528*)__this->___selector_5;
		WhereSelectListIterator_2_t9DE7BD7D89A1833ED9C07353A12709356F6E1BB0* L_3 = (WhereSelectListIterator_2_t9DE7BD7D89A1833ED9C07353A12709356F6E1BB0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m56558AF6592C6631219D1CB817B9BCA106F5693F(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.SchemaObject>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m3BB50B42141E737292AAD5ACE2CABB7FB915EEED_gshared (WhereSelectListIterator_2_t9DE7BD7D89A1833ED9C07353A12709356F6E1BB0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t934BEB9FD7B82BD864DFC9AA662455FFF6130528* L_11 = (Func_2_t934BEB9FD7B82BD864DFC9AA662455FFF6130528*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD L_13;
		L_13 = Func_2_Invoke_mDCF44A26B0DA4448CFFAED90A68296DE50055E97_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Realms.Native.SchemaObject>::Dispose() */, (Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.SchemaObject>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2E8EE6D261F4742275E7727936193926AF10D431_gshared (WhereSelectListIterator_2_t9DE7BD7D89A1833ED9C07353A12709356F6E1BB0* __this, Func_2_t3933D1A9C2F1F83F8EE6F4C8686FB62AD7C724EE* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3933D1A9C2F1F83F8EE6F4C8686FB62AD7C724EE* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tD26E121E693726AF91796ECC3C2F2496D6B34430* L_1 = (WhereEnumerableIterator_1_tD26E121E693726AF91796ECC3C2F2496D6B34430*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mE8A6FCF46E486262885323C90F04B102705E4C79(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m76F902C34043369FDB8A537BDF0D659CCC5697A6_gshared (WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m7FEBAE985CDE5DD1CB255EB4A3D65F05AA8D2AEF((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* WhereSelectListIterator_2_Clone_m2CA3D99FA9ADD7D33A0E32E7ABFE857D61CF43CC_gshared (WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* L_2 = (Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D*)__this->___selector_5;
		WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D* L_3 = (WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m76F902C34043369FDB8A537BDF0D659CCC5697A6(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m736FB80CEB54C0ACCF7FFCE2824FB9B9AFAA43A7_gshared (WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* L_11 = (Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		float L_13;
		L_13 = Func_2_Invoke_m04BADA9FD9773CB362E37F37840B2AA611211094_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Single>::Dispose() */, (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE2ED70B04431A5B2283DADDC7DEB37DCF1978676_gshared (WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D* __this, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* L_1 = (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mCB49A03958EF827EF6CE47402259941EAB31D984(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.StringValue>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m64EA5EEA58DFEDD0A251CDF2119AC7D0AFC43EFA_gshared (WhereSelectListIterator_2_tBDA1A315234F78C7F2A1D794F578B1F0B2F5399C* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t08BC79E812019DA290F7DB747CDBAEE3FDB7F571* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m76554CB1FDBB89992FFB766F579ACC93103EE1CB((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t08BC79E812019DA290F7DB747CDBAEE3FDB7F571* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.StringValue>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5* WhereSelectListIterator_2_Clone_m5B85CD182A731BDDF22F19CD3D67A17D41F5C7DF_gshared (WhereSelectListIterator_2_tBDA1A315234F78C7F2A1D794F578B1F0B2F5399C* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t08BC79E812019DA290F7DB747CDBAEE3FDB7F571* L_2 = (Func_2_t08BC79E812019DA290F7DB747CDBAEE3FDB7F571*)__this->___selector_5;
		WhereSelectListIterator_2_tBDA1A315234F78C7F2A1D794F578B1F0B2F5399C* L_3 = (WhereSelectListIterator_2_tBDA1A315234F78C7F2A1D794F578B1F0B2F5399C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m64EA5EEA58DFEDD0A251CDF2119AC7D0AFC43EFA(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.StringValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mC95765D0CCD18F0F0F9FBFB1EDF2B9CB1C75DB98_gshared (WhereSelectListIterator_2_tBDA1A315234F78C7F2A1D794F578B1F0B2F5399C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t08BC79E812019DA290F7DB747CDBAEE3FDB7F571* L_11 = (Func_2_t08BC79E812019DA290F7DB747CDBAEE3FDB7F571*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 L_13;
		L_13 = Func_2_Invoke_m10039BD668463CDC7DECB6833ACCFC284CE7AD95_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Realms.Native.StringValue>::Dispose() */, (Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,Realms.Native.StringValue>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m3175AF5B673C56742BF837847BB4064276384F0D_gshared (WhereSelectListIterator_2_tBDA1A315234F78C7F2A1D794F578B1F0B2F5399C* __this, Func_2_t1A51224749A0012D832BF2E64575FDEF202FAE9E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t1A51224749A0012D832BF2E64575FDEF202FAE9E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t85FA13B5DA9275197656EBD8285E1371A80E65D0* L_1 = (WhereEnumerableIterator_1_t85FA13B5DA9275197656EBD8285E1371A80E65D0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mD43F06F3C0215811180E199186B9EA63E88384AA(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector2>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF81036FF4985B6E90BA6C1611373FA4231918626_gshared (WhereSelectListIterator_2_t87AD7612E82A4062BBF65D4AEF211245C8A02452* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tE58FFCA3E7D1699580A0C27FAFD702E828AC651E* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m78B15ADF003EB66E975D0F71571715AE0A2C63DD((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tE58FFCA3E7D1699580A0C27FAFD702E828AC651E* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector2>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC* WhereSelectListIterator_2_Clone_m0949490C9D827E29B3A6CC01DDD21A4C1FC6C506_gshared (WhereSelectListIterator_2_t87AD7612E82A4062BBF65D4AEF211245C8A02452* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_tE58FFCA3E7D1699580A0C27FAFD702E828AC651E* L_2 = (Func_2_tE58FFCA3E7D1699580A0C27FAFD702E828AC651E*)__this->___selector_5;
		WhereSelectListIterator_2_t87AD7612E82A4062BBF65D4AEF211245C8A02452* L_3 = (WhereSelectListIterator_2_t87AD7612E82A4062BBF65D4AEF211245C8A02452*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mF81036FF4985B6E90BA6C1611373FA4231918626(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector2>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m92D92E8CA39317AC8CD954D39380BE93DD66555B_gshared (WhereSelectListIterator_2_t87AD7612E82A4062BBF65D4AEF211245C8A02452* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tE58FFCA3E7D1699580A0C27FAFD702E828AC651E* L_11 = (Func_2_tE58FFCA3E7D1699580A0C27FAFD702E828AC651E*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Func_2_Invoke_m35E6E7CBB739C23EFC426907C293D4884C512111_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector2>::Dispose() */, (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector2>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m41AECB6C7F2D1925AD639DE964BF5C96C4171FB9_gshared (WhereSelectListIterator_2_t87AD7612E82A4062BBF65D4AEF211245C8A02452* __this, Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75* L_1 = (WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m9C077DCBB6483C517E8B74C1F61F52D38B51AE0A(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m10952410A7A2ACE220840ED727010AA138F4E0E1_gshared (WhereSelectListIterator_2_t6883B5D59E258B59317BFE9FB7405235985546FD* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t208A44437DC9E09577E7BBCC73E296265723730A* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t208A44437DC9E09577E7BBCC73E296265723730A* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* WhereSelectListIterator_2_Clone_m64E6D6D645541B0AB778F57311BD67F05DAC1671_gshared (WhereSelectListIterator_2_t6883B5D59E258B59317BFE9FB7405235985546FD* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t208A44437DC9E09577E7BBCC73E296265723730A* L_2 = (Func_2_t208A44437DC9E09577E7BBCC73E296265723730A*)__this->___selector_5;
		WhereSelectListIterator_2_t6883B5D59E258B59317BFE9FB7405235985546FD* L_3 = (WhereSelectListIterator_2_t6883B5D59E258B59317BFE9FB7405235985546FD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m10952410A7A2ACE220840ED727010AA138F4E0E1(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m78A7C2E85589FAEA2AFC9410337553603D5C90E1_gshared (WhereSelectListIterator_2_t6883B5D59E258B59317BFE9FB7405235985546FD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t208A44437DC9E09577E7BBCC73E296265723730A* L_11 = (Func_2_t208A44437DC9E09577E7BBCC73E296265723730A*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Func_2_Invoke_m67ECA62C962E732A74C8D2F3978405A9DC8EFDC0_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::Dispose() */, (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector3>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m62C08DC180156E775A62FE59AC727FEAA0B39EBA_gshared (WhereSelectListIterator_2_t6883B5D59E258B59317BFE9FB7405235985546FD* __this, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* L_1 = (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m404E469B7201D233DE7B676D6197E9FF20C72FF3_gshared (WhereSelectListIterator_2_t85FFC53584D855FF66ADBE91B3903B9A2A75118B* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t264165A1230ACB392CC4F13E8C39F1A315308B40* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t264165A1230ACB392CC4F13E8C39F1A315308B40* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector4>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E* WhereSelectListIterator_2_Clone_mD0D731444BFBE16EF0870018364C767EBDA27166_gshared (WhereSelectListIterator_2_t85FFC53584D855FF66ADBE91B3903B9A2A75118B* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t264165A1230ACB392CC4F13E8C39F1A315308B40* L_2 = (Func_2_t264165A1230ACB392CC4F13E8C39F1A315308B40*)__this->___selector_5;
		WhereSelectListIterator_2_t85FFC53584D855FF66ADBE91B3903B9A2A75118B* L_3 = (WhereSelectListIterator_2_t85FFC53584D855FF66ADBE91B3903B9A2A75118B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m404E469B7201D233DE7B676D6197E9FF20C72FF3(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector4>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mDDFC8CA3E430083D2F94B360321A5E3454DDB7CB_gshared (WhereSelectListIterator_2_t85FFC53584D855FF66ADBE91B3903B9A2A75118B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t264165A1230ACB392CC4F13E8C39F1A315308B40* L_11 = (Func_2_t264165A1230ACB392CC4F13E8C39F1A315308B40*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = Func_2_Invoke_mD9EB3360FB7CA0472FCB04C99F66D2AF01E8AE3E_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>::Dispose() */, (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.Vector4>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m26EB2F1AEDBB72656075A750BE1A27B11B0C0E1F_gshared (WhereSelectListIterator_2_t85FFC53584D855FF66ADBE91B3903B9A2A75118B* __this, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9* L_1 = (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___selector2, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___source0;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___predicate1;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___selector2;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectListIterator_2_Clone_m8EC8E684FFDC3BC579DF37C08993B7F80966639D_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* L_3 = (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		InvokerActionInvoker3< List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3, L_0, L_1, L_2);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB81EEF5DFFEBDDB1AC24116FAD1D13505525569_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	// sizeof(System.Collections.Generic.List`1/Enumerator<TSource>)
	const uint32_t SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
	// TSource
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_11 = L_5;
	// TResult
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
	// System.Collections.Generic.List`1/Enumerator<TSource>
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	memset(V_1, 0, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3), L_4, SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
		return (bool)1;
	}

IL_0061:
	{
		bool L_13;
		L_13 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3)))));
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1739BDD134D3AF5A55DBB06AEE130B0C58E47014_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_1, (RuntimeObject*)__this, L_0);
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m7D55853E91B631B9DBD34E650C3A403AF3C0ACED_gshared (WhereSelectListIterator_2_tE4D1677627952441B6403BD2F7FE67483F02BEA1* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t03CA755C248F875160167B828915D6082B1B04C9* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m2354367D0E1B37E7E69B5E67F97AEEE56674E8C4((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t03CA755C248F875160167B828915D6082B1B04C9* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7* WhereSelectListIterator_2_Clone_mC6D6F3E873CD2DC46687661397061B8B2552C4C8_gshared (WhereSelectListIterator_2_tE4D1677627952441B6403BD2F7FE67483F02BEA1* __this, const RuntimeMethod* method) 
{
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		Func_2_t03CA755C248F875160167B828915D6082B1B04C9* L_2 = (Func_2_t03CA755C248F875160167B828915D6082B1B04C9*)__this->___selector_5;
		WhereSelectListIterator_2_tE4D1677627952441B6403BD2F7FE67483F02BEA1* L_3 = (WhereSelectListIterator_2_tE4D1677627952441B6403BD2F7FE67483F02BEA1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m7D55853E91B631B9DBD34E650C3A403AF3C0ACED(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mFE23605A479A8B37767A90D9B848ABA41AAA3D61_gshared (WhereSelectListIterator_2_tE4D1677627952441B6403BD2F7FE67483F02BEA1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_3 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 L_4;
		L_4 = List_1_GetEnumerator_m7281084311C6EB1550B62A7D7A894FABE23338FB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_5 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_6;
		L_6 = Enumerator_get_Current_m35FB3C20CCDD6901255BABABA0B61EACDEBC464E_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_7 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_8 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m49B5F41E5C3E4E16B0C11E39283F5BC42FAE7469_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t03CA755C248F875160167B828915D6082B1B04C9* L_11 = (Func_2_t03CA755C248F875160167B828915D6082B1B04C9*)__this->___selector_5;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_13;
		L_13 = Func_2_Invoke_mBA647A8AB82AC23154AAC0C436A328FF1A91210B_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this)->___current_2))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_14 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mB28398A0DABAB4DCC6AF5E7BE2357BBE05528F87(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t4CA23CD873CBDBC32139D125DAF56978F2278AD7*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2449626E9BD604F647AF78F4AF0E5F18DA20799E_gshared (WhereSelectListIterator_2_tE4D1677627952441B6403BD2F7FE67483F02BEA1* __this, Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t852072CDFF0303D1154452D6964FAC8D36FAE7C4* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF* L_1 = (WhereEnumerableIterator_1_t3AB40B6F779E8159270BDADA5B2EA32C1A8381BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mB57E9223DB0E68D35CAE577A2C111D98EDAC5298(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Guid>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m7216AE6A2C9C468CE788399C5B2CA2D772041634_gshared (WhereSelectListIterator_2_t6B4BEBF6242540C8713B1E462A94A9371960EA51* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t4DC8BD25FD9294FE03EDBB25432A58F0258C2C1E* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mEE24CA444F268E52B9F173A684E9A50C294ABBCF((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t4DC8BD25FD9294FE03EDBB25432A58F0258C2C1E* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Guid>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE* WhereSelectListIterator_2_Clone_m0BE69B03B2404957D5B62A0278BD3C9C70E77748_gshared (WhereSelectListIterator_2_t6B4BEBF6242540C8713B1E462A94A9371960EA51* __this, const RuntimeMethod* method) 
{
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		Func_2_t4DC8BD25FD9294FE03EDBB25432A58F0258C2C1E* L_2 = (Func_2_t4DC8BD25FD9294FE03EDBB25432A58F0258C2C1E*)__this->___selector_5;
		WhereSelectListIterator_2_t6B4BEBF6242540C8713B1E462A94A9371960EA51* L_3 = (WhereSelectListIterator_2_t6B4BEBF6242540C8713B1E462A94A9371960EA51*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m7216AE6A2C9C468CE788399C5B2CA2D772041634(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Guid>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m8CA12B108341E03EB98B00E855B3556019E47016_gshared (WhereSelectListIterator_2_t6B4BEBF6242540C8713B1E462A94A9371960EA51* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_3 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 L_4;
		L_4 = List_1_GetEnumerator_m7281084311C6EB1550B62A7D7A894FABE23338FB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_5 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_6;
		L_6 = Enumerator_get_Current_m35FB3C20CCDD6901255BABABA0B61EACDEBC464E_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_7 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_8 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m49B5F41E5C3E4E16B0C11E39283F5BC42FAE7469_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4DC8BD25FD9294FE03EDBB25432A58F0258C2C1E* L_11 = (Func_2_t4DC8BD25FD9294FE03EDBB25432A58F0258C2C1E*)__this->___selector_5;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_12 = V_1;
		NullCheck(L_11);
		Guid_t L_13;
		L_13 = Func_2_Invoke_mB2AB51FD974F1F5AE8AC533763E391D84107391A_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_14 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mB28398A0DABAB4DCC6AF5E7BE2357BBE05528F87(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Guid>::Dispose() */, (Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Guid>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m12BF576160B9021C93AF698155E582A80FE6E69B_gshared (WhereSelectListIterator_2_t6B4BEBF6242540C8713B1E462A94A9371960EA51* __this, Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tD9B3677A96A5B0AD1FA4479CEA26880403A92E6D* L_1 = (WhereEnumerableIterator_1_tD9B3677A96A5B0AD1FA4479CEA26880403A92E6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m9DD9CD3347A8DF85572E37D93DE7575DA4CF1626(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m8806ADD2E7FE953E43E320191E5A3D36B900E4BF_gshared (WhereSelectListIterator_2_t8A943F5A7C427BB120AFD260C152D6248682BB5A* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t9A90534C443C9EEB3549323D9827F807D313F61C* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t9A90534C443C9EEB3549323D9827F807D313F61C* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m970C395706B632851646CED58ED9B791324D1CE9_gshared (WhereSelectListIterator_2_t8A943F5A7C427BB120AFD260C152D6248682BB5A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		Func_2_t9A90534C443C9EEB3549323D9827F807D313F61C* L_2 = (Func_2_t9A90534C443C9EEB3549323D9827F807D313F61C*)__this->___selector_5;
		WhereSelectListIterator_2_t8A943F5A7C427BB120AFD260C152D6248682BB5A* L_3 = (WhereSelectListIterator_2_t8A943F5A7C427BB120AFD260C152D6248682BB5A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m8806ADD2E7FE953E43E320191E5A3D36B900E4BF(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m1822443B6FDDB935E3B0CE7A258C1068B040FBFB_gshared (WhereSelectListIterator_2_t8A943F5A7C427BB120AFD260C152D6248682BB5A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_3 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 L_4;
		L_4 = List_1_GetEnumerator_m7281084311C6EB1550B62A7D7A894FABE23338FB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_5 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_6;
		L_6 = Enumerator_get_Current_m35FB3C20CCDD6901255BABABA0B61EACDEBC464E_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_7 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_8 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m49B5F41E5C3E4E16B0C11E39283F5BC42FAE7469_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9A90534C443C9EEB3549323D9827F807D313F61C* L_11 = (Func_2_t9A90534C443C9EEB3549323D9827F807D313F61C*)__this->___selector_5;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m9C10690FB51858997045A9DC8E24B0B5856FCEA6_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_14 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mB28398A0DABAB4DCC6AF5E7BE2357BBE05528F87(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m18A08E8018AC2E658D3CDE27E629E0E33DA58F1B_gshared (WhereSelectListIterator_2_t8A943F5A7C427BB120AFD260C152D6248682BB5A* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.KeyPath>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0305BC39BCDF62A5E804CE0DFDEAE275C6C4F039_gshared (WhereSelectListIterator_2_tAA33716851819066683D677996641C6D161A3684* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_tB9AF32C440CFF51539468D51BAC35222664515DC* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mA1C51ABC585C08998C0C98D4B0A478E18F7B008A((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tB9AF32C440CFF51539468D51BAC35222664515DC* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.KeyPath>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4* WhereSelectListIterator_2_Clone_m1B8C5CCF912C6623C283D594DC2418BAD0A77CE3_gshared (WhereSelectListIterator_2_tAA33716851819066683D677996641C6D161A3684* __this, const RuntimeMethod* method) 
{
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		Func_2_tB9AF32C440CFF51539468D51BAC35222664515DC* L_2 = (Func_2_tB9AF32C440CFF51539468D51BAC35222664515DC*)__this->___selector_5;
		WhereSelectListIterator_2_tAA33716851819066683D677996641C6D161A3684* L_3 = (WhereSelectListIterator_2_tAA33716851819066683D677996641C6D161A3684*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m0305BC39BCDF62A5E804CE0DFDEAE275C6C4F039(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.KeyPath>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m5319F5AB3426D6A7CA5975CE444E6885C8B1B41C_gshared (WhereSelectListIterator_2_tAA33716851819066683D677996641C6D161A3684* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_3 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 L_4;
		L_4 = List_1_GetEnumerator_m7281084311C6EB1550B62A7D7A894FABE23338FB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_5 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_6;
		L_6 = Enumerator_get_Current_m35FB3C20CCDD6901255BABABA0B61EACDEBC464E_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_7 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_8 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m49B5F41E5C3E4E16B0C11E39283F5BC42FAE7469_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB9AF32C440CFF51539468D51BAC35222664515DC* L_11 = (Func_2_tB9AF32C440CFF51539468D51BAC35222664515DC*)__this->___selector_5;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_12 = V_1;
		NullCheck(L_11);
		KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D L_13;
		L_13 = Func_2_Invoke_m92A3F74A84651D65C20B4CB0F33565ECC35821BF_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this)->___current_2))->___U3CPathU3Ek__BackingField_0), (void*)NULL);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_14 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mB28398A0DABAB4DCC6AF5E7BE2357BBE05528F87(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Realms.KeyPath>::Dispose() */, (Iterator_1_t3B34AB5BD063A19D6F7ADC08B3333F20A65798E4*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.KeyPath>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m4D893930EA363FCCC78E9A7BED6FFB46D101614F_gshared (WhereSelectListIterator_2_tAA33716851819066683D677996641C6D161A3684* __this, Func_2_tED48016847BEDB00839D61E14F631458FB13A2BB* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tED48016847BEDB00839D61E14F631458FB13A2BB* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8E2BDFFB19EFDD6FDD1A997E25D30A9151B5E20C* L_1 = (WhereEnumerableIterator_1_t8E2BDFFB19EFDD6FDD1A997E25D30A9151B5E20C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m5629CFC57747C084082271317D4281BD090CDCE6(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA479A6A55C39CB6B277DFD2AB4BB0D9209A7CC71_gshared (WhereSelectListIterator_2_tD8C2A18C14631F8C9AA22BD061EF98FD514E2C99* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t9AF765B749C8FB6EBB8EB10FF8DD1179384A67BA* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t9AF765B749C8FB6EBB8EB10FF8DD1179384A67BA* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m5A4C931C0CF32FFA20B03CC648FF05902316116C_gshared (WhereSelectListIterator_2_tD8C2A18C14631F8C9AA22BD061EF98FD514E2C99* __this, const RuntimeMethod* method) 
{
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		Func_2_t9AF765B749C8FB6EBB8EB10FF8DD1179384A67BA* L_2 = (Func_2_t9AF765B749C8FB6EBB8EB10FF8DD1179384A67BA*)__this->___selector_5;
		WhereSelectListIterator_2_tD8C2A18C14631F8C9AA22BD061EF98FD514E2C99* L_3 = (WhereSelectListIterator_2_tD8C2A18C14631F8C9AA22BD061EF98FD514E2C99*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mA479A6A55C39CB6B277DFD2AB4BB0D9209A7CC71(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m559962AEE0A5451F6FBE95502E0E9A3277C46D77_gshared (WhereSelectListIterator_2_tD8C2A18C14631F8C9AA22BD061EF98FD514E2C99* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_3 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 L_4;
		L_4 = List_1_GetEnumerator_m7281084311C6EB1550B62A7D7A894FABE23338FB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_5 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_6;
		L_6 = Enumerator_get_Current_m35FB3C20CCDD6901255BABABA0B61EACDEBC464E_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_7 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_8 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m49B5F41E5C3E4E16B0C11E39283F5BC42FAE7469_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9AF765B749C8FB6EBB8EB10FF8DD1179384A67BA* L_11 = (Func_2_t9AF765B749C8FB6EBB8EB10FF8DD1179384A67BA*)__this->___selector_5;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m76560041BAA036BD6E9EA38A67338F6015DCE3D2_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_14 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mB28398A0DABAB4DCC6AF5E7BE2357BBE05528F87(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m6EF45E70435821B92ED0925C70FCCF65EE95DF91_gshared (WhereSelectListIterator_2_tD8C2A18C14631F8C9AA22BD061EF98FD514E2C99* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.SchemaObject>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m13CF224D7B3DB8934776FF6DE091D8ED96AFA9CF_gshared (WhereSelectListIterator_2_t69568E754CC7EA89B0002864BDE412F643D7F784* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_tF3AA4AD2C7C1736A58F720FB888548D318056273* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mFB8E9331E1D58E2A2630EEF92F370603EC76BA91((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tF3AA4AD2C7C1736A58F720FB888548D318056273* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.SchemaObject>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D* WhereSelectListIterator_2_Clone_mBF374D8E56974BEDFF1E9E3E19D93415E77BB121_gshared (WhereSelectListIterator_2_t69568E754CC7EA89B0002864BDE412F643D7F784* __this, const RuntimeMethod* method) 
{
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		Func_2_tF3AA4AD2C7C1736A58F720FB888548D318056273* L_2 = (Func_2_tF3AA4AD2C7C1736A58F720FB888548D318056273*)__this->___selector_5;
		WhereSelectListIterator_2_t69568E754CC7EA89B0002864BDE412F643D7F784* L_3 = (WhereSelectListIterator_2_t69568E754CC7EA89B0002864BDE412F643D7F784*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m13CF224D7B3DB8934776FF6DE091D8ED96AFA9CF(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.SchemaObject>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m7A7380071472872815A40EF213B862F6942A76EA_gshared (WhereSelectListIterator_2_t69568E754CC7EA89B0002864BDE412F643D7F784* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_3 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 L_4;
		L_4 = List_1_GetEnumerator_m7281084311C6EB1550B62A7D7A894FABE23338FB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_5 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_6;
		L_6 = Enumerator_get_Current_m35FB3C20CCDD6901255BABABA0B61EACDEBC464E_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_7 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_8 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m49B5F41E5C3E4E16B0C11E39283F5BC42FAE7469_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF3AA4AD2C7C1736A58F720FB888548D318056273* L_11 = (Func_2_tF3AA4AD2C7C1736A58F720FB888548D318056273*)__this->___selector_5;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_12 = V_1;
		NullCheck(L_11);
		SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD L_13;
		L_13 = Func_2_Invoke_m75AB993BEE2A3FF78C5E974606BDE575CB4F8A69_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_14 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mB28398A0DABAB4DCC6AF5E7BE2357BBE05528F87(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Realms.Native.SchemaObject>::Dispose() */, (Iterator_1_tA91D939CDA12D9424E0296FAE8ED6F026851F68D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.SchemaObject>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m4FDCF4027A80D64B7EAD30AC4C7E662048FEC28B_gshared (WhereSelectListIterator_2_t69568E754CC7EA89B0002864BDE412F643D7F784* __this, Func_2_t3933D1A9C2F1F83F8EE6F4C8686FB62AD7C724EE* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3933D1A9C2F1F83F8EE6F4C8686FB62AD7C724EE* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tD26E121E693726AF91796ECC3C2F2496D6B34430* L_1 = (WhereEnumerableIterator_1_tD26E121E693726AF91796ECC3C2F2496D6B34430*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mE8A6FCF46E486262885323C90F04B102705E4C79(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Single>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m650E72B3A60152C59A1819579D462B9E7C28A7B5_gshared (WhereSelectListIterator_2_tE59F3D6BE467EABCC4645DDB4BD08F3F91307F92* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t2A82C711EDC64CDF3AD004D83EDAB4783CB1BC6E* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m7FEBAE985CDE5DD1CB255EB4A3D65F05AA8D2AEF((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t2A82C711EDC64CDF3AD004D83EDAB4783CB1BC6E* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Single>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* WhereSelectListIterator_2_Clone_m37485AB13D40E1FC4A511E8ACC2C39DB9D18F139_gshared (WhereSelectListIterator_2_tE59F3D6BE467EABCC4645DDB4BD08F3F91307F92* __this, const RuntimeMethod* method) 
{
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		Func_2_t2A82C711EDC64CDF3AD004D83EDAB4783CB1BC6E* L_2 = (Func_2_t2A82C711EDC64CDF3AD004D83EDAB4783CB1BC6E*)__this->___selector_5;
		WhereSelectListIterator_2_tE59F3D6BE467EABCC4645DDB4BD08F3F91307F92* L_3 = (WhereSelectListIterator_2_tE59F3D6BE467EABCC4645DDB4BD08F3F91307F92*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m650E72B3A60152C59A1819579D462B9E7C28A7B5(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Single>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m5FFED20E5D364DF57C97DC5889296A7211000264_gshared (WhereSelectListIterator_2_tE59F3D6BE467EABCC4645DDB4BD08F3F91307F92* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_3 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 L_4;
		L_4 = List_1_GetEnumerator_m7281084311C6EB1550B62A7D7A894FABE23338FB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_5 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_6;
		L_6 = Enumerator_get_Current_m35FB3C20CCDD6901255BABABA0B61EACDEBC464E_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_7 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_8 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m49B5F41E5C3E4E16B0C11E39283F5BC42FAE7469_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t2A82C711EDC64CDF3AD004D83EDAB4783CB1BC6E* L_11 = (Func_2_t2A82C711EDC64CDF3AD004D83EDAB4783CB1BC6E*)__this->___selector_5;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_12 = V_1;
		NullCheck(L_11);
		float L_13;
		L_13 = Func_2_Invoke_m44CA957A6D583DE1A81BAE587D3918CFB885A26E_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_14 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mB28398A0DABAB4DCC6AF5E7BE2357BBE05528F87(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Single>::Dispose() */, (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,System.Single>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m93F81A3060205B1DDC203869EB6FB954D78F5DC2_gshared (WhereSelectListIterator_2_tE59F3D6BE467EABCC4645DDB4BD08F3F91307F92* __this, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* L_1 = (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mCB49A03958EF827EF6CE47402259941EAB31D984(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.StringValue>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m3105C967013B44856D1D5649DFB1D22EC0428DBA_gshared (WhereSelectListIterator_2_tA7401EB770D559AF2DA9E3FD7B1FD53E6C6F667F* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_tFAEF0CCB9C791E80A31E045E378B4961D4BD6813* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m76554CB1FDBB89992FFB766F579ACC93103EE1CB((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tFAEF0CCB9C791E80A31E045E378B4961D4BD6813* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.StringValue>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5* WhereSelectListIterator_2_Clone_m625F12BEAD959C140CFDDDAA38A1144759109E38_gshared (WhereSelectListIterator_2_tA7401EB770D559AF2DA9E3FD7B1FD53E6C6F667F* __this, const RuntimeMethod* method) 
{
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		Func_2_tFAEF0CCB9C791E80A31E045E378B4961D4BD6813* L_2 = (Func_2_tFAEF0CCB9C791E80A31E045E378B4961D4BD6813*)__this->___selector_5;
		WhereSelectListIterator_2_tA7401EB770D559AF2DA9E3FD7B1FD53E6C6F667F* L_3 = (WhereSelectListIterator_2_tA7401EB770D559AF2DA9E3FD7B1FD53E6C6F667F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m3105C967013B44856D1D5649DFB1D22EC0428DBA(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.StringValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF8C32C9A4954E3EDC1A770670ABF136AEF36906D_gshared (WhereSelectListIterator_2_tA7401EB770D559AF2DA9E3FD7B1FD53E6C6F667F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_3 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 L_4;
		L_4 = List_1_GetEnumerator_m7281084311C6EB1550B62A7D7A894FABE23338FB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_5 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_6;
		L_6 = Enumerator_get_Current_m35FB3C20CCDD6901255BABABA0B61EACDEBC464E_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_7 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_8 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m49B5F41E5C3E4E16B0C11E39283F5BC42FAE7469_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFAEF0CCB9C791E80A31E045E378B4961D4BD6813* L_11 = (Func_2_tFAEF0CCB9C791E80A31E045E378B4961D4BD6813*)__this->___selector_5;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_12 = V_1;
		NullCheck(L_11);
		StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 L_13;
		L_13 = Func_2_Invoke_m9E0FFF972E3615CA4E8A3994C57C0F5614C2DDBB_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_14 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mB28398A0DABAB4DCC6AF5E7BE2357BBE05528F87(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Realms.Native.StringValue>::Dispose() */, (Iterator_1_tDD146750A1653D81E8E6321C07F12F3757F572F5*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,Realms.Native.StringValue>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mC2D47591FB5C2B36E32A1842B855FEB13ED21460_gshared (WhereSelectListIterator_2_tA7401EB770D559AF2DA9E3FD7B1FD53E6C6F667F* __this, Func_2_t1A51224749A0012D832BF2E64575FDEF202FAE9E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t1A51224749A0012D832BF2E64575FDEF202FAE9E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t85FA13B5DA9275197656EBD8285E1371A80E65D0* L_1 = (WhereEnumerableIterator_1_t85FA13B5DA9275197656EBD8285E1371A80E65D0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mD43F06F3C0215811180E199186B9EA63E88384AA(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector2>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mCB9E24EBFACBBC12B2A4BB6DD1CEA8D90FD3215F_gshared (WhereSelectListIterator_2_tB1263FF3FD17A16713E9EE78908F9C184A4B08D6* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t2606923E4ECA17448CE383E2E0A4D7B4634B4990* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m78B15ADF003EB66E975D0F71571715AE0A2C63DD((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t2606923E4ECA17448CE383E2E0A4D7B4634B4990* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector2>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC* WhereSelectListIterator_2_Clone_m442F3E1EAC643C56B38BC12DFD885EDF2C397369_gshared (WhereSelectListIterator_2_tB1263FF3FD17A16713E9EE78908F9C184A4B08D6* __this, const RuntimeMethod* method) 
{
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		Func_2_t2606923E4ECA17448CE383E2E0A4D7B4634B4990* L_2 = (Func_2_t2606923E4ECA17448CE383E2E0A4D7B4634B4990*)__this->___selector_5;
		WhereSelectListIterator_2_tB1263FF3FD17A16713E9EE78908F9C184A4B08D6* L_3 = (WhereSelectListIterator_2_tB1263FF3FD17A16713E9EE78908F9C184A4B08D6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mCB9E24EBFACBBC12B2A4BB6DD1CEA8D90FD3215F(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector2>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m261C6CDCDE825FD65DB818B774FC566BC7BDFE68_gshared (WhereSelectListIterator_2_tB1263FF3FD17A16713E9EE78908F9C184A4B08D6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_3 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 L_4;
		L_4 = List_1_GetEnumerator_m7281084311C6EB1550B62A7D7A894FABE23338FB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_5 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_6;
		L_6 = Enumerator_get_Current_m35FB3C20CCDD6901255BABABA0B61EACDEBC464E_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_7 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_8 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m49B5F41E5C3E4E16B0C11E39283F5BC42FAE7469_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t2606923E4ECA17448CE383E2E0A4D7B4634B4990* L_11 = (Func_2_t2606923E4ECA17448CE383E2E0A4D7B4634B4990*)__this->___selector_5;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_12 = V_1;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Func_2_Invoke_mC6587D1A4E1A77D2576FD84C716EA27D00420736_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_14 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mB28398A0DABAB4DCC6AF5E7BE2357BBE05528F87(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector2>::Dispose() */, (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector2>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mB61261BE7C073DCD7CD58B13042B54A646BEF3AF_gshared (WhereSelectListIterator_2_tB1263FF3FD17A16713E9EE78908F9C184A4B08D6* __this, Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75* L_1 = (WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m9C077DCBB6483C517E8B74C1F61F52D38B51AE0A(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m90FF4F78CF14D96849580EB8FE2D2F37A223E3A7_gshared (WhereSelectListIterator_2_t5E88820A1FB7395337EDFF872CE4D9A4A0A50A9D* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t71250C7A2B7B3BC12FF416A1DEF67E1C1537EC02* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t71250C7A2B7B3BC12FF416A1DEF67E1C1537EC02* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* WhereSelectListIterator_2_Clone_m710C6979CD4BA56817162B5F28B44F6C7E05552B_gshared (WhereSelectListIterator_2_t5E88820A1FB7395337EDFF872CE4D9A4A0A50A9D* __this, const RuntimeMethod* method) 
{
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		Func_2_t71250C7A2B7B3BC12FF416A1DEF67E1C1537EC02* L_2 = (Func_2_t71250C7A2B7B3BC12FF416A1DEF67E1C1537EC02*)__this->___selector_5;
		WhereSelectListIterator_2_t5E88820A1FB7395337EDFF872CE4D9A4A0A50A9D* L_3 = (WhereSelectListIterator_2_t5E88820A1FB7395337EDFF872CE4D9A4A0A50A9D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_m90FF4F78CF14D96849580EB8FE2D2F37A223E3A7(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mB1D9C9F69EED8EC5BAEF3501AD606F8006852443_gshared (WhereSelectListIterator_2_t5E88820A1FB7395337EDFF872CE4D9A4A0A50A9D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_3 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 L_4;
		L_4 = List_1_GetEnumerator_m7281084311C6EB1550B62A7D7A894FABE23338FB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_5 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_6;
		L_6 = Enumerator_get_Current_m35FB3C20CCDD6901255BABABA0B61EACDEBC464E_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_7 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_8 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m49B5F41E5C3E4E16B0C11E39283F5BC42FAE7469_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t71250C7A2B7B3BC12FF416A1DEF67E1C1537EC02* L_11 = (Func_2_t71250C7A2B7B3BC12FF416A1DEF67E1C1537EC02*)__this->___selector_5;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_12 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Func_2_Invoke_mAEBB369469EA5BAA520BE7C332E794DF88951498_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_14 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mB28398A0DABAB4DCC6AF5E7BE2357BBE05528F87(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::Dispose() */, (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector3>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mD41BC277CCFCE497937D92A63CA146EC3578BA58_gshared (WhereSelectListIterator_2_t5E88820A1FB7395337EDFF872CE4D9A4A0A50A9D* __this, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* L_1 = (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF4CB0693122D2DF85AB48FB6B8B1D9D35A38056F_gshared (WhereSelectListIterator_2_t79F5931FF7D6E8AB258918D05FC4D76052A4F543* __this, List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* ___source0, Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* ___predicate1, Func_2_t4A91E5D3092011C21723653D37A7736AC536B84D* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t4A91E5D3092011C21723653D37A7736AC536B84D* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector4>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E* WhereSelectListIterator_2_Clone_m51B69CB1453CE9C2C64149EFE3BAB55C34C20BE5_gshared (WhereSelectListIterator_2_t79F5931FF7D6E8AB258918D05FC4D76052A4F543* __this, const RuntimeMethod* method) 
{
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_0 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_1 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		Func_2_t4A91E5D3092011C21723653D37A7736AC536B84D* L_2 = (Func_2_t4A91E5D3092011C21723653D37A7736AC536B84D*)__this->___selector_5;
		WhereSelectListIterator_2_t79F5931FF7D6E8AB258918D05FC4D76052A4F543* L_3 = (WhereSelectListIterator_2_t79F5931FF7D6E8AB258918D05FC4D76052A4F543*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mF4CB0693122D2DF85AB48FB6B8B1D9D35A38056F(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector4>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mC69066F15B7513219532C17AD10EBC8167245BB7_gshared (WhereSelectListIterator_2_t79F5931FF7D6E8AB258918D05FC4D76052A4F543* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674* L_3 = (List_1_tB06A8C93424B387BAE370B5C70D4FD78ACCB8674*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8 L_4;
		L_4 = List_1_GetEnumerator_m7281084311C6EB1550B62A7D7A894FABE23338FB(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_5 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_6;
		L_6 = Enumerator_get_Current_m35FB3C20CCDD6901255BABABA0B61EACDEBC464E_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_7 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* L_8 = (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121*)__this->___predicate_4;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m49B5F41E5C3E4E16B0C11E39283F5BC42FAE7469_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4A91E5D3092011C21723653D37A7736AC536B84D* L_11 = (Func_2_t4A91E5D3092011C21723653D37A7736AC536B84D*)__this->___selector_5;
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_12 = V_1;
		NullCheck(L_11);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = Func_2_Invoke_mD5AAFFC0D507F8F2695620F45278BA2A389D1C7D_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* L_14 = (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mB28398A0DABAB4DCC6AF5E7BE2357BBE05528F87(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>::Dispose() */, (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.Native.SyncError/CompensatingWriteInfo,UnityEngine.Vector4>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m8AD196B5E6292F23C0E2BC401775D579EE2D5583_gshared (WhereSelectListIterator_2_t79F5931FF7D6E8AB258918D05FC4D76052A4F543* __this, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9* L_1 = (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move,Realms.ChangeSet/Move>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA74DC4639729EEFF8D735B3FCA895A9F811A5FC0_gshared (WhereSelectListIterator_2_tA99199351429EB86E604DAB78DCF92DB2D162F97* __this, List_1_t0B0E988A8317058A530514934AA74A8A47C91D39* ___source0, Func_2_t769154D792964F65B1090A0A4CA1C50554085781* ___predicate1, Func_2_t68217885A5968320AD5647CE9C496996E1AB11F5* ___selector2, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_mFC6C9C36F56D66524A8EBD29F43748E790A5B7B5((Iterator_1_t84457A80C88597309971CA963B0AD904879B2F8E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t0B0E988A8317058A530514934AA74A8A47C91D39* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t769154D792964F65B1090A0A4CA1C50554085781* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t68217885A5968320AD5647CE9C496996E1AB11F5* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move,Realms.ChangeSet/Move>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t84457A80C88597309971CA963B0AD904879B2F8E* WhereSelectListIterator_2_Clone_m582E3921A014F674A1FE2BD913DF373AEBE50643_gshared (WhereSelectListIterator_2_tA99199351429EB86E604DAB78DCF92DB2D162F97* __this, const RuntimeMethod* method) 
{
	{
		List_1_t0B0E988A8317058A530514934AA74A8A47C91D39* L_0 = (List_1_t0B0E988A8317058A530514934AA74A8A47C91D39*)__this->___source_3;
		Func_2_t769154D792964F65B1090A0A4CA1C50554085781* L_1 = (Func_2_t769154D792964F65B1090A0A4CA1C50554085781*)__this->___predicate_4;
		Func_2_t68217885A5968320AD5647CE9C496996E1AB11F5* L_2 = (Func_2_t68217885A5968320AD5647CE9C496996E1AB11F5*)__this->___selector_5;
		WhereSelectListIterator_2_tA99199351429EB86E604DAB78DCF92DB2D162F97* L_3 = (WhereSelectListIterator_2_tA99199351429EB86E604DAB78DCF92DB2D162F97*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		WhereSelectListIterator_2__ctor_mA74DC4639729EEFF8D735B3FCA895A9F811A5FC0(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t84457A80C88597309971CA963B0AD904879B2F8E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move,Realms.ChangeSet/Move>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m144CBB0DE81657EDB02B9AFAA7F73D6FE40D47D9_gshared (WhereSelectListIterator_2_tA99199351429EB86E604DAB78DCF92DB2D162F97* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t84457A80C88597309971CA963B0AD904879B2F8E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t0B0E988A8317058A530514934AA74A8A47C91D39* L_3 = (List_1_t0B0E988A8317058A530514934AA74A8A47C91D39*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tB700BC9E6E7C8BD2D72F2F343D938D58B581323F L_4;
		L_4 = List_1_GetEnumerator_m3AA45736E51260DD26F76D01E40F249AB9A6AE9D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t84457A80C88597309971CA963B0AD904879B2F8E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB700BC9E6E7C8BD2D72F2F343D938D58B581323F* L_5 = (Enumerator_tB700BC9E6E7C8BD2D72F2F343D938D58B581323F*)(&__this->___enumerator_6);
		Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237 L_6;
		L_6 = Enumerator_get_Current_m73FE47CCD13D01D30812FAE10C8EAC3D2A7EE712_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t769154D792964F65B1090A0A4CA1C50554085781* L_7 = (Func_2_t769154D792964F65B1090A0A4CA1C50554085781*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t769154D792964F65B1090A0A4CA1C50554085781* L_8 = (Func_2_t769154D792964F65B1090A0A4CA1C50554085781*)__this->___predicate_4;
		Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mB7261F04FE304CB158F5ABFCF0727E446B3E3409_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t68217885A5968320AD5647CE9C496996E1AB11F5* L_11 = (Func_2_t68217885A5968320AD5647CE9C496996E1AB11F5*)__this->___selector_5;
		Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237 L_12 = V_1;
		NullCheck(L_11);
		Move_t436C9476C63D3027D29955ECD688020E34CED66B L_13;
		L_13 = Func_2_Invoke_m65BE5B22EAA02D302B123E9D776EA2B33B03331D_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t84457A80C88597309971CA963B0AD904879B2F8E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB700BC9E6E7C8BD2D72F2F343D938D58B581323F* L_14 = (Enumerator_tB700BC9E6E7C8BD2D72F2F343D938D58B581323F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mC5A59A2ED367ECC7F81E4394C2CB6343FE9A5C12(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t84457A80C88597309971CA963B0AD904879B2F8E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Realms.ChangeSet/Move>::Dispose() */, (Iterator_1_t84457A80C88597309971CA963B0AD904879B2F8E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Realms.NotifiableObjectHandleBase/CollectionChangeSet/Move,Realms.ChangeSet/Move>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mFEB99D01E92A953293CC213DF463FB8278A02D5E_gshared (WhereSelectListIterator_2_tA99199351429EB86E604DAB78DCF92DB2D162F97* __this, Func_2_tF766663C676BB43E908160385DE1AE7E191CBACF* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tF766663C676BB43E908160385DE1AE7E191CBACF* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t0F32988A00805A31D5F95BF4C5A5214EA3D7104B* L_1 = (WhereEnumerableIterator_1_t0F32988A00805A31D5F95BF4C5A5214EA3D7104B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		WhereEnumerableIterator_1__ctor_m185710362319E2F305D2EA2187B6E10559B8946C(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* currentDelegate = reinterpret_cast<WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Rect,System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m630834333CB7AE51AB01F7713157EE57991D03D7_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Rect,System.Object,System.Single>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___val0, float ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* currentDelegate = reinterpret_cast<WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.RectInt,System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m2AA9BE88F67A2DA68720D6B5F2AFFA89E23BB597_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.RectInt,System.Object,System.Int32>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* currentDelegate = reinterpret_cast<WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2,System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m4F33ED7C62B9E61B33CC81A7B5C739D0396BC209_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2,System.Object,System.Single>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___val0, float ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* currentDelegate = reinterpret_cast<WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2Int,System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m1067E857FEE330354C23F3DB8C7B30143BCA679D_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector2Int,System.Object,System.Int32>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* currentDelegate = reinterpret_cast<WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3,System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mC9073752A9F993A89037EB0FCF8968BCB14AE3A3_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3,System.Object,System.Single>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___val0, float ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* currentDelegate = reinterpret_cast<WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3Int,System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mAA1CB4066F7346F24DA38ED5A1240309F0C4BC60_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector3Int,System.Object,System.Int32>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___val0, int32_t ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* currentDelegate = reinterpret_cast<WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___val0, float ___fieldValue1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, ___fieldValue1, method);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector4,System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m6165AFE856EC0CC9CDE8A145B404312481261696_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<UnityEngine.Vector4,System.Object,System.Single>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___val0, float ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* currentDelegate = reinterpret_cast<WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, NULL, ___val0, ___fieldValue1);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___val0, ___fieldValue1);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, __this->___m_target_2, ___val0, ___fieldValue1);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method)
{
	NullCheck(___val0);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, ___val0, ___fieldValue1);
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mCE6F306923A685DD2E41E1BAABB666E0F7B4E137_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker;
		else
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast;
}
// System.Void UnityEngine.UIElements.BaseCompositeField`3/FieldDescription/WriteDelegate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(TValueType&,TFieldValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___val0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___fieldValue1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, ___fieldValue1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MongoDB.Bson.Serialization.IdGenerators.ZeroIdChecker`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZeroIdChecker_1__ctor_mD8D040537AFD62510997118FC28947F5EE78A91D_gshared (ZeroIdChecker_1_tD2A67090D2D36FD790F888B9BF20E8B24FC47CED* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// System.Object MongoDB.Bson.Serialization.IdGenerators.ZeroIdChecker`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::GenerateId(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZeroIdChecker_1_GenerateId_m55DC8ABACEBD56130B254E6178F3172575F1A13B_gshared (ZeroIdChecker_1_tD2A67090D2D36FD790F888B9BF20E8B24FC47CED* __this, RuntimeObject* ___container0, RuntimeObject* ___document1, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AB095FDE12BD8BBD1684087A048758A32189875)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZeroIdChecker_1_GenerateId_m55DC8ABACEBD56130B254E6178F3172575F1A13B_RuntimeMethod_var)));
	}
}
// System.Boolean MongoDB.Bson.Serialization.IdGenerators.ZeroIdChecker`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::IsEmpty(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZeroIdChecker_1_IsEmpty_m7D1F289FAF6E6BFA97ACE65649A1DC6D5DDB9D5B_gshared (ZeroIdChecker_1_tD2A67090D2D36FD790F888B9BF20E8B24FC47CED* __this, RuntimeObject* ___id0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tE4FF33776B4861BCB1E7F99E631F6336E3451C47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
	void* L_3 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
	// T
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_tE4FF33776B4861BCB1E7F99E631F6336E3451C47);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_tE4FF33776B4861BCB1E7F99E631F6336E3451C47);
	memset(V_0, 0, SizeOf_T_tE4FF33776B4861BCB1E7F99E631F6336E3451C47);
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_tE4FF33776B4861BCB1E7F99E631F6336E3451C47);
	memset(V_1, 0, SizeOf_T_tE4FF33776B4861BCB1E7F99E631F6336E3451C47);
	{
		RuntimeObject* L_0 = ___id0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = ___id0;
		il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0))))), SizeOf_T_tE4FF33776B4861BCB1E7F99E631F6336E3451C47);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_1, SizeOf_T_tE4FF33776B4861BCB1E7F99E631F6336E3451C47);
		il2cpp_codegen_memcpy(L_2, V_1, SizeOf_T_tE4FF33776B4861BCB1E7F99E631F6336E3451C47);
		bool L_4;
		L_4 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 0), il2cpp_rgctx_method(method->klass->rgctx_data, 2), L_3, (void*)(Il2CppFullySharedGenericStruct*)V_0, L_2);
		return L_4;
	}

IL_0021:
	{
		return (bool)1;
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m66614734A851F69863F28F36CAE8C109DFE633A0_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mD7FB6CCCB39160CC4D1837430E55165CA2686FE6_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, RuntimeObject* ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___serialized1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___instance0;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___serialized1;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m9DC7A75C5043D26A8B0F27C1EBF6414DB1F38947_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, RuntimeObject** ___instance1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___data0;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___instance1;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___data0;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___instance1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_16 = V_1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Bounds>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m469B29DA8E93A109CE1A84DEF411C216C2E91B3C_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m3B1D5B68B9A2AB907D286BB041E68825E23D338B_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m228B3D61FB850893564D237F0F16E30BBD9B6B04_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, RuntimeObject* ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___serialized1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___instance0;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)((Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___serialized1;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mDDCD92619631E9ED6DE40EDE7B2E4E0A586513DA_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, RuntimeObject** ___instance1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___data0;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___instance1;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)((Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___data0;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___instance1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_16 = V_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Keyframe>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m67B64763A70B6CFF7BC8E207844892AFCCFA9B72_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m9F76A8BA82C3043DFB71DA4C07A250F84CDB0184_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m641FFE348BDF3531BF6BDBDD22704DE53ED14F4A_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, RuntimeObject* ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___serialized1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___instance0;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)((LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___serialized1;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mFFB6258A349189C4019C5E3C202AAFC7230C1BF9_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, RuntimeObject** ___instance1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___data0;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___instance1;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)((LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___data0;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___instance1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_16 = V_1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.LayerMask>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m8386B8479295E3AC361DE4EBBFC2C3CCB11BB908_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m434ECAC51B09FD530A6DD456388A8B3B39F71DE1_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m012F8AADBFF962499339189E5EABB41B2F51D491_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, RuntimeObject* ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___serialized1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___instance0;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, RuntimeObject*, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___serialized1;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m9DA1D304ED129B105B65D30686CE2CE0BFACBBD0_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, RuntimeObject** ___instance1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___data0;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___instance1;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___data0;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, RuntimeObject** >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___instance1;
		RuntimeObject* L_16 = V_1;
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_17 = V_0;
		return L_17;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mC4D982EAE127626844AA2FF8D98F3CEA570A1A10_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_mC32E7553583DD793467D6FB5CE24747854A070E4_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m8B301BF0E4624082448AC261F66E55A9069C9F2B_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, RuntimeObject* ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___serialized1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___instance0;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)((Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___serialized1;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mB57F1FED13B2F213B3A9C45337315BC8E5E3F6A6_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, RuntimeObject** ___instance1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___data0;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___instance1;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)((Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___data0;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___instance1;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_16 = V_1;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m644F4C264CCF8F165037066D5AC2034B6D176110_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m58E406781ACEFCFD3F1526A502D26109CE14F8DF_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mBF17673DDC9A3AF571B07DA5640AA0BFE06B3FB4_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, RuntimeObject* ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___serialized1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___instance0;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)((Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___serialized1;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m6DC3716E17198067B467187A41C5F378F9C2753F_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, RuntimeObject** ___instance1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___data0;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___instance1;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)((Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___data0;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___instance1;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_16 = V_1;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Ray2D>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mBFCA0DE0165FE7459AEBC89AC73731BBCF7F64E6_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m3FD4D633636A5AF98D07BE76673F55CC9262FB13_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mA6F80C2C119177F6A02BE2DCE8B17803F98E0A2A_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, RuntimeObject* ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___serialized1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___instance0;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))))), L_2);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___serialized1;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		// return result;
		return L_3;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m055ADA15BC7796EDA3848DBC9F9B51BB2562A886_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, RuntimeObject** ___instance1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___data0;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___instance1;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		V_1 = ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))));
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___data0;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_12, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		// instance = obj;
		RuntimeObject** L_15 = ___instance1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), &L_17);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_18);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<UnityEngine.Rect>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m74EBB5195DD5F746EE58C2B7FE7E20A93E44DFE8_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m7BFCBE6128959F6AAA08BB9FB82C5E3DA07FB3AD_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mAB417033757D14765392C802374EE82941F7E430_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, RuntimeObject* ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___serialized1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// TModel
	// sizeof(TModel)
	const uint32_t SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___instance0;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_4 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5;
		L_5 = VirtualFuncInvoker2Invoker< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Il2CppFullySharedGenericAny, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 1)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)))), L_4);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_6 = ___serialized1;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_7 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_8 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_8, L_7, NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_8);
		// return result;
		return L_5;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m68AEEE5C3FB70E702E364D7B0C537966E0B079CF_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, RuntimeObject** ___instance1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(TModel)
	const uint32_t SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
	// TModel
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	memset(V_1, 0, SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___data0;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___instance1;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		void* L_11 = UnBox_Any(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_10);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_11))), SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_12 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_13 = ___data0;
		NullCheck(L_13);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_14;
		L_14 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_13, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = VirtualFuncInvoker2Invoker< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Il2CppFullySharedGenericAny* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_14, (Il2CppFullySharedGenericAny*)V_1);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_16;
		L_16 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_12, L_15, NULL);
		V_0 = L_16;
		// instance = obj;
		RuntimeObject** L_17 = ___instance1;
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_18);
		*((RuntimeObject**)L_17) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)L_19);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_20 = V_0;
		return L_20;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mA219A5FF100DBCB35147606E9E4E9C565D2F8D50_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_HasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasValue => _hasValue;
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsEmpty => _hasValue == false;
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767(_thisAdjusted, method);
	return _returnValue;
}
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
	{
		// if (IsEmpty)
		bool L_0;
		L_0 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), __this);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("fsOption is empty");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _value;
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)), SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A(_thisAdjusted, il2cppRetVal, method);
	return;
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
	{
		// _hasValue = true;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), (bool)1);
		// _value = value;
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___value0 : &___value0), SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1), L_0, SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_AdjustorThunk (RuntimeObject* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_HasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasValue => _hasValue;
		bool L_0 = (bool)__this->____hasValue_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsEmpty => _hasValue == false;
		bool L_0 = (bool)__this->____hasValue_0;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E(_thisAdjusted, method);
	return _returnValue;
}
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		// if (IsEmpty)
		bool L_0;
		L_0 = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("fsOption is empty");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _value;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_2 = (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8)__this->____value_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 _returnValue;
	_returnValue = fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___value0, const RuntimeMethod* method) 
{
	{
		// _hasValue = true;
		__this->____hasValue_0 = (bool)1;
		// _value = value;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_0 = ___value0;
		__this->____value_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_1))->___Ancestors_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_1))->___VersionString_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_1))->___ModelType_2), (void*)NULL);
		#endif
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_AdjustorThunk (RuntimeObject* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___value0, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD Func_2_Invoke_m567486E77E5A98A34DC60AEA578E6B67FFF44CD9_gshared_inline (Func_2_tCF83ECAB8AFDA1BF6DCCB8648945D6F86001BC5F* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_mBE16A5FDA5E80CCBA51D69334EF21C0F03D353AF_gshared_inline (Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 Func_2_Invoke_m00140FA5334202FFFC3866B79CDE48942C4A1A94_gshared_inline (Func_2_t7FEAF9B40BC91889C3F7FA1D3C0AB0E276613D6C* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_mB81D84A05453E4320D091506FC75F34E2C0E0ADC_gshared_inline (Func_2_t127163694D7C66D0F32B7F8F5BB2507F7516DEE4* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_m72462558F94253B761AE3224284CF6A0ED6E5521_gshared_inline (Func_2_t1F9887E0A0ADE496D09CAA16DBA7B19D5579727E* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_m404CC86DD4A7C42E047A2B9F0D8EF8A79A563ABB_gshared_inline (Func_2_t01EEA5FE255AF6B9B90E3CFAE8B5571BC66E8302* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B Enumerator_get_Current_mAF9948BAE896A229451C88312BC11312AFC644A8_gshared_inline (Enumerator_t3C2B24BB5E432C423A3CC3FBB761A91C9508BF2C* __this, const RuntimeMethod* method) 
{
	{
		PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B L_0 = (PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m75EC2083856EBA636983B0D1930AC65BBD70B8BD_gshared_inline (Func_2_t42B65E022950BDDBA2DCC351BDA899235788ACF2* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Func_2_Invoke_mFB1328B15495AE319F4A1122468EAD253C18212A_gshared_inline (Func_2_tFB60D22A7188A225EC88D4C2A2A516E8A5EC1B45* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) 
{
	typedef ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*FunctionPointerType) (RuntimeObject*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t Func_2_Invoke_mBF51B7910D885B818A6C92BC3679438D81C6B907_gshared_inline (Func_2_t6F5D52A89A1B936762EE51CD9D9AAD0EF815BD23* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) 
{
	typedef Guid_t (*FunctionPointerType) (RuntimeObject*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mA1BA5A89DB1F7A5384BF03FE2CC141432588E005_gshared_inline (Func_2_tF01BB0E21083B293CF60FDE06ED0026AC094CFB7* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D Func_2_Invoke_m084776653B82944F57AF389DE04F75A283DFF7FA_gshared_inline (Func_2_tB313531AE7343695ABF10C08F75B55E4699B40DD* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) 
{
	typedef KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D (*FunctionPointerType) (RuntimeObject*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m743660DEBFCC2A4F52E0A52B28811BADC0F059B3_gshared_inline (Func_2_t429E82ABFFFC2AC1CE010D74CC7A9C629055F887* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD Func_2_Invoke_mD913EF3C33D8C9D342733C13B6340CD79E3AB4CD_gshared_inline (Func_2_t210E61F99D7472E51282943CC7639FF687A3719F* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) 
{
	typedef SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD (*FunctionPointerType) (RuntimeObject*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_mD94FBE777ED7F338999AE0E4A9C5C2262E395D35_gshared_inline (Func_2_t90CE56F960E045743F1A9D67A849897248A821D9* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 Func_2_Invoke_m2887033A7BCC2749BBFE1E1F2B8C5E23270EFC45_gshared_inline (Func_2_t478B3D12821F41ABD43978161E257B9F8BADC68B* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) 
{
	typedef StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 (*FunctionPointerType) (RuntimeObject*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_mEFD7F55BC0F81F921E9081338D0BCD886CBFFB19_gshared_inline (Func_2_tC71476211D01CF6367A4721A03CB208B876EA9FD* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) 
{
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (RuntimeObject*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_mC04A0F679DFBDE21F1CFED2AC219429427E7EFB8_gshared_inline (Func_2_t4086956E9AE7A5665BF03B7A439D29BF0941DD15* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) 
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_m7A5AE9163F762E1F71607A8D572886E09B6B3EB9_gshared_inline (Func_2_tC0F42D8244464038AD9681F241E7C31A37D8242D* __this, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B ___arg0, const RuntimeMethod* method) 
{
	typedef Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*FunctionPointerType) (RuntimeObject*, PrimitiveValue_t0B0F1BDA24EE2A5C70CE1D6C87EF2C8EE9FAC30B, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Property_tA1E653E5DCE45303997F51563A7060FE291075DC Enumerator_get_Current_m9882246BFEAA177BC7A18BCF40BF0D3861EA45D3_gshared_inline (Enumerator_tE5E097DD377F7A20B91B37C5F87AC6F2744FBABF* __this, const RuntimeMethod* method) 
{
	{
		Property_tA1E653E5DCE45303997F51563A7060FE291075DC L_0 = (Property_tA1E653E5DCE45303997F51563A7060FE291075DC)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mEB16369495B60475CAA6E581D0FE8CEF13F08307_gshared_inline (Func_2_t8320CC5425B1E3A495CBEF098747F21EDE530BBC* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Func_2_Invoke_mDFDF48F96731ACEE5EA85D83715C5552F48DF078_gshared_inline (Func_2_t0A1D011E49157B9D56FE997E6A482A5DB8807547* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) 
{
	typedef ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*FunctionPointerType) (RuntimeObject*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t Func_2_Invoke_mDC94F8547482F318BA6B3F893E257B340B38A5E4_gshared_inline (Func_2_t3807B8C9754B3D6705404B2CD1E16545D814C5F9* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) 
{
	typedef Guid_t (*FunctionPointerType) (RuntimeObject*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m0B34FBC021B80ECDA3B1675D0291380EED5621A9_gshared_inline (Func_2_tF8593969B24CFE8ED3A96E2492171238088CB745* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D Func_2_Invoke_m010578C284F697036E6B0EDACE4A06381C05FB5E_gshared_inline (Func_2_t0A9E31724C776DB67DCD4F7112EE85A7A2B0CD33* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) 
{
	typedef KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D (*FunctionPointerType) (RuntimeObject*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mFED01E7E7AA8123B66FEE52F45744B648C27FBB9_gshared_inline (Func_2_t4FD74B88B95B6110B1D6592FD11281D6C97B1E46* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD Func_2_Invoke_m29BB9D391A55630C2C2686E63B631DD3546630A9_gshared_inline (Func_2_tAD733CA4558224115B2DA3BF79BFD352C06CDCE7* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) 
{
	typedef SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD (*FunctionPointerType) (RuntimeObject*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SchemaProperty_t04A08E4E115B0691FEB67BE6FA34B7DEF6DB0C94 Func_2_Invoke_mE803506220213BCB5A50A7B1DDD91A7E6A150272_gshared_inline (Func_2_tC47F6B9AEF0CD37A0AAF7B841E0964898D7E76EC* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) 
{
	typedef SchemaProperty_t04A08E4E115B0691FEB67BE6FA34B7DEF6DB0C94 (*FunctionPointerType) (RuntimeObject*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m33614C25025BFAF59E35DEDEDB8826EC1DDAB672_gshared_inline (Func_2_t5CF6D64DB8F942BFBDDE1DA250A41595B7CD124B* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 Func_2_Invoke_m6BCA9458DDD4A30BB4DA7D2378BB0AA3B493D519_gshared_inline (Func_2_t4501FBC7B7B6DE5384D627D7E0E5A8C6584958D8* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) 
{
	typedef StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 (*FunctionPointerType) (RuntimeObject*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_m79771364E88276B2A40650A6FF9C349E67F88BBF_gshared_inline (Func_2_tB381C8D4E63305292B8BAE77DFB59AAAEC93E7EB* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) 
{
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (RuntimeObject*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_m40F363755A479B8135266E9DC57FA556B4747ECB_gshared_inline (Func_2_t15754930DFF16C02EF8AC22B6EED29449A2EF8FA* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) 
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_m2BCAAE2F6933485630DBA5B29B771FA1E3C3B6D8_gshared_inline (Func_2_tDC0BD947591C831552E42B078DDF4F4376D0B51C* __this, Property_tA1E653E5DCE45303997F51563A7060FE291075DC ___arg0, const RuntimeMethod* method) 
{
	typedef Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*FunctionPointerType) (RuntimeObject*, Property_tA1E653E5DCE45303997F51563A7060FE291075DC, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) 
{
	{
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_0 = (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Func_2_Invoke_m2AB6C1914FFEDDAF25F1EDC95B95C1614CFD344A_gshared_inline (Func_2_tC496704D554895234B1360058C5CC2D901C24957* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t Func_2_Invoke_mE0B59E11BFA298BDA292C1E20CFABB6A9959C1A7_gshared_inline (Func_2_t77FA9C1683C0E1C9EAB1F170DF3C99ACB681C844* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef Guid_t (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D Func_2_Invoke_m719985EE76CF0BD5FBD3E6E5FC15EB4740BE6032_gshared_inline (Func_2_tEAC08894811D9FD5269204AA3060C2BEF8F1D642* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD Func_2_Invoke_mDCF44A26B0DA4448CFFAED90A68296DE50055E97_gshared_inline (Func_2_t934BEB9FD7B82BD864DFC9AA662455FFF6130528* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m04BADA9FD9773CB362E37F37840B2AA611211094_gshared_inline (Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 Func_2_Invoke_m10039BD668463CDC7DECB6833ACCFC284CE7AD95_gshared_inline (Func_2_t08BC79E812019DA290F7DB747CDBAEE3FDB7F571* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_m35E6E7CBB739C23EFC426907C293D4884C512111_gshared_inline (Func_2_tE58FFCA3E7D1699580A0C27FAFD702E828AC651E* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_m67ECA62C962E732A74C8D2F3978405A9DC8EFDC0_gshared_inline (Func_2_t208A44437DC9E09577E7BBCC73E296265723730A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_mD9EB3360FB7CA0472FCB04C99F66D2AF01E8AE3E_gshared_inline (Func_2_t264165A1230ACB392CC4F13E8C39F1A315308B40* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___arg0, const RuntimeMethod* method) 
{
	typedef Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A Enumerator_get_Current_m35FB3C20CCDD6901255BABABA0B61EACDEBC464E_gshared_inline (Enumerator_tDF5591B3B8AA51E3505CE0FF7E5E6E0A729C29F8* __this, const RuntimeMethod* method) 
{
	{
		CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A L_0 = (CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m49B5F41E5C3E4E16B0C11E39283F5BC42FAE7469_gshared_inline (Func_2_t0A3547C662A4C1949A50CA3238F9C564EBDC9121* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Func_2_Invoke_mBA647A8AB82AC23154AAC0C436A328FF1A91210B_gshared_inline (Func_2_t03CA755C248F875160167B828915D6082B1B04C9* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) 
{
	typedef ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*FunctionPointerType) (RuntimeObject*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t Func_2_Invoke_mB2AB51FD974F1F5AE8AC533763E391D84107391A_gshared_inline (Func_2_t4DC8BD25FD9294FE03EDBB25432A58F0258C2C1E* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) 
{
	typedef Guid_t (*FunctionPointerType) (RuntimeObject*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m9C10690FB51858997045A9DC8E24B0B5856FCEA6_gshared_inline (Func_2_t9A90534C443C9EEB3549323D9827F807D313F61C* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D Func_2_Invoke_m92A3F74A84651D65C20B4CB0F33565ECC35821BF_gshared_inline (Func_2_tB9AF32C440CFF51539468D51BAC35222664515DC* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) 
{
	typedef KeyPath_t0CD529388890C302CF52292D9C1773E558060B3D (*FunctionPointerType) (RuntimeObject*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m76560041BAA036BD6E9EA38A67338F6015DCE3D2_gshared_inline (Func_2_t9AF765B749C8FB6EBB8EB10FF8DD1179384A67BA* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD Func_2_Invoke_m75AB993BEE2A3FF78C5E974606BDE575CB4F8A69_gshared_inline (Func_2_tF3AA4AD2C7C1736A58F720FB888548D318056273* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) 
{
	typedef SchemaObject_tC2772B8511FD8D951E5C08F22C9EDFF9C46D13BD (*FunctionPointerType) (RuntimeObject*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m44CA957A6D583DE1A81BAE587D3918CFB885A26E_gshared_inline (Func_2_t2A82C711EDC64CDF3AD004D83EDAB4783CB1BC6E* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 Func_2_Invoke_m9E0FFF972E3615CA4E8A3994C57C0F5614C2DDBB_gshared_inline (Func_2_tFAEF0CCB9C791E80A31E045E378B4961D4BD6813* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) 
{
	typedef StringValue_tA17D7236E5C9F0E6D7A77F144E825D848CA568B8 (*FunctionPointerType) (RuntimeObject*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_mC6587D1A4E1A77D2576FD84C716EA27D00420736_gshared_inline (Func_2_t2606923E4ECA17448CE383E2E0A4D7B4634B4990* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) 
{
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (RuntimeObject*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_mAEBB369469EA5BAA520BE7C332E794DF88951498_gshared_inline (Func_2_t71250C7A2B7B3BC12FF416A1DEF67E1C1537EC02* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) 
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_mD5AAFFC0D507F8F2695620F45278BA2A389D1C7D_gshared_inline (Func_2_t4A91E5D3092011C21723653D37A7736AC536B84D* __this, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A ___arg0, const RuntimeMethod* method) 
{
	typedef Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*FunctionPointerType) (RuntimeObject*, CompensatingWriteInfo_t4E238C372F7FCAD35DA7B310B1DD1336C2D4076A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237 Enumerator_get_Current_m73FE47CCD13D01D30812FAE10C8EAC3D2A7EE712_gshared_inline (Enumerator_tB700BC9E6E7C8BD2D72F2F343D938D58B581323F* __this, const RuntimeMethod* method) 
{
	{
		Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237 L_0 = (Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mB7261F04FE304CB158F5ABFCF0727E446B3E3409_gshared_inline (Func_2_t769154D792964F65B1090A0A4CA1C50554085781* __this, Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237 ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Move_t436C9476C63D3027D29955ECD688020E34CED66B Func_2_Invoke_m65BE5B22EAA02D302B123E9D776EA2B33B03331D_gshared_inline (Func_2_t68217885A5968320AD5647CE9C496996E1AB11F5* __this, Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237 ___arg0, const RuntimeMethod* method) 
{
	typedef Move_t436C9476C63D3027D29955ECD688020E34CED66B (*FunctionPointerType) (RuntimeObject*, Move_tBE68AE1A6E5558F366DA06F8DC9AC3214ABD7237, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasValue => _hasValue;
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasValue => _hasValue;
		bool L_0 = (bool)__this->____hasValue_0;
		return L_0;
	}
}
