//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEOpenQuicklyResult.h>

@class NSArray;

@interface IDEOpenQuicklyAlternateGroupResult : IDEOpenQuicklyResult
{
    IDEOpenQuicklyResult *_primaryResult;
    NSArray *_alternatesIncludingPrimaryChoice;
    NSArray *_alternatesExcludingPrimaryChoice;
}

+ (id)alternateGroupResultForAlternates:(id)arg1;
+ (id)orderedResutlsByCombiningAlternates:(id)arg1;
+ (id)flattenAndOrderAlternates:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSArray *alternatesExcludingPrimaryChoice; // @synthesize alternatesExcludingPrimaryChoice=_alternatesExcludingPrimaryChoice;
@property(readonly) NSArray *alternatesIncludingPrimaryChoice; // @synthesize alternatesIncludingPrimaryChoice=_alternatesIncludingPrimaryChoice;
@property(readonly) IDEOpenQuicklyResult *primaryResult; // @synthesize primaryResult=_primaryResult;
- (id)childResults;
- (BOOL)representsAlternativeOfResult:(id)arg1;
- (unsigned long long)hashForAlternateIdentity;
- (id)valueStandingInForForAlternateIdentity;
- (BOOL)representsSameResult:(id)arg1;
- (BOOL)representsSameResultAsAlternateGroupResult:(id)arg1;
- (unsigned long long)hashOfResultIdentity;
- (id)flattenToPrimaryResult;
- (BOOL)isFromPoject;
- (id)sourceSDKFilePath;
- (id)location;
- (BOOL)isSymbolic;
- (id)updatedResultForQuery:(id)arg1;

@end
