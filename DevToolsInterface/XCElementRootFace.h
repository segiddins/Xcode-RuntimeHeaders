//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class XCElementView;

@interface XCElementRootFace : NSObject
{
    XCElementView *_elementView;
    struct NSObject *_current;
    struct NSObject *_currentGroup;
}

- (void)dealloc;
- (id)init;
- (id)closeLayout;
- (void)_releaseValuesRootFace;
- (struct NSObject *)addDisplayerAsGroup:(BOOL)arg1;
- (struct NSObject *)addJustifier;
- (struct NSObject *)newTabMarker;
- (struct NSObject *)addTabber;
- (struct NSObject *)addAnchor:(BOOL)arg1 forDelegate:(struct NSObject *)arg2;
- (struct NSObject *)addMultiToggler:(BOOL)arg1;
- (struct NSObject *)addToggler:(BOOL)arg1;
- (struct NSObject *)addSpacerWithWidth:(double)arg1 height:(double)arg2;
- (struct NSObject *)addDropper:(BOOL)arg1;
- (struct NSObject *)addDisplayerForDelegate:(struct NSObject *)arg1;
- (struct NSObject *)addGroup:(BOOL)arg1;
- (void)_addGroup:(struct NSObject *)arg1;
- (void)addElement:(struct NSObject *)arg1;
- (void)_addElement:(struct NSObject *)arg1;
- (void)setChildrenDraggableByDefault:(BOOL)arg1;
- (struct NSObject *)current;
- (struct NSObject *)currentGroup;
- (void)setCurrent:(struct NSObject *)arg1;
- (void)setCurrentGroup:(struct NSObject *)arg1;
- (id)elementView;
- (void)setElementView:(id)arg1;

@end

