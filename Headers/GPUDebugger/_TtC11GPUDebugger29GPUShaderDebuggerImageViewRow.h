//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSAccessibilityElement.h>

#import <GPUDebugger/NSAccessibilityGroup-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11GPUDebugger29GPUShaderDebuggerImageViewRow : NSAccessibilityElement <NSAccessibilityGroup>
{
    MISSING_TYPE *imageView;
    MISSING_TYPE *accessibilityChildrenCache;
    MISSING_TYPE *pixelSize;
    MISSING_TYPE *y;
}

- (void).cxx_destruct;
- (id)init;
- (id)accessibilityParent;
- (struct CGRect)accessibilityFrame;
- (id)accessibilitySelectedChildren;
@property(nonatomic, readonly) id accessibilityFocusedUIElement;
- (id)accessibilityChildren;
- (id)accessibilityVisibleChildren;
- (struct CGRect)accessibilityFrameInParentSpace;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)isAccessibilitySelected;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;

@end

