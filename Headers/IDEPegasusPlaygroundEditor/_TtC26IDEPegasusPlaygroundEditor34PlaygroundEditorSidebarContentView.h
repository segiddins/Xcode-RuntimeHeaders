//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEPegasusPlaygroundEditor/_TtC26IDEPegasusPlaygroundEditor27PlaygroundEditorSidebarView.h>

#import <IDEPegasusPlaygroundEditor/NSAccessibilityGroup-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC26IDEPegasusPlaygroundEditor34PlaygroundEditorSidebarContentView : _TtC26IDEPegasusPlaygroundEditor27PlaygroundEditorSidebarView <NSAccessibilityGroup>
{
    MISSING_TYPE *sidebar;
    MISSING_TYPE *annotations;
    MISSING_TYPE *lineIdentifierToAnnotation;
    MISSING_TYPE *currentDisplayedAnnotations;
    MISSING_TYPE *hoveringAnnotation;
    MISSING_TYPE *sortedAnnotationAccessibilityChildren;
}

- (void).cxx_destruct;
- (void)resetCursorRects;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)accessibilityChildren;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end

