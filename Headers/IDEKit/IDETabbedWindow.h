//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindow.h>

#import <IDEKit/NSKeyedArchiverDelegate-Protocol.h>

@class NSString;

@interface IDETabbedWindow : NSWindow <NSKeyedArchiverDelegate>
{
}

- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (id)dataByEncodingRestorableState;
- (void)restoreStateWithData:(id)arg1;
- (void)restoreStateWithCoder:(id)arg1;
- (void)closeOtherTabs:(id)arg1;
- (void)closeWindowAsTab:(id)arg1;
- (id)currentlySelectedTabbedWindow;
@property(setter=setTabBarIsVisible:) BOOL tabBarIsVisible;
- (BOOL)validateMenuItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

