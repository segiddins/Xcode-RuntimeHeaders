//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RCShared/NSItemProviderReading-Protocol.h>
#import <RCShared/NSItemProviderWriting-Protocol.h>

@class MISSING_TYPE;

@interface _TtC8RCShared20AssetGalleryDragItem : NSObject <NSItemProviderWriting, NSItemProviderReading>
{
    MISSING_TYPE *libraryItem;
}

+ (id)writableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
- (void).cxx_destruct;
- (id)init;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;

@end
