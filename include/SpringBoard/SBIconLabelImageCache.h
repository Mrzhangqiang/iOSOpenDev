/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class NSMutableDictionary;

@interface SBIconLabelImageCache : SBUnknownSuperclass {
	NSMutableDictionary *_cache;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x1a362d
- (id)init;	// 0x1a36a5
- (void)dealloc;	// 0x1a3659
- (void)cacheNewLabelImage:(id)image;	// 0x1a3495
- (id)checkoutLabelImageForPropertiesIfExists:(id)propertiesIfExists;	// 0x1a3525
- (void)checkinLabelImage:(id)image;	// 0x1a357d
@end
