//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class DVTTextAnnotation, DVTTextDocumentLocation, NSImage;

@protocol DVTTextAnnotationDisplayDelegate <NSObject>
- (void)textAnnotation:(DVTTextAnnotation *)arg1 sidebarMarkerImageChanged:(NSImage *)arg2;
- (void)textAnnotation:(DVTTextAnnotation *)arg1 locationChanged:(DVTTextDocumentLocation *)arg2;
@end

