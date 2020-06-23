//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEProjectItemModel.h>

@class NSSet;

@interface IDENetworkExtensionsItemModel : IDEProjectItemModel
{
    NSSet *_networkExtensionCapabilities;
}

+ (id)coalescableReadOnlyKeyPaths;
+ (id)keyPathsForValuesAffectingDnsSettings;
+ (id)keyPathsForValuesAffectingDnsProxy;
+ (id)keyPathsForValuesAffectingPacketTunnelProvider;
+ (id)keyPathsForValuesAffectingContentFilterProvider;
+ (id)keyPathsForValuesAffectingAppProxyProvider;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *networkExtensionCapabilities; // @synthesize networkExtensionCapabilities=_networkExtensionCapabilities;
- (id)coalescableWriteableKeyPathToDataSource;
@property(nonatomic) BOOL dnsSettings; // @dynamic dnsSettings;
- (void)_setDnsSettings:(BOOL)arg1;
@property(nonatomic) BOOL dnsProxy; // @dynamic dnsProxy;
- (void)_setDnsProxy:(BOOL)arg1;
@property(nonatomic) BOOL packetTunnelProvider; // @dynamic packetTunnelProvider;
- (void)_setPacketTunnelProvider:(BOOL)arg1;
@property(nonatomic) BOOL contentFilterProvider; // @dynamic contentFilterProvider;
- (void)_setContentFilterProvider:(BOOL)arg1;
@property(nonatomic) BOOL appProxyProvider; // @dynamic appProxyProvider;
- (void)_setAppProxyProvider:(BOOL)arg1;
- (void)removeEnabledNetworkExtensionCapability:(id)arg1;
- (void)addEnabledNetworkExtensionCapability:(id)arg1;
- (BOOL)isEnabledNetworkExtensionCapability:(id)arg1;
- (void)targetCoordinatorsChanged:(id)arg1;
- (void)readValuesFromEntitlements;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
- (id)entitlementsFlightCheck;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;

@end

