//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>

@class IBICMutablePasteboardContext, IBICPasteboardContext, NSArray;

@interface IBICPasteboardContent : NSObject <NSCoding>
{
    IBICMutablePasteboardContext *_context;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(readonly) IBICPasteboardContext *context; // @synthesize context=_context;
@property(readonly) NSArray *items; // @synthesize items=_items;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;

@end

