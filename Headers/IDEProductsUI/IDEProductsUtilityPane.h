//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView;
@protocol IDEProductsInspectable;

@interface IDEProductsUtilityPane : IDEViewController
{
    BOOL _hidden;
    BOOL _hideBottomBorder;
    DVTBorderedView *_borderedView;
    id <IDEProductsInspectable> _inspectable;
}

- (void).cxx_destruct;
@property BOOL hideBottomBorder; // @synthesize hideBottomBorder=_hideBottomBorder;
@property(readonly) BOOL hidden; // @synthesize hidden=_hidden;
@property(readonly) id <IDEProductsInspectable> inspectable; // @synthesize inspectable=_inspectable;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
- (void)viewDidLoad;
- (id)initWithInspectable:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initUsingDefaultNib;

@end

