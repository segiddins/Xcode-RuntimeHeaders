//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class MISSING_TYPE, NSMenu, NSMenuItem, NSString, NSTextField;

@interface _TtC18IDESourceControlUI36SourceControlCommitInspectorProperty : IDEInspectorProperty
{
    MISSING_TYPE *workingCopyKeyPath;
    MISSING_TYPE *revisionKeyPath;
    MISSING_TYPE *revision;
    MISSING_TYPE *revisionLabel;
    MISSING_TYPE *contextMenu;
    MISSING_TYPE *viewOnSCMHostMenuItem;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)viewOnSCMHost:(id)arg1;
- (void)copyRevision:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (double)baseline;
- (void)refresh;
- (void)setupRefreshTriggersAndConfigure;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;
@property(nonatomic, readonly) NSString *nibName;
@property(nonatomic, retain) NSMenuItem *viewOnSCMHostMenuItem; // @synthesize viewOnSCMHostMenuItem;
@property(nonatomic, retain) NSMenu *contextMenu; // @synthesize contextMenu;
@property(nonatomic) __weak NSTextField *revisionLabel; // @synthesize revisionLabel;

@end
