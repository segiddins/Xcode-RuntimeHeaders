//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileHandle.h>

@interface NSFileHandle (XCBCSupport)
- (BOOL)xcb_writeData:(id)arg1 error:(out id *)arg2;
- (id)xcb_readDataToEndOfFile:(out id *)arg1;
@end

