//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class GPUTraceDependencySubEditor;

__attribute__((visibility("hidden")))
@interface GPUTraceDependencySubEditorMagnificationView : NSView
{
    GPUTraceDependencySubEditor *_delegate;
}

- (void).cxx_destruct;
@property __weak GPUTraceDependencySubEditor *delegate; // @synthesize delegate=_delegate;
- (void)_didEndMagnifying;
- (void)_didMagnify;
- (void)_willBeginMagnifying;

@end

