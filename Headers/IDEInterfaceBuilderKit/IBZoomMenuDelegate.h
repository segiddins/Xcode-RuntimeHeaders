//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractEditorMenuDelegate.h>

#import <IDEInterfaceBuilderKit/NSMenuDelegate-Protocol.h>

@class NSString;

@interface IBZoomMenuDelegate : IBAbstractEditorMenuDelegate <NSMenuDelegate>
{
    BOOL _hasInstalledZoomLevelMenuItems;
    SEL _zoomAction;
}

@property(nonatomic) SEL zoomAction; // @synthesize zoomAction=_zoomAction;
- (void)menuNeedsUpdate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

