//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPopUpButton.h>

#import <MLSharedKit/NSMenuDelegate-Protocol.h>

@class MISSING_TYPE;

@interface _TtC11MLSharedKit16DataSourcePicker : NSPopUpButton <NSMenuDelegate>
{
    MISSING_TYPE *supportedFileTypes;
    MISSING_TYPE *selectedDataURL;
    MISSING_TYPE *isTrained;
    MISSING_TYPE *context;
    MISSING_TYPE *configuration;
    MISSING_TYPE *delegate;
    MISSING_TYPE *selectedValue;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 pullsDown:(BOOL)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)itemTapped:(id)arg1;
- (void)refreshItems;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;

@end

