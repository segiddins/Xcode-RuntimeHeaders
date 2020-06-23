//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/NSSecureCoding-Protocol.h>

@class DTXMessage, NSString;

@interface DTAssetRequest : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_assetPath;
}

+ (BOOL)supportsSecureCoding;
+ (id)requestWithIdentifier:(id)arg1 path:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *assetPath; // @synthesize assetPath=_assetPath;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) DTXMessage *message;
- (id)initWithIdentifier:(id)arg1 path:(id)arg2;

@end

