//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDESymbolicBreakpoint.h>

@class NSString;

@interface IDEAddressBreakpoint : IDESymbolicBreakpoint
{
    NSString *_hexAddress;
}

+ (id)_createSymbolNameFromAddress:(id)arg1;
- (void).cxx_destruct;
- (id)displayName;
@property(copy) NSString *hexAddress;
- (id)initWithAddress:(id)arg1;

@end

