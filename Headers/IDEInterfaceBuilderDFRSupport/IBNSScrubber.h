//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import "IBDocumentArchiving-Protocol.h"

@class NSColor, NSScrubberLayout, NSString;

@interface IBNSScrubber : NSView <IBDocumentArchiving>
{
    BOOL _encodeAsRuntimeInstance;
    BOOL _showsArrowButtons;
    BOOL _showsAdditionalContentIndicators;
    long long _mode;
    long long _itemAlignment;
    NSScrubberLayout *_scrubberLayout;
    NSColor *_backgroundColor;
}

+ (id)keyPathsForValuesAffectingIbInspectedFlowLayout;
+ (id)keyPathsForValuesAffectingIbInspectedProportionalLayout;
+ (id)keyPathsForValuesAffectingIbInspectedLayoutMode;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
- (void).cxx_destruct;
@property BOOL showsAdditionalContentIndicators; // @synthesize showsAdditionalContentIndicators=_showsAdditionalContentIndicators;
@property BOOL showsArrowButtons; // @synthesize showsArrowButtons=_showsArrowButtons;
@property(retain) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain) NSScrubberLayout *scrubberLayout; // @synthesize scrubberLayout=_scrubberLayout;
@property long long itemAlignment; // @synthesize itemAlignment=_itemAlignment;
@property long long mode; // @synthesize mode=_mode;
- (void)drawRect:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)ibInspectedFlowLayout;
- (id)ibInspectedProportionalLayout;
- (void)setIbInspectedLayoutMode:(long long)arg1;
- (long long)ibInspectedLayoutMode;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

