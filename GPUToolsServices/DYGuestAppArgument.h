//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsServices/NSCoding-Protocol.h>
#import <GPUToolsServices/NSCopying-Protocol.h>

@class NSString;

@interface DYGuestAppArgument : NSObject <NSCoding, NSCopying>
{
    BOOL _enabled;
    NSString *_stringValue;
}

+ (id)argumentWithValue:(id)arg1 enabled:(BOOL)arg2;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

