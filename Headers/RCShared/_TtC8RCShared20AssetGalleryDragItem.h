//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RCShared/NSItemProviderReading-Protocol.h>
#import <RCShared/NSItemProviderWriting-Protocol.h>

@interface _TtC8RCShared20AssetGalleryDragItem : NSObject <NSItemProviderWriting, NSItemProviderReading>
{
    // Error parsing type: , name: libraryItem
}

+ (id)writableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
- (void).cxx_destruct;
- (id)init;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;

@end

