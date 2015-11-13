//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTPortal/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface DVTPortalProfileFeature : NSObject <NSCopying>
{
    BOOL _requiresExplicitAppID;
    NSString *_identifier;
    NSArray *_supportedPlatforms;
    NSString *_portalKey;
    long long _valueType;
}

+ (long long)_valueTypeFromValueTypeName:(id)arg1;
+ (id)profileFeatureFromExtension:(id)arg1;
+ (id)_defaultPlatforms;
+ (id)profileFeatureWithPortalKey:(id)arg1;
+ (id)profileFeatureWithIdentifier:(id)arg1;
+ (id)profileFeatures;
@property(readonly, nonatomic) long long valueType; // @synthesize valueType=_valueType;
@property(readonly, nonatomic) NSString *portalKey; // @synthesize portalKey=_portalKey;
@property(readonly, nonatomic) BOOL requiresExplicitAppID; // @synthesize requiresExplicitAppID=_requiresExplicitAppID;
@property(readonly, nonatomic) NSArray *supportedPlatforms; // @synthesize supportedPlatforms=_supportedPlatforms;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (BOOL)isValidFeatureValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 portalKey:(id)arg2 supportedPlatforms:(id)arg3 valueType:(long long)arg4 requiresExplicitAppID:(BOOL)arg5;

@end

