//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEProducts/DVTInvalidation-Protocol.h>
#import <IDEProducts/IDEProductManagerProtocol-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, IDEAppStoreProductSource, IDEArchiveProductSource, IDEProductCoordinator, NSArray, NSMapTable, NSMutableArray, NSString;
@protocol IDEProductManagerDelegate;

@interface IDEProductManager : NSObject <DVTInvalidation, IDEProductManagerProtocol>
{
    NSMutableArray *_products;
    BOOL _hasCompletedInitialLoading;
    BOOL _cacheEnabled;
    BOOL _hasStartedLocating;
    IDEAppStoreProductSource *_appStoreProductSource;
    id <IDEProductManagerDelegate> _delegate;
    DVTObservingToken *_appStoreProductSourceHasCompletedInitialLoading;
    DVTObservingToken *_archiveProductSourceHasCompletedInitialLoading;
    IDEProductCoordinator *_coordinator;
    IDEArchiveProductSource *_archiveProductSource;
    NSMapTable *_sourcesToProducts;
    Class _appStoreProductSourceClass;
    Class _archiveProductSourceClass;
}

+ (id)defaultManager;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) Class archiveProductSourceClass; // @synthesize archiveProductSourceClass=_archiveProductSourceClass;
@property(retain) Class appStoreProductSourceClass; // @synthesize appStoreProductSourceClass=_appStoreProductSourceClass;
@property(readonly) NSMapTable *sourcesToProducts; // @synthesize sourcesToProducts=_sourcesToProducts;
@property BOOL hasStartedLocating; // @synthesize hasStartedLocating=_hasStartedLocating;
@property(getter=isCacheEnabled) BOOL cacheEnabled; // @synthesize cacheEnabled=_cacheEnabled;
@property(retain, nonatomic) IDEArchiveProductSource *archiveProductSource; // @synthesize archiveProductSource=_archiveProductSource;
@property(retain) IDEProductCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) DVTObservingToken *archiveProductSourceHasCompletedInitialLoading; // @synthesize archiveProductSourceHasCompletedInitialLoading=_archiveProductSourceHasCompletedInitialLoading;
@property(retain) DVTObservingToken *appStoreProductSourceHasCompletedInitialLoading; // @synthesize appStoreProductSourceHasCompletedInitialLoading=_appStoreProductSourceHasCompletedInitialLoading;
@property(nonatomic) BOOL hasCompletedInitialLoading; // @synthesize hasCompletedInitialLoading=_hasCompletedInitialLoading;
@property __weak id <IDEProductManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDEAppStoreProductSource *appStoreProductSource; // @synthesize appStoreProductSource=_appStoreProductSource;
- (void)handleLocationErrors:(id)arg1 fromSource:(id)arg2;
- (void)setLocationResult:(id)arg1 forSource:(id)arg2 oldProductsFromSourceDict:(id)arg3 inputProductsDict:(id)arg4 invalidateOldProductsFromSource:(id)arg5;
- (void)setLocationResult:(id)arg1 forSource:(id)arg2;
- (void)addLocationResult:(id)arg1 forSource:(id)arg2;
- (void)setProductOwnershipForLocationResult:(id)arg1;
- (id)_setLocationResult:(id)arg1 forSource:(id)arg2;
- (id)_addLocationResult:(id)arg1 forSource:(id)arg2 oldProductsReplacedByNewProducts:(id)arg3;
- (void)_startLocating;
- (void)prioritizeDeliveryOfResultsForProductIdentifier:(id)arg1;
- (void)refreshProducts;
- (id)sources;
- (void)primitiveInvalidate;
- (id)initWithCacheEnabled:(BOOL)arg1;
- (id)init;
- (void)updateHasCompletedInitialLoading;
- (void)setUpHasCompletedInitialLoadingObservations;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSMutableArray *mutableProducts; // @dynamic mutableProducts;
@property(retain) NSArray *products; // @dynamic products;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

