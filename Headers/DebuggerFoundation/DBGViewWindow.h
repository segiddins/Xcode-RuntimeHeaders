//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerFoundation/DBGViewSurface.h>

#import <DebuggerFoundation/DBGSelectableViewObject-Protocol.h>

@class DBGApplicationObject, DBGLayoutConstraintSet, DBGScreenObject, DBGWindowControllerObject, NSMapTable, NSString;

@interface DBGViewWindow : DBGViewSurface <DBGSelectableViewObject>
{
    NSMapTable *_viewAddressesToViewSurfaces;
    BOOL _visible;
    DBGLayoutConstraintSet *_layoutConstraintSet;
    unsigned long long _orientation;
    DBGViewWindow *_attachedSheet;
    DBGScreenObject *_screen;
    DBGWindowControllerObject *_owningWindowController;
    double _screenBackingScale;
    DBGApplicationObject *_application;
    NSString *_attachedSheetIdentifier;
}

@property(retain) NSString *attachedSheetIdentifier; // @synthesize attachedSheetIdentifier=_attachedSheetIdentifier;
@property(nonatomic) __weak DBGApplicationObject *application; // @synthesize application=_application;
@property(nonatomic) double screenBackingScale; // @synthesize screenBackingScale=_screenBackingScale;
@property(retain) DBGWindowControllerObject *owningWindowController; // @synthesize owningWindowController=_owningWindowController;
@property(retain) DBGScreenObject *screen; // @synthesize screen=_screen;
@property(retain) DBGViewWindow *attachedSheet; // @synthesize attachedSheet=_attachedSheet;
@property(getter=isVisible) BOOL visible; // @synthesize visible=_visible;
@property unsigned long long orientation; // @synthesize orientation=_orientation;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)forwardFocusToViewObject;
- (id)selectableViewObjectForIdentifier:(id)arg1;
- (void)updateSelectableViewObjectsCache;
@property(retain) DBGLayoutConstraintSet *layoutConstraintSet; // @synthesize layoutConstraintSet=_layoutConstraintSet;
- (id)constraintForAddress:(id)arg1;
- (id)childViewSurfaceForAddress:(id)arg1;
- (id)window;
- (id)initWithViewDescriber:(id)arg1 parent:(id)arg2 dictionary:(id)arg3;
@property(readonly) DBGViewSurface *contentView;
- (id)computedSecondaryDisplayName;
- (id)_dbgLayoutConstraintFromConstraintNode:(id)arg1 forRequest:(id)arg2;
- (void)_collectNodesInGroupWithID:(id)arg1 inContainer:(id)arg2 startingWithSnapshotNode:(id)arg3;
- (void)_updateConstraintsForRequest:(id)arg1;
- (void)_updatePropertiesWithSnapshotNode:(id)arg1 forRequest:(id)arg2;
- (void)updateChildrenWithSnapshotGroup:(id)arg1 forRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

