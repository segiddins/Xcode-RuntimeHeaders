//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSDocument, NSString;
@protocol DVTTabbedWindowCreation;

@protocol DVTTabbedWindowTabContentControlling <NSObject>
@property(copy) NSString *userDefinedTabLabel;
@property(readonly) NSString *tabLabel;
@property(retain) NSDocument<DVTTabbedWindowCreation> *document;
@end

