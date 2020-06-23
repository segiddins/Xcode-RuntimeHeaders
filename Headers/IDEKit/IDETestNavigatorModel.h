//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>
#import <IDEKit/IDETestsInTestableObserver-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTObservingToken, DVTSymbol, IDEFileReference, IDETestManager, NSArray, NSImage, NSNull, NSString, NSURL;

@interface IDETestNavigatorModel : NSObject <IDETestsInTestableObserver, IDEKeyDrivenNavigableItemRepresentedObject>
{
    BOOL _loadingComplete;
    BOOL _filteringByScheme;
    DVTObservingToken *_testableReferencesObservingToken;
    DVTObservingToken *_testableOriginObservingToken;
    DVTObservingToken *_activeRunContextObservingToken;
    DVTObservingToken *_loadingCompleteObservingToken;
    IDETestManager *_testManager;
    NSArray *_orderedTestables;
    CDUnknownBlockType _viewUpdater;
}

+ (id)keyPathsForValuesAffectingModelItems;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType viewUpdater; // @synthesize viewUpdater=_viewUpdater;
@property(retain) NSArray *orderedTestables; // @synthesize orderedTestables=_orderedTestables;
@property(retain) IDETestManager *testManager; // @synthesize testManager=_testManager;
@property(retain) DVTObservingToken *loadingCompleteObservingToken; // @synthesize loadingCompleteObservingToken=_loadingCompleteObservingToken;
@property(retain) DVTObservingToken *activeRunContextObservingToken; // @synthesize activeRunContextObservingToken=_activeRunContextObservingToken;
@property(retain) DVTObservingToken *testableOriginObservingToken; // @synthesize testableOriginObservingToken=_testableOriginObservingToken;
@property(retain) DVTObservingToken *testableReferencesObservingToken; // @synthesize testableReferencesObservingToken=_testableReferencesObservingToken;
@property(nonatomic) BOOL filteringByScheme; // @synthesize filteringByScheme=_filteringByScheme;
@property(nonatomic) BOOL loadingComplete; // @synthesize loadingComplete=_loadingComplete;
@property(readonly, nonatomic) NSString *navigableItem_name;
- (void)allTestablesChanged;
- (void)testablesChanged:(id)arg1;
- (void)testsChanged:(id)arg1;
- (void)_stopMonitoringTests;
- (void)_startMonitoringTests:(CDUnknownBlockType)arg1;
- (void)_updateObservedTestables;
- (id)_orderTestablesUsingTestManager:(id)arg1;
- (id)modelItems;
- (id)ideModelObjectTypeIdentifier;
- (void)_setupLoadingCompleteObservation;
- (id)initWithTestManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

