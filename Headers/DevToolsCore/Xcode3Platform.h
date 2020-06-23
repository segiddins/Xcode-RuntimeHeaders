//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, XCPlatformSpecification, Xcode3SDK;

@interface Xcode3Platform : NSObject
{
    NSArray *_SDKs;
    XCPlatformSpecification *_xcPlatform;
}

+ (id)platformForName:(id)arg1;
+ (id)platformForPlatformSpecification:(id)arg1;
+ (id)allPlatforms;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) XCPlatformSpecification *xcPlatform; // @synthesize xcPlatform=_xcPlatform;
- (id)description;
@property(readonly) NSString *platformDomain;
@property(readonly) Xcode3SDK *defaultSDK;
@property(readonly) NSArray *SDKs;
@property(readonly) NSString *userDescription;
@property(readonly) NSString *version;
@property(readonly) NSString *path;
@property(readonly) NSString *name;
- (id)initWithXCPlatformSpecification:(id)arg1;

@end

