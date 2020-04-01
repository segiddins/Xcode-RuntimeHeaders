//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRE/IDSServiceDelegatePrivate-Protocol.h>

@class IDSService, NSString;

__attribute__((visibility("hidden")))
@interface IDSManagerImpl : NSObject <IDSServiceDelegatePrivate>
{
    Event_b92446be m_receivedInvite;
    Event_8f7d30d6 m_acceptedInvite;
    Event_8f7d30d6 m_rejectedInvite;
    struct DynamicArray<re::IDSInvite *> m_invites;
    struct DynamicArray<re::IDSDiscoveryView *> m_views;
    BOOL _isListeningForInvites;
    IDSService *_service;
    struct Config _config;
}

@property(nonatomic) BOOL isListeningForInvites; // @synthesize isListeningForInvites=_isListeningForInvites;
@property(retain, nonatomic) IDSService *service; // @synthesize service=_service;
@property(nonatomic) struct Config config; // @synthesize config=_config;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (BOOL)parseMessage:(id)arg1 payload:(id *)arg2 objectGUID:(id *)arg3 type:(id *)arg4;
- (void)sendMessage:(id)arg1 type:(id)arg2 objectGUID:(id)arg3 to:(id)arg4;
- (void)incomingInviteRequest:(id)arg1 payload:(id)arg2 from:(id)arg3;
- (struct IDSSessionService *)idsSessionService;
- (SharedPtr_d68dfbcb)createInviteWithDiscoveryView:(SharedPtr_c2d37bbb)arg1 destinations:(Slice_554aef03)arg2;
- (SharedPtr_d68dfbcb)createInviteWithDestinations:(Slice_554aef03)arg1;
-     // Error parsing type: v32@0:8^{IDSInvite=^^?{atomic<int>=Ai}{SharedPtr<re::internal::WeakCount>=^{WeakCount}}^{Allocator}{WeakPtr<re::IDSManager>={SharedPtr<re::internal::WeakCount>=^{WeakCount}}}{DynamicString=^{Allocator}*QQ}{SharedPtr<re::IDSDiscoveryIdentity>=^{IDSDiscoveryIdentity}}{SharedPtr<re::DiscoveryView>=^{DiscoveryView}}}16@24, name: sendInviteRequest:destinations:
-     // Error parsing type: @32@0:8^{DiscoveryView=^^?{atomic<int>=Ai}{SharedPtr<re::internal::WeakCount>=^{WeakCount}}^{Allocator}}16@24, name: discoveryViewToNSArray:to:
- (SharedPtr_24b37889)createDiscoveryViewWithDestinations:(id)arg1 destinations:(id)arg2;
- (SharedPtr_601ce9e9)createLocalIdentity;
-     // Error parsing type: v24@0:8^{IDSDiscoveryView=^^?{atomic<int>=Ai}{SharedPtr<re::internal::WeakCount>=^{WeakCount}}^{Allocator}{WeakPtr<re::IDSManager>={SharedPtr<re::internal::WeakCount>=^{WeakCount}}}{Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >={DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::Subscription>=^{Allocator}QQI^{Subscription}}{DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy>=^{Allocator}QQI^{SubscriptionLegacy}}}{Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >={DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::Subscription>=^{Allocator}QQI^{Subscription}}{DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy>=^{Allocator}QQI^{SubscriptionLegacy}}}{DynamicArray<re::SharedPtr<re::DiscoveryIdentity> >=^{Allocator}QQI^{SharedPtr<re::DiscoveryIdentity>}}{DynamicString=^{Allocator}*QQ}}16, name: willDestroyDiscoveryView:
-     // Error parsing type: v24@0:8^{IDSInvite=^^?{atomic<int>=Ai}{SharedPtr<re::internal::WeakCount>=^{WeakCount}}^{Allocator}{WeakPtr<re::IDSManager>={SharedPtr<re::internal::WeakCount>=^{WeakCount}}}{DynamicString=^{Allocator}*QQ}{SharedPtr<re::IDSDiscoveryIdentity>=^{IDSDiscoveryIdentity}}{SharedPtr<re::DiscoveryView>=^{DiscoveryView}}}16, name: willDestroyInvite:
-     // Error parsing type: ^{IDSDiscoveryView=^^?{atomic<int>=Ai}{SharedPtr<re::internal::WeakCount>=^{WeakCount}}^{Allocator}{WeakPtr<re::IDSManager>={SharedPtr<re::internal::WeakCount>=^{WeakCount}}}{Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >={DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::Subscription>=^{Allocator}QQI^{Subscription}}{DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy>=^{Allocator}QQI^{SubscriptionLegacy}}}{Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >={DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::Subscription>=^{Allocator}QQI^{Subscription}}{DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy>=^{Allocator}QQI^{SubscriptionLegacy}}}{DynamicArray<re::SharedPtr<re::DiscoveryIdentity> >=^{Allocator}QQI^{SharedPtr<re::DiscoveryIdentity>}}{DynamicString=^{Allocator}*QQ}}24@0:8@16, name: discoveryViewWithGuid:
-     // Error parsing type: v48@0:8^{IDSDiscoveryView=^^?{atomic<int>=Ai}{SharedPtr<re::internal::WeakCount>=^{WeakCount}}^{Allocator}{WeakPtr<re::IDSManager>={SharedPtr<re::internal::WeakCount>=^{WeakCount}}}{Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >={DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::Subscription>=^{Allocator}QQI^{Subscription}}{DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy>=^{Allocator}QQI^{SubscriptionLegacy}}}{Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >={DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::Subscription>=^{Allocator}QQI^{Subscription}}{DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy>=^{Allocator}QQI^{SubscriptionLegacy}}}{DynamicArray<re::SharedPtr<re::DiscoveryIdentity> >=^{Allocator}QQI^{SharedPtr<re::DiscoveryIdentity>}}{DynamicString=^{Allocator}*QQ}}16@24@32@40, name: incomingViewMessage:type:message:from:
-     // Error parsing type: v24@0:8^{IDSInvite=^^?{atomic<int>=Ai}{SharedPtr<re::internal::WeakCount>=^{WeakCount}}^{Allocator}{WeakPtr<re::IDSManager>={SharedPtr<re::internal::WeakCount>=^{WeakCount}}}{DynamicString=^{Allocator}*QQ}{SharedPtr<re::IDSDiscoveryIdentity>=^{IDSDiscoveryIdentity}}{SharedPtr<re::DiscoveryView>=^{DiscoveryView}}}16, name: acceptInvite:
-     // Error parsing type: v48@0:8^{IDSInvite=^^?{atomic<int>=Ai}{SharedPtr<re::internal::WeakCount>=^{WeakCount}}^{Allocator}{WeakPtr<re::IDSManager>={SharedPtr<re::internal::WeakCount>=^{WeakCount}}}{DynamicString=^{Allocator}*QQ}{SharedPtr<re::IDSDiscoveryIdentity>=^{IDSDiscoveryIdentity}}{SharedPtr<re::DiscoveryView>=^{DiscoveryView}}}16@24@32@40, name: incomingInviteMessage:type:message:from:
-     // Error parsing type: v32@0:8^{IDSInvite=^^?{atomic<int>=Ai}{SharedPtr<re::internal::WeakCount>=^{WeakCount}}^{Allocator}{WeakPtr<re::IDSManager>={SharedPtr<re::internal::WeakCount>=^{WeakCount}}}{DynamicString=^{Allocator}*QQ}{SharedPtr<re::IDSDiscoveryIdentity>=^{IDSDiscoveryIdentity}}{SharedPtr<re::DiscoveryView>=^{DiscoveryView}}}16@24, name: inviteAcceptedFrom:from:
-     // Error parsing type: v24@0:8^{IDSDiscoveryView=^^?{atomic<int>=Ai}{SharedPtr<re::internal::WeakCount>=^{WeakCount}}^{Allocator}{WeakPtr<re::IDSManager>={SharedPtr<re::internal::WeakCount>=^{WeakCount}}}{Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >={DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::Subscription>=^{Allocator}QQI^{Subscription}}{DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy>=^{Allocator}QQI^{SubscriptionLegacy}}}{Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >={DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::Subscription>=^{Allocator}QQI^{Subscription}}{DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy>=^{Allocator}QQI^{SubscriptionLegacy}}}{DynamicArray<re::SharedPtr<re::DiscoveryIdentity> >=^{Allocator}QQI^{SharedPtr<re::DiscoveryIdentity>}}{DynamicString=^{Allocator}*QQ}}16, name: broadcastViewUpdate:
- (BOOL)isValidInviteResponse:(id)arg1 message:(id)arg2;
- (BOOL)isValidViewUpdate:(id)arg1 message:(id)arg2;
- (BOOL)isValidDestinationsArray:(id)arg1;
-     // Error parsing type: ^{IDSInvite=^^?{atomic<int>=Ai}{SharedPtr<re::internal::WeakCount>=^{WeakCount}}^{Allocator}{WeakPtr<re::IDSManager>={SharedPtr<re::internal::WeakCount>=^{WeakCount}}}{DynamicString=^{Allocator}*QQ}{SharedPtr<re::IDSDiscoveryIdentity>=^{IDSDiscoveryIdentity}}{SharedPtr<re::DiscoveryView>=^{DiscoveryView}}}24@0:8@16, name: inviteWithGuid:
- (BOOL)isLoggedIn;
- (void)stopListeningForInvites;
- (void)startListeningForInvites;
- (Event_8f7d30d6 *)rejectedInviteEvent;
- (Event_8f7d30d6 *)acceptedInviteEvent;
- (Event_b92446be *)receivedInviteEvent;
- (void)dealloc;
- (void)setupService;
- (id)initWithConfig:(struct Config)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

