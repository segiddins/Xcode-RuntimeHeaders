/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "DVTTableViewDelegate-Protocol.h"

@class DVTTableView, NSArray, NSString;

@interface IDEDistributionResultFailureViewController : IDEViewController <DVTTableViewDelegate>
{
    NSArray *_issues;
    NSString *_distributionTaskNoun;
    DVTTableView *_errorTable;
}

+ (id)keyPathsForValuesAffectingMessage;
@property(retain) DVTTableView *errorTable; // @synthesize errorTable=_errorTable;
@property(retain) NSString *distributionTaskNoun; // @synthesize distributionTaskNoun=_distributionTaskNoun;
@property(retain) NSArray *issues; // @synthesize issues=_issues;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)message;
- (BOOL)errorsOccurred;
- (void)loadView;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
