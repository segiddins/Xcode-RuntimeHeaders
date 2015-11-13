//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/DVTXMLUnarchiving-Protocol.h>

@class DVTCustomDataSpecifier, DVTStackBacktrace, IDEContainer, NSArray, NSMutableArray, NSString;
@protocol DVTCustomDataStoring;

@interface IDEBreakpointBucket : NSObject <DVTXMLUnarchiving, DVTInvalidation>
{
    DVTCustomDataSpecifier *_archivingDataSpecifier;
    NSString *_archivingContainerItemBaseStandardizedPathString;
    NSMutableArray *_breakpoints;
    BOOL _currentlyDecoding;
    int _type;
    IDEContainer<DVTCustomDataStoring> *_archivingContainer;
    NSString *_displayName;
}

+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)keyPathsForValuesAffectingShared;
+ (id)userGlobalBucket:(id *)arg1;
+ (void)initialize;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) IDEContainer<DVTCustomDataStoring> *archivingContainer; // @synthesize archivingContainer=_archivingContainer;
@property(readonly) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)addBreakpoints:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (id)_breakpointArchivingProxiesArray;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (id)_displayNameForWorkspace;
- (id)archivingContainerItemBaseStandardizedPathString;
- (void)_persistBreakpoints;
- (void)notifyPersistencyStateChanged;
- (BOOL)removeBreakpoint:(id)arg1;
- (void)addBreakpoint:(id)arg1;
@property(readonly, getter=isShared) BOOL shared;
- (BOOL)containsBreakpoint:(id)arg1;
- (id)initWithType:(int)arg1 archivingContainer:(id)arg2 error:(id *)arg3;
- (BOOL)_isErrorNoSuchFileError:(id)arg1;
- (BOOL)_decodeFromContainer:(id *)arg1;
- (void)_encodeToContainer;
- (BOOL)_shouldEncodeDecode;
- (id)_archivingDataSpecifierWithName:(id)arg1;
@property(readonly) DVTCustomDataSpecifier *archivingDataSpecifier;
- (id)_archivingDataStore;
- (id)init;

// Remaining properties
@property(readonly) NSArray *breakpoints; // @dynamic breakpoints;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSMutableArray *mutableBreakpoints; // @dynamic mutableBreakpoints;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

