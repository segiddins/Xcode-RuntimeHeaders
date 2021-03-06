//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTCustomDataOwnership, NSString;

@interface DVTCustomDataSpecifier : NSObject
{
    NSString *_name;
    NSString *_groupingName;
    DVTCustomDataOwnership *_ownership;
}

+ (id)customDataSpecifierWithName:(id)arg1 groupingName:(id)arg2;
+ (id)customDataSpecifierWithName:(id)arg1 groupingName:(id)arg2 ownership:(id)arg3;
- (void).cxx_destruct;
@property(readonly) DVTCustomDataOwnership *ownership; // @synthesize ownership=_ownership;
@property(readonly) NSString *groupingName; // @synthesize groupingName=_groupingName;
@property(readonly) NSString *name; // @synthesize name=_name;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end

