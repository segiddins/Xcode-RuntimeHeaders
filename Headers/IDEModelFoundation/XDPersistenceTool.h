//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelFoundation/IDECodeGeneratorTool-Protocol.h>

@class IDECodeGenerator, NSString;
@protocol IDECodeGeneratorOutputDelegate;

@interface XDPersistenceTool : NSObject <IDECodeGeneratorTool>
{
    IDECodeGenerator *_codeGenerator;
    id <IDECodeGeneratorOutputDelegate> _delegate;
}

- (void).cxx_destruct;
- (long long)execute:(id)arg1;
- (id)initWithCodeGenerator:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

