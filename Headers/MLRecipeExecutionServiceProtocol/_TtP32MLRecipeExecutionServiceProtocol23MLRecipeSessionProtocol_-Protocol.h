//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSString, NSURL;

@protocol _TtP32MLRecipeExecutionServiceProtocol23MLRecipeSessionProtocol_
- (void)evaluateWithModelURL:(NSURL *)arg1 dataURL:(NSURL *)arg2 encodedParameters:(NSData *)arg3 reply:(void (^)(NSData *, NSError *))arg4;
- (void)inferWithModelURL:(NSURL *)arg1 dataURL:(NSURL *)arg2 index:(long long)arg3 reply:(void (^)(NSData *, NSError *))arg4;
- (void)trainUsingDataWithEncodedOptions:(NSData *)arg1 with:(void (^)(NSData *, NSError *))arg2;
- (void)analyzeDataWithEncodedOptions:(NSData *)arg1 with:(void (^)(NSData *, NSError *))arg2;
- (void)analyzeRawDataWith:(void (^)(NSData *, NSError *))arg1;
- (void)selectValidationDataWithSplit:(double)arg1 with:(void (^)(long long, NSError *))arg2;
- (void)selectValidationDataAt:(NSURL *)arg1 with:(void (^)(long long, NSError *))arg2;
- (void)selectDataAt:(NSURL *)arg1 with:(void (^)(long long, NSError *))arg2;
- (void)logValueWithSubsystem:(NSString *)arg1 category:(NSString *)arg2 value:(long long)arg3 with:(void (^)(BOOL))arg4;
- (void)lowerCaseWithString:(NSString *)arg1 with:(void (^)(NSString *))arg2;
@end

