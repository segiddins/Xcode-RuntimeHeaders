//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (DTDKExtensions)
+ (id)DTDK_stringWithLooseUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)DTDK_stringWithLooseUTF8String:(const char *)arg1;
- (id)DTDK_initWithLooseUTF8String:(const char *)arg1 length:(unsigned long long)arg2 sanitize:(BOOL)arg3;
- (id)DTDK_initWithLooseUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
- (id)DTDK_initWithLooseUTF8String:(const char *)arg1;
- (_Bool)DTDK_safeBoolValue;
- (unsigned long long)DTDK_safeUnsignedLongLongValue;
@end

