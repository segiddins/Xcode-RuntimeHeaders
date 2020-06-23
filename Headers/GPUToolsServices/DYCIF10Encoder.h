//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUToolsServices/DYEncoder.h>

@interface DYCIF10Encoder : DYEncoder
{
}

+ (void)initialize;
- (unsigned int)decodedFormat:(unsigned int)arg1 options:(id)arg2;
- (id)decode:(id)arg1 format:(unsigned int)arg2 level:(unsigned int)arg3 width:(unsigned int)arg4 height:(unsigned int)arg5 bytesPerRow:(unsigned int)arg6 options:(id)arg7;
- (id)encode:(id)arg1 level:(unsigned int)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 options:(id)arg5 errorCode:(int *)arg6;
- (id)describeOptions:(id)arg1;
- (BOOL)supportsFormat:(unsigned int)arg1;
- (id)options;
- (id)name;

@end

