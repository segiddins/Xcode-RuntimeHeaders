//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class CAAnimation, NSArray, NSDictionary, NSString, SCNTechnique;

@protocol SCNTechniqueJSExport <JSExport>
+ (SCNTechnique *)techniqueBySequencingTechniques:(NSArray *)arg1;
+ (SCNTechnique *)techniqueWithDictionary:(NSDictionary *)arg1;
@property(readonly) NSDictionary *dictionaryRepresentation;
- (id)copy;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
- (void)handleBindingOfSymbol:(NSString *)arg1 usingBlock:(void (^)(unsigned int, unsigned int, SCNNode *, SCNRenderer *))arg2;
@end

