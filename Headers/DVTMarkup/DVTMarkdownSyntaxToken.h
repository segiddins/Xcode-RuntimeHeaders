//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTMarkdownLine, NSArray;

@interface DVTMarkdownSyntaxToken : NSObject
{
    struct cmark_node *node;
    DVTMarkdownLine *line;
    unsigned long long extentKind;
    struct _NSRange range;
    struct _NSRange subrange;
    NSArray *tree;
}

- (void).cxx_destruct;
- (BOOL)hasSameNodeTreeAsToken:(id)arg1;
@property(readonly, nonatomic) NSArray *nodeTree;
@property(readonly, nonatomic) unsigned long long nodeKind;
@property(readonly, nonatomic) unsigned long long sourceExtentKind;
@property(readonly, nonatomic) long long endColumn;
@property(readonly, nonatomic) long long startColumn;
@property(readonly, nonatomic) long long line;
@property(readonly, nonatomic) struct _NSRange subrangeInLine;
@property(readonly, nonatomic) struct _NSRange range;
- (id)initWithNode:(struct cmark_node *)arg1 type:(unsigned long long)arg2 range:(struct _NSRange)arg3 line:(id)arg4 subrangeInContainingLine:(struct _NSRange)arg5;

@end

