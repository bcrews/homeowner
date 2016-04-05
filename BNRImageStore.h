//
//  BNRImageStore.h
//  Homepwner
//
//  Created by Bill Crews on 12/5/13.
//  Copyright (c) 2013 Bill Crews. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BNRImageStore : NSObject
{
    NSMutableDictionary *dictionary;
}
+ (BNRImageStore *)sharedStore;

- (void)setImage:(UIImage *)i forKey:(NSString *)s;
- (UIImage *)imageForKey:(NSString *)s;
- (void)deleteImageForKey:(NSString *)s;
- (NSString *)imagePathForKey:(NSString *)key;

@end
