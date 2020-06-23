//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DBGDataValueFormat : NSObject
{
    NSString *_displayName;
    unsigned long long _tag;
}

+ (id)binaryFormatUsingTag:(unsigned long long)arg1;
+ (id)osTypeFormatUsingTag:(unsigned long long)arg1;
+ (id)octalFormatUsingTag:(unsigned long long)arg1;
+ (id)unsignedDecimalFormatUsingTag:(unsigned long long)arg1;
+ (id)decimalFormatUsingTag:(unsigned long long)arg1;
+ (id)hexFormatUsingTag:(unsigned long long)arg1;
+ (id)naturalFormatUsingTag:(unsigned long long)arg1;
@property(readonly) unsigned long long tag; // @synthesize tag=_tag;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)initWithDisplayName:(id)arg1 tag:(unsigned long long)arg2;

@end

