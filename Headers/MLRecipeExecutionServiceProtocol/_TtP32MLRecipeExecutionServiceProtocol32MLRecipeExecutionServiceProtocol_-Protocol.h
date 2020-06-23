//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MLRecipeExecutionServiceProtocol/_TtP32MLRecipeExecutionServiceProtocol43MLRecipeExecutionServiceCombineTestProtocol_-Protocol.h>

@class NSData, NSString, NSURL;

@protocol _TtP32MLRecipeExecutionServiceProtocol32MLRecipeExecutionServiceProtocol_ <_TtP32MLRecipeExecutionServiceProtocol43MLRecipeExecutionServiceCombineTestProtocol_>
- (void)getSessionWithJsonConfig:(NSData *)arg1 sessionCache:(NSURL *)arg2 sessionID:(NSString *)arg3 with:(void (^)(id <_TtP32MLRecipeExecutionServiceProtocol23MLRecipeSessionProtocol_>, NSError *))arg4;
- (void)logToStdOutWithMessage:(NSString *)arg1 flush:(BOOL)arg2 reply:(void (^)(void))arg3;
- (void)redirectStdoutTo:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)jsonMessageWithRoute:(NSString *)arg1 input:(NSData *)arg2:(void (^)(NSData *, NSError *))arg3;
- (void)testFileAccessWithFileUrl:(NSURL *)arg1 with:(void (^)(NSDate *))arg2;
- (void)doSampleTrainingTaskWithInput:(long long)arg1 with:(void (^)(NSURL *, NSError *))arg2;
- (void)doSampleDataTableTaskWithInput:(long long)arg1 with:(void (^)(long long, NSError *))arg2;
- (void)simulateWithErrorType:(long long)arg1 reply:(void (^)(long long, NSError *))arg2;
- (void)simulateWithProblem:(long long)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)upperCaseWithString:(NSString *)arg1 with:(void (^)(NSString *))arg2;
@end

