//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDETestBlueprintHostSettings : NSObject
{
    BOOL _hasBundleLoader;
    NSString *_hostBlueprintIdentifier;
}

@property(readonly) BOOL hasBundleLoader; // @synthesize hasBundleLoader=_hasBundleLoader;
@property(readonly) NSString *hostBlueprintIdentifier; // @synthesize hostBlueprintIdentifier=_hostBlueprintIdentifier;
- (void).cxx_destruct;
- (id)initWithHostBlueprintIdentifier:(id)arg1 hasBundleLoader:(BOOL)arg2;

@end

