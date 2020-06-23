//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/DVTServicesJSONSerialization-Protocol.h>
#import <IDEFoundation/NSCopying-Protocol.h>

@class AnalyticsMetricsConsolidatedSource, DVTStackBacktrace, IDEProductCategory, IDEProductCoordinator, IDEProductIdentifier, IDEProductVersion, NSArray, NSString, NSURL;

@interface IDEProduct : NSObject <DVTServicesJSONSerialization, DVTInvalidation, NSCopying>
{
    NSString *_adamId;
    NSArray *_archives;
    IDEProductIdentifier *_identifier;
    NSArray *_productVersions;
    AnalyticsMetricsConsolidatedSource *_metricsSource;
    IDEProductCoordinator *_coordinator;
}

+ (id)objectFromFilePath:(id)arg1 withCoordinator:(id)arg2 error:(id *)arg3;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (id)keyPathsForValuesAffectingProductCategory;
+ (id)keyPathsForValuesAffectingCacheImageURL;
+ (id)keyPathsForValuesAffectingImageURL;
+ (id)keyPathsForValuesAffectingName;
+ (id)keyPathsForValuesAffectingMostRecentVersion;
+ (id)productByMergingProducts:(id)arg1 coordinator:(id)arg2;
+ (void)initialize;
@property(nonatomic) __weak IDEProductCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) AnalyticsMetricsConsolidatedSource *metricsSource; // @synthesize metricsSource=_metricsSource;
@property(retain) NSArray *productVersions; // @synthesize productVersions=_productVersions;
@property(readonly) IDEProductIdentifier *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)writeToFilePath:(id)arg1 error:(id *)arg2;
- (id)JSONRepresentation;
- (void)primitiveInvalidate;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *adamId;
@property(readonly) IDEProductCategory *productCategory;
@property(readonly) NSURL *cacheImageURL;
@property(readonly) NSURL *imageURL;
@property(readonly) NSString *name;
@property(readonly) NSArray *archives; // @synthesize archives=_archives;
@property(readonly) NSArray *flatProductVersions;
- (void)_buildFlatproductVersionsWithVersionedProduct:(id)arg1 flatArray:(id)arg2;
@property(readonly) NSArray *productVersionsAvailableForSale;
@property(readonly) IDEProductVersion *mostRecentVersionAvailableForSale;
@property(readonly) IDEProductVersion *mostRecentVersion;
- (id)_initWithCoordinator:(id)arg1 productIdentifier:(id)arg2 productVersions:(id)arg3;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

