//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsFoundation/DTOutputStream.h>

@interface DTFileOutputStream : DTOutputStream
{
    int _fileDescriptor;
    BOOL _closeFDWhenStreamIsClosed;
}

+ (id)nullFileOutputStream;
+ (id)stderrFileOutputStream;
+ (id)stdoutFileOutputStream;
- (void)close;
- (void)flush;
- (void)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)dealloc;
- (void)_primitiveClose;
- (id)init;
- (id)initWithFileDescriptor:(int)arg1 closeFileDescriptorWhenStreamIsClosed:(BOOL)arg2;

@end

