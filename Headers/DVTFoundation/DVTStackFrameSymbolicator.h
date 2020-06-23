//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, NSUUID;

@interface DVTStackFrameSymbolicator : NSObject
{
    NSURL *_debugSymbolsFileURL;
    NSUUID *_uuid;
    NSString *_architectureName;
    unsigned long long _loadAddress;
}

@property(nonatomic) unsigned long long loadAddress; // @synthesize loadAddress=_loadAddress;
@property(retain, nonatomic) NSString *architectureName; // @synthesize architectureName=_architectureName;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSURL *debugSymbolsFileURL; // @synthesize debugSymbolsFileURL=_debugSymbolsFileURL;
- (void).cxx_destruct;
- (id)stackFrameUsingXPCForAddress:(unsigned long long)arg1 uuid:(id *)arg2 error:(id *)arg3;
- (id)stackFrameForAddress:(unsigned long long)arg1 uuid:(id *)arg2 error:(id *)arg3;
- (id)stackFrameForAddress:(unsigned long long)arg1 error:(id *)arg2;
- (id)_primitiveStackFrameForAddress:(unsigned long long)arg1 uuid:(id *)arg2 error:(id *)arg3;
- (id)initWithDebugSymbolsFileURL:(id)arg1 loadAddress:(unsigned long long)arg2 architectureName:(id)arg3 error:(id *)arg4;
- (id)initWithUUID:(id)arg1 loadAddress:(unsigned long long)arg2 architectureName:(id)arg3 error:(id *)arg4;

@end

