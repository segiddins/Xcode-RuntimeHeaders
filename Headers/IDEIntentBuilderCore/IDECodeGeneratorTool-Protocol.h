//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderCore/NSObject-Protocol.h>

@class IDECodeGenerator, NSArray;
@protocol IDECodeGeneratorOutputDelegate;

@protocol IDECodeGeneratorTool <NSObject>
- (long long)execute:(NSArray *)arg1;
- (id)initWithCodeGenerator:(IDECodeGenerator *)arg1 delegate:(id <IDECodeGeneratorOutputDelegate>)arg2;
@end
