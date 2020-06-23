//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEPlaygroundExecutionParameters, NSData, NSDate, NSString;
@protocol IDEPlaygroundDataHandlerDelegate;

@protocol IDEPlaygroundDataHandler <NSObject>
@property __weak id <IDEPlaygroundDataHandlerDelegate> delegate;
- (BOOL)handlePlaygroundData:(NSData *)arg1 dataIdentifier:(NSString *)arg2 resultDate:(NSDate *)arg3 dataVersion:(unsigned long long)arg4 executionParameters:(IDEPlaygroundExecutionParameters *)arg5 error:(id *)arg6;
@end

