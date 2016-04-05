//
//  ImageViewController.h
//  Homepwner
//
//  Created by Bill Crews on 12/10/13.
//  Copyright (c) 2013 Bill Crews. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImageViewController : UIViewController
{
    
    __weak IBOutlet UIImageView *imageView;
    __weak IBOutlet UIScrollView *scrollView;
}

@property (nonatomic,strong) UIImage *image;

@end
