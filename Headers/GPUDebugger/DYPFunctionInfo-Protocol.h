//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol DYPFunctionInfo <NSObject>
@property(readonly, nonatomic) NSURL *sourceURL;
@property(readonly, nonatomic) unsigned long long functionID;
@property(readonly, nonatomic) BOOL isOnlineCompiled;
@property(readonly, nonatomic) NSString *filePath;
@end

