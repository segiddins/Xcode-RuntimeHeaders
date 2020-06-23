//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMenu;

@interface IDEDocBrowserHistory : NSObject
{
    struct __CFDateFormatter *_dateFormatter;
    NSMenu *_historyMenu;
}

+ (id)sharedHistory;
- (void).cxx_destruct;
- (void)selectHistoryItem:(id)arg1;
- (void)clearHistory:(id)arg1;
- (id)historyMenu;
- (void)historyUpdate:(id)arg1;
- (void)loadHistory;
- (id)stringForCalendarDate:(id)arg1;
- (id)init;

@end

