gLevelValues.exitCastleLevel = 26
gLevelValues.exitCastleArea = 1
gLevelValues.exitCastleWarpNode = 10

gBehaviorValues.KingBobombFVel = 296.0
gBehaviorValues.KingBobombYawVel = 3500
gBehaviorValues.KingBobombHealth = 1
gBehaviorValues.KingWhompHealth = 4
gBehaviorValues.KoopaThiAgility = 6.0
gBehaviorValues.KoopaBobAgility = 5.5

gBehaviorValues.MipsStar1Requirement = 10
gBehaviorValues.MipsStar2Requirement = 25
gBehaviorValues.ToadStar1Requirement = 0
gBehaviorValues.ToadStar2Requirement = 0
gBehaviorValues.ToadStar3Requirement = 0

gLevelValues.pssSlideStarTime = 180
gLevelValues.metalCapDuration = 600
gLevelValues.wingCapDuration = 1800
gLevelValues.vanishCapDuration = 600
gLevelValues.metalCapDurationCotmc = 1
gLevelValues.wingCapDurationTotwc = 1
gLevelValues.vanishCapDurationVcutm = 1


hook_event(HOOK_MARIO_UPDATE, function(m) m.numLives = 10 end)

--NoD Code
local once = true 
hook_event(HOOK_MARIO_UPDATE,
function(m)
    if m.playerIndex ~= 0 then return end
    if once then
        m.numLives = 10
        once = true
    end
end)

gLevelValues.hudCapTimer = 1
gLevelValues.mushroom1UpHeal = 1
gServerSettings.stayInLevelAfterStar = false

gBehaviorValues.trajectories.PlatformRrTrajectory = get_trajectory("rr_seg7_trajectory_0702EC3C_RM2C_path")
gBehaviorValues.trajectories.PlatformRr2Trajectory = get_trajectory("rr_seg7_trajectory_0702ECC0_RM2C_path")
gBehaviorValues.trajectories.PlatformRr3Trajectory = get_trajectory("rr_seg7_trajectory_0702ED9C_RM2C_path")
gBehaviorValues.trajectories.PlatformRr4Trajectory = get_trajectory("rr_seg7_trajectory_0702EEE0_RM2C_path")
gBehaviorValues.trajectories.PlatformCcmTrajectory = get_trajectory("ccm_seg7_trajectory_0701669C_RM2C_path")
gBehaviorValues.trajectories.PlatformBitfsTrajectory = get_trajectory("bitfs_seg7_trajectory_070159AC_RM2C_path")
gBehaviorValues.trajectories.PlatformHmcTrajectory = get_trajectory("hmc_seg7_trajectory_0702B86C_RM2C_path")
gBehaviorValues.trajectories.PlatformLllTrajectory = get_trajectory("lll_seg7_trajectory_0702856C_RM2C_path")
gBehaviorValues.trajectories.PlatformLll2Trajectory = get_trajectory("lll_seg7_trajectory_07028660_RM2C_path")
gBehaviorValues.trajectories.RacingPenguinTrajectory = get_trajectory("ccm_seg7_trajectory_penguin_race_RM2C_path")
gBehaviorValues.trajectories.KoopaBobTrajectory = get_trajectory('KoopaBoB_path')
gBehaviorValues.trajectories.KoopaThiTrajectory = get_trajectory('KoopaTHI_path')
