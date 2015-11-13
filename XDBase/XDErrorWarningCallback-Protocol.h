//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XDBase/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol XDErrorWarningCallback <NSObject>
- (float)targetVersion;
- (BOOL)continueGeneration;
- (void)createWarningForElement:(id)arg1 withMessage:(NSString *)arg2;
- (NSArray *)warningList;
- (void)createErrorForElement:(id)arg1 withMessage:(NSString *)arg2;
- (NSArray *)errorList;
- (NSDictionary *)compilerFlags;
@end

