//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTDynamicTableViewDataSource-Protocol.h>
#import <IDEKit/DVTDynamicTableViewDelegate-Protocol.h>

@class DVTDynamicTableView, DVTNotificationToken, IDESourceControlLog, IDESourceControlLogItemView, NSColor, NSMutableSet, NSProgressIndicator, NSScrollView, NSString;
@protocol DVTSourceControlCancellable;

@interface IDESourceControlLogViewController : IDEViewController <DVTDynamicTableViewDataSource, DVTDynamicTableViewDelegate>
{
    DVTDynamicTableView *_logTableView;
    NSProgressIndicator *_logProgressIndicator;
    BOOL isLoadingItems;
    IDESourceControlLog *_log;
    NSString *_searchString;
    NSScrollView *scrollView;
    DVTNotificationToken *_didCommitToken;
    id <DVTSourceControlCancellable> _logCancellationToken;
    IDESourceControlLogItemView *_tempLogItemView;
    NSMutableSet *_rowViewControllers;
    NSString *_startingRevision;
    NSString *_endingRevision;
    BOOL _showingPeoplePicker;
    unsigned long long _searchType;
    CDUnknownBlockType _progressBlock;
}

+ (id)defaultViewNibName;
+ (id)logAspect;
+ (void)initialize;
+ (Class)logItemViewClass;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property BOOL showingPeoplePicker; // @synthesize showingPeoplePicker=_showingPeoplePicker;
@property unsigned long long searchType; // @synthesize searchType=_searchType;
@property(readonly) IDESourceControlLog *log; // @synthesize log=_log;
@property(readonly) DVTDynamicTableView *logTableView; // @synthesize logTableView=_logTableView;
- (void).cxx_destruct;
- (long long)dynamicTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInDynamicTableView:(id)arg1;
- (id)dynamicTableView:(id)arg1 viewForRow:(long long)arg2 inSection:(long long)arg3;
- (double)dynamicTableView:(id)arg1 heightForRow:(long long)arg2 inSection:(long long)arg3;
- (double)_requiredTextHeightForLogItem:(id)arg1;
- (id)dynamicTableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)dynamicTableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)logItemForRow:(long long)arg1 inSection:(long long)arg2;
- (void)clearAuthorPairing:(id)arg1 withSourceTree:(id)arg2;
- (void)ABPersonSelected:(id)arg1 forAuthor:(id)arg2 withSourceTree:(id)arg3;
- (void)loadEntries;
- (long long)countOfLogItemsInSection:(long long)arg1;
- (void)clearLog;
- (void)reloadLog;
@property(copy) NSString *endingRevision;
@property(copy) NSString *startingRevision;
@property(copy) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly) NSColor *rowBackgroundColor2;
@property(readonly) NSColor *rowBackgroundColor1;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)boundsDidChangeNotification:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (Class)currentLogItemViewClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

