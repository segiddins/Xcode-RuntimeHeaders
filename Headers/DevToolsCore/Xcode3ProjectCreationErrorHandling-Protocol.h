//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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

