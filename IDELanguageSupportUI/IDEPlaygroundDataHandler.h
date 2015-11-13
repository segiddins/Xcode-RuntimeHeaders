//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface IDEPlaygroundDataHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_dataHandlingQueue;
    NSMapTable *_dataHandlerToIdentifierMapTable;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)handlePlaygroundData:(id)arg1 metaData:(id)arg2 dataIdentifier:(id)arg3 resultDate:(id)arg4 version:(unsigned long long)arg5 executionParameters:(id)arg6;
- (id)init;

@end

