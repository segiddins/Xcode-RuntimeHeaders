//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerUI/IBAutolayoutItem-Protocol.h>

@class DBGLayoutConstraintSet, DBGViewSurface, DBGViewWindow, NSMutableArray, NSString;

@protocol DBGLayoutConstraintItem <IBAutolayoutItem>
@property(readonly) DBGLayoutConstraintSet *affectingConstraintsSet;
@property(readonly) DBGLayoutConstraintSet *referencingConstraintsSetForDisplay;
@property(readonly) NSMutableArray *allReferencingConstraints;
@property(readonly) NSString *primaryDisplayName;
@property(readonly) struct CGRect layoutFrame;
@property(readonly) DBGViewSurface *parentViewSurface;
@property(readonly) DBGViewSurface *effectiveViewSurface;
@property(readonly) DBGViewWindow *window;
@property(readonly) NSString *identifier;
@end

