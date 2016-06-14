//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAGradientLayer.h>

#import <IDEKit/IDENavigationHUDDisposableLayer-Protocol.h>
#import <IDEKit/IDENavigationHUDSelectableLayer-Protocol.h>
#import <IDEKit/IDENavigationHUDWindowLevelNavigableLayer-Protocol.h>

@class IDENavigationHUDController, IDENavigationHUDSelection, NSString;

@interface IDENavigationHUDAbstractWorkspaceWindowLayer : CAGradientLayer <IDENavigationHUDSelectableLayer, IDENavigationHUDWindowLevelNavigableLayer, IDENavigationHUDDisposableLayer>
{
    IDENavigationHUDController *_navigationHUDController;
}

@property(readonly) IDENavigationHUDController *navigationHUDController; // @synthesize navigationHUDController=_navigationHUDController;
- (void).cxx_destruct;
- (id)selectionForNavigatingRightOneTab;
- (id)selectionForNavigatingLeftOneTab;
- (id)selectionForNavigatingRight;
- (id)selectionForNavigatingLeft;
- (id)selectionForNavigatingDown;
- (id)selectionForNavigatingUp;
@property(readonly) BOOL representativeSelectionIsFinalForSingleMouseUp;
@property(readonly) IDENavigationHUDSelection *representativeSelection;
- (void)dispose;
- (id)initWithNavigationHUDController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

