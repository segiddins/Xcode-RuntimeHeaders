//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDEPlaygroundCommonSharedContext.h>

@class DVTFilePath, DVTSDK, IDEPlaygroundPageSharedContext, IDEPlaygroundVersion, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface IDEPlaygroundSharedContext : IDEPlaygroundCommonSharedContext
{
    NSMutableDictionary *_pagesByName;
    NSMutableArray *_pageNames;
    BOOL _allowsReset;
    BOOL _executeOnSourceChanges;
    BOOL _timelineScrubberEnabled;
    IDEPlaygroundVersion *_playgroundVersion;
    NSString *_targetPlatformIdentifier;
    NSNumber *_autoTerminationDelay;
    long long _displayMode;
    NSString *_organizationName;
    NSArray *_discreteFileSections;
    DVTFilePath *_documentationSectionPath;
    NSString *_lastSwiftMigration;
}

+ (id)targetTripleFromSDK:(id)arg1;
+ (id)keyPathsForValuesAffectingTargetTriple;
+ (id)keyPathsForValuesAffectingTargetPlatformIdentifier;
+ (id)keyPathsForValuesAffectingAutoTerminationDelay;
+ (id)keyPathsForValuesAffectingPagesDirectoryPath;
+ (id)keyPathsForValuesAffectingFirstPageContext;
+ (id)keyPathsForValuesAffectingPageContexts;
+ (void)changeFilePath:(id)arg1 forSharedContext:(id)arg2;
+ (id)sharedPlaygroundContextForFilePath:(id)arg1 error:(id *)arg2;
+ (id)contextsForFilePaths;
+ (void)initialize;
@property(copy, nonatomic) NSString *lastSwiftMigration; // @synthesize lastSwiftMigration=_lastSwiftMigration;
@property(nonatomic) __weak DVTFilePath *documentationSectionPath; // @synthesize documentationSectionPath=_documentationSectionPath;
@property(retain, nonatomic) NSArray *discreteFileSections; // @synthesize discreteFileSections=_discreteFileSections;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(nonatomic) BOOL timelineScrubberEnabled; // @synthesize timelineScrubberEnabled=_timelineScrubberEnabled;
@property(nonatomic) BOOL executeOnSourceChanges; // @synthesize executeOnSourceChanges=_executeOnSourceChanges;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) BOOL allowsReset; // @synthesize allowsReset=_allowsReset;
@property(retain, nonatomic) NSNumber *autoTerminationDelay; // @synthesize autoTerminationDelay=_autoTerminationDelay;
@property(copy, nonatomic) NSString *targetPlatformIdentifier; // @synthesize targetPlatformIdentifier=_targetPlatformIdentifier;
@property(retain, nonatomic) IDEPlaygroundVersion *playgroundVersion; // @synthesize playgroundVersion=_playgroundVersion;
- (void).cxx_destruct;
- (id)_targetTripleForAuxiliarySource;
- (id)_sdkForAuxiliarySource;
@property(readonly, nonatomic) NSString *targetTriple;
@property(readonly, nonatomic) NSArray *targetableSDKs;
@property(nonatomic) DVTSDK *sdk;
@property(readonly, nonatomic) DVTFilePath *pagesDirectoryPath;
- (void)_notifyPagesDirectoryChangedOnBackgroundQueue;
- (void)_updatePagesFromDirectoryContents;
- (void)_prepareForPageCreationWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_renamePage:(id)arg1 toName:(id)arg2 withStructureEditingBlock:(CDUnknownBlockType)arg3;
- (void)_movePage:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)_invalidatePlaygroundPageContextForName:(id)arg1;
- (id)_createPlaygroundPageContextForFilePath:(id)arg1;
- (id)_addPageContextForFilePath:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_pageContextForPath:(id)arg1;
@property(readonly, nonatomic) IDEPlaygroundPageSharedContext *firstPageContext;
@property(readonly, nonatomic) NSArray *pageContexts;
- (void)updateLastSwiftMigrationToCurrent;
@property(readonly, nonatomic) BOOL lastSwiftMigrationIsCurrent;
- (id)description;
- (id)_initWithFilePath:(id)arg1;
- (void)_invalidatePageContexts;
- (void)setFilePath:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSMutableArray *mutablePageNames; // @dynamic mutablePageNames;
@property(readonly, nonatomic) NSArray *pageNames; // @dynamic pageNames;

@end

