//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESwiftPackageSupport/_TtC22IDESwiftPackageSupport31IDESwiftPackageProductBlueprint.h>

@class DVTFilePath, IDETestBlueprintHostSettings, MISSING_TYPE, NSString;

@interface _TtC22IDESwiftPackageSupport41IDESwiftPackageTestBundleProductBlueprint : _TtC22IDESwiftPackageSupport31IDESwiftPackageProductBlueprint
{
    MISSING_TYPE *testable;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) NSString *packageProductTypeIdentifier;
@property(nonatomic, readonly) DVTFilePath *bundleBaselineRecordFilePath;
@property(nonatomic, readonly) IDETestBlueprintHostSettings *testBlueprintHostSettings;
- (BOOL)isUnitTest;
- (void)primitiveInvalidate;

// Remaining properties
@property(nonatomic, readonly) BOOL unitTest;

@end

