//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DTKPDataStreamMemoryRecord : NSObject
{
    const void *_buffer;
    unsigned long long _bufferSize;
    CDUnknownBlockType _destructor;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType destructor; // @synthesize destructor=_destructor;
@property(nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
@property(nonatomic) const void *buffer; // @synthesize buffer=_buffer;

@end

