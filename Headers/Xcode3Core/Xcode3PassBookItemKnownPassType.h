//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface Xcode3PassBookItemKnownPassType : NSObject
{
    NSString *_passTypeIdentifierWithPrefix;
    NSString *_passTypeIdentifier;
}

@property(readonly, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(readonly, nonatomic) NSString *passTypeIdentifierWithPrefix; // @synthesize passTypeIdentifierWithPrefix=_passTypeIdentifierWithPrefix;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPassTypeIdentifierWithPrefix:(id)arg1 passTypeIdentifier:(id)arg2;

@end

