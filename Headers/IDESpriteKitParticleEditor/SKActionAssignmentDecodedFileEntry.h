//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary;

@interface SKActionAssignmentDecodedFileEntry : NSObject
{
    NSDictionary *_assignments;
    NSDate *_dateCreated;
}

@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(copy, nonatomic) NSDictionary *assignments; // @synthesize assignments=_assignments;
- (void).cxx_destruct;
- (id)initWithAssignments:(id)arg1;
- (id)initFromEncodedEntry:(id)arg1 withScene:(id)arg2;

@end
