//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTTableRowView.h>

@class NSView;

@interface IDEDebugNavigatorStackFrameRowView : DVTTableRowView
{
    BOOL _showsPointerAnnotationView;
    NSView *_pointerAnnotationView;
}

+ (void)registerNibWithOutlineView:(id)arg1 forIdentifier:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) BOOL showsPointerAnnotationView; // @synthesize showsPointerAnnotationView=_showsPointerAnnotationView;
@property(retain) NSView *pointerAnnotationView; // @synthesize pointerAnnotationView=_pointerAnnotationView;
- (void)_updatePointerAnnotationViewFrame;
- (void)_updateInstructionPointerAnnotation;
- (void)setFrameSize:(struct CGSize)arg1;

@end

