//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTGradientImageButton, DVTOutlineView, DVTSearchField, IDEControlGroup, MISSING_TYPE;

@interface _TtC18IDESourceControlUI31RepositoryBrowserViewController : IDEViewController
{
    MISSING_TYPE *borderedView;
    MISSING_TYPE *glassBarBorderedView;
    MISSING_TYPE *addButton;
    MISSING_TYPE *removeButton;
    MISSING_TYPE *controlGroup;
    MISSING_TYPE *filterField;
    MISSING_TYPE *outlineView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
@property(nonatomic) __weak DVTOutlineView *outlineView; // @synthesize outlineView;
@property(nonatomic) __weak DVTSearchField *filterField; // @synthesize filterField;
@property(nonatomic) __weak IDEControlGroup *controlGroup; // @synthesize controlGroup;
@property(nonatomic) __weak DVTGradientImageButton *removeButton; // @synthesize removeButton;
@property(nonatomic) __weak DVTGradientImageButton *addButton; // @synthesize addButton;
@property(nonatomic) __weak DVTBorderedView *glassBarBorderedView; // @synthesize glassBarBorderedView;
@property(nonatomic) __weak DVTBorderedView *borderedView; // @synthesize borderedView;

@end

