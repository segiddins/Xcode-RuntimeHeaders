//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDESourceEditor/DVTTextAnnotationDelegate-Protocol.h>

@class DVTMessageBubbleAnnotation, DVTSourceTextView, NSEvent;

@protocol DVTMessageBubbleAnnotationDelegate <DVTTextAnnotationDelegate>

@optional
- (void)didClickMessageBubbleForAnnotation:(DVTMessageBubbleAnnotation *)arg1 onIcon:(BOOL)arg2 inTextView:(DVTSourceTextView *)arg3 event:(NSEvent *)arg4;
@end

