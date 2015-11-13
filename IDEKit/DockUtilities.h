//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DockUtilities : NSObject
{
    void *_contents;
    unsigned int _installerPort;
    int _tid;
    BOOL _transactionStarted;
}

+ (id)sharedInstance;
- (BOOL)modifyDockForPath:(id)arg1 operationType:(int)arg2 relativeTo:(id)arg3;
- (BOOL)dockContainsIconForAppPath:(id)arg1;
- (int)_itemIndexForPath:(id)arg1;
- (void)_loadItems;
- (BOOL)_endTransaction;
- (BOOL)_startTransaction;
- (id)_init;
- (id)init;

@end

