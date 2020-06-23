//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEProductsUI/IDEProductsUtilityPane.h>

@class DVTTextViewWithPlaceholder, NSAttributedString, NSString;

@interface IDEProductsDescriptionUtilityPane : IDEProductsUtilityPane
{
    NSString *_descriptionKeyPath;
    NSAttributedString *_attributedCommentsString;
    NSString *_descriptionTitle;
    DVTTextViewWithPlaceholder *_descriptionTextView;
}

- (void).cxx_destruct;
@property(retain) DVTTextViewWithPlaceholder *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(readonly) NSString *descriptionTitle; // @synthesize descriptionTitle=_descriptionTitle;
@property(copy) NSAttributedString *attributedCommentsString; // @synthesize attributedCommentsString=_attributedCommentsString;
@property(readonly) NSString *descriptionKeyPath; // @synthesize descriptionKeyPath=_descriptionKeyPath;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)initWithInspectable:(id)arg1 descriptionKeyPath:(id)arg2 title:(id)arg3;
- (id)initWithInspectable:(id)arg1;

@end

