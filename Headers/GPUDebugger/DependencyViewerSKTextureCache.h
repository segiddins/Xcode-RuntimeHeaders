//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DependencyViewerSKTextureCache : NSObject
{
    struct mutex _loadingMutex;
    struct mutex _notifyMutex;
    NSCache *_cache;
    struct vector<std::__1::shared_ptr<AsyncTexture>, std::__1::allocator<std::__1::shared_ptr<AsyncTexture>>> _textureQueue;
    struct unordered_map<std::__1::basic_string<char>, std::__1::shared_ptr<AsyncTexture>, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<AsyncTexture>>>> _idToAsyncTextures;
    NSObject<OS_dispatch_queue> *_workerQueue;
    unsigned long long _asyncTaskCount;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)createSKTextureForImage:(id)arg1 textureKey:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)createSKTextureForLabel:(id)arg1 attributes:(id)arg2 size:(struct CGSize)arg3 labelKey:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (id)SKTextureForIconImage:(id)arg1 textureKey:(id)arg2;
- (void)flush;
- (id)init;

@end
