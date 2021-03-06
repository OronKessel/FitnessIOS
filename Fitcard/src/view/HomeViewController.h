//
//  HomeViewController.h
//  Fitcard
//
//  Created by BoHuang on 7/25/16.
//  Copyright © 2016 BoHuang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WNAActivityIndicator.h"

@interface HomeViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIButton *btnMenu;
@property (weak, nonatomic) IBOutlet UIView *btnFindGym;
@property (weak, nonatomic) IBOutlet UIView *btnFindClasses;
@property (weak, nonatomic) IBOutlet UIView *vwFeaturedGyms;


@property (strong, nonatomic) WNAActivityIndicator *activityIndicator;

@end
