//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface DVTMarkdownLine : NSObject
{
    NSMutableArray *tokens;
    unsigned long long lineNumber;
    struct _NSRange range;
}

- (void).cxx_destruct;
- (BOOL)isEqualToLine:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSArray *tokens;
@property(readonly, nonatomic) unsigned long long lineNumber;
@property(readonly, nonatomic) struct _NSRange range;
- (void)appendToken:(id)arg1;
- (id)initWithRange:(struct _NSRange)arg1 lineNumber:(unsigned long long)arg2;

@end

