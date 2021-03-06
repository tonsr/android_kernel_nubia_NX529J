/* Copyright (c) 2015, The Linux Foundation. All rights reserved.
 * Copyright (C) 2016 XiaoMi, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __MSM8952_SLIMBUS_AUDIO
#define __MSM8952_SLIMBUS_AUDIO

enum codecs {
	TOMTOM_CODEC,
	MAX_CODECS,
};

int msm_slim_0_rx_be_hw_params_fixup(struct snd_soc_pcm_runtime *rtd,
					    struct snd_pcm_hw_params *params);
int msm_slim_0_tx_be_hw_params_fixup(struct snd_soc_pcm_runtime *rtd,
					    struct snd_pcm_hw_params *params);
int msm_slim_5_tx_be_hw_params_fixup(struct snd_soc_pcm_runtime *rtd,
					    struct snd_pcm_hw_params *params);
int msm_snd_hw_params(struct snd_pcm_substream *substream,
			     struct snd_pcm_hw_params *params);
int msm_be_hw_params_fixup(struct snd_soc_pcm_runtime *rtd,
				struct snd_pcm_hw_params *params);
int msm_btsco_be_hw_params_fixup(struct snd_soc_pcm_runtime *rtd,
				struct snd_pcm_hw_params *params);
int msm_proxy_rx_be_hw_params_fixup(struct snd_soc_pcm_runtime *rtd,
					struct snd_pcm_hw_params *params);
int msm_proxy_tx_be_hw_params_fixup(struct snd_soc_pcm_runtime *rtd,
					struct snd_pcm_hw_params *params);
int msm_audrx_init(struct snd_soc_pcm_runtime *rtd);
int msm_mi2s_snd_hw_params(struct snd_pcm_substream *substream,
			     struct snd_pcm_hw_params *params);
int msm_snd_cpe_hw_params(struct snd_pcm_substream *substream,
				struct snd_pcm_hw_params *params);
int msm_quat_mi2s_snd_startup(struct snd_pcm_substream *substream);
void msm_quat_mi2s_snd_shutdown(struct snd_pcm_substream *substream);
struct snd_soc_card *populate_snd_card_dailinks(struct device *dev);
int msm_slim_4_tx_be_hw_params_fixup(struct snd_soc_pcm_runtime *rtd,
					    struct snd_pcm_hw_params *params);
<<<<<<< HEAD
=======
int msm895x_wsa881x_init(struct snd_soc_dapm_context *dapm);
void msm895x_free_auxdev_mem(struct platform_device *pdev);
#if defined(CONFIG_SPEAKER_EXT_PA_AW8738)
void tasha_spk_ext_pa_cb(int (*spk_ext_pa)(struct snd_soc_codec *codec,
			int enable), struct snd_soc_codec *codec);
#endif
<<<<<<< HEAD
>>>>>>> e6cbd46... Xiaomi kernel changes for HM Note3
=======
>>>>>>> e6cbd46... Xiaomi kernel changes for HM Note3
#endif
