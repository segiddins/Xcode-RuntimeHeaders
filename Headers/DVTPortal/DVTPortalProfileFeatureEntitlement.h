//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface DVTPortalProfileFeatureEntitlement : NSObject
{
    NSString *_name;
    NSSet *_allowedValues;
}

- (void).cxx_destruct;
@property(readonly) NSSet *allowedValues; // @synthesize allowedValues=_allowedValues;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 allowedValues:(id)arg2;

@end
