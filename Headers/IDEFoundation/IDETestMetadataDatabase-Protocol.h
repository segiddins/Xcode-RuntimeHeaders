//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DVTFuture, IDESchemeActionRecord, IDETestMetadataRecord, NSSet, XCTTestIdentifier;

@protocol IDETestMetadataDatabase
- (NSArray * (^)(NSSet *, NSSet *))classBasedLPTPrioritizerWithFallbackExecutionOrdering:(long long)arg1;
- (void)updateWithSchemeActionRecord:(IDESchemeActionRecord *)arg1;
- (DVTFuture *)save;
- (DVTFuture *)metadataRecordsForIdentifier:(XCTTestIdentifier *)arg1;
- (void)purgeMetadataRecordsPassingTest:(BOOL (^)(IDETestMetadataRecord *))arg1;
- (void)updateFields:(NSSet *)arg1 forMetadataRecord:(IDETestMetadataRecord *)arg2;
- (void)updateMetadataRecord:(IDETestMetadataRecord *)arg1;
@end
