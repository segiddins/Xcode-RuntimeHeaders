//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSArray, NSDictionary;

@interface DVTPlistTextFieldCell : NSTextFieldCell
{
    BOOL _showsStatusItems;
    NSArray *_statusCategoryNames;
    NSDictionary *_statusCellsByCategoryName;
}

- (void).cxx_destruct;
@property(copy) NSArray *statusCategoryNames; // @synthesize statusCategoryNames=_statusCategoryNames;
@property BOOL showsStatusItems; // @synthesize showsStatusItems=_showsStatusItems;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)_createStatusItemProxyItemsForRowAtPoint:(struct CGPoint)arg1;
- (void)drawStatusWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)textFieldRectForBounds:(struct CGRect)arg1;
- (struct CGRect)statusRectForBounds:(struct CGRect)arg1;
- (id)statusItemCellsForCategory:(id)arg1;
- (void)setStatusItemCells:(id)arg1 forCategory:(id)arg2;
- (id)_statusCellsByCategoryName;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

