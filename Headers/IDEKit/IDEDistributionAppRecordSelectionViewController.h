//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDEITunesConnectApplicationDescription, NSArray, NSPopUpButton;

@interface IDEDistributionAppRecordSelectionViewController : IDEViewController
{
    NSArray *_applicationRecords;
    IDEITunesConnectApplicationDescription *_selectedApplicationRecord;
    NSPopUpButton *_appRecordPopUpButton;
}

- (void).cxx_destruct;
@property(retain) NSPopUpButton *appRecordPopUpButton; // @synthesize appRecordPopUpButton=_appRecordPopUpButton;
@property(retain, nonatomic) IDEITunesConnectApplicationDescription *selectedApplicationRecord; // @synthesize selectedApplicationRecord=_selectedApplicationRecord;
- (void)selectAppRecord:(id)arg1;
@property(retain) NSArray *applicationRecords; // @synthesize applicationRecords=_applicationRecords;
- (id)nibName;

@end

