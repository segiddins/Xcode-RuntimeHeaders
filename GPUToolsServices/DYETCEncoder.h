//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUToolsServices/DYEncoder.h>

@interface DYETCEncoder : DYEncoder
{
}

- (id)decode:(id)arg1 format:(unsigned int)arg2 level:(unsigned int)arg3 width:(unsigned int)arg4 height:(unsigned int)arg5 options:(id)arg6;
- (id)encode:(id)arg1 level:(unsigned int)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 options:(id)arg5 errorCode:(int *)arg6;
- (id)describeOptions:(id)arg1;
- (id)options;
- (BOOL)supportsFormat:(unsigned int)arg1;
- (id)name;

@end

