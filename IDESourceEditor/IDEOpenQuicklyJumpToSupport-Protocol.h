//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class DVTDocumentLocation, NSString;

@protocol IDEOpenQuicklyJumpToSupport <NSObject>
- (NSString *)currentEditorContext;
- (DVTDocumentLocation *)documentLocationForOpenQuicklyQuery:(NSString *)arg1;
@end

