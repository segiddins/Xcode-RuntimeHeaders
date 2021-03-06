//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/Xcode3LibraryGroup.h>

@class NSArray, Xcode3SDK;

@interface Xcode3CompanionSDKLibraryGroup : Xcode3LibraryGroup
{
    Xcode3SDK *_sdk;
    Xcode3SDK *_companionSDK;
    NSArray *_libraries;
}

+ (id)libraryGroupForSDK:(id)arg1 companionSDK:(id)arg2;
- (void).cxx_destruct;
@property(readonly) Xcode3SDK *companionSDK; // @synthesize companionSDK=_companionSDK;
- (id)libraries;
- (id)displayName;
- (id)initWithSDK:(id)arg1 companionSDK:(id)arg2;

@end

