//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESourceControlUI/NSCoding-Protocol.h>

@class DVTTableView, MISSING_TYPE;

@interface _TtC18IDESourceControlUI38PullRequestParticipantsTableController : NSObject <NSCoding>
{
    MISSING_TYPE *moveUpCallback;
    MISSING_TYPE *table;
    MISSING_TYPE *owner;
    MISSING_TYPE *pullRequest;
    MISSING_TYPE *hostParticipants;
    MISSING_TYPE *participants;
    MISSING_TYPE *tableCellIdentifier;
}

- (void).cxx_destruct;
- (void)addParticipant:(id)arg1;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)awakeFromNib;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic) __weak DVTTableView *table; // @synthesize table;

@end

