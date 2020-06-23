//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTDiffDataSource.h>

@class NSData, NSString;

@interface _DVTDiffLineDataSourceConsistentCopy : DVTDiffDataSource
{
    unsigned long long _tokenCount;
    NSData *_tokenStorage;
    CDStruct_3dd9eb72 *_rawTokenStorage;
    NSString *_arrangedContent;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)arrangedContent;
- (long long)numberOfDiffTokensInDiffDescriptor:(id)arg1;
- (void)getDiffTokens:(CDStruct_3dd9eb72 *)arg1 inDiffDescriptor:(id)arg2 inRange:(struct _NSRange)arg3;
- (CDStruct_3dd9eb72)diffTokenInDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
- (id)initWithContent:(id)arg1 arrangedContent:(id)arg2 tokenStorage:(id)arg3;

@end

