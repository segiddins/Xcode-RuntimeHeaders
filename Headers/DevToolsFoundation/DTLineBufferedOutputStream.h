//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsFoundation/DTFilterOutputStream.h>

@interface DTLineBufferedOutputStream : DTFilterOutputStream
{
    char *_bufferedBytes;
    unsigned long long _numBufferedBytes;
}

- (void)close;
- (void)flush;
- (void)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (id)initWithNextOutputStream:(id)arg1;

@end

