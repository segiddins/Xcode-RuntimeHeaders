//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCDiffTextDataSource.h>

@interface XCDiffWordDataSource : XCDiffTextDataSource
{
    void *_tokenStorage;
}

+ (id)diffWordDataSourceWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
+ (void)initialize;
- (long long)numberOfDiffTokensInDiffDescriptor:(id)arg1;
- (struct _XCDiffToken)diffTokenInDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
- (void)didChange;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

