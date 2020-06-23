//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTSourceControl/NSObject-Protocol.h>

@class DVTSourceControlAuthor, DVTSourceControlRevision, NSDate, NSString;

@protocol DVTSourceControlLogItemProtocol <NSObject>
@property(readonly, nonatomic) unsigned long long revisionType;
@property(readonly, getter=isUnversionedLogItem) BOOL unversionedLogItem;
@property(readonly, nonatomic) BOOL isMerge;
@property(readonly, nonatomic) NSString *message;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) DVTSourceControlRevision *revision;
@property(readonly, nonatomic) DVTSourceControlAuthor *author;
@end

