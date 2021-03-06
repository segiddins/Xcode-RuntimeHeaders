//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEContainerCore.h>

#import <IDEFoundation/IDEXMLPackageContainerCore-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface IDEXMLPackageContainerCore : IDEContainerCore <IDEXMLPackageContainerCore>
{
}

- (BOOL)writeToFile:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

