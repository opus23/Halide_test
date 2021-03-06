#ifndef auto_schedule_true_SCHEDULE_H
#define auto_schedule_true_SCHEDULE_H

// MACHINE GENERATED -- DO NOT EDIT
// This schedule was automatically generated by Li2018
// for target=x86-64-linux-avx-avx2-cuda-cuda_capability_75-f16c-fma-sse41  // NOLINT
// with machine_params=32,16777216,40

#include "Halide.h"


inline void apply_schedule_auto_schedule_true(
    ::Halide::Pipeline pipeline,
    ::Halide::Target target
) {
    using ::Halide::Func;
    using ::Halide::MemoryType;
    using ::Halide::RVar;
    using ::Halide::TailStrategy;
    using ::Halide::Var;
    output.compute_root()
        .split(v1,v10,v11,64,ShiftInwards)
        .fuse(v0,v10,v0)
        .fuse(v0,v2,v0)
        .fuse(v0,v3,v0)
        .reorder(v11,v0)
        .reorder_storage(v1,v0,v2,v3)
        .gpu_blocks(v0)
        .gpu_threads(v11)
    ;
    f2.compute_root()
        .split(v1,v12,v13,64,ShiftInwards)
        .fuse(v0,v12,v0)
        .fuse(v0,v2,v0)
        .fuse(v0,v3,v0)
        .reorder(v13,v0)
        .reorder_storage(v1,v0,v2,v3)
        .gpu_blocks(v0)
        .gpu_threads(v13)
    ;
    f2.update(0)
        .split(v1,v14,v15,64,GuardWithIf)
        .fuse(v0,v14,v0)
        .fuse(v0,v2,v0)
        .fuse(v0,v3,v0)
        .reorder(v15,v0)
        .gpu_blocks(v0)
        .gpu_threads(v15)
    ;
    f1.compute_root()
        .split(v1,v16,v17,64,ShiftInwards)
        .fuse(v0,v16,v0)
        .fuse(v0,v2,v0)
        .fuse(v0,v3,v0)
        .reorder(v17,v0)
        .reorder_storage(v1,v0,v2,v3)
        .gpu_blocks(v0)
        .gpu_threads(v17)
    ;
    f1.update(0)
        .split(v1,v18,v19,64,GuardWithIf)
        .fuse(v0,v18,v0)
        .fuse(v0,v2,v0)
        .fuse(v0,v3,v0)
        .reorder(v19,v0)
        .gpu_blocks(v0)
        .gpu_threads(v19)
    ;
    repeat_edge.compute_root()
        .split(_1,v20,v21,64,ShiftInwards)
        .fuse(_0,v20,_0)
        .fuse(_0,_2,_0)
        .fuse(_0,_3,_0)
        .reorder(v21,_0)
        .reorder_storage(_1,_0,_2,_3)
        .gpu_blocks(_0)
        .gpu_threads(v21)
    ;

}

#endif  // auto_schedule_true_SCHEDULE_H
