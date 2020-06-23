//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>

@class DVTDelayedInvocation, IBDrawableUserGuide, NSString, NSView;

@interface IBUserGuide : NSObject <NSCoding, IBDocumentArchiving>
{
    BOOL _dragging;
    IBDrawableUserGuide *_drawableUserGuide;
    NSView *_view;
    DVTDelayedInvocation *_drawableUserGuideChangedInvocation;
    unsigned long long _affinity;
    double _location;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isDragging) BOOL dragging; // @synthesize dragging=_dragging;
@property(nonatomic) double location; // @synthesize location=_location;
@property(nonatomic) unsigned long long affinity; // @synthesize affinity=_affinity;
@property(retain) DVTDelayedInvocation *drawableUserGuideChangedInvocation; // @synthesize drawableUserGuideChangedInvocation=_drawableUserGuideChangedInvocation;
@property(retain) NSView *view; // @synthesize view=_view;
- (void)invalidateDrawableGuide;
- (id)drawableUserGuide;
- (void)updateLocation:(double)arg1 andAffinity:(unsigned long long)arg2 undoManager:(id)arg3;
- (void)updateWithLocationFromPoint:(struct CGPoint)arg1 andAffinity:(unsigned long long)arg2 inView:(id)arg3 undoManager:(id)arg4;
- (void)trackWithLeftMouseDownEvent:(id)arg1 inDocument:(id)arg2;
- (struct CGRect)hitTestingRectInView:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isVertical;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithView:(id)arg1 location:(double)arg2 andAffinity:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

