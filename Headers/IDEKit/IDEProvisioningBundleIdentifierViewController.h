//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDESigningEditorConfigurationDataSourceDelegate-Protocol.h>

@class NSTextField;
@protocol IDESigningEditorBundleIdentifierDataSource;

@interface IDEProvisioningBundleIdentifierViewController : IDEViewController <IDESigningEditorConfigurationDataSourceDelegate>
{
    id <IDESigningEditorBundleIdentifierDataSource> _dataSource;
    NSTextField *_bundleIdentifierTextField;
}

- (void).cxx_destruct;
@property __weak NSTextField *bundleIdentifierTextField; // @synthesize bundleIdentifierTextField=_bundleIdentifierTextField;
@property(retain, nonatomic) id <IDESigningEditorBundleIdentifierDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)primitiveInvalidate;
- (void)willUpdateConfigurationScope:(id)arg1;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1;

@end

