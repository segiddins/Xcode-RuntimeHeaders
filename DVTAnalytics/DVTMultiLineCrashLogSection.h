//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTAnalytics/DVTCrashLogSection.h>

@interface DVTMultiLineCrashLogSection : DVTCrashLogSection
{
    struct vector<_NSRange, std::__1::allocator<_NSRange>> _lineRanges;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)contentLines;
- (id)objectInInternalContentLinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfInternalContentLines;
- (id)initWithData:(id)arg1 labelStart:(const char *)arg2 labelEnd:(const char *)arg3 contentsStart:(const char *)arg4 contentsEnd:(const char *)arg5;

@end

