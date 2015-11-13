//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDelayedInvocation, NSArray, NSMapTable, NSMutableArray, NSMutableSet;
@protocol DVTCustomDataStoring, DVTPreferenceSet;

@interface DVTPreferenceSetManager : NSObject
{
    Class _preferenceSetClass;
    NSArray *_builtInPreferenceSets;
    NSMutableSet *_specifierNamesInDataStore;
    NSMutableArray *_userPreferenceSets;
    NSMutableArray *_availablePreferenceSets;
    id <DVTPreferenceSet> _currentPreferenceSet;
    NSMapTable *_preferenceSetObserverTokens;
    DVTDelayedInvocation *_autosavePreferenceSetsInvocation;
}

+ (void)initialize;
@property(readonly) Class preferenceSetClass; // @synthesize preferenceSetClass=_preferenceSetClass;
- (void).cxx_destruct;
- (id)description;
- (void)_writePreferenceSetsIfNeeded;
- (void)_applicationWillTerminate:(id)arg1;
- (void)_scheduleAutoSavePreferenceSets;
- (void)_removeObserversForPreferenceSet:(id)arg1;
- (void)_addObserversForPreferenceSet:(id)arg1;
- (void)deletePreferenceSet:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)duplicatePreferenceSet:(id)arg1 error:(id *)arg2;
- (void)renamePreferenceSet:(id)arg1 toName:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)editableUserPreferenceSetForPreferenceSet:(id)arg1;
- (id)_createUserPreferenceSetWithBaseName:(id)arg1 basedOn:(id)arg2;
- (id)_nameForDuplicateOfPreferenceSet:(id)arg1;
- (id)_availablePreferenceSetWithLocalizedName:(id)arg1;
@property(readonly) id <DVTCustomDataStoring> userPreferenceSetsDataStore;
- (id)preferenceSetForName:(id)arg1;
@property(readonly, copy) NSArray *builtInPreferenceSets;
@property(retain) id <DVTPreferenceSet> currentPreferenceSet;
- (void)_rebuildAvailableandUserSetsList;
- (void)dealloc;
- (id)initWithPreferenceSetClass:(Class)arg1;

// Remaining properties
@property(copy) NSArray *availablePreferenceSets; // @dynamic availablePreferenceSets;
@property(readonly, copy) NSMutableArray *mutableAvailablePreferenceSets; // @dynamic mutableAvailablePreferenceSets;
@property(readonly, copy) NSMutableArray *mutableUserPreferenceSets; // @dynamic mutableUserPreferenceSets;
@property(copy) NSArray *userPreferenceSets; // @dynamic userPreferenceSets;

@end

