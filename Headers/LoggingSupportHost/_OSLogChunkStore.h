//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _OSLogChunkStore : NSObject
{
    const void *_ptr;
    unsigned long long _sz;
}

- (void)enumerateChunksUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateChunksInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithBytes:(const void *)arg1 size:(unsigned long long)arg2;

@end

