//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAttributePlaceholder.h>

@class NSTabViewItem;

@interface IBInitialTabViewItemAttribute : IBAttributePlaceholder
{
    NSTabViewItem *_editorVisibleTabViewItem;
    NSTabViewItem *_initialTabViewItem;
}

- (void).cxx_destruct;
@property(readonly) NSTabViewItem *initialTabViewItem; // @synthesize initialTabViewItem=_initialTabViewItem;
- (void)didCompileDocument:(id)arg1;
- (void)willCompileDocument:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 andInitialTabViewItem:(id)arg2;

@end

