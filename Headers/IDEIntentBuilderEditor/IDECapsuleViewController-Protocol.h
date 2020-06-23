//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderEditor/NSObject-Protocol.h>

@class NSColor, NSImage, NSString;

@protocol IDECapsuleViewController <NSObject>
@property(readonly, copy) NSString *titleForDisplay;

@optional
@property(retain) NSColor *backgroundColor;
@property(readonly) BOOL disclosedByDefault;
@property(readonly, copy) NSString *footerLabel;
@property(readonly) BOOL canDrag;
@property(readonly) BOOL wantsDisclosureButtonHidden;
@property(readonly) BOOL canUndisclose;
@property BOOL canRemoveItems;
@property BOOL canAddItems;
@property(readonly) BOOL canRename;
@property(readonly) BOOL canRemove;
@property(readonly) BOOL canSelect;
@property(readonly) NSImage *icon;
- (void)removeItems:(id)arg1;
- (void)addItems:(id)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)remove:(id)arg1;
@end

