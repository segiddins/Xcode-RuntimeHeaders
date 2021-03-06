//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSAccessibilityElement.h>

#import <IDEInterfaceBuilderKit/NSAccessibilityButton-Protocol.h>

@class IBReferencingConstraintsFilter, NSString;

@interface IBFilterButtonAccessibilityElement : NSAccessibilityElement <NSAccessibilityButton>
{
    IBReferencingConstraintsFilter *_filterView;
    unsigned long long _attribute;
}

- (void).cxx_destruct;
@property unsigned long long attribute; // @synthesize attribute=_attribute;
@property __weak IBReferencingConstraintsFilter *filterView; // @synthesize filterView=_filterView;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (struct CGRect)accessibilityFrame;
- (id)initWithView:(id)arg1 attribute:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

