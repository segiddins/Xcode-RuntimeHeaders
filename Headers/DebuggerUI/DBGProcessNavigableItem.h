//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEKeyDrivenNavigableItem.h>

@class DBGMemoryDataProcessWrapper, DBGViewDebuggerAdditionUIController, DVTObservingToken, NSArray, NSString, XRMemoryGraphDebuggerAdditionUIController;
@protocol IDEDebuggingAdditionUIController;

@interface DBGProcessNavigableItem : IDEKeyDrivenNavigableItem
{
    NSArray *_cachedChildRepresentedObjects;
    NSArray *_queueContentArray;
    BOOL _hasFilterString;
    DBGMemoryDataProcessWrapper *_memoryDataGroup;
    DVTObservingToken *_viewDebuggerObservingToken;
    DVTObservingToken *_focusObservingToken;
    DVTObservingToken *_memoryGraphDebuggerObservingToken;
    XRMemoryGraphDebuggerAdditionUIController *_memoryDebuggingUIController;
    BOOL _usedInDebugNavigator;
    BOOL _showsCompressedStackFrames;
    BOOL _showsOnlyAncestorWithInterestingFrames;
    BOOL _showsOnlyRunningBlocks;
    BOOL _showsGauges;
    int _navigatorContentMode;
    DBGViewDebuggerAdditionUIController *_viewDebuggingUIController;
    NSString *_filterString;
}

+ (id)keyPathsForValuesAffectingLeaf;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingImage;
+ (id)keyPathsForValuesAffectingName;
+ (id)keyPathsForValuesAffectingTopNavigableModel;
+ (id)keyPathsForValuesAffectingProcess;
+ (id)_mainQueueName;
- (void).cxx_destruct;
@property(retain, nonatomic) DBGMemoryDataProcessWrapper *memoryDataGroup; // @synthesize memoryDataGroup=_memoryDataGroup;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(nonatomic) __weak id <IDEDebuggingAdditionUIController> memoryDebuggingUIController; // @synthesize memoryDebuggingUIController=_memoryDebuggingUIController;
@property(nonatomic) __weak DBGViewDebuggerAdditionUIController *viewDebuggingUIController; // @synthesize viewDebuggingUIController=_viewDebuggingUIController;
@property(nonatomic) BOOL showsGauges; // @synthesize showsGauges=_showsGauges;
@property(nonatomic) BOOL showsOnlyRunningBlocks; // @synthesize showsOnlyRunningBlocks=_showsOnlyRunningBlocks;
@property(nonatomic) BOOL showsOnlyAncestorWithInterestingFrames; // @synthesize showsOnlyAncestorWithInterestingFrames=_showsOnlyAncestorWithInterestingFrames;
@property(nonatomic) BOOL showsCompressedStackFrames; // @synthesize showsCompressedStackFrames=_showsCompressedStackFrames;
@property(nonatomic) int navigatorContentMode; // @synthesize navigatorContentMode=_navigatorContentMode;
@property BOOL usedInDebugNavigator; // @synthesize usedInDebugNavigator=_usedInDebugNavigator;
- (void)primitiveInvalidate;
- (void)invalidateChildItems;
- (void)recursivelyInvalidateChildItems;
- (id)childItemsToSearchForFindingDescendant:(id)arg1;
- (void)_addGaugeDocumentLocationsIfNecessary:(id)arg1;
- (id)_childRepresentedObjectsForDebugNavigatorViewMode;
- (id)childRepresentedObjects;
- (void)findInterestingThreads:(id *)arg1 filteredInterestingThreads:(id *)arg2 fromThreads:(id)arg3;
- (id)_generateQueueChildrenFromFilteredInterestingThreads:(id)arg1;
- (BOOL)_processRespondsToSelectorAndIsDoingAsyncAttach;
- (BOOL)isLeaf;
- (id)subtitle;
- (id)image;
- (id)name;
- (id)topNavigableModel;
- (id)process;
- (id)initWithRepresentedObject:(id)arg1;

@end

