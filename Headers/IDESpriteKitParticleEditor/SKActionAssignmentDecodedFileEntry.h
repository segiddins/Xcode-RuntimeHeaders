//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary;

@interface SKActionAssignmentDecodedFileEntry : NSObject
{
    NSDictionary *_assignments;
    NSDate *_dateCreated;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(copy, nonatomic) NSDictionary *assignments; // @synthesize assignments=_assignments;
- (id)initWithAssignments:(id)arg1;
- (id)initFromEncodedEntry:(id)arg1 withScene:(id)arg2;

@end

