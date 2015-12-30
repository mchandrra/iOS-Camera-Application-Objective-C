//
//  ViewController.h
//  Camera
//
//  Created by Sri Chandra Mallipeddi on 12/29/15.
//  Copyright © 2015 Sri Chandra Mallipeddi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (strong, nonatomic) IBOutlet UIImageView *imageView;
- (IBAction)capturePicture:(UIButton *)sender;
- (IBAction)choosePicture:(UIButton *)sender;
@end

