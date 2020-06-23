//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/DVTServicesJSONSerialization-Protocol.h>
#import <IDEFoundation/NSCopying-Protocol.h>

@class DVTStackBacktrace, IDEProductCategory, IDEProductVersionBinaryInfos, IDEProductVersionIdentifier, NSArray, NSDate, NSSet, NSString, NSURL;
@protocol DVTAnalyticsAppStoreSourceProtocol;

@interface IDEProductVersion : NSObject <DVTServicesJSONSerialization, DVTInvalidation, NSCopying>
{
    BOOL _isAnalyticsAppStoreSourceProtocolEnsured;
    NSString *_name;
    id <DVTAnalyticsAppStoreSourceProtocol> _crashPointParameterizedAppStoreSource;
    id <DVTAnalyticsAppStoreSourceProtocol> _processorUsagePointConsolidatedSource;
    IDEProductVersionIdentifier *_productVersionIdentifier;
    NSString *_platformSDKIdentifier;
    NSURL *_imageURL;
    NSURL *_cacheImageURL;
    NSDate *_creationDate;
    NSArray *_childProducts;
    NSString *_adamId;
    NSSet *_supportedDeviceTypes;
    NSSet *_supportedOSVersions;
    IDEProductVersionBinaryInfos *_binaryInfos;
    NSArray *_archives;
    unsigned long long _appStoreStatus;
}

+ (id)objectFromJSONRepresentation:(id)arg1 error:(id *)arg2;
+ (id)productVersionFromArchive:(id)arg1 withError:(id *)arg2;
+ (BOOL)isValidProductVersionFromArchive:(id)arg1 withError:(id *)arg2;
+ (id)productVersionByMerging:(id)arg1;
+ (id)mostRecentVersion:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) BOOL isAnalyticsAppStoreSourceProtocolEnsured; // @synthesize isAnalyticsAppStoreSourceProtocolEnsured=_isAnalyticsAppStoreSourceProtocolEnsured;
@property unsigned long long appStoreStatus; // @synthesize appStoreStatus=_appStoreStatus;
@property(retain) NSArray *archives; // @synthesize archives=_archives;
@property(retain) IDEProductVersionBinaryInfos *binaryInfos; // @synthesize binaryInfos=_binaryInfos;
@property(retain) NSSet *supportedOSVersions; // @synthesize supportedOSVersions=_supportedOSVersions;
@property(retain) NSSet *supportedDeviceTypes; // @synthesize supportedDeviceTypes=_supportedDeviceTypes;
@property(copy) NSString *adamId; // @synthesize adamId=_adamId;
@property(retain) NSArray *childProducts; // @synthesize childProducts=_childProducts;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain) NSURL *cacheImageURL; // @synthesize cacheImageURL=_cacheImageURL;
@property(retain) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain) NSString *platformSDKIdentifier; // @synthesize platformSDKIdentifier=_platformSDKIdentifier;
@property(readonly) IDEProductVersionIdentifier *productVersionIdentifier; // @synthesize productVersionIdentifier=_productVersionIdentifier;
@property(nonatomic) __weak id <DVTAnalyticsAppStoreSourceProtocol> processorUsagePointConsolidatedSource; // @synthesize processorUsagePointConsolidatedSource=_processorUsagePointConsolidatedSource;
@property(nonatomic) __weak id <DVTAnalyticsAppStoreSourceProtocol> crashPointParameterizedAppStoreSource; // @synthesize crashPointParameterizedAppStoreSource=_crashPointParameterizedAppStoreSource;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)JSONRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, getter=isAvailableForSale) BOOL availableForSale;
@property(readonly, getter=isAvailableForPrerelease) BOOL availableForPrerelease;
@property(readonly) NSArray *flatChildProducts;
- (void)primitiveInvalidate;
- (id)cachePathWithRootProductVersion:(id)arg1 productDirectory:(id)arg2;
- (id)olderVersion:(id)arg1;
- (id)newerVersion:(id)arg1;
@property(readonly) IDEProductCategory *productCategory;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *buildNumber;
@property(readonly) NSString *version;
@property(readonly) NSString *bundleIdentifier;
- (id)initWithProductVersionIdentifier:(id)arg1 name:(id)arg2 childProducts:(id)arg3;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
