//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC17XCSAdministration12DatabaseTask : NSObject
{
    MISSING_TYPE *type;
    MISSING_TYPE *designDocument;
    MISSING_TYPE *source;
    MISSING_TYPE *database;
    MISSING_TYPE *progress;
}

+ (id)taskWithJSONData:(id)arg1 error:(id *)arg2;
+ (id)tasksWithJSONData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic, readonly) long long progress; // @synthesize progress;

@end
