//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/NSObject-Protocol.h>

@class NSString;

@protocol Xcode3ProjectCreationErrorHandling <NSObject>
- (NSString *)errorMessage;
- (BOOL)didEncounterFatalError;

@optional
- (BOOL)shouldOpenProjectReadOnlyAtPath:(NSString *)arg1;
- (void)unableToOpenProjectAtPath:(NSString *)arg1 reason:(NSString *)arg2;
- (BOOL)shouldOpenProjectOfMismatchingVersion:(unsigned long long)arg1 atPath:(NSString *)arg2;
@end

