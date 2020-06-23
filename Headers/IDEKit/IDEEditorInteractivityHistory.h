//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol DVTInvalidation, OS_dispatch_queue;

@interface IDEEditorInteractivityHistory : NSObject
{
    BOOL _saveScheduled;
    NSObject<OS_dispatch_queue> *_historyAccessQueue;
    NSMutableArray *_historyItemsOrderedByMostRecentActivity;
    id <DVTInvalidation> _immortalEventMonitor;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)historyItems;
- (void)noteUserInteractivity:(long long)arg1 inEditorDocumentURL:(id)arg2;
- (long long)indexOfCoallescableHistoryItemForURL:(id)arg1 withInteractivityDate:(id)arg2;
- (void)loadHistory;
- (void)scheduleSavingHistoryIfNeeded;
- (id)init;

@end

