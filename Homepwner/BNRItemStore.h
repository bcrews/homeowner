//
//  BNRItemStore.h
//  Homepwner
//
//  Created by Bill Crews on 11/26/13.
//  Copyright (c) 2013 Bill Crews. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BNRItem;

@interface BNRItemStore : NSObject
{
    NSMutableArray *allItems;
}
+ (BNRItemStore *)sharedStore;

- (void)moveItemAtIndex:(int)from
                toIndex:(int)to;
- (void)removeItem:(BNRItem *)p;
- (NSArray *)allItems;
- (BNRItem *)createItem;
- (NSString *)itemArchivePath;
- (BOOL)saveChanges;


@end
