//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSXMLElement.h>

@interface NSXMLElement (SKEAdditions)
+ (id)ske_spritekitThreeComponentsPropertyElementWithKeyPath1:(id)arg1 keyPath2:(id)arg2 keyPath3:(id)arg3 editable:(BOOL)arg4;
+ (id)ske_materialFoldableContentsPropertyElementWithKeyPath:(id)arg1 acceptsImages:(BOOL)arg2 editable:(BOOL)arg3 showKeyPath:(id)arg4 disclosableKeyPath:(id)arg5 disclosablePlainKeyPath:(id)arg6 title:(id)arg7;
+ (id)ske_materialContentsPropertyElementWithKeyPath:(id)arg1 acceptsImages:(BOOL)arg2 editable:(BOOL)arg3;
+ (id)ske_imagePreviewPropertyElementWithKeyPath:(id)arg1;
+ (id)ske_pathfieldPropertyElementWithKeyPath:(id)arg1 placeholder:(id)arg2 showLink:(BOOL)arg3 showChooser:(BOOL)arg4 editable:(BOOL)arg5;
+ (id)ske_numberPropertyElementWithKeyPath:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3 editable:(BOOL)arg4;
+ (id)ske_optionElementWithTitle:(id)arg1 value:(id)arg2;
+ (id)ske_enumerationPropertyElementWithKeyPath:(id)arg1 options:(id)arg2 editable:(BOOL)arg3;
+ (id)ske_scrubberPropertyElementWithKeyPath:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3 editable:(BOOL)arg4;
+ (id)ske_elementWithName:(id)arg1 attributes:(id)arg2;
+ (id)ske_elementWithName:(id)arg1 stringValue:(id)arg2 attributes:(id)arg3;
- (void)ske_addAttributeWithName:(id)arg1 andStringValue:(id)arg2;
@end

