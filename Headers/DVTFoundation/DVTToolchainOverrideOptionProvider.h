//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTToolchainRegistry, NSArray;

@interface DVTToolchainOverrideOptionProvider : NSObject
{
    DVTToolchainRegistry *_registry;
    BOOL _isAppleInternal;
}

+ (id)keyPathsForValuesAffectingShouldOfferOptions;
+ (id)keyPathsForValuesAffectingOptionsIncludingDoNotOverride;
+ (id)keyPathsForValuesAffectingOptionsExcludingDoNotOverride;
+ (id)defaultProvider;
- (void).cxx_destruct;
@property(readonly) DVTToolchainRegistry *registry; // @synthesize registry=_registry;
@property(readonly) BOOL shouldOfferOptions;
@property(readonly) NSArray *optionsIncludingDoNotOverride;
@property(readonly) NSArray *optionsExcludingDoNotOverride;
- (id)initWithToolchainRegistry:(id)arg1 isAppleInternal:(BOOL)arg2;

@end

