//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class DVTTextAnnotation, NSView, NSWindow;

@protocol DVTTextSidebar <NSObject>
- (void)getParagraphRect:(struct CGRect *)arg1 firstLineRect:(struct CGRect *)arg2 forLineNumber:(unsigned long long)arg3;
- (struct CGRect)sidebarMarkerRectForTextAnnotation:(DVTTextAnnotation *)arg1;
- (NSView *)sidebarMarkerParentView;
- (NSView *)viewForPopover;
- (NSWindow *)window;
@end

