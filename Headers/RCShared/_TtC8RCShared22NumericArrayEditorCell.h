//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RCShared/_TtC8RCShared21InspectableEditorCell.h>

@class MISSING_TYPE, NSStackView, _TtC8RCShared7RCLabel;

__attribute__((visibility("hidden")))
@interface _TtC8RCShared22NumericArrayEditorCell : _TtC8RCShared21InspectableEditorCell
{
    MISSING_TYPE *rxStorage;
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *unitLabel;
    MISSING_TYPE *stackView;
    MISSING_TYPE *fractionDigits;
    MISSING_TYPE *unit;
    MISSING_TYPE *values;
    MISSING_TYPE *currentLabels;
    MISSING_TYPE *updateScope;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)awakeFromNib;
@property(nonatomic) __weak NSStackView *stackView; // @synthesize stackView;
@property(nonatomic) __weak _TtC8RCShared7RCLabel *unitLabel; // @synthesize unitLabel;
@property(nonatomic) __weak _TtC8RCShared7RCLabel *titleLabel; // @synthesize titleLabel;

@end

