//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBStructureViewController.h>

@class IBStoryboardNavigationOutlineViewController, NSNumber;

@interface IBStoryboardStructureViewController : IBStructureViewController
{
    id _currentFilterFieldWantingDocumentOutlineViewController;
    IBStoryboardNavigationOutlineViewController *_documentOutlineViewController;
    NSNumber *_lastKnownOutlineViewWidth;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
@property(copy) NSNumber *lastKnownOutlineViewWidth; // @synthesize lastKnownOutlineViewWidth=_lastKnownOutlineViewWidth;
@property(retain) IBStoryboardNavigationOutlineViewController *documentOutlineViewController; // @synthesize documentOutlineViewController=_documentOutlineViewController;
@property(readonly) id currentFilterFieldWantingDocumentOutlineViewController; // @synthesize currentFilterFieldWantingDocumentOutlineViewController=_currentFilterFieldWantingDocumentOutlineViewController;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (id)structureAreaExpansionPreferencesKey;
- (void)topLevelObjectsChanged;
- (void)selectionProviderDidBecomeActive:(id)arg1;
- (id)selectionProviderForRevealingMembers:(id)arg1;
- (void)toggleStructureArea:(id)arg1;
- (double)constrainContentWidthAndChangeModesIfNeeded:(double)arg1;
- (double)outlineViewWidth;
- (id)storyboardCanvasViewController;
- (double)minimumContentWidth;
- (double)contentWidth;
- (id)highlightProviders;
- (id)stateSavingIdentifier;
- (void)setDrawsWithActiveLook:(BOOL)arg1;
- (void)setCurrentStructureProvider:(id)arg1;
- (void)setShowingStructureArea:(BOOL)arg1;
- (id)_lastStructureSelectionProvider;
- (id)initialSelectionProvider;
- (BOOL)supportsTogglingStructureArea;
- (void)editorInstalled;
- (void)primitiveInvalidate;
- (BOOL)automaticallyInvalidatesChildViewControllers;
- (void)loadView;
- (void)makeAndPopulateSelectionProviders:(id)arg1;

@end

