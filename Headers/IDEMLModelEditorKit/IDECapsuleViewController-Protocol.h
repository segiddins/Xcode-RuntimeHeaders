//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEMLModelEditorKit/NSObject-Protocol.h>

@class NSColor, NSImage, NSString;

@protocol IDECapsuleViewController <NSObject>
@property(nonatomic, readonly) NSString *titleForDisplay;

@optional
- (void)removeItems:(id)arg1;
- (void)addItems:(id)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)remove:(id)arg1;
@property(nonatomic, retain) NSColor *backgroundColor;
@property(nonatomic, readonly) BOOL disclosedByDefault;
@property(nonatomic, readonly) NSString *footerLabel;
@property(nonatomic, readonly) BOOL canDrag;
@property(nonatomic, readonly) BOOL wantsDisclosureButtonHidden;
@property(nonatomic, readonly) BOOL canUndisclose;
@property(nonatomic) BOOL canRemoveItems;
@property(nonatomic) BOOL canAddItems;
@property(nonatomic, readonly) BOOL canRename;
@property(nonatomic, readonly) BOOL canRemove;
@property(nonatomic, readonly) BOOL canSelect;
@property(nonatomic, readonly) NSImage *icon;
@end

