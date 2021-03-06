//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTFilterExpression.h>

#import <DVTUserInterfaceKit/NSPasteboardReading-Protocol.h>
#import <DVTUserInterfaceKit/NSPasteboardWriting-Protocol.h>

@class NSString;

@interface DVTFilterExpression (UIAdditions) <NSPasteboardReading, NSPasteboardWriting>
+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (id)_pasteboardType;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

