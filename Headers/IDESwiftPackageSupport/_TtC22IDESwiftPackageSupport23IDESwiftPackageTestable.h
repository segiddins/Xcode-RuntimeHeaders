//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEStandardTestable.h>

@class MISSING_TYPE, NSString;
@protocol IDEBuildable, IDETestableProvider;

@interface _TtC22IDESwiftPackageSupport23IDESwiftPackageTestable : IDEStandardTestable
{
    MISSING_TYPE *testBundle;
}

+ (id)keyPathsForValuesAffectingName;
- (void).cxx_destruct;
- (id)initWithWorkspace:(id)arg1 indexable:(id)arg2;
- (id)init;
- (id)parentBuildableInWorkspace:(id)arg1;
@property(nonatomic, readonly) BOOL isUITest;
@property(nonatomic, readonly) id <IDEBuildable> primaryBuildable;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) id <IDETestableProvider> testableProvider;
- (void)primitiveInvalidate;

@end

