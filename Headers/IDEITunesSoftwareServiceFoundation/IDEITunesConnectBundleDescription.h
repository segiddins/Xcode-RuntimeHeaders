//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEITunesSoftwareServiceFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface IDEITunesConnectBundleDescription : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_displayableDescription;
    NSString *_platformIdentifier;
    NSString *_bundleIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
@property(readonly) NSString *displayableDescription; // @synthesize displayableDescription=_displayableDescription;
@property(readonly) NSString *name; // @synthesize name=_name;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithITunesSoftwareBundleDescription:(id)arg1;
- (id)initWithName:(id)arg1 displayableDescription:(id)arg2 platformIdentifier:(id)arg3 bundleIdentifier:(id)arg4;

@end

