//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEPegasusPlaygroundEditor/NSObject-Protocol.h>

@class IDEPlaygroundPageSharedContext, IDEToybox, NSArray, NSString;

@protocol IDEPlaygroundHostingDocument <NSObject>
@property(nonatomic, readonly) NSArray *sourceCodePlaygroundSectionCharacterRanges;
@property(nonatomic, readonly) NSArray *sourceCodePlaygroundSections;
@property(nonatomic, readonly) NSArray *playgroundSections;
@property(nonatomic, readonly) NSString *contents;
@property(nonatomic, readonly) NSArray *executionIssues;
@property(nonatomic, readonly) unsigned long long executionState;
@property(nonatomic, readonly) IDEToybox *toybox;
@property(nonatomic, readonly) IDEPlaygroundPageSharedContext *playgroundPageContext;
@property(nonatomic, readonly) BOOL isLegacyDocument;

@optional
- (struct _NSRange)lineRangeForLineRange:(struct _NSRange)arg1 fromTimestamp:(double)arg2 toTimestamp:(double)arg3;
@end
