//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEntitlementsProcessorViewController.h>

@class NSArray, NSArrayController;

@interface IDEiCloudEntitlementsProcessorViewController : IDEEntitlementsProcessorViewController
{
    NSArray *_availableEnvironments;
    NSArrayController *_availableEnvironmentsController;
}

@property(retain, nonatomic) NSArrayController *availableEnvironmentsController; // @synthesize availableEnvironmentsController=_availableEnvironmentsController;
@property(retain, nonatomic) NSArray *availableEnvironments; // @synthesize availableEnvironments=_availableEnvironments;
- (void).cxx_destruct;
- (void)viewDidInstall;

@end

