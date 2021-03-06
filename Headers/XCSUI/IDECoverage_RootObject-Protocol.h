//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSUI/IDECoverage_Base-Protocol.h>
#import <XCSUI/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol IDECoverage_RootObject <NSObject, IDECoverage_Base>
@property(readonly, nonatomic) BOOL ide_coverage_supportsJumpToSourceEditor;
@property(readonly, nonatomic) BOOL ide_coverage_showChangeColumn;
@property(readonly, nonatomic) BOOL ide_coverage_lazilyFetchesData;
@property(readonly, copy, nonatomic) NSArray *ide_coverage_targets;
@property(readonly, nonatomic) unsigned long long ide_coverage_targetCount;
@property(readonly, copy, nonatomic) NSString *ide_coverage_identifier;

@optional
@property(readonly, nonatomic) NSArray *creationErrors;
@end

