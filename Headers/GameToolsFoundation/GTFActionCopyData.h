//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameToolsFoundation/NSPasteboardReading-Protocol.h>
#import <GameToolsFoundation/NSPasteboardWriting-Protocol.h>
#import <GameToolsFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface GTFActionCopyData : NSObject <NSSecureCoding, NSPasteboardWriting, NSPasteboardReading>
{
    NSMutableArray *_allActions;
    NSMutableArray *_independentActions;
    NSArray *_groups;
}

+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)actionCopyDataForTimeline:(id)arg1 withActionsSubset:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(readonly, nonatomic) NSArray *allActions; // @synthesize allActions=_allActions;
@property(readonly, nonatomic) NSArray *independentActions; // @synthesize independentActions=_independentActions;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initForTimeline:(id)arg1 withActionsSubset:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

