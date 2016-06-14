//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class DVTNotificationToken, NSMapTable;

@interface IDEBatchFindActivityReporter : IDEActivityReporter
{
    NSMapTable *_queryToObservers;
    DVTNotificationToken *_queryCreationObserver;
    DVTNotificationToken *_queryDeletionObserver;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_observerQuery:(id)arg1 inWorkspace:(id)arg2;
- (id)_patternAttributes;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

@end

