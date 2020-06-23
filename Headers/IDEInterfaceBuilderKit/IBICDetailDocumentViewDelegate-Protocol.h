//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBViewDragDelegate-Protocol.h>

@class IBICDetailDocumentView, NSEvent, NSMenu, NSSet;

@protocol IBICDetailDocumentViewDelegate <IBViewDragDelegate>
- (void)detailDocumentViewDidFinishBandSelecting:(IBICDetailDocumentView *)arg1;
- (void)detailDocumentView:(IBICDetailDocumentView *)arg1 didUpdateBandSelectionRect:(struct CGRect)arg2 withEvent:(NSEvent *)arg3 andInitialSelection:(NSSet *)arg4;
- (NSSet *)detailDocumentViewInitialSelectionForBandSelection:(IBICDetailDocumentView *)arg1;
- (void)detailDocumentViewLayoutDidComplete:(IBICDetailDocumentView *)arg1;
- (void)detailDocumentViewWillLayoutTopDown:(IBICDetailDocumentView *)arg1;
- (void)detailDocumentView:(IBICDetailDocumentView *)arg1 cancelPreview:(id)arg2;
- (void)detailDocumentView:(IBICDetailDocumentView *)arg1 togglePreview:(id)arg2;
- (void)detailDocumentView:(IBICDetailDocumentView *)arg1 performDelete:(id)arg2;
- (void)detailDocumentView:(IBICDetailDocumentView *)arg1 didTrackContextMenuFromEvent:(NSEvent *)arg2;
- (void)detailDocumentView:(IBICDetailDocumentView *)arg1 willTrackContextMenuFromEvent:(NSEvent *)arg2;
- (NSMenu *)detailDocumentView:(IBICDetailDocumentView *)arg1 menuForEvent:(NSEvent *)arg2;
@end

