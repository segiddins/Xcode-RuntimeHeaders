//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICSticker.h>

#import <IDEInterfaceBuilderKit/IBICAbstractCollectionChild-Protocol.h>
#import <IDEInterfaceBuilderKit/IBICAbstractCollectionDropChild-Protocol.h>

@class NSString;

@interface IBICSticker (DisplayAdditions) <IBICAbstractCollectionChild, IBICAbstractCollectionDropChild>
+ (id)itemsFromOverlayOrnament:(id)arg1;
+ (id)itemsFromImageReps:(id)arg1;
- (void)setIbInspectedAccessibilityLabel:(id)arg1;
- (id)ibInspectedAccessibilityLabel;
- (id)quickLookPreviewItem;
- (BOOL)applyContentFromDropIndicator:(id)arg1;
- (id)thumbnail;
- (id)icon;
- (id)bitmap;
- (id)dragImage;
- (id)image;
- (id)imageRep;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

