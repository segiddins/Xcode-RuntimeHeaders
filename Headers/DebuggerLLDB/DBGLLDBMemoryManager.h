//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBGLLDBMemoryManager : NSObject
{
    id _workspaceClosedNotificationObserver;
    id _memoryPressureNotificationObserver;
}

+ (void)stop;
+ (void)start;
- (void).cxx_destruct;
- (void)_invalidate;
- (id)_initInternal;
- (void)_memoryPressureDetected;
- (id)init;

@end

