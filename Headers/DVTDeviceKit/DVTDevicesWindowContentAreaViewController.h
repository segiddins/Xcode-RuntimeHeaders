//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class DVTBorderedView, DVTReplacementView;

@interface DVTDevicesWindowContentAreaViewController : DVTViewController
{
    DVTReplacementView *_replacementView;
    DVTBorderedView *_borderedView;
}

- (void).cxx_destruct;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
- (void)primitiveInvalidate;
- (void)viewDidLoad;

@end

