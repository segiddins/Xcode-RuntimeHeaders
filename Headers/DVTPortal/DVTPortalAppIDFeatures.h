//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTPortal/NSCopying-Protocol.h>

@class NSDictionary, NSSet;

@interface DVTPortalAppIDFeatures : NSObject <NSCopying>
{
    NSDictionary *_features;
    NSDictionary *_containers;
}

+ (id)emptyFeatures;
@property(readonly, nonatomic) NSDictionary *containers; // @synthesize containers=_containers;
@property(readonly, nonatomic) NSDictionary *features; // @synthesize features=_features;
- (void).cxx_destruct;
- (BOOL)allowsFeatures:(id)arg1 missingFeatures:(id *)arg2;
- (id)containersForType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)valueForFeature:(id)arg1;
- (BOOL)isFeatureEnabled:(id)arg1;
@property(readonly, nonatomic) NSSet *enabledFeatures;
@property(readonly, nonatomic) BOOL hasEnabledFeatures;
@property(readonly, nonatomic) NSSet *enabledFeatureNames;
- (id)description;
- (id)featuresByRemovingFeature:(id)arg1;
- (id)featuresByAddingFeature:(id)arg1 value:(id)arg2;
- (id)initWithFeatures:(id)arg1 containers:(id)arg2;

@end

