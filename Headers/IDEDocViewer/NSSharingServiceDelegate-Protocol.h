//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEDocViewer/NSObject-Protocol.h>

@class NSArray, NSError, NSImage, NSSharingService, NSView, NSWindow;

@protocol NSSharingServiceDelegate <NSObject>

@optional
- (NSView *)anchoringViewForSharingService:(NSSharingService *)arg1 showRelativeToRect:(struct CGRect *)arg2 preferredEdge:(unsigned long long *)arg3;
- (NSWindow *)sharingService:(NSSharingService *)arg1 sourceWindowForShareItems:(NSArray *)arg2 sharingContentScope:(long long *)arg3;
- (NSImage *)sharingService:(NSSharingService *)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(NSSharingService *)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (void)sharingService:(NSSharingService *)arg1 didShareItems:(NSArray *)arg2;
- (void)sharingService:(NSSharingService *)arg1 didFailToShareItems:(NSArray *)arg2 error:(NSError *)arg3;
- (void)sharingService:(NSSharingService *)arg1 willShareItems:(NSArray *)arg2;
@end

