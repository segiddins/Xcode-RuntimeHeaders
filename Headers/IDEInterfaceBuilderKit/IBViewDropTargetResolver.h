//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBDropTargetResolver.h>

@class NSString, NSView;

@interface IBViewDropTargetResolver : IBDropTargetResolver
{
}

- (BOOL)canAcceptDragInfo:(id)arg1;
@property(readonly) NSString *viewPasteboardType;
@property(readonly) NSView *ibDesignableContentView;
- (id)editorView;
@property(readonly) NSView *editedView;

@end

