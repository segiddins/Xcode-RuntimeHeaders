//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEMemoryDataURLParts : NSObject
{
    int _processID;
    NSString *_memoryDataUUID;
}

+ (id)urlParts:(id)arg1;
+ (BOOL)isMemoryDataURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSString *memoryDataUUID; // @synthesize memoryDataUUID=_memoryDataUUID;
@property(readonly) int processID; // @synthesize processID=_processID;
- (id)_initWithProcessID:(int)arg1 memoryDataUUID:(id)arg2;

@end

