//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSCopying-Protocol.h>

@class NSString;

@interface IBKeyEquivalent : NSObject <NSCopying>
{
    NSString *_key;
    unsigned long long _modifierMask;
}

+ (id)keyEquivalentFromMenuItem:(id)arg1;
@property(readonly) unsigned long long modifierMask; // @synthesize modifierMask=_modifierMask;
@property(readonly) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToKeyEquivalent:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKey:(id)arg1 andModifierMask:(unsigned long long)arg2;

@end

