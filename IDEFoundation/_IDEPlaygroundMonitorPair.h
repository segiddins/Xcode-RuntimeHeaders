//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEPlaygroundAuxiliarySourceMonitor;

@interface _IDEPlaygroundMonitorPair : NSObject
{
    IDEPlaygroundAuxiliarySourceMonitor *_playgroundMonitor;
    IDEPlaygroundAuxiliarySourceMonitor *_playgroundPageMonitor;
}

@property(readonly) IDEPlaygroundAuxiliarySourceMonitor *playgroundPageMonitor; // @synthesize playgroundPageMonitor=_playgroundPageMonitor;
@property(readonly) IDEPlaygroundAuxiliarySourceMonitor *playgroundMonitor; // @synthesize playgroundMonitor=_playgroundMonitor;
- (void).cxx_destruct;
- (id)initWithPlaygroundMonitor:(id)arg1 playgroundPageMonitor:(id)arg2;

@end

