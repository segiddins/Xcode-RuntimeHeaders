//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTMarkdownDocumentOwnershipToken : NSObject
{
    struct cmark_node *documentNode;
}

- (void)dealloc;
- (id)initWithDocumentNode:(struct cmark_node *)arg1;

@end

