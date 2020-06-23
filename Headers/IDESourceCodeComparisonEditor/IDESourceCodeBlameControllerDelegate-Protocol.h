//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceCodeComparisonEditor/NSObject-Protocol.h>

@class DVTSourceControlRevision, IDESourceCodeBlameController, NSError;

@protocol IDESourceCodeBlameControllerDelegate <NSObject>
- (void)blameController:(IDESourceCodeBlameController *)arg1 showRevision:(DVTSourceControlRevision *)arg2;
- (void)blameController:(IDESourceCodeBlameController *)arg1 compareToRevision:(DVTSourceControlRevision *)arg2;
- (void)blameController:(IDESourceCodeBlameController *)arg1 compareRevisionToPreviousRevision:(DVTSourceControlRevision *)arg2;

@optional
- (void)blameController:(IDESourceCodeBlameController *)arg1 didEncounterError:(NSError *)arg2;
@end
