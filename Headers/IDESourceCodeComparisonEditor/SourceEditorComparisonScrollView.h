//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SourceEditor/SourceEditorScrollView.h>

@protocol SourceEditorComparisonScrollViewDelegate;

@interface SourceEditorComparisonScrollView : SourceEditorScrollView
{
    id <SourceEditorComparisonScrollViewDelegate> _sourceEditorComparisonScrollViewDelegate;
}

- (void).cxx_destruct;
@property __weak id <SourceEditorComparisonScrollViewDelegate> sourceEditorComparisonScrollViewDelegate; // @synthesize sourceEditorComparisonScrollViewDelegate=_sourceEditorComparisonScrollViewDelegate;
- (id)_pointInVisibleScroller:(struct CGPoint)arg1;
- (void)reflectScrolledClipView:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;

@end
