//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTLibraryKit/DVTLibraryAsset.h>

#import <IDESpriteKitParticleEditor/NSSecureCoding-Protocol.h>

@class NSString;

@interface SKObjectLibraryAsset : DVTLibraryAsset <NSSecureCoding>
{
    NSString *_typeIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)assetWithSKObject:(id)arg1 title:(id)arg2 subTitle:(id)arg3 summary:(id)arg4 image:(id)arg5 typeIdentifier:(id)arg6;
+ (id)assetWithSKObject:(id)arg1 title:(id)arg2 subTitle:(id)arg3 summary:(id)arg4 image:(id)arg5 typeIdentifier:(id)arg6 withUDID:(id)arg7;
@property(retain, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSKObject:(id)arg1 title:(id)arg2 subTitle:(id)arg3 summary:(id)arg4 image:(id)arg5 typeIdentifier:(id)arg6 withUDID:(id)arg7;

@end

