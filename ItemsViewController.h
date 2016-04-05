//
//  ItemsViewController.h
//  Homepwner
//
//  Created by Bill Crews on 11/26/13.
//  Copyright (c) 2013 Bill Crews. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DetailViewController.h"
#import "HomepwnerItemCell.h"


@interface ItemsViewController : UITableViewController <UIPopoverControllerDelegate>
{
    IBOutlet UIView *headerView;
    
    UIPopoverController *imagePopover;
}

- (IBAction)addNewItem:(id)sender;
@end
