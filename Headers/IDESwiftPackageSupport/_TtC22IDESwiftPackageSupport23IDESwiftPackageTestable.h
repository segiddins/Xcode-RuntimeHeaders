//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEStandardTestable.h>

@class NSString;
@protocol IDEBuildable, IDETestableProvider;

@interface _TtC22IDESwiftPackageSupport23IDESwiftPackageTestable : IDEStandardTestable
{
    // Error parsing type: , name: testBundle
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

