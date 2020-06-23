//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEProductsUI/DVTFilterControlBarTarget-Protocol.h>
#import <IDEProductsUI/DVTTableCellViewTitleEditingDelegate-Protocol.h>
#import <IDEProductsUI/DVTTableRowViewMouseInsideDelegate-Protocol.h>
#import <IDEProductsUI/IDEInitialization-Protocol.h>
#import <IDEProductsUI/IDEProductsInspectableVending-Protocol.h>
#import <IDEProductsUI/NSTableViewDelegate-Protocol.h>

@class DVTBorderedView, DVTDelayedInvocation, DVTNotificationToken, DVTObservingToken, DVTTableView, IDESearchFilterControlBar, NSAlert, NSArray, NSArrayController, NSImage, NSMenu, NSString, NSTableHeaderView, NSTextField, NSView;
@protocol IDEProductsInspectable;

@interface IDEArchivesViewController : IDEViewController <DVTFilterControlBarTarget, NSTableViewDelegate, DVTTableCellViewTitleEditingDelegate, IDEInitialization, DVTTableRowViewMouseInsideDelegate, IDEProductsInspectableVending>
{
    BOOL _shouldRefreshArchiveStatus;
    DVTDelayedInvocation *_archiveStatusRefreshInvocation;
    IDESearchFilterControlBar *_controlBar;
    NSString *_searchString;
    DVTBorderedView *_bottomBorderView;
    NSArrayController *_archivesArrayController;
    NSTableHeaderView *_tableHeaderView;
    DVTTableView *_archivesTableView;
    NSTextField *_statusBarTextField;
    NSImage *_archiveImage;
    DVTObservingToken *_selectedArchivesObservingToken;
    DVTNotificationToken *_windowBecameKeyObservingToken;
    DVTNotificationToken *_windowResignedKeyObservingToken;
    DVTObservingToken *_archivesObservingToken;
    NSAlert *_deleteArchiveAlert;
    id <IDEProductsInspectable> _currentInspectable;
    DVTBorderedView *_contentBorderedView;
    NSArray *_archiveStatusObservers;
    DVTNotificationToken *_testPushNotificationObserver;
}

+ (id)keyPathsForValuesAffectingArchivesFilterPredicate;
+ (id)keyPathsForValuesAffectingSearchStrings;
+ (id)keyPathsForValuesAffectingArchives;
+ (void)revealArchive:(id)arg1 action:(long long)arg2;
+ (void)revealArchiveNotification:(id)arg1;
+ (BOOL)ide_initializeWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property BOOL shouldRefreshArchiveStatus; // @synthesize shouldRefreshArchiveStatus=_shouldRefreshArchiveStatus;
@property(retain) DVTNotificationToken *testPushNotificationObserver; // @synthesize testPushNotificationObserver=_testPushNotificationObserver;
@property(retain) NSArray *archiveStatusObservers; // @synthesize archiveStatusObservers=_archiveStatusObservers;
@property __weak DVTBorderedView *contentBorderedView; // @synthesize contentBorderedView=_contentBorderedView;
@property(retain) id <IDEProductsInspectable> currentInspectable; // @synthesize currentInspectable=_currentInspectable;
@property(retain, nonatomic) NSAlert *deleteArchiveAlert; // @synthesize deleteArchiveAlert=_deleteArchiveAlert;
@property(retain) DVTObservingToken *archivesObservingToken; // @synthesize archivesObservingToken=_archivesObservingToken;
@property(retain) DVTNotificationToken *windowResignedKeyObservingToken; // @synthesize windowResignedKeyObservingToken=_windowResignedKeyObservingToken;
@property(retain) DVTNotificationToken *windowBecameKeyObservingToken; // @synthesize windowBecameKeyObservingToken=_windowBecameKeyObservingToken;
@property(retain) DVTObservingToken *selectedArchivesObservingToken; // @synthesize selectedArchivesObservingToken=_selectedArchivesObservingToken;
@property(readonly) NSImage *archiveImage; // @synthesize archiveImage=_archiveImage;
@property __weak NSTextField *statusBarTextField; // @synthesize statusBarTextField=_statusBarTextField;
@property __weak DVTTableView *archivesTableView; // @synthesize archivesTableView=_archivesTableView;
@property __weak NSTableHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain) NSArrayController *archivesArrayController; // @synthesize archivesArrayController=_archivesArrayController;
@property __weak DVTBorderedView *bottomBorderView; // @synthesize bottomBorderView=_bottomBorderView;
@property(copy) NSString *searchString; // @synthesize searchString=_searchString;
@property __weak IDESearchFilterControlBar *controlBar; // @synthesize controlBar=_controlBar;
- (struct _NSRange)initialSelectionRangeForTableCellView:(id)arg1 usingProposedRange:(struct _NSRange)arg2;
- (void)titleDidChangeForTableCellView:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)tableRowView:(id)arg1 mouseInside:(BOOL)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (void)_updateStatusIcons;
- (void)_updateAppearanceOfRow:(unsigned long long)arg1 view:(id)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)shouldHighlightIconInRow:(long long)arg1;
@property(readonly, nonatomic) NSString *filterButtonAccessibilityDescription;
@property(readonly, nonatomic) NSString *filterButtonToolTip;
@property(readonly, nonatomic) NSMenu *filterButtonMenu;
@property(readonly, nonatomic) NSString *filterDefinitionIdentifier;
- (void)primitiveInvalidate;
@property(readonly) BOOL shouldShowNoSelection;
- (void)handleAction:(id)arg1 fromInspectable:(id)arg2;
- (void)testPushNotification:(id)arg1;
- (void)exportDeveloperIDAppForArchive:(id)arg1;
- (void)showStatusLogForArchive:(id)arg1;
- (void)downloadDSYMForArchive:(id)arg1;
- (void)productsContextMenu_showArchiveInFinder:(id)arg1;
- (void)productsContextMenu_deleteArchive:(id)arg1;
- (void)deleteArchive:(id)arg1;
- (void)deleteArchives:(id)arg1;
- (void)updateStatusBar;
- (id)archivesFilterPredicate;
@property(readonly) NSArray *searchStrings;
@property(readonly, nonatomic) DVTDelayedInvocation *archiveStatusRefreshInvocation; // @synthesize archiveStatusRefreshInvocation=_archiveStatusRefreshInvocation;
- (void)setArchives:(id)arg1;
@property(readonly, nonatomic) NSArray *archives;
- (void)configureWithProduct:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)revealArchive:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL vendorIsBusy;
@property(readonly, nonatomic) NSView *view;

@end

