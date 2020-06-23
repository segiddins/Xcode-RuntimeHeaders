//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeltaFoundation/DEDataSource.h>

@class NSArray;

@interface DEWordDataSource : DEDataSource
{
    NSArray *_tokenStorage;
    BOOL _skipTokenizingNewlines;
}

- (void).cxx_destruct;
@property BOOL skipTokenizingNewlines; // @synthesize skipTokenizingNewlines=_skipTokenizingNewlines;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)didChange;
- (long long)numberOfDiffTokensInDiffDescriptor:(id)arg1;
- (void)getDiffTokens:(CDStruct_3dd9eb72 *)arg1 inDiffDescriptor:(id)arg2 inRange:(struct _NSRange)arg3;
- (CDStruct_3dd9eb72)diffTokenInDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
- (id)_tokenStorageForDescriptor:(id)arg1;

@end
