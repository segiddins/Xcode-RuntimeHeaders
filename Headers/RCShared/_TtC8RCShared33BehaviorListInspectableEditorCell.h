//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RCShared/_TtC8RCShared30InspectableEditorCellFromClass.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8RCShared33BehaviorListInspectableEditorCell : _TtC8RCShared30InspectableEditorCellFromClass
{
    MISSING_TYPE *behaviorNameLabel;
    MISSING_TYPE *backgroundEffectView;
    MISSING_TYPE *colorButton;
    MISSING_TYPE *warningButton;
    MISSING_TYPE *tapGesture;
    MISSING_TYPE *_actionTarget;
    MISSING_TYPE *renameDelay;
}

- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)renameGesture:(id)arg1;
@property(nonatomic) BOOL selected;
- (BOOL)isSelected;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
