//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@class NSButton;

@interface IDEDistributionDestinationStepViewController : IDEDistributionStepViewController
{
    NSButton *_uploadRadio;
    NSButton *_exportRadio;
}

+ (id)keyPathsForValuesAffectingUpload;
+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(int)arg2;
@property(retain) NSButton *exportRadio; // @synthesize exportRadio=_exportRadio;
@property(retain) NSButton *uploadRadio; // @synthesize uploadRadio=_uploadRadio;
- (void).cxx_destruct;
@property(nonatomic) BOOL upload;
- (void)viewDidLoad;
- (id)helpID;
- (BOOL)canGoNext;
- (BOOL)canGoPrevious;
- (id)title;

@end

