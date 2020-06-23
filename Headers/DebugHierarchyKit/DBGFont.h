//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebugHierarchyKit/DBGValue-Protocol.h>
#import <DebugHierarchyKit/DBGValueJSONSerialization-Protocol.h>

@class NSDictionary, NSFont, NSString;

@interface DBGFont : NSObject <DBGValueJSONSerialization, DBGValue>
{
    NSDictionary *_fontDescription;
    NSFont *_font;
}

+ (id)withDescription:(id)arg1;
+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly) NSFont *font; // @synthesize font=_font;
@property(readonly) NSDictionary *fontDescription; // @synthesize fontDescription=_fontDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)objectValue;
- (id)displayString;
- (id)initWithDescription:(id)arg1;
- (id)JSONCompatibleRepresentation;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
