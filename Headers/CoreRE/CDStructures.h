//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Address {
    struct DynamicString _field1;
};

struct Allocator;

struct AudioBuffer {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
};

struct AudioBufferList {
    unsigned int _field1;
    struct AudioBuffer _field2[1];
};

struct AudioComponentDescription {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct ComponentInstanceRecord {
    long long _field1[1];
};

struct Config {
    struct ServiceLocator *serviceLocator;
    NSObject *dispatchQueue;
    struct DynamicString serviceID;
};

struct DiscoveryInvite;

struct DiscoveryView;

struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription> {
    struct Allocator *m_allocator;
    unsigned long long m_capacity;
    unsigned long long m_size;
    unsigned int m_version;
    struct Subscription *m_data;
};

struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy> {
    struct Allocator *m_allocator;
    unsigned long long m_capacity;
    unsigned long long m_size;
    unsigned int m_version;
    struct SubscriptionLegacy *m_data;
};

struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::Subscription> {
    struct Allocator *m_allocator;
    unsigned long long m_capacity;
    unsigned long long m_size;
    unsigned int m_version;
    struct Subscription *m_data;
};

struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::SubscriptionLegacy> {
    struct Allocator *m_allocator;
    unsigned long long m_capacity;
    unsigned long long m_size;
    unsigned int m_version;
    struct SubscriptionLegacy *m_data;
};

struct DynamicArray<re::IDSDiscoveryView *> {
    struct Allocator *m_allocator;
    unsigned long long m_capacity;
    unsigned long long m_size;
    unsigned int m_version;
    struct IDSDiscoveryView **m_data;
};

struct DynamicArray<re::IDSInvite *> {
    struct Allocator *m_allocator;
    unsigned long long m_capacity;
    unsigned long long m_size;
    unsigned int m_version;
    struct IDSInvite **m_data;
};

struct DynamicArray<re::SharedPtr<MCProtocolHandle>> {
    struct Allocator *m_allocator;
    unsigned long long m_capacity;
    unsigned long long m_size;
    unsigned int m_version;
    struct SharedPtr<MCProtocolHandle> *m_data;
};

struct DynamicArray<unsigned char> {
    struct Allocator *m_allocator;
    unsigned long long m_capacity;
    unsigned long long m_size;
    unsigned int m_version;
    char *m_data;
};

struct DynamicString {
    struct Allocator *m_allocator;
    char *m_buffer;
    unsigned long long m_capacity;
    unsigned long long m_length;
};

struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>> {
    struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription> m_subscriptions;
    struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy> m_subscriptionsLegacy;
};

struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>> {
    struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::Subscription> m_subscriptions;
    struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::SubscriptionLegacy> m_subscriptionsLegacy;
};

struct IDSDiscoveryIdentity;

struct IDSDiscoveryView;

struct IDSInvite;

struct IDSSessionService {
    CDUnknownFunctionPointerType *_field1;
};

struct ServiceLocator;

struct SharedPtr<MCProtocolHandle>;

struct SharedPtr<re::DiscoveryInvite> {
    struct DiscoveryInvite *_field1;
};

struct SharedPtr<re::DiscoveryView> {
    struct DiscoveryView *_field1;
};

struct SharedPtr<re::IDSDiscoveryIdentity> {
    struct IDSDiscoveryIdentity *_field1;
};

struct SharedPtr<re::IDSDiscoveryView> {
    struct IDSDiscoveryView *_field1;
};

struct Slice<re::DynamicString> {
    struct DynamicString *_field1;
    unsigned long long _field2;
};

struct StreamWriter;

struct Subscription;

struct SubscriptionLegacy;

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct mutex {
    struct _opaque_pthread_mutex_t __m_;
};

struct queue<GainRampCommand>;

struct recursive_mutex {
    struct _opaque_pthread_mutex_t __m_;
};

struct shared_ptr<AudioStreamRecordingManager::StreamWriter> {
    struct StreamWriter *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<boost::lockfree::queue<GainRampCommand>, std::__1::default_delete<boost::lockfree::queue<GainRampCommand>>> {
    struct __compressed_pair<boost::lockfree::queue<GainRampCommand>*, std::__1::default_delete<boost::lockfree::queue<GainRampCommand>>> {
        struct queue<GainRampCommand> *__value_;
    } __ptr_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

// Template types
typedef struct DynamicArray<re::SharedPtr<MCProtocolHandle>> {
    struct Allocator *m_allocator;
    unsigned long long m_capacity;
    unsigned long long m_size;
    unsigned int m_version;
    struct SharedPtr<MCProtocolHandle> *m_data;
} DynamicArray_959538b5;

typedef struct DynamicArray<unsigned char> {
    struct Allocator *m_allocator;
    unsigned long long m_capacity;
    unsigned long long m_size;
    unsigned int m_version;
    char *m_data;
} DynamicArray_8f05e591;

typedef struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>> {
    struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription> m_subscriptions;
    struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy> m_subscriptionsLegacy;
} Event_8f7d30d6;

typedef struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>> {
    struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::Subscription> m_subscriptions;
    struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::SubscriptionLegacy> m_subscriptionsLegacy;
} Event_b92446be;

typedef struct SharedPtr<re::DiscoveryInvite> {
    struct DiscoveryInvite *_field1;
} SharedPtr_d68dfbcb;

typedef struct SharedPtr<re::DiscoveryView> {
    struct DiscoveryView *_field1;
} SharedPtr_c2d37bbb;

typedef struct SharedPtr<re::IDSDiscoveryIdentity> {
    struct IDSDiscoveryIdentity *_field1;
} SharedPtr_601ce9e9;

typedef struct SharedPtr<re::IDSDiscoveryView> {
    struct IDSDiscoveryView *_field1;
} SharedPtr_24b37889;

typedef struct Slice<re::DynamicString> {
    struct DynamicString *_field1;
    unsigned long long _field2;
} Slice_554aef03;

