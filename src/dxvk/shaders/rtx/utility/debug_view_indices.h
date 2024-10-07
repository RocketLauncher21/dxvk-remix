/*
* Copyright (c) 2023-2024, NVIDIA CORPORATION. All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a
* copy of this software and associated documentation files (the "Software"),
* to deal in the Software without restriction, including without limitation
* the rights to use, copy, modify, merge, publish, distribute, sublicense,
* and/or sell copies of the Software, and to permit persons to whom the
* Software is furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
* DEALINGS IN THE SOFTWARE.
*/
#pragma once

// Note: Split out into its own file as these indices are needed on the C++
// side and other debug view helper code will not compile.

#define DEBUG_VIEW_DISABLED 0

#define DEBUG_VIEW_PRIMITIVE_INDEX 1
#define DEBUG_VIEW_BARYCENTRICS 2
#define DEBUG_VIEW_IS_FRONT_HIT 3
#define DEBUG_VIEW_IS_STATIC 4
#define DEBUG_VIEW_IS_OPAQUE 5
#define DEBUG_VIEW_IS_DIRECTION_ALTERED 6
#define DEBUG_VIEW_IS_EMISSIVE_BLEND 7
#define DEBUG_VIEW_VIEW_DIRECTION 8
#define DEBUG_VIEW_CONE_RADIUS 9
#define DEBUG_VIEW_CUSTOM_INDEX 10

#define DEBUG_VIEW_POSITION 11
#define DEBUG_VIEW_TEXCOORDS 12
#define DEBUG_VIEW_VIRTUAL_MOTION_VECTOR 13
#define DEBUG_VIEW_TRIANGLE_NORMAL 14
#define DEBUG_VIEW_INTERPOLATED_NORMAL 15
#define DEBUG_VIEW_SHADING_NORMAL 16
#define DEBUG_VIEW_VIRTUAL_SHADING_NORMAL 17
#define DEBUG_VIEW_VERTEX_COLOR 18
#define DEBUG_VIEW_PORTAL_SPACE 19
#define DEBUG_VIEW_SCREEN_SPACE_MOTION_VECTOR 20

#define DEBUG_VIEW_MATERIAL_TYPE 21
#define DEBUG_VIEW_ALBEDO 22
#define DEBUG_VIEW_BASE_REFLECTIVITY 23
#define DEBUG_VIEW_ROUGHNESS 24
#define DEBUG_VIEW_PERCEPTUAL_ROUGHNESS 25
#define DEBUG_VIEW_ANISOTROPY 26
#define DEBUG_VIEW_ANISOTROPIC_ROUGHNESS 27
#define DEBUG_VIEW_OPACITY 28
#define DEBUG_VIEW_EMISSIVE_RADIANCE 29
#define DEBUG_VIEW_THIN_FILM_THICKNESS 30
#define DEBUG_VIEW_RAW_ALBEDO 31
#define DEBUG_VIEW_OPAQUE_RAW_ALBEDO_RESOLUTION_CHECKERS 32
#define DEBUG_VIEW_OPAQUE_NORMAL_RESOLUTION_CHECKERS 33
#define DEBUG_VIEW_OPAQUE_ROUGHNESS_RESOLUTION_CHECKERS 34

#define DEBUG_VIEW_VIRTUAL_HIT_DISTANCE 35
#define DEBUG_VIEW_TEXCOORD_GENERATION_MODE 36
#define DEBUG_VIEW_EMISSIVE_TRIANGLE_INTENSITY 37
#define DEBUG_VIEW_SURFACE_AREA 38
#define DEBUG_VIEW_EMISSIVE_PARTICLE 39

#define DEBUG_VIEW_BLUE_NOISE 41
#define DEBUG_VIEW_PIXEL_CHECKERBOARD 42
#define DEBUG_VIEW_VOLUME_RADIANCE_DEPTH_LAYERS 43
#define DEBUG_VIEW_SURFACE_VOLUME_RADIANCE 44

#define DEBUG_VIEW_TEXCOORDS_GRADIENT_X 50
#define DEBUG_VIEW_TEXCOORDS_GRADIENT_Y 51

#define DEBUG_VIEW_PRIMARY_RAY_INTERACTIONS 60
#define DEBUG_VIEW_SECONDARY_RAY_INTERACTIONS 61
#define DEBUG_VIEW_PRIMARY_RAY_BOUNCES 62
#define DEBUG_VIEW_SECONDARY_RAY_BOUNCES 63
#define DEBUG_VIEW_PRIMARY_UNORDERED_INTERACTIONS 64
#define DEBUG_VIEW_SECONDARY_UNORDERED_INTERACTIONS 65
#define DEBUG_VIEW_PRIMARY_RAY_AND_UNORDERED_INTERACTIONS 66
#define DEBUG_VIEW_SECONDARY_RAY_AND_UNORDERED_INTERACTIONS 67

#define DEBUG_VIEW_PSR_PRIMARY_SECONDARY_SURFACE_MASK 80
#define DEBUG_VIEW_PSR_SELECTED_INTEGRATION_SURFACE_PDF 81

#define DEBUG_VIEW_PRIMARY_DECAL_ALBEDO 88

#define DEBUG_VIEW_PRIMARY_SPECULAR_ALBEDO 90
#define DEBUG_VIEW_SECONDARY_SPECULAR_ALBEDO 91

#define DEBUG_VIEW_NOISY_PRIMARY_DIRECT_DIFFUSE_RADIANCE 100
#define DEBUG_VIEW_NOISY_PRIMARY_DIRECT_SPECULAR_RADIANCE 101
#define DEBUG_VIEW_DEMODULATED_NOISY_PRIMARY_DIRECT_DIFFUSE_RADIANCE 102
#define DEBUG_VIEW_DEMODULATED_NOISY_PRIMARY_DIRECT_SPECULAR_RADIANCE 103
#define DEBUG_VIEW_NOISY_PRIMARY_DIRECT_DIFFUSE_HIT_T 104
#define DEBUG_VIEW_NOISY_PRIMARY_DIRECT_SPECULAR_HIT_T 105

#define DEBUG_VIEW_NOISY_PRIMARY_INDIRECT_DIFFUSE_RADIANCE 106
#define DEBUG_VIEW_NOISY_PRIMARY_INDIRECT_SPECULAR_RADIANCE 107
#define DEBUG_VIEW_DEMODULATED_NOISY_PRIMARY_INDIRECT_DIFFUSE_RADIANCE 108
#define DEBUG_VIEW_DEMODULATED_NOISY_PRIMARY_INDIRECT_SPECULAR_RADIANCE 109
#define DEBUG_VIEW_NOISY_PRIMARY_INDIRECT_DIFFUSE_HIT_T 110
#define DEBUG_VIEW_NOISY_PRIMARY_INDIRECT_SPECULAR_HIT_T 111

#define DEBUG_VIEW_NRD_NORMALIZED_PRIMARY_DIRECT_DIFFUSE_HIT_T 112
#define DEBUG_VIEW_NRD_NORMALIZED_PRIMARY_DIRECT_SPECULAR_HIT_T 113

#define DEBUG_VIEW_NRD_NORMALIZED_PRIMARY_INDIRECT_DIFFUSE_HIT_T 114
#define DEBUG_VIEW_NRD_NORMALIZED_PRIMARY_INDIRECT_SPECULAR_HIT_T 115

#define DEBUG_VIEW_DENOISED_PRIMARY_DIRECT_DIFFUSE_RADIANCE 120
#define DEBUG_VIEW_DENOISED_PRIMARY_DIRECT_SPECULAR_RADIANCE 121
#define DEBUG_VIEW_DENOISED_PRIMARY_DIRECT_DIFFUSE_HIT_T 122
#define DEBUG_VIEW_DENOISED_PRIMARY_DIRECT_SPECULAR_HIT_T 123

#define DEBUG_VIEW_DENOISED_PRIMARY_INDIRECT_DIFFUSE_RADIANCE 124
#define DEBUG_VIEW_DENOISED_PRIMARY_INDIRECT_SPECULAR_RADIANCE 125
#define DEBUG_VIEW_DENOISED_PRIMARY_INDIRECT_DIFFUSE_HIT_T 126
#define DEBUG_VIEW_DENOISED_PRIMARY_INDIRECT_SPECULAR_HIT_T 127

#define DEBUG_VIEW_PRIMARY_USE_ALTERNATE_DISOCCLUSION_THRESHOLD 128

#define DEBUG_VIEW_RESTIR_GI_INITIAL_SAMPLE 130
#define DEBUG_VIEW_RESTIR_GI_TEMPORAL_REUSE 131
#define DEBUG_VIEW_RESTIR_GI_SPATIAL_REUSE 132
#define DEBUG_VIEW_RESTIR_GI_FINAL_SHADING 133
#define DEBUG_VIEW_RESTIR_GI_VIRTUAL_HIT_T 134
#define DEBUG_VIEW_RESTIR_GI_VISIBILITY_INVALID_SAMPLES 135

#define DEBUG_VIEW_EXPOSURE_HISTOGRAM 139

#define DEBUG_VIEW_NOISY_SECONDARY_DIRECT_DIFFUSE_RADIANCE 140
#define DEBUG_VIEW_NOISY_SECONDARY_DIRECT_SPECULAR_RADIANCE 141
#define DEBUG_VIEW_NOISY_SECONDARY_INDIRECT_DIFFUSE_RADIANCE 142
#define DEBUG_VIEW_NOISY_SECONDARY_INDIRECT_SPECULAR_RADIANCE 143
#define DEBUG_VIEW_NOISY_SECONDARY_COMBINED_DIFFUSE_RADIANCE 144
#define DEBUG_VIEW_NOISY_SECONDARY_COMBINED_SPECULAR_RADIANCE 145
#define DEBUG_VIEW_NOISY_DEMODULATED_SECONDARY_COMBINED_DIFFUSE_RADIANCE 146
#define DEBUG_VIEW_NOISY_DEMODULATED_SECONDARY_COMBINED_SPECULAR_RADIANCE 147
#define DEBUG_VIEW_DENOISED_SECONDARY_COMBINED_DIFFUSE_RADIANCE 148
#define DEBUG_VIEW_DENOISED_SECONDARY_COMBINED_SPECULAR_RADIANCE 149


#define DEBUG_VIEW_NOISY_PRIMARY_DIRECT_RADIANCE 155
#define DEBUG_VIEW_NOISY_PRIMARY_INDIRECT_RADIANCE 156
#define DEBUG_VIEW_NOISY_PRIMARY_RADIANCE 157
#define DEBUG_VIEW_NOISY_SECONDARY_DIRECT_RADIANCE 158
#define DEBUG_VIEW_NOISY_SECONDARY_INDIRECT_RADIANCE 159
#define DEBUG_VIEW_NOISY_SECONDARY_RADIANCE 160
#define DEBUG_VIEW_NOISY_RADIANCE 161

#define DEBUG_VIEW_STOCHASTIC_ALPHA_BLEND_COLOR 163
#define DEBUG_VIEW_STOCHASTIC_ALPHA_BLEND_NORMAL 164
#define DEBUG_VIEW_STOCHASTIC_ALPHA_BLEND_GEOMETRY_HASH 165
#define DEBUG_VIEW_STOCHASTIC_ALPHA_BLEND_BACKGROUND_TRANSPARENCY 166

#define DEBUG_VIEW_RTXDI_GRADIENTS 167
#define DEBUG_VIEW_RTXDI_CONFIDENCE 168

#define DEBUG_VIEW_NEE_CACHE_LIGHT_HISTOGRAM 170
#define DEBUG_VIEW_NEE_CACHE_HISTOGRAM 171
#define DEBUG_VIEW_NEE_CACHE_HASH_MAP 172
#define DEBUG_VIEW_NEE_CACHE_ACCUMULATE_MAP 173
#define DEBUG_VIEW_NEE_CACHE_SAMPLE_RADIANCE 174
#define DEBUG_VIEW_NEE_CACHE_TASK 175
#define DEBUG_VIEW_NEE_CACHE_TRIANGLE_CANDIDATE 176

#define DEBUG_VIEW_IS_EMISSIVE 180
#define DEBUG_VIEW_IS_PARTICLE 181

#define DEBUG_VIEW_PRE_TONEMAP_OUTPUT 200
#define DEBUG_VIEW_POST_TONEMAP_OUTPUT 201
#define DEBUG_VIEW_COMPOSITE_OUTPUT 202

#define DEBUG_VIEW_LOCAL_TONEMAPPER_LUMINANCE_OUTPUT 210
#define DEBUG_VIEW_LOCAL_TONEMAPPER_EXPOSURE_OUTPUT 211
#define DEBUG_VIEW_LOCAL_TONEMAPPER_BLEND_OUTPUT 212
#define DEBUG_VIEW_LOCAL_TONEMAPPER_FINAL_COMBINE_OUTPUT 213

#define DEBUG_VIEW_VIEW_MODEL 220

#define DEBUG_VIEW_INSTRUMENTATION_THREAD_DIVERGENCE 250

#define DEBUG_VIEW_NAN 260
#define DEBUG_SURFACE_LOBE_CONSISTENCY 261

#define DEBUG_VIEW_SCROLLING_LINE 270

#define DEBUG_VIEW_PRIMARY_DEPTH 271

#define DEBUG_VIEW_INTERPOLATED_TANGENT 272
#define DEBUG_VIEW_INTERPOLATED_BITANGENT 273
#define DEBUG_VIEW_GEOMETRY_HASH 274
#define DEBUG_VIEW_TRIANGLE_TANGENT 275
#define DEBUG_VIEW_TRIANGLE_BITANGENT 276

#define DEBUG_VIEW_GEOMETRY_FLAGS_FIRST_SAMPLED_LOBE_IS_SPECULAR 300
#define DEBUG_VIEW_RAY_RECONSTRUCTION_PARTICLE_LAYER 301
#define DEBUG_VIEW_RAY_RECONSTRUCTION_DIFFUSE_ALBEDO 302
#define DEBUG_VIEW_RAY_RECONSTRUCTION_SPECULAR_ALBEDO 303
#define DEBUG_VIEW_RAY_RECONSTRUCTION_HIT_DISTANCE    304
#define DEBUG_VIEW_RAY_RECONSTRUCTION_PARTICLE_LAYER_ALPHA 305
#define DEBUG_VIEW_RAY_RECONSTRUCTION_PRIMARY_DEPTH 306
#define DEBUG_VIEW_RAY_RECONSTRUCTION_PRIMARY_WORLD_SHADING_NORMAL 307
#define DEBUG_VIEW_RAY_RECONSTRUCTION_PRIMARY_SCREEN_SPACE_MOTION_VECTOR 308

#define DEBUG_VIEW_SHARED_BIAS_CURRENT_COLOR_MASK 320

#define DEBUG_VIEW_INTEGRATE_INDIRECT_FIRST_RAY_THROUGHPUT 521
#define DEBUG_VIEW_INTEGRATE_INDIRECT_FIRST_SAMPLED_LOBE_PDF 522
#define DEBUG_VIEW_INTEGRATE_INDIRECT_FIRST_SAMPLED_SOLID_ANGLE_PDF 523

#define DEBUG_VIEW_IS_BAKED_TERRAIN 600
#define DEBUG_VIEW_TERRAIN_MAP  601
#define DEBUG_VIEW_TERRAIN_MAP_OPACITY  602
#define DEBUG_VIEW_CASCADE_LEVEL  603

// Anti-Culling Debugging
#define DEBUG_VIEW_IS_INSIDE_FRUSTUM 700

#define DEBUG_VIEW_IS_THIN_OPAQUE 800

#define DEBUG_VIEW_POM_ITERATIONS 810
#define DEBUG_VIEW_POM_DIRECT_HIT_POS 811
#define DEBUG_VIEW_HEIGHT_MAP 812

#define DEBUG_VIEW_RAYTRACED_RENDER_TARGET_GEOMETRY 820
#define DEBUG_VIEW_RAYTRACED_RENDER_TARGET_DIRECT 821
#define DEBUG_VIEW_RAYTRACED_RENDER_TARGET_INDIRECT 822


enum class CompositeDebugView : uint32_t {
  Disabled = 0,
  FinalRenderWithMaterialProperties = 1,
  OpaqueMaterialTextureResolutionCheckers = 2,

  Count
};
