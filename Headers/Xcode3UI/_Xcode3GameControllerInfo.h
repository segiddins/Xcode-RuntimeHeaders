//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _Xcode3GameControllerInfo : NSObject
{
    BOOL _enabled;
    NSString *_name;
    NSString *_identifier;
}

+ (id)gameControllerInfoWithName:(id)arg1 identifier:(id)arg2;
- (void).cxx_destruct;
@property BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *name; // @synthesize name=_name;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

