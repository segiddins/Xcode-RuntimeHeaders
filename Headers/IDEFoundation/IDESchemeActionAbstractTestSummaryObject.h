//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IDESchemeActionAbstractTestSummaryObject : NSObject
{
    NSString *_name;
}

@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)_testActivitySummariesForSummaryObject:(id)arg1;
@property(readonly) NSArray *testActivitySummaries;
- (id)description;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long status;
- (void)loadDiagnosticsFromFilePromise:(id)arg1;
- (void)loadAttachmentsFromDirectory:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1;

@end

