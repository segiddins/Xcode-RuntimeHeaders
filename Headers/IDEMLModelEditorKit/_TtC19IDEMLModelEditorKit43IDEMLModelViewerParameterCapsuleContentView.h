//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTWrapperView.h>

#import <IDEMLModelEditorKit/NSOutlineViewDelegate-Protocol.h>

@class MISSING_TYPE, NSOutlineView;

__attribute__((visibility("hidden")))
@interface _TtC19IDEMLModelEditorKit43IDEMLModelViewerParameterCapsuleContentView : DVTWrapperView <NSOutlineViewDelegate>
{
    MISSING_TYPE *outlineInset;
    MISSING_TYPE *outlineView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutBottomUp;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic, retain) NSOutlineView *outlineView; // @synthesize outlineView;

@end

