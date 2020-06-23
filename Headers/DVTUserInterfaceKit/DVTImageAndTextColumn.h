//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableColumn.h>

@class NSMapTable;

@interface DVTImageAndTextColumn : NSTableColumn
{
    NSMapTable *_progressIndicators;
    id _outlineViewCollapseObservation;
    id _outlineViewExpandObservation;
    struct {
        unsigned int _tableViewIsOutlineView:1;
        unsigned int _reserved:31;
    } _imageAndTextColumnFlags;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)dataCellForRow:(long long)arg1;
- (id)_progressIndicatorWithKeyPath:(id)arg1 ofItem:(id)arg2 forNode:(id)arg3;
- (id)_configuredSpinningProgressIndicator;
- (void)updateBoundProgress;
- (void)updateBoundImage;
- (id)dvt_extraBindings;
- (void)awakeFromNib;
- (void)setTableView:(id)arg1;
- (void)_stopObservingExpandAndCollapseOfOutlineView;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)setupDataCell;

@end

