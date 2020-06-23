//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>

@class NSString;

@interface IBICAppearancePlatformSpecification : NSObject <IBBinaryArchiving>
{
    NSString *_appearanceName;
    long long _identifier;
}

- (void).cxx_destruct;
@property(readonly) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *appearanceName; // @synthesize appearanceName=_appearanceName;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToAppearancePlatformSpecification:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithAppearanceName:(id)arg1 identifier:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

