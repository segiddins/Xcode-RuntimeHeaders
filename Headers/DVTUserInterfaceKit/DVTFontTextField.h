//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTButtonTextField.h>

#import <DVTUserInterfaceKit/NSTextViewDelegate-Protocol.h>
#import <DVTUserInterfaceKit/NSWindowDelegate-Protocol.h>

@class NSFont, NSString;
@protocol DVTFontTextFieldDataSource;

@interface DVTFontTextField : DVTButtonTextField <NSTextViewDelegate, NSWindowDelegate>
{
}

+ (id)keyPathsForValuesAffectingPointSize;
+ (void)setCellClass:(Class)arg1;
+ (Class)cellClass;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)resignFirstResponder;
@property double pointSize;
@property(retain) NSFont *fontValue;
@property(retain) id fontRepresentation;
@property(retain) id <DVTFontTextFieldDataSource> dataSource;
- (id)cell;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
