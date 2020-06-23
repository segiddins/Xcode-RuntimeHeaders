//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTPortalCode : NSObject
{
    NSString *_identifier;
    long long _code;
}

+ (id)portalCodeWithIdentifier:(id)arg1;
+ (id)_orderedPortalCodeIdentifierToCodeMap;
+ (id)_orderedPortalCodeIdentifierToCodeMap:(id)arg1;
+ (id)successCode;
+ (id)portalCodes;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long code; // @synthesize code=_code;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithCode:(long long)arg1 identifier:(id)arg2;
- (id)initWithExtension:(id)arg1;

@end

