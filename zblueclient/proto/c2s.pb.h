// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: c2s.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_c2s_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_c2s_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_c2s_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
	class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_c2s_2eproto {
	static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
		PROTOBUF_SECTION_VARIABLE(protodesc_cold);
	static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
		PROTOBUF_SECTION_VARIABLE(protodesc_cold);
	static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
		PROTOBUF_SECTION_VARIABLE(protodesc_cold);
	static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
	static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
	static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_c2s_2eproto;
namespace protocol {
	class C2SLoginReq;
	struct C2SLoginReqDefaultTypeInternal;
	extern C2SLoginReqDefaultTypeInternal _C2SLoginReq_default_instance_;
	class C2SLogoutReq;
	struct C2SLogoutReqDefaultTypeInternal;
	extern C2SLogoutReqDefaultTypeInternal _C2SLogoutReq_default_instance_;
	class S2CLoginResp;
	struct S2CLoginRespDefaultTypeInternal;
	extern S2CLoginRespDefaultTypeInternal _S2CLoginResp_default_instance_;
	class S2CLogoutResp;
	struct S2CLogoutRespDefaultTypeInternal;
	extern S2CLogoutRespDefaultTypeInternal _S2CLogoutResp_default_instance_;
}  // namespace protocol
PROTOBUF_NAMESPACE_OPEN
template<> ::protocol::C2SLoginReq* Arena::CreateMaybeMessage<::protocol::C2SLoginReq>(Arena*);
template<> ::protocol::C2SLogoutReq* Arena::CreateMaybeMessage<::protocol::C2SLogoutReq>(Arena*);
template<> ::protocol::S2CLoginResp* Arena::CreateMaybeMessage<::protocol::S2CLoginResp>(Arena*);
template<> ::protocol::S2CLogoutResp* Arena::CreateMaybeMessage<::protocol::S2CLogoutResp>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace protocol {

	enum ID : int {
		C2S_LOGIN_REQ = 1001,
		S2C_LOGIN_RESP = 1002,
		C2S_LOGOUT_REQ = 1003,
		S2C_LOGOUT_RESP = 1004
	};
	bool ID_IsValid(int value);
	constexpr ID ID_MIN = C2S_LOGIN_REQ;
	constexpr ID ID_MAX = S2C_LOGOUT_RESP;
	constexpr int ID_ARRAYSIZE = ID_MAX + 1;

	const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ID_descriptor();
	template<typename T>
	inline const std::string& ID_Name(T enum_t_value) {
		static_assert(::std::is_same<T, ID>::value ||
			::std::is_integral<T>::value,
			"Incorrect type passed to function ID_Name.");
		return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
			ID_descriptor(), enum_t_value);
	}
	inline bool ID_Parse(
		::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ID* value) {
		return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ID>(
			ID_descriptor(), name, value);
	}
	// ===================================================================

	class C2SLoginReq final :
		public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protocol.C2SLoginReq) */ {
	public:
		inline C2SLoginReq() : C2SLoginReq(nullptr) {}
		~C2SLoginReq() override;
		explicit constexpr C2SLoginReq(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

		C2SLoginReq(const C2SLoginReq& from);
		C2SLoginReq(C2SLoginReq&& from) noexcept
			: C2SLoginReq() {
			*this = ::std::move(from);
		}

		inline C2SLoginReq& operator=(const C2SLoginReq& from) {
			CopyFrom(from);
			return *this;
		}
		inline C2SLoginReq& operator=(C2SLoginReq&& from) noexcept {
			if (this == &from) return *this;
			if (GetOwningArena() == from.GetOwningArena()) {
				InternalSwap(&from);
			}
			else {
				CopyFrom(from);
			}
			return *this;
		}

		inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
			return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
		}
		inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
			return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
		}

		static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
			return GetDescriptor();
		}
		static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
			return default_instance().GetMetadata().descriptor;
		}
		static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
			return default_instance().GetMetadata().reflection;
		}
		static const C2SLoginReq& default_instance() {
			return *internal_default_instance();
		}
		static inline const C2SLoginReq* internal_default_instance() {
			return reinterpret_cast<const C2SLoginReq*>(
				&_C2SLoginReq_default_instance_);
		}
		static constexpr int kIndexInFileMessages =
			0;

		friend void swap(C2SLoginReq& a, C2SLoginReq& b) {
			a.Swap(&b);
		}
		inline void Swap(C2SLoginReq* other) {
			if (other == this) return;
			if (GetOwningArena() == other->GetOwningArena()) {
				InternalSwap(other);
			}
			else {
				::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
			}
		}
		void UnsafeArenaSwap(C2SLoginReq* other) {
			if (other == this) return;
			GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
			InternalSwap(other);
		}

		// implements Message ----------------------------------------------

		inline C2SLoginReq* New() const final {
			return new C2SLoginReq();
		}

		C2SLoginReq* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
			return CreateMaybeMessage<C2SLoginReq>(arena);
		}
		using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
		void CopyFrom(const C2SLoginReq& from);
		using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
		void MergeFrom(const C2SLoginReq& from);
	private:
		static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
	public:
		PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
		bool IsInitialized() const final;

		size_t ByteSizeLong() const final;
		const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
		::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
			::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
		int GetCachedSize() const final { return _cached_size_.Get(); }

	private:
		void SharedCtor();
		void SharedDtor();
		void SetCachedSize(int size) const final;
		void InternalSwap(C2SLoginReq* other);
		friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
		static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
			return "protocol.C2SLoginReq";
		}
	protected:
		explicit C2SLoginReq(::PROTOBUF_NAMESPACE_ID::Arena* arena,
			bool is_message_owned = false);
	private:
		static void ArenaDtor(void* object);
		inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
	public:

		static const ClassData _class_data_;
		const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

		::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

		// nested types ----------------------------------------------------

		// accessors -------------------------------------------------------

		enum : int {
			kFriendsFieldNumber = 3,
			kAccountFieldNumber = 1,
			kAgeFieldNumber = 2,
		};
		// repeated int32 friends = 3;
		int friends_size() const;
	private:
		int _internal_friends_size() const;
	public:
		void clear_friends();
	private:
		::PROTOBUF_NAMESPACE_ID::int32 _internal_friends(int index) const;
		const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
			_internal_friends() const;
		void _internal_add_friends(::PROTOBUF_NAMESPACE_ID::int32 value);
		::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
			_internal_mutable_friends();
	public:
		::PROTOBUF_NAMESPACE_ID::int32 friends(int index) const;
		void set_friends(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
		void add_friends(::PROTOBUF_NAMESPACE_ID::int32 value);
		const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
			friends() const;
		::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
			mutable_friends();

		// optional string account = 1;
		bool has_account() const;
	private:
		bool _internal_has_account() const;
	public:
		void clear_account();
		const std::string& account() const;
		template <typename ArgT0 = const std::string&, typename... ArgT>
		void set_account(ArgT0&& arg0, ArgT... args);
		std::string* mutable_account();
		PROTOBUF_MUST_USE_RESULT std::string* release_account();
		void set_allocated_account(std::string* account);
	private:
		const std::string& _internal_account() const;
		inline PROTOBUF_ALWAYS_INLINE void _internal_set_account(const std::string& value);
		std::string* _internal_mutable_account();
	public:

		// optional int32 age = 2;
		bool has_age() const;
	private:
		bool _internal_has_age() const;
	public:
		void clear_age();
		::PROTOBUF_NAMESPACE_ID::int32 age() const;
		void set_age(::PROTOBUF_NAMESPACE_ID::int32 value);
	private:
		::PROTOBUF_NAMESPACE_ID::int32 _internal_age() const;
		void _internal_set_age(::PROTOBUF_NAMESPACE_ID::int32 value);
	public:

		// @@protoc_insertion_point(class_scope:protocol.C2SLoginReq)
	private:
		class _Internal;

		template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
		typedef void InternalArenaConstructable_;
		typedef void DestructorSkippable_;
		::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
		mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
		::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > friends_;
		::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr account_;
		::PROTOBUF_NAMESPACE_ID::int32 age_;
		friend struct ::TableStruct_c2s_2eproto;
	};
	// -------------------------------------------------------------------

	class S2CLoginResp final :
		public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protocol.S2CLoginResp) */ {
	public:
		inline S2CLoginResp() : S2CLoginResp(nullptr) {}
		~S2CLoginResp() override;
		explicit constexpr S2CLoginResp(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

		S2CLoginResp(const S2CLoginResp& from);
		S2CLoginResp(S2CLoginResp&& from) noexcept
			: S2CLoginResp() {
			*this = ::std::move(from);
		}

		inline S2CLoginResp& operator=(const S2CLoginResp& from) {
			CopyFrom(from);
			return *this;
		}
		inline S2CLoginResp& operator=(S2CLoginResp&& from) noexcept {
			if (this == &from) return *this;
			if (GetOwningArena() == from.GetOwningArena()) {
				InternalSwap(&from);
			}
			else {
				CopyFrom(from);
			}
			return *this;
		}

		inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
			return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
		}
		inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
			return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
		}

		static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
			return GetDescriptor();
		}
		static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
			return default_instance().GetMetadata().descriptor;
		}
		static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
			return default_instance().GetMetadata().reflection;
		}
		static const S2CLoginResp& default_instance() {
			return *internal_default_instance();
		}
		static inline const S2CLoginResp* internal_default_instance() {
			return reinterpret_cast<const S2CLoginResp*>(
				&_S2CLoginResp_default_instance_);
		}
		static constexpr int kIndexInFileMessages =
			1;

		friend void swap(S2CLoginResp& a, S2CLoginResp& b) {
			a.Swap(&b);
		}
		inline void Swap(S2CLoginResp* other) {
			if (other == this) return;
			if (GetOwningArena() == other->GetOwningArena()) {
				InternalSwap(other);
			}
			else {
				::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
			}
		}
		void UnsafeArenaSwap(S2CLoginResp* other) {
			if (other == this) return;
			GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
			InternalSwap(other);
		}

		// implements Message ----------------------------------------------

		inline S2CLoginResp* New() const final {
			return new S2CLoginResp();
		}

		S2CLoginResp* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
			return CreateMaybeMessage<S2CLoginResp>(arena);
		}
		using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
		void CopyFrom(const S2CLoginResp& from);
		using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
		void MergeFrom(const S2CLoginResp& from);
	private:
		static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
	public:
		PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
		bool IsInitialized() const final;

		size_t ByteSizeLong() const final;
		const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
		::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
			::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
		int GetCachedSize() const final { return _cached_size_.Get(); }

	private:
		void SharedCtor();
		void SharedDtor();
		void SetCachedSize(int size) const final;
		void InternalSwap(S2CLoginResp* other);
		friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
		static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
			return "protocol.S2CLoginResp";
		}
	protected:
		explicit S2CLoginResp(::PROTOBUF_NAMESPACE_ID::Arena* arena,
			bool is_message_owned = false);
	private:
		static void ArenaDtor(void* object);
		inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
	public:

		static const ClassData _class_data_;
		const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

		::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

		// nested types ----------------------------------------------------

		// accessors -------------------------------------------------------

		enum : int {
			kRetFieldNumber = 1,
		};
		// optional int32 ret = 1;
		bool has_ret() const;
	private:
		bool _internal_has_ret() const;
	public:
		void clear_ret();
		::PROTOBUF_NAMESPACE_ID::int32 ret() const;
		void set_ret(::PROTOBUF_NAMESPACE_ID::int32 value);
	private:
		::PROTOBUF_NAMESPACE_ID::int32 _internal_ret() const;
		void _internal_set_ret(::PROTOBUF_NAMESPACE_ID::int32 value);
	public:

		// @@protoc_insertion_point(class_scope:protocol.S2CLoginResp)
	private:
		class _Internal;

		template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
		typedef void InternalArenaConstructable_;
		typedef void DestructorSkippable_;
		::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
		mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
		::PROTOBUF_NAMESPACE_ID::int32 ret_;
		friend struct ::TableStruct_c2s_2eproto;
	};
	// -------------------------------------------------------------------

	class C2SLogoutReq final :
		public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protocol.C2SLogoutReq) */ {
	public:
		inline C2SLogoutReq() : C2SLogoutReq(nullptr) {}
		~C2SLogoutReq() override;
		explicit constexpr C2SLogoutReq(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

		C2SLogoutReq(const C2SLogoutReq& from);
		C2SLogoutReq(C2SLogoutReq&& from) noexcept
			: C2SLogoutReq() {
			*this = ::std::move(from);
		}

		inline C2SLogoutReq& operator=(const C2SLogoutReq& from) {
			CopyFrom(from);
			return *this;
		}
		inline C2SLogoutReq& operator=(C2SLogoutReq&& from) noexcept {
			if (this == &from) return *this;
			if (GetOwningArena() == from.GetOwningArena()) {
				InternalSwap(&from);
			}
			else {
				CopyFrom(from);
			}
			return *this;
		}

		inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
			return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
		}
		inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
			return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
		}

		static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
			return GetDescriptor();
		}
		static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
			return default_instance().GetMetadata().descriptor;
		}
		static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
			return default_instance().GetMetadata().reflection;
		}
		static const C2SLogoutReq& default_instance() {
			return *internal_default_instance();
		}
		static inline const C2SLogoutReq* internal_default_instance() {
			return reinterpret_cast<const C2SLogoutReq*>(
				&_C2SLogoutReq_default_instance_);
		}
		static constexpr int kIndexInFileMessages =
			2;

		friend void swap(C2SLogoutReq& a, C2SLogoutReq& b) {
			a.Swap(&b);
		}
		inline void Swap(C2SLogoutReq* other) {
			if (other == this) return;
			if (GetOwningArena() == other->GetOwningArena()) {
				InternalSwap(other);
			}
			else {
				::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
			}
		}
		void UnsafeArenaSwap(C2SLogoutReq* other) {
			if (other == this) return;
			GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
			InternalSwap(other);
		}

		// implements Message ----------------------------------------------

		inline C2SLogoutReq* New() const final {
			return new C2SLogoutReq();
		}

		C2SLogoutReq* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
			return CreateMaybeMessage<C2SLogoutReq>(arena);
		}
		using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
		void CopyFrom(const C2SLogoutReq& from);
		using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
		void MergeFrom(const C2SLogoutReq& from);
	private:
		static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
	public:
		PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
		bool IsInitialized() const final;

		size_t ByteSizeLong() const final;
		const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
		::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
			::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
		int GetCachedSize() const final { return _cached_size_.Get(); }

	private:
		void SharedCtor();
		void SharedDtor();
		void SetCachedSize(int size) const final;
		void InternalSwap(C2SLogoutReq* other);
		friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
		static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
			return "protocol.C2SLogoutReq";
		}
	protected:
		explicit C2SLogoutReq(::PROTOBUF_NAMESPACE_ID::Arena* arena,
			bool is_message_owned = false);
	private:
		static void ArenaDtor(void* object);
		inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
	public:

		static const ClassData _class_data_;
		const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

		::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

		// nested types ----------------------------------------------------

		// accessors -------------------------------------------------------

		// @@protoc_insertion_point(class_scope:protocol.C2SLogoutReq)
	private:
		class _Internal;

		template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
		typedef void InternalArenaConstructable_;
		typedef void DestructorSkippable_;
		mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
		friend struct ::TableStruct_c2s_2eproto;
	};
	// -------------------------------------------------------------------

	class S2CLogoutResp final :
		public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protocol.S2CLogoutResp) */ {
	public:
		inline S2CLogoutResp() : S2CLogoutResp(nullptr) {}
		~S2CLogoutResp() override;
		explicit constexpr S2CLogoutResp(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

		S2CLogoutResp(const S2CLogoutResp& from);
		S2CLogoutResp(S2CLogoutResp&& from) noexcept
			: S2CLogoutResp() {
			*this = ::std::move(from);
		}

		inline S2CLogoutResp& operator=(const S2CLogoutResp& from) {
			CopyFrom(from);
			return *this;
		}
		inline S2CLogoutResp& operator=(S2CLogoutResp&& from) noexcept {
			if (this == &from) return *this;
			if (GetOwningArena() == from.GetOwningArena()) {
				InternalSwap(&from);
			}
			else {
				CopyFrom(from);
			}
			return *this;
		}

		inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
			return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
		}
		inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
			return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
		}

		static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
			return GetDescriptor();
		}
		static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
			return default_instance().GetMetadata().descriptor;
		}
		static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
			return default_instance().GetMetadata().reflection;
		}
		static const S2CLogoutResp& default_instance() {
			return *internal_default_instance();
		}
		static inline const S2CLogoutResp* internal_default_instance() {
			return reinterpret_cast<const S2CLogoutResp*>(
				&_S2CLogoutResp_default_instance_);
		}
		static constexpr int kIndexInFileMessages =
			3;

		friend void swap(S2CLogoutResp& a, S2CLogoutResp& b) {
			a.Swap(&b);
		}
		inline void Swap(S2CLogoutResp* other) {
			if (other == this) return;
			if (GetOwningArena() == other->GetOwningArena()) {
				InternalSwap(other);
			}
			else {
				::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
			}
		}
		void UnsafeArenaSwap(S2CLogoutResp* other) {
			if (other == this) return;
			GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
			InternalSwap(other);
		}

		// implements Message ----------------------------------------------

		inline S2CLogoutResp* New() const final {
			return new S2CLogoutResp();
		}

		S2CLogoutResp* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
			return CreateMaybeMessage<S2CLogoutResp>(arena);
		}
		using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
		void CopyFrom(const S2CLogoutResp& from);
		using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
		void MergeFrom(const S2CLogoutResp& from);
	private:
		static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
	public:
		PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
		bool IsInitialized() const final;

		size_t ByteSizeLong() const final;
		const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
		::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
			::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
		int GetCachedSize() const final { return _cached_size_.Get(); }

	private:
		void SharedCtor();
		void SharedDtor();
		void SetCachedSize(int size) const final;
		void InternalSwap(S2CLogoutResp* other);
		friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
		static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
			return "protocol.S2CLogoutResp";
		}
	protected:
		explicit S2CLogoutResp(::PROTOBUF_NAMESPACE_ID::Arena* arena,
			bool is_message_owned = false);
	private:
		static void ArenaDtor(void* object);
		inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
	public:

		static const ClassData _class_data_;
		const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

		::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

		// nested types ----------------------------------------------------

		// accessors -------------------------------------------------------

		enum : int {
			kRetFieldNumber = 1,
		};
		// optional int32 ret = 1;
		bool has_ret() const;
	private:
		bool _internal_has_ret() const;
	public:
		void clear_ret();
		::PROTOBUF_NAMESPACE_ID::int32 ret() const;
		void set_ret(::PROTOBUF_NAMESPACE_ID::int32 value);
	private:
		::PROTOBUF_NAMESPACE_ID::int32 _internal_ret() const;
		void _internal_set_ret(::PROTOBUF_NAMESPACE_ID::int32 value);
	public:

		// @@protoc_insertion_point(class_scope:protocol.S2CLogoutResp)
	private:
		class _Internal;

		template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
		typedef void InternalArenaConstructable_;
		typedef void DestructorSkippable_;
		::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
		mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
		::PROTOBUF_NAMESPACE_ID::int32 ret_;
		friend struct ::TableStruct_c2s_2eproto;
	};
	// ===================================================================


	// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// C2SLoginReq

// optional string account = 1;
	inline bool C2SLoginReq::_internal_has_account() const {
		bool value = (_has_bits_[0] & 0x00000001u) != 0;
		return value;
	}
	inline bool C2SLoginReq::has_account() const {
		return _internal_has_account();
	}
	inline void C2SLoginReq::clear_account() {
		account_.ClearToEmpty();
		_has_bits_[0] &= ~0x00000001u;
	}
	inline const std::string& C2SLoginReq::account() const {
		// @@protoc_insertion_point(field_get:protocol.C2SLoginReq.account)
		return _internal_account();
	}
	template <typename ArgT0, typename... ArgT>
	inline PROTOBUF_ALWAYS_INLINE
		void C2SLoginReq::set_account(ArgT0&& arg0, ArgT... args) {
		_has_bits_[0] |= 0x00000001u;
		account_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
		// @@protoc_insertion_point(field_set:protocol.C2SLoginReq.account)
	}
	inline std::string* C2SLoginReq::mutable_account() {
		std::string* _s = _internal_mutable_account();
		// @@protoc_insertion_point(field_mutable:protocol.C2SLoginReq.account)
		return _s;
	}
	inline const std::string& C2SLoginReq::_internal_account() const {
		return account_.Get();
	}
	inline void C2SLoginReq::_internal_set_account(const std::string& value) {
		_has_bits_[0] |= 0x00000001u;
		account_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
	}
	inline std::string* C2SLoginReq::_internal_mutable_account() {
		_has_bits_[0] |= 0x00000001u;
		return account_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
	}
	inline std::string* C2SLoginReq::release_account() {
		// @@protoc_insertion_point(field_release:protocol.C2SLoginReq.account)
		if (!_internal_has_account()) {
			return nullptr;
		}
		_has_bits_[0] &= ~0x00000001u;
		return account_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
	}
	inline void C2SLoginReq::set_allocated_account(std::string* account) {
		if (account != nullptr) {
			_has_bits_[0] |= 0x00000001u;
		}
		else {
			_has_bits_[0] &= ~0x00000001u;
		}
		account_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), account,
			GetArenaForAllocation());
		// @@protoc_insertion_point(field_set_allocated:protocol.C2SLoginReq.account)
	}

	// optional int32 age = 2;
	inline bool C2SLoginReq::_internal_has_age() const {
		bool value = (_has_bits_[0] & 0x00000002u) != 0;
		return value;
	}
	inline bool C2SLoginReq::has_age() const {
		return _internal_has_age();
	}
	inline void C2SLoginReq::clear_age() {
		age_ = 0;
		_has_bits_[0] &= ~0x00000002u;
	}
	inline ::PROTOBUF_NAMESPACE_ID::int32 C2SLoginReq::_internal_age() const {
		return age_;
	}
	inline ::PROTOBUF_NAMESPACE_ID::int32 C2SLoginReq::age() const {
		// @@protoc_insertion_point(field_get:protocol.C2SLoginReq.age)
		return _internal_age();
	}
	inline void C2SLoginReq::_internal_set_age(::PROTOBUF_NAMESPACE_ID::int32 value) {
		_has_bits_[0] |= 0x00000002u;
		age_ = value;
	}
	inline void C2SLoginReq::set_age(::PROTOBUF_NAMESPACE_ID::int32 value) {
		_internal_set_age(value);
		// @@protoc_insertion_point(field_set:protocol.C2SLoginReq.age)
	}

	// repeated int32 friends = 3;
	inline int C2SLoginReq::_internal_friends_size() const {
		return friends_.size();
	}
	inline int C2SLoginReq::friends_size() const {
		return _internal_friends_size();
	}
	inline void C2SLoginReq::clear_friends() {
		friends_.Clear();
	}
	inline ::PROTOBUF_NAMESPACE_ID::int32 C2SLoginReq::_internal_friends(int index) const {
		return friends_.Get(index);
	}
	inline ::PROTOBUF_NAMESPACE_ID::int32 C2SLoginReq::friends(int index) const {
		// @@protoc_insertion_point(field_get:protocol.C2SLoginReq.friends)
		return _internal_friends(index);
	}
	inline void C2SLoginReq::set_friends(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
		friends_.Set(index, value);
		// @@protoc_insertion_point(field_set:protocol.C2SLoginReq.friends)
	}
	inline void C2SLoginReq::_internal_add_friends(::PROTOBUF_NAMESPACE_ID::int32 value) {
		friends_.Add(value);
	}
	inline void C2SLoginReq::add_friends(::PROTOBUF_NAMESPACE_ID::int32 value) {
		_internal_add_friends(value);
		// @@protoc_insertion_point(field_add:protocol.C2SLoginReq.friends)
	}
	inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
		C2SLoginReq::_internal_friends() const {
		return friends_;
	}
	inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
		C2SLoginReq::friends() const {
		// @@protoc_insertion_point(field_list:protocol.C2SLoginReq.friends)
		return _internal_friends();
	}
	inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
		C2SLoginReq::_internal_mutable_friends() {
		return &friends_;
	}
	inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
		C2SLoginReq::mutable_friends() {
		// @@protoc_insertion_point(field_mutable_list:protocol.C2SLoginReq.friends)
		return _internal_mutable_friends();
	}

	// -------------------------------------------------------------------

	// S2CLoginResp

	// optional int32 ret = 1;
	inline bool S2CLoginResp::_internal_has_ret() const {
		bool value = (_has_bits_[0] & 0x00000001u) != 0;
		return value;
	}
	inline bool S2CLoginResp::has_ret() const {
		return _internal_has_ret();
	}
	inline void S2CLoginResp::clear_ret() {
		ret_ = 0;
		_has_bits_[0] &= ~0x00000001u;
	}
	inline ::PROTOBUF_NAMESPACE_ID::int32 S2CLoginResp::_internal_ret() const {
		return ret_;
	}
	inline ::PROTOBUF_NAMESPACE_ID::int32 S2CLoginResp::ret() const {
		// @@protoc_insertion_point(field_get:protocol.S2CLoginResp.ret)
		return _internal_ret();
	}
	inline void S2CLoginResp::_internal_set_ret(::PROTOBUF_NAMESPACE_ID::int32 value) {
		_has_bits_[0] |= 0x00000001u;
		ret_ = value;
	}
	inline void S2CLoginResp::set_ret(::PROTOBUF_NAMESPACE_ID::int32 value) {
		_internal_set_ret(value);
		// @@protoc_insertion_point(field_set:protocol.S2CLoginResp.ret)
	}

	// -------------------------------------------------------------------

	// C2SLogoutReq

	// -------------------------------------------------------------------

	// S2CLogoutResp

	// optional int32 ret = 1;
	inline bool S2CLogoutResp::_internal_has_ret() const {
		bool value = (_has_bits_[0] & 0x00000001u) != 0;
		return value;
	}
	inline bool S2CLogoutResp::has_ret() const {
		return _internal_has_ret();
	}
	inline void S2CLogoutResp::clear_ret() {
		ret_ = 0;
		_has_bits_[0] &= ~0x00000001u;
	}
	inline ::PROTOBUF_NAMESPACE_ID::int32 S2CLogoutResp::_internal_ret() const {
		return ret_;
	}
	inline ::PROTOBUF_NAMESPACE_ID::int32 S2CLogoutResp::ret() const {
		// @@protoc_insertion_point(field_get:protocol.S2CLogoutResp.ret)
		return _internal_ret();
	}
	inline void S2CLogoutResp::_internal_set_ret(::PROTOBUF_NAMESPACE_ID::int32 value) {
		_has_bits_[0] |= 0x00000001u;
		ret_ = value;
	}
	inline void S2CLogoutResp::set_ret(::PROTOBUF_NAMESPACE_ID::int32 value) {
		_internal_set_ret(value);
		// @@protoc_insertion_point(field_set:protocol.S2CLogoutResp.ret)
	}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__
	// -------------------------------------------------------------------

	// -------------------------------------------------------------------

	// -------------------------------------------------------------------


	// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::protocol::ID> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::protocol::ID>() {
	return ::protocol::ID_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_c2s_2eproto
