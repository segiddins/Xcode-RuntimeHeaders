//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebugger/NSObject-Protocol.h>

@class NSString;

@protocol DYPShaderDebuggerExecutedLocation <NSObject>
@property(nonatomic, readonly) unsigned long long locationType;
@property(nonatomic, readonly) unsigned long long column;
@property(nonatomic, readonly) unsigned long long line;
@property(nonatomic, readonly) NSString *filePath;
@end

