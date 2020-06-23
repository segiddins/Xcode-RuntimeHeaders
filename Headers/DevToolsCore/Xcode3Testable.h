//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEStandardTestable.h>

@class Xcode3Target;
@protocol DVTInvalidation;

@interface Xcode3Testable : IDEStandardTestable
{
    Xcode3Target *_target;
    id <DVTInvalidation> _blueprintsObserver;
}

+ (id)keyPathsForValuesAffectingName;
+ (id)keyPathsForValuesAffectingTestableProvider;
- (void).cxx_destruct;
@property(retain) Xcode3Target *target; // @synthesize target=_target;
- (void)blueprintsDidChange:(id)arg1;
- (id)primaryBuildable;
- (BOOL)isUITest;
- (id)name;
- (id)testableProvider;
- (void)primitiveInvalidate;
- (id)initWithTarget:(id)arg1;

@end
