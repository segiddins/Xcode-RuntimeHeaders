//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXViewListModule.h>

@interface XCActivityViewerModule : PBXViewListModule
{
}

+ (BOOL)openAtLaunch;
+ (id)sharedActivityViewer;
+ (id)_newPreconfiguredActivityViewer;
- (struct CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(struct CGRect)arg2;
- (BOOL)windowShouldZoom:(id)arg1 toFrame:(struct CGRect)arg2;
- (void)saveWindowState;
- (Class)moduleWindowClass;
- (unsigned long long)moduleWindowStyleMask;

@end
