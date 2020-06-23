//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface IDELogManager : NSObject <DVTInvalidation>
{
    id _domainItem;
    NSString *_domainName;
    NSArray *_logProviders;
    NSMutableArray *_logRecords;
    NSMapTable *_logProviderToRecordsIndex;
    NSSet *_cachedRecentLogRecords;
    NSMutableDictionary *_navigatorRootItems;
    NSMutableDictionary *_auxiliaryRecordsByIdentifier;
}

+ (id)keyPathsForValuesAffectingImportedRecords;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) NSMutableDictionary *auxiliaryRecordsByIdentifier; // @synthesize auxiliaryRecordsByIdentifier=_auxiliaryRecordsByIdentifier;
@property(readonly) NSMutableDictionary *navigatorRootItems; // @synthesize navigatorRootItems=_navigatorRootItems;
@property(copy) NSString *domainName; // @synthesize domainName=_domainName;
@property(retain) id domainItem; // @synthesize domainItem=_domainItem;
@property(readonly) NSArray *logProviders; // @synthesize logProviders=_logProviders;
@property(readonly, copy) NSArray *importedRecords;
- (id)mostRecentLogRecordForType:(id)arg1;
@property(readonly) NSSet *mostRecentLogRecordForEachType;
- (id)auxiliaryRecordWithIdentifier:(id)arg1;
- (void)_handleLogRecordChangesForProvider:(id)arg1;
- (id)_subRecordsFromCandidateRecords:(id)arg1;
- (id)_findLogProviders;
- (id)extensionsFromExtensionPointIdentifier:(id)arg1;
- (id)importResultBundleRecord:(id)arg1 disablesSourceIntegration:(BOOL)arg2;
- (void)primitiveInvalidate;
- (id)initWithDomainItem:(id)arg1 domain:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSArray *logRecords; // @dynamic logRecords;
@property(readonly) NSMutableArray *mutableLogRecords; // @dynamic mutableLogRecords;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

