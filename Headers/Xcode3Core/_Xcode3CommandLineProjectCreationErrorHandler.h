//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Xcode3Core/Xcode3ProjectCreationErrorHandling-Protocol.h>

@class NSString;

@interface _Xcode3CommandLineProjectCreationErrorHandler : NSObject <Xcode3ProjectCreationErrorHandling>
{
    BOOL _didEncounterFatalError;
    NSString *_errorMessage;
}

- (void).cxx_destruct;
@property(copy) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property BOOL didEncounterFatalError; // @synthesize didEncounterFatalError=_didEncounterFatalError;
- (BOOL)shouldOpenProjectReadOnlyAtPath:(id)arg1;
- (void)unableToOpenProjectAtPath:(id)arg1 reason:(id)arg2;
- (BOOL)shouldOpenProjectOfMismatchingVersion:(unsigned long long)arg1 atPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

