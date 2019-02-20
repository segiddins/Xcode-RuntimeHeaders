//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSTrackingArea;

@interface _IDEDocBookmarkButton : NSButton
{
    BOOL _inBookmarksList;
    NSTrackingArea *_trackingArea;
}

@property(retain) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property BOOL inBookmarksList; // @synthesize inBookmarksList=_inBookmarksList;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;

@end
