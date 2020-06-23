//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>
#import <IBFoundation/NSCopying-Protocol.h>
#import <IBFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface IBUserDefinedRuntimeAttribute : NSObject <NSSecureCoding, NSCopying, IBBinaryArchiving>
{
    BOOL _localized;
    NSString *_typeIdentifier;
    NSString *_keyPath;
    id _value;
}

+ (id)decodeWithBinaryUnarchiver:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)customAttributeWithKeyPath:(id)arg1 value:(id)arg2 isLocalized:(BOOL)arg3 andTypeIdentifier:(id)arg4;
+ (id)customAttributeWithKeyPath:(id)arg1 sizeValue:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic, getter=isLocalized) BOOL localized; // @synthesize localized=_localized;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(readonly, nonatomic) long long type;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToUserDefinedRuntimeAttribute:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1 value:(id)arg2 isLocalized:(BOOL)arg3 andTypeIdentifier:(id)arg4;

// Remaining properties
@property(readonly) Class superclass;

@end

